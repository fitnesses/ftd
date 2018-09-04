#pragma once
#include <cstdint>

struct FTDHeader
{
	int8_t FTDType;
	int8_t FTDExtHeaderLength;
	int16_t FTDCLength;
};

#define FTDTypeNone 0x00
#define FTDTypeFTDC 0x01
#define FTDTypeCompressed 0x02


struct FTDExt
{
	int8_t FTDTag;
	int8_t FTDTagLength;
	char* FTDExtData;
};
#define FTDTagNone 0x00
#define FTDTagDatetime 0x01
#define FTDTagComressMethod 0x02
#define FTDTagSessionState 0x03
#define FTDTagKeepAlive 0x04
#define FTDTagTradedate 0x05
#define FTDTagTarget 0x06
#define FTDTagNoneLength 0
#define FTDTagDatetimeLength  4
#define FTDTagComressMethodLength 1
#define FTDTagSessionStateLength 1
#define FTDTagKeepAliveLength 0
#define FTDTagTradedateLength 4
#define FTDTagTargetLength 2

struct FTDCHeader
{
	uint8_t Version;
	uint32_t TransactionId;
	char Chain;
	uint16_t SequenceSeries;
	uint32_t SequenceNO;
	uint16_t FieldCount;
	uint16_t ContentLength;
};

#define FTDCChainSingle 'S'
#define FTDCChainFirst 'F'
#define FTDCChainMiddle 'C'
#define FTDCChainLast 'L'

/*
�Ի�ģʽ ��������Ӧ����Ϊ0
˽��ģʽ ���е��������Ŷ���ÿ����Ա�ǲ�ͬ��
*/

struct FTDCDataField
{
	int32_t FID;
	uint16_t FIDLength;
	char* DataItem;
};



