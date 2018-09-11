/*
���ļ��Զ����ɣ������ֹ��޸�
*/

#ifndef FTD20_REQQRYUSERLOGINFIELD_H
#define FTD20_REQQRYUSERLOGINFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct ReqQryUserLoginField
	{
            TTItemParticipantId participantId;
            TTItemUserId userId;
	};

	class ReqQryUserLoginFieldHelper
	{
	public:
		static void writeBuffer(const ReqQryUserLoginField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemParticipantId::writeBuffer(field.participantId, buffer);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::writeBuffer(field.userId, buffer);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, ReqQryUserLoginField& field, int& readLen)
		{
			int data_length = 0;
            TItemParticipantId::readBuffer(buffer, field.participantId);
            buffer += TItemParticipantId::getMsgLength();
            data_length += TItemParticipantId::getMsgLength();
            TItemUserId::readBuffer(buffer, field.userId);
            buffer += TItemUserId::getMsgLength();
            data_length += TItemUserId::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif