/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Acceptor.h"
#include "Utility.h"
#include "Session.h"
#include "SessionFactory.h"
#include <algorithm>
#include <fstream>

namespace FTD
{
Acceptor::Acceptor( Application& application,
                    PackageStoreFactory& packageStoreFactory,
                    const SessionSetting& setting )
throw( ConfigError )
  : m_threadid( 0 ),
  m_application( application ),
  m_packageStoreFactory(packageStoreFactory),
  m_setting( setting ),
  m_pLogFactory( 0 ),
  m_pLog( 0 ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

Acceptor::Acceptor( Application& application,
					PackageStoreFactory& packageStoreFactory,
                    const SessionSetting& setting,
                    LogFactory& logFactory )
throw( ConfigError )
: m_threadid( 0 ),
  m_application( application ),
  m_packageStoreFactory(packageStoreFactory),
  m_setting(setting),
  m_pLogFactory( &logFactory ),
  m_pLog( logFactory.create() ),
  m_firstPoll( true ),
  m_stop( true )
{
  initialize();
}

void Acceptor::initialize() throw ( ConfigError )
{
  /*
  std::set < SessionID > sessions = m_settings.getSessions();
  std::set < SessionID > ::iterator i;

  if ( !sessions.size() )
  throw ConfigError( "No sessions defined" );

  SessionFactory factory( m_application, m_messageStoreFactory,
  m_pLogFactory );

  for ( i = sessions.begin(); i != sessions.end(); ++i )
  {
  if ( m_settings.get( *i ).getString( CONNECTION_TYPE ) == "acceptor" )
  {
  m_sessionIDs.insert( *i );
  m_sessions[ *i ] = factory.create( *i, m_settings.get( *i ) );
  }
  }

  if ( !m_sessions.size() )
  throw ConfigError( "No sessions defined for acceptor" );
  */
  
}

Acceptor::~Acceptor()
{
  Sessions::iterator i;
  for ( i = m_sessions.begin(); i != m_sessions.end(); ++i )
    delete i->second;

  if( m_pLogFactory && m_pLog )
    m_pLogFactory->destroy( m_pLog );
}


Session* Acceptor::getSession( const SessionID& sessionID ) const
{
  Sessions::const_iterator i = m_sessions.find( sessionID );
  if( i != m_sessions.end() )
    return i->second;
  else
    return 0;
}



void Acceptor::start() throw ( ConfigError, RuntimeError )
{
  m_stop = false;
  onConfigure( m_setting );
  onInitialize( m_setting );


  if( !thread_spawn( &startThread, this, m_threadid ) )
    throw RuntimeError("Unable to spawn thread");
}

void Acceptor::block() throw ( ConfigError, RuntimeError )
{
  m_stop = false;
  onConfigure( m_setting );
  onInitialize( m_setting );

  startThread(this);
}

bool Acceptor::poll( double timeout ) throw ( ConfigError, RuntimeError )
{
  if( m_firstPoll )
  {
    m_stop = false;
    onConfigure( m_setting );
    onInitialize( m_setting );
    m_firstPoll = false;
  }

  return onPoll( timeout );
}

void Acceptor::stop( bool force )
{
  if( isStopped() ) return;


  std::vector<Session*> enabledSessions;

  Sessions sessions = m_sessions;
  Sessions::iterator i = sessions.begin();
  for ( ; i != sessions.end(); ++i )
  {
    Session* pSession = Session::lookupSession(i->first);
    if( pSession && pSession->isEnabled() )
    {
      enabledSessions.push_back( pSession );
      pSession->logout();
      Session::unregisterSession( pSession->getSessionID() );
    }
  }

  if( !force )
  {
    for ( int second = 1; second <= 10 && isLoggedOn(); ++second )
      process_sleep( 1 );
  }

  m_stop = true;
  onStop();
  if( m_threadid )
    thread_join( m_threadid );
  m_threadid = 0;

  std::vector<Session*>::iterator session = enabledSessions.begin();
  for( ; session != enabledSessions.end(); ++session )
    (*session)->logon();
}

bool Acceptor::isLoggedOn()
{
  Sessions sessions = m_sessions;
  Sessions::iterator i = sessions.begin();
  for ( ; i != sessions.end(); ++i )
  {
    if( i->second->isLoggedOn() )
      return true;
  }
  return false;
}


THREAD_PROC Acceptor::startThread( void* p )
{
  Acceptor * pAcceptor = static_cast < Acceptor* > ( p );
  pAcceptor->onStart();
  return 0;
}
}
