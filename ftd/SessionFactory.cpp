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

#include "Utility.h"
#include "SessionFactory.h"
#include "SessionSetting.h"
#include "Session.h"

#include <memory>

namespace FTD
{
SessionFactory::~SessionFactory()
{
}

Session* SessionFactory::create( const SessionID& sessionID,
							     const Dictionary& settings,
                                 const int& socket ) throw( ConfigError )
{
  return new Session(m_application, m_packageStoreFactory,
    sessionID,  socket, m_pLogFactory );
}

void SessionFactory::destroy( Session* pSession )
{
  delete pSession;
}
}