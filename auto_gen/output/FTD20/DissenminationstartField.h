/*
���ļ��Զ����ɣ������ֹ��޸�
*/

#ifndef FTD20_DISSENMINATIONSTARTFIELD_H
#define FTD20_DISSENMINATIONSTARTFIELD_H

#include "../FTDItemType.h"


using namespace FTD;

namespace FTD20 {

	struct DissenminationstartField
	{
            TTItemSequenceSeries sequenceSeries;
            TTItemSequenceNo sequenceNo;
	};

	class DissenminationstartFieldHelper
	{
	public:
		static void writeBuffer(const DissenminationstartField& field, char* buffer, int& writenLen)
		{
			int data_length = 0;
            TItemSequenceSeries::writeBuffer(field.sequenceSeries, buffer);
            buffer += TItemSequenceSeries::getMsgLength();
            data_length += TItemSequenceSeries::getMsgLength();
            TItemSequenceNo::writeBuffer(field.sequenceNo, buffer);
            buffer += TItemSequenceNo::getMsgLength();
            data_length += TItemSequenceNo::getMsgLength();
			writenLen = data_length;
		}

		static void readBuffer(const char* buffer, DissenminationstartField& field, int& readLen)
		{
			int data_length = 0;
            TItemSequenceSeries::readBuffer(buffer, field.sequenceSeries);
            buffer += TItemSequenceSeries::getMsgLength();
            data_length += TItemSequenceSeries::getMsgLength();
            TItemSequenceNo::readBuffer(buffer, field.sequenceNo);
            buffer += TItemSequenceNo::getMsgLength();
            data_length += TItemSequenceNo::getMsgLength();
			readLen = data_length;
		}
	};
}
#endif