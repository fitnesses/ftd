/*
���ļ��Զ����ɣ������ֹ��޸�
*/

#ifndef FTD20_REQQRYMARKETFIELD_H
#define FTD20_REQQRYMARKETFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

struct ReqQryMarketField
{
    TTItemMarketId marketId;
};

class ReqQryMarketFieldHelper
{
public:
	static void writeBuffer(const ReqQryMarketField& field, char* buffer, int& writenLen)
	{
		int data_length = 0;
        TItemMarketId::writeBuffer(field.marketId, buffer);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
		writenLen = data_length;
	}

	static void readBuffer(const char* buffer, ReqQryMarketField& field, int& readLen)
	{
		int data_length = 0;
        TItemMarketId::readBuffer(buffer, field.marketId);
        buffer += TItemMarketId::getMsgLength();
        data_length += TItemMarketId::getMsgLength();
		readLen = data_length;
	}
};

}
#endif