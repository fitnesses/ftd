#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "../FTDDataTypes.h"


using namespace FTD;

namespace FTD20 {

	///��������
	typedef FTDCharType        TFTDActionFlag;
	typedef FTDCharType        TFTDBoolFlag;
	typedef FTDStringType<8>    TFTDClientId;
	typedef FTDCharType        TFTDClientType;
	typedef FTDStringType<5>    TFTDConnectionReference;
	typedef FTDCharType        TFTDDataFlowFlag;
	typedef FTDStringType<8>    TFTDDate;
	typedef FTDStringType<20>   TFTDDateTime;
	typedef FTDCharType        TFTDDirection;
	typedef FTDStringType<10>   TFTDErrorCode;
	typedef FTDCharType        TFTDForceExitCode;
	typedef FTDCharType        TFTDHedgeFlag;
	typedef FTDStringType<10>   TFTDInstrumentId;
	typedef FTDCharType        TFTDInstrumentStatus;
	typedef FTDCharType        TFTDInstrumentType;
	typedef FTDCharType        TFTDInstrumentVersion;
	typedef FTDStringType<24>   TFTDLocalId;
	typedef FTDCharType         TFTDRequestByType;
	typedef FTDFloatType<12, 4> TFTDRateUnit;
	typedef FTDStringType<10>   TFTDMarketId;
	typedef FTDCharType        TFTDMarketStatus;
	typedef FTDCharType        TFTDMatchCondition;
	typedef FTDCharType        TFTDMatchFlag;
	typedef FTDCharType        TFTDMatchSession;
	typedef FTDStringType<6>    TFTDMsgRef;
	typedef FTDStringType<80>   TFTDName;
	typedef FTDStringType<3>    TFTDNewsType;
	typedef FTDCharType        TFTDNewsUrgency;
	typedef FTDCharType        TFTDOffsetFlag;
	typedef FTDCharType        TFTDOrderStatus;
	typedef FTDCharType        TFTDOrderType;
	typedef FTDCharType        TTFTDOptionType;
	typedef FTDStringType<8>   TFTDParticipantId;
	typedef FTDCharType        TFTDParticipantType;
	typedef FTDStringType<40>   TFTDPassword;
	typedef FTDFloatType<4, 2>   TFTDPercent;
	typedef FTDFloatType<12, 4>  TFTDPrice;
	typedef FTDCharType         TFTDOptionType;
	typedef FTDStringType<8>    TFTDProtocolVersion;
	typedef FTDCharType        TFTDPubStyle;
	typedef FTDCharType        FTDRequestByType;
	typedef FTDFloatType<12, 4> FTDRateUnit;
	typedef FTDIntType         TFTDSequenceNo;
	typedef FTDWordType        TFTDSequenceSeries;
	typedef FTDStringType<20>   TFTDServerAppName;
	typedef FTDCharType        TFTDStopCode;
	typedef FTDStringType<20>   TFTDSysOrderId;
	typedef FTDStringType<8>    TFTDTime;
	typedef FTDNumberType<3>    TFTDTimeOut;
	typedef FTDStringType<20>   TFTDTimeStamp;
	typedef FTDStringType<20>   TFTDTradeId;
	typedef FTDCharType        TFTDTradeRight;
	typedef FTDCharType        TFTDTradeType;
	typedef FTDStringType<15>   TFTDUserId;
	typedef FTDCharType        TFTDUserStatus;
	typedef FTDCharType        TFTDUserType;
	typedef FTDFloatType<14, 2>  TFTDValue;
	typedef FTDIntType         TFTDVolume;
	typedef FTDCharType        TFTDVolumeType;

	

	typedef   FTDStringType<80>          TPropertyAbstract;
	typedef    TFTDLocalId                TPropertyActionLocalId;
	typedef    TFTDDate                   TPropertyActionDate;
	typedef    TFTDTime                   TPropertyActiveTime;
	typedef    TFTDUserId                 TPropertyActiveUserId;
	typedef    TFTDValue                  TPropertyAddValue;
	typedef    TFTDVolume                 TPropertyAskLot;
	typedef    TFTDPrice                  TPropertyAskPrice;
	typedef    TFTDBoolFlag               TPropertyAutoSuspend;
	typedef    TFTDPrice                  TPropertyAveragePrice;
	typedef    TFTDValue                  TPropertyBalanceValue;
	typedef    TFTDVolume                 TPropertyBidLot;
	typedef    TFTDPrice                  TPropertyBidPrice;
	typedef    TFTDDateTime               TPropertyBroadcastLoginTime;
	typedef    TFTDDateTime               TPropertyBroadcastLogOutTime;
	typedef    FTDIntType                TPropertyBroadcastSequenceNo;
	typedef    FTDWordType               TPropertyBroadcastSequenceSeries;
	typedef    TFTDBoolFlag               TPropertyBroadcastStreamStatus;
	typedef    TFTDValue                  TPropertyBuyHedgeOffsetMargin;
	typedef    TFTDValue                  TPropertyBuyHedgeOffsetProfit;
	typedef    TFTDValue                  TPropertyBuyHedgeOpenFrozMargin;
	typedef    TFTDValue                  TPropertyBuyHedgeOpenUsedMargin;
	typedef    TFTDVolume                 TPropertyBuyHedgePosition;
	typedef    TFTDValue                  TPropertyBuyHedgeTurnOver;
	typedef    TFTDVolume                 TPropertyBuyHedgeVolume;
	typedef    TFTDVolume                 TPropertyBuyOffsHPosition;
	typedef    TFTDVolume                 TPropertyBuyOffsSPosition;
	typedef    TFTDValue                  TPropertyBuySpecOffsetMargin;
	typedef    TFTDValue                  TPropertyBuySpecOffsetProfit;
	typedef    TFTDValue                  TPropertyBuySpecOpenFrozMargin;
	typedef    TFTDValue                  TPropertyBuySpecOpenUsedMargin;
	typedef    TFTDVolume                 TPropertyBuySpecPosition;
	typedef    TFTDValue                  TPropertyBuySpecTurnOver;
	typedef    TFTDVolume                 TPropertyBuySpecVolume;
	typedef    TFTDDate                   TPropertyCancelDate;
	typedef    TFTDBoolFlag               TPropertyCancelFlag;
	typedef    TFTDTime                   TPropertyCancelTime;
	typedef    TFTDDate                   TPropertyClearDate;
	typedef    TFTDPrice                  TPropertyClearPrice;
	typedef    TFTDClientId               TPropertyClientId;
	typedef    TFTDName                   TPropertyClientName;
	typedef    TFTDClientType             TPropertyClientType;
	typedef    TFTDPrice                  TPropertyClosePrice;
	typedef    FTDStringType<20>           TPropertyComeFrom;
	typedef    TFTDConnectionReference       TPropertyConnectionReference;
	typedef    FTDStringType<500>          TPropertyContent;
	typedef    FTDStringType<3>            TPropertyCurrency;
	typedef    TFTDDataFlowFlag           TPropertyDataFlowFlag;
	typedef    TFTDValue                  TPropertyDelValue;
	typedef    TFTDDateTime               TPropertyDialogLoginTime;
	typedef    TFTDDateTime               TPropertyDialogLogoutTime;
	typedef    TFTDBoolFlag               TPropertyDialogStreamStatus;
	typedef    TFTDDirection              TPropertyDirection;
	typedef    TFTDDate                   TPropertyEndDelvDate;
	typedef    TFTDDate                   TPropertyEndTrdDate;
	typedef    TFTDErrorCode              TPropertyErrorCode;
	typedef    FTDStringType<100>          TPropertyErrorText;
	typedef    TFTDDateTime               TPropertyExchangeDateTime;
	typedef    TFTDLocalId                TPropertyExecOrderLocalID;
	typedef    TFTDSysOrderId             TPropertyExecOrderSysID;
	typedef    FTDIntType                TPropertyForcedistime;
	typedef    TFTDForceExitCode          TPropertyForceExitCode;
	typedef    FTDStringType<100>          TPropertyForceExitMsg;
	typedef    TFTDLocalId                TPropertyForceGroupId;
	typedef    FTDStringType<20>           TPropertyFrontId;
	typedef    TFTDBoolFlag               TPropertyFuseFlag;
	typedef    TFTDPrice                  TPropertyFuselimit;
	typedef    FTDIntType                TPropertyFusepersisttime;
	typedef    FTDStringType<6>            TPropertyFusepoint;
	typedef    TFTDBoolFlag               TPropertyFuseRights;
	typedef    TFTDHedgeFlag              TPropertyHedgeFlag;
	typedef    TFTDPrice                  TPropertyHighLimit;
	typedef    TFTDPercent                TPropertyHighLimitRate;
	typedef    TFTDPrice                  TPropertyHighPrice;
	typedef    TFTDValue                  TPropertyInitMargin;
	typedef    TFTDDateTime               TPropertyInsertTime;
	typedef    TFTDStopCode               TPropertyInstrStopCode;
	typedef    TFTDInstrumentId           TPropertyInstrumentId;
	typedef    TFTDName                   TPropertyInstrumentName;
	typedef    TFTDInstrumentStatus       TPropertyInstrumentStatus;
	typedef    TFTDInstrumentType         TPropertyInstrumentType;
	typedef    TFTDInstrumentVersion      TPropertyInstrumentVersion;
	typedef    FTDStringType<20>           TPropertyIpAddr;
	typedef    TFTDBoolFlag               TPropertyIsLogin;
	typedef    TFTDVolume                 TPropertyLastLot;
	typedef    TFTDPrice                  TPropertyLastPrice;
	typedef    TFTDPrice                  TPropertyLifeHigh;
	typedef    TFTDPrice                  TPropertyLifeLow;
	typedef    TFTDPrice                  TPropertyLimitPrice;
	typedef    TFTDVolume                 TPropertyLongOffsFrozHPosition;
	typedef    TFTDVolume                 TPropertyLongOffsFrozSPosition;
	typedef    TFTDVolume                 TPropertyLongOpenFrozHPosition;
	typedef    TFTDVolume                 TPropertyLongOpenFrozSPosition;
	typedef    TFTDPrice                  TPropertyLowLimit;
	typedef    TFTDPercent                TPropertyLowLimitRate;
	typedef    TFTDPrice                  TPropertyLowPrice;
	typedef    TFTDPrice                  TPropertyMargin;
	typedef    TFTDMarketId               TPropertyMarketId;
	typedef    TFTDBoolFlag               TPropertyMarketMatchDataStatus;
	typedef    TFTDName                   TPropertyMarketName;
	typedef    TFTDMarketStatus           TPropertyMarketStatusId;
	typedef    TFTDMatchCondition         TPropertyMatchCondition;
	typedef    TFTDDate                   TPropertyMatchDate;
	typedef    TFTDMatchFlag              TPropertyMatchFlag;
	typedef    TFTDMatchSession           TPropertyMatchSession;
	typedef    TFTDTime                   TPropertyMatchTime;
	typedef    TFTDVolume                 TPropertyMaxLot;
	typedef    TFTDLocalId                TPropertyMaxOrderLocalId;
	typedef    TFTDMsgRef                 TPropertyMessageReference;
	typedef    TFTDVolume                 TPropertyMinimalVolume;
	typedef    TFTDVolume                 TPropertyMinLot;
	typedef    FTDStringType<20>           TPropertyName;
	typedef    TFTDPassword               TPropertyNewPassword;
	typedef    TFTDNewsType               TPropertyNewsType;
	typedef    TFTDNewsUrgency            TPropertyNewsUrgency;
	typedef    TFTDOffsetFlag             TPropertyOffsetFlag;
	typedef    TFTDPassword               TPropertyOldPassword;
	typedef    TFTDVolume                 TPropertyOpenInterest;
	typedef    TFTDPrice                  TPropertyOpenPrice;
	typedef    TFTDOptionType            TPropertyOptionsType;
	typedef    TFTDActionFlag             TPropertyOrderActionCode;
	typedef    TFTDLocalId                TPropertyOrderLocalId;
	typedef    TFTDOrderStatus            TPropertyOrderStatus;
	typedef    TFTDSysOrderId             TPropertyOrderSysId;
	typedef    TFTDOrderType              TPropertyOrderType;
	typedef    TFTDParticipantId          TPropertyParticipantId;
	typedef    FTDStringType<80>           TPropertyAbstract;
	typedef    TFTDName                   TPropertyParticipantName;
	typedef    TFTDParticipantType        TPropertyParticipantType;
	typedef    TFTDTradeRight             TPropertyPartiTrdRight;
	typedef    TFTDPassword               TPropertyPassword;
	typedef    TFTDPrice                  TPropertyPreClose;
	typedef    TFTDVolume                 TPropertyPreOpenInterest;
	typedef    TFTDPrice                  TPropertyPreSettle;
	typedef    TFTDPrice                  TPropertyPrice;
	typedef    TFTDDateTime               TPropertyPrivateLoginTime;
	typedef    TFTDDateTime               TPropertyPrivateLogoutTime;
	typedef    TFTDBoolFlag               TPropertyPrivateStreamStatus;
	typedef    TFTDProtocolVersion        TPropertyProtocolVersion;
	typedef    TFTDPubStyle               TPropertyPubstyle;
	typedef    TFTDValue                  TPropertyPremium;
	typedef    TFTDSysOrderId             TPropertyQuoteSysID;
	typedef    TFTDLocalId                TPropertyQuoteLocalID;
	typedef    TFTDRequestByType          TPropertyRequestBy;
	typedef    TFTDRateUnit               TPropertyRateUnit;
	typedef    TFTDPrice                  TPropertyRatePrice;
	typedef    TFTDValue                  TPropertySellHedgeOffsetMargin;
	typedef    TFTDValue                  TPropertySellHedgeOffsetProfit;
	typedef    TFTDValue                  TPropertySellHedgeOpenFrozMargin;
	typedef    TFTDValue                  TPropertySellHedgeOpenUsedMargin;
	typedef    TFTDVolume                 TPropertySellHedgePosition;
	typedef    TFTDValue                  TPropertySellHedgeTurnOver;
	typedef    TFTDVolume                 TPropertySellHedgeVolume;
	typedef    TFTDVolume                 TPropertySellOffsHPosition;
	typedef    TFTDVolume                 TPropertySellOffsSPosition;
	typedef    TFTDValue                  TPropertySellSpecOffsetMargin;
	typedef    TFTDValue                  TPropertySellSpecOffsetProfit;
	typedef    TFTDValue                  TPropertySellSpecOpenFrozMargin;
	typedef    TFTDValue                  TPropertySellSpecOpenUsedMargin;
	typedef    TFTDVolume                 TPropertySellSpecPosition;
	typedef    TFTDValue                  TPropertySellSpecTurnOver;
	typedef    TFTDVolume                 TPropertySellSpecVolume;
	typedef    TFTDTime                   TPropertySendTime;
	typedef    TFTDSequenceNo             TPropertySequenceNo;
	typedef    TFTDSequenceSeries         TPropertySequenceSeries;
	typedef    TFTDServerAppName          TPropertyServerAppName;
	typedef    TFTDPrice                  TPropertySettlePrice;
	typedef    FTDCharType                TPropertyShortCutKey;
	typedef    TFTDVolume                 TPropertyShortOffsFrozHPosition;
	typedef    TFTDVolume                 TPropertyShortOffsFrozSPosition;
	typedef    TFTDVolume                 TPropertyShortOpenFrozHPosition;
	typedef    TFTDVolume                 TPropertyShortOpenFrozSPosition;
	typedef    TFTDDate                   TPropertyStartDelvDate;
	typedef    TFTDTime                   TPropertyStartTime;
	typedef    TFTDDate                   TPropertyStartTrdDate;
	typedef    TFTDPrice                  TPropertyStopPrice;
	typedef    TFTDTime                   TPropertySuspendTime;
	typedef    TFTDPrice                  TPropertyStrikePrice;
	typedef    TFTDTime                   TPropertyThroughTime;
	typedef    TFTDPrice                  TPropertyTick;
	typedef    TFTDTimeOut                TPropertyTimeOut;
	typedef    FTDNumberType<3>            TPropertyTimeSpan;
	typedef    TFTDTimeStamp              TPropertyTimeStamp;
	typedef    FTDIntType                TPropertyTotalMarketMatchData;
	typedef    TFTDVolume                 TPropertyTotalVolume;
	typedef    TFTDDate                   TPropertyTradeDate;
	typedef    TFTDTradeId                TPropertyTradeId;
	typedef    FTDIntType                TPropertyTradeLot;
	typedef    TFTDPrice                  TPropertyTradePrice;
	typedef    TFTDTradeRight             TPropertyTradeRights;
	typedef    TFTDVolume                 TPropertyTradeTurnover;
	typedef    TFTDTradeType              TPropertyTradeType;
	typedef    FTDIntType                TPropertyTradeVolume;
	typedef    FTDIntType                TPropertyUnit;
	typedef    TFTDTime                   TPropertyUpdateTime;
	typedef    FTDStringType<200>          TPropertyURLLink;
	typedef    TFTDUserId                 TPropertyUserId;
	typedef    TFTDUserStatus             TPropertyUserStatus;
	typedef    TFTDUserType               TPropertyUserType;
	typedef    FTDStringType<30>           TPropertyUnderlyingInstrID;
	typedef    TFTDVolume                 TPropertyUnderlyingMultiple;
	typedef    TFTDDate                   TPropertyValidThrough;
	typedef    TFTDVolume                 TPropertyVolume;
	typedef    FTDIntType                TPropertyVolumeTotal;
	typedef    FTDIntType                TPropertyVolumeTotalOrginal;
	typedef    TFTDVolumeType             TPropertyVolumeType;
	typedef    TFTDVolume                 TPropertyYdBuyHedgePosition;
	typedef    TFTDVolume                 TPropertyYdBuyOffsHPosition;
	typedef    TFTDVolume                 TPropertyYdBuyOffsSPosition;
	typedef    TFTDVolume                 TPropertyYdBuySpecPosition;

	//field storage true type
	typedef char        TTFTDActionFlag;
	typedef char        TTFTDBoolFlag;
	typedef char        TTFTDClientId[8 + 1];
	typedef char        TTFTDClientType;
	typedef char        TTFTDConnectionReference[5 + 1];
	typedef char        TTFTDDataFlowFlag;
	typedef char        TTFTDDate[8 + 1];
	typedef char        TTFTDDateTime[20 + 1];
	typedef char        TTFTDDirection;
	typedef char        TTFTDErrorCode[10 + 1];
	typedef char        TTFTDForceExitCode;
	typedef char        TTFTDHedgeFlag;
	typedef char        TTFTDInstrumentId[10 + 1];
	typedef char        TTFTDInstrumentStatus;
	typedef char        TTFTDInstrumentType;
	typedef char        TTFTDInstrumentVersion;
	typedef char        TTFTDLocalId[24 + 1];
	typedef char        TTFTDRequestByType;
	typedef double      TTFTDRateUnit;
	typedef char        TTFTDMarketId[10 + 1];
	typedef char        TTFTDMarketStatus;
	typedef char        TTFTDMatchCondition;
	typedef char        TTFTDMatchFlag;
	typedef char        TTFTDMatchSession;
	typedef char        TTFTDMsgRef[6 + 1];
	typedef char        TTFTDName[80 + 1];
	typedef char        TTFTDNewsType[3 + 1];
	typedef char        TTFTDNewsUrgency;
	typedef char        TTFTDOffsetFlag;
	typedef char        TTFTDOrderStatus;
	typedef char        TTFTDOrderType;
	typedef char        TTFTDParticipantId[8 + 1];
	typedef char        TTFTDParticipantType;
	typedef char        TTFTDPassword[40 + 1];
	typedef double      TTFTDPercent;
	typedef double      TTFTDPrice;
	typedef char        TTFTDProtocolVersion[8 + 1];
	typedef char        TTFTDPubStyle;
	typedef int         TTFTDSequenceNo;
	typedef int16_t     TTFTDSequenceSeries;
	typedef char        TTFTDServerAppName[20 + 1];
	typedef char        TTFTDStopCode;
	typedef char        TTFTDSysOrderId[20 + 1];
	typedef char        TTFTDTime[8 + 1];
	typedef int         TTFTDTimeOut;
	typedef char        TTFTDTimeStamp[20 + 1];
	typedef char        TTFTDTradeId[20 + 1];
	typedef char        TTFTDTradeRight;
	typedef char        TTFTDTradeType;
	typedef char        TTFTDUserId[15 + 1];
	typedef char        TTFTDUserStatus;
	typedef char        TTFTDUserType;
	typedef double      TTFTDValue;
	typedef int         TTFTDVolume;
	typedef char        TTFTDVolumeType;

	typedef	char TTPropertyAbstract[80 + 1]; //ժҪ / ˵��
	typedef	 TTFTDLocalId TTPropertyActionLocalId; // �����������ر��
	typedef	 TTFTDDate TTPropertyActionDate; //ʵ�ʽ�������
	typedef	 TTFTDTime TTPropertyActiveTime;// ����ʱ��
	typedef	 TTFTDUserId TTPropertyActiveUserId; // ��������Ա����
	typedef	 TTFTDValue TTPropertyAddValue; // �������������ʽ�
	typedef	 TTFTDVolume TTPropertyAskLot; // ��������
	typedef	 TTFTDPrice TTPropertyAskPrice; // ������
	typedef	 TTFTDBoolFlag TTPropertyAutoSuspend; // �Զ������־
	typedef	 TTFTDPrice TTPropertyAveragePrice; // ����
	typedef	 TTFTDValue TTPropertyBalanceValue; // ���ñ�֤�����
	typedef	 TTFTDVolume TTPropertyBidLot; // ��������
	typedef	 TTFTDPrice TTPropertyBidPrice; // ����۸�
	typedef	 TTFTDDateTime TTPropertyBroadcastLoginTime; // ���һ�ι㲥ģʽ��¼ʱ��
	typedef	 TTFTDDateTime TTPropertyBroadcastLogOutTime; // ���һ�ι㲥ģʽ�˳�ʱ��
	typedef	int TTPropertyBroadcastSequenceNo; // �㲥ģʽ�е��������к�
	typedef	int16_t TTPropertyBroadcastSequenceSeries; // �㲥ģʽ��������
	typedef	 TTFTDBoolFlag TTPropertyBroadcastStreamStatus; // �㲥ģʽ����״̬
	typedef	 TTFTDValue TTPropertyBuyHedgeOffsetMargin; // ��ƽ�ַ��ر�֤��
	typedef	 TTFTDValue TTPropertyBuyHedgeOffsetProfit; // ��ƽ��ӯ��
	typedef	 TTFTDValue TTPropertyBuyHedgeOpenFrozMargin; // �򱣿��ֶ��ᱣ֤��
	typedef	 TTFTDValue TTPropertyBuyHedgeOpenUsedMargin; // �򱣿���ʹ�ñ�֤��
	typedef	 TTFTDVolume TTPropertyBuyHedgePosition; // �򿪲���(��)
	typedef	 TTFTDValue TTPropertyBuyHedgeTurnOver; // �򱣳ɽ���
	typedef	 TTFTDVolume TTPropertyBuyHedgeVolume; // ��ɽ���(��)
	typedef	 TTFTDVolume TTPropertyBuyOffsHPosition; // ��ƽ����(��)
	typedef	 TTFTDVolume TTPropertyBuyOffsSPosition; // ��ƽ����(Ͷ)
	typedef	 TTFTDValue TTPropertyBuySpecOffsetMargin; // ��Ͷƽ�ַ��ر�֤��
	typedef	 TTFTDValue TTPropertyBuySpecOffsetProfit; // ��Ͷƽ��ӯ��
	typedef	 TTFTDValue TTPropertyBuySpecOpenFrozMargin; // ��Ͷ���ֶ��ᱣ֤��
	typedef	 TTFTDValue TTPropertyBuySpecOpenUsedMargin; // ��Ͷ����ʹ�ñ�֤��
	typedef	 TTFTDVolume TTPropertyBuySpecPosition; // �򿪲���(Ͷ)
	typedef	 TTFTDValue TTPropertyBuySpecTurnOver; // ��Ͷ�ɽ���
	typedef	 TTFTDVolume TTPropertyBuySpecVolume; // ��ɽ���(Ͷ)
	typedef	 TTFTDDate TTPropertyCancelDate; // ȡ������
	typedef	 TTFTDBoolFlag TTPropertyCancelFlag; // �ɽ��Ƿ�ȡ����
	typedef	 TTFTDTime TTPropertyCancelTime; // ȡ��ʱ��
	typedef	 TTFTDDate TTPropertyClearDate; // ��������
	typedef	 TTFTDPrice TTPropertyClearPrice; // �����
	typedef	 TTFTDClientId TTPropertyClientId; // �ͻ�����
	typedef	 TTFTDName TTPropertyClientName; // �ͻ�����
	typedef	 TTFTDClientType TTPropertyClientType; // �ͻ����
	typedef	 TTFTDPrice TTPropertyClosePrice; // ���̼�
	typedef	char TTPropertyComeFrom[20 + 1]; // ��Ϣ��Դ
	typedef	 TTFTDConnectionReference TTPropertyConnectionReference; // ��·��ʾ
	typedef	char TTPropertyContent[500 + 1]; // ��Ϣ����
	typedef	char TTPropertyCurrency[3 + 1]; // �����õĻ��ң�����ISO 4217 ��׼����
	typedef	 TTFTDDataFlowFlag TTPropertyDataFlowFlag; // ����������
	typedef	 TTFTDValue TTPropertyDelValue; // ������������ʽ�
	typedef	 TTFTDDateTime TTPropertyDialogLoginTime;// ���һ�ζԻ�ģʽ��¼ʱ��
	typedef	 TTFTDDateTime TTPropertyDialogLogoutTime;// ���һ�ζԻ�ģʽ�˳�ʱ��
	typedef	 TTFTDBoolFlag TTPropertyDialogStreamStatus; // �Ի�ģʽ����״̬
	typedef	 TTFTDDirection TTPropertyDirection;// ��������
	typedef	 TTFTDDate TTPropertyEndDelvDate;// ��󽻸���
	typedef	 TTFTDDate TTPropertyEndTrdDate;// �������
	typedef	 TTFTDErrorCode TTPropertyErrorCode; // �������
	typedef	char TTPropertyErrorText[100 + 1]; // ��������
	typedef	 TTFTDDateTime TTPropertyExchangeDateTime; // ������ϵͳʱ��
	typedef	 TTFTDLocalId TTPropertyExecOrderLocalID; // ִ�����汾�ر��
	typedef	 TTFTDSysOrderId TTPropertyExecOrderSysID; // ִ�б��
	typedef	int TTPropertyForcedistime; // ǿƽ�Ĵ�ϼ��
	typedef	 TTFTDForceExitCode TTPropertyForceExitCode; // ǿ���˳���
	typedef	char TTPropertyForceExitMsg[100 + 1]; // ǿ���˳�ԭ��
	typedef	 TTFTDLocalId TTPropertyForceGroupId; // ǿƽ���
	typedef	char TTPropertyFrontId[20 + 1]; // ǰ�û���ʶ
	typedef	 TTFTDBoolFlag TTPropertyFuseFlag; // �۶ϱ��
	typedef	 TTFTDPrice TTPropertyFuselimit; // �۶��޶�
	typedef	int TTPropertyFusepersisttime;// �۶�������ʱ��
	typedef	char TTPropertyFusepoint[6 + 1]; // �ڸ�ʱ���󲻿��۶ϣ�ΪHHmmss ��ʽ
	typedef	 TTFTDBoolFlag TTPropertyFuseRights; // �ɷ��۶�
	typedef	 TTFTDHedgeFlag TTPropertyHedgeFlag; // Ͷ�����
	typedef	 TTFTDPrice TTPropertyHighLimit; // ��ͣ��
	typedef	 TTFTDPercent TTPropertyHighLimitRate; // ��ͣ����
	typedef	 TTFTDPrice TTPropertyHighPrice; // ��߼�
	typedef	 TTFTDValue TTPropertyInitMargin; // ��ʼ��֤��
	typedef	 TTFTDDateTime TTPropertyInsertTime;// ¼��ʱ��
	typedef	 TTFTDStopCode TTPropertyInstrStopCode;// ֹͣ����ԭ��
	typedef	 TTFTDInstrumentId TTPropertyInstrumentId; //��Լ����
	typedef	 TTFTDName TTPropertyInstrumentName; // ��Լ����
	typedef	 TTFTDInstrumentStatus TTPropertyInstrumentStatus; // ��Լ����״̬
	typedef	 TTFTDInstrumentType TTPropertyInstrumentType;// ��Լ����
	typedef	 TTFTDInstrumentVersion TTPropertyInstrumentVersion; // ��Լ�汾��
	typedef	char TTPropertyIpAddr[20 + 1]; // ��¼�ߵ�IP ��ַ
	typedef	 TTFTDBoolFlag TTPropertyIsLogin; // �Ƿ��¼
	typedef	 TTFTDVolume TTPropertyLastLot; // ���һ�ʳɽ�������˫�����
	typedef	 TTFTDPrice TTPropertyLastPrice; // ���¼�
	typedef	 TTFTDPrice TTPropertyLifeHigh; // ��ʷ��߳ɽ��۸�
	typedef	 TTFTDPrice TTPropertyLifeLow; // ��ʷ��ͳɽ��۸�
	typedef	 TTFTDPrice TTPropertyLimitPrice; // �޼�
	typedef	 TTFTDVolume TTPropertyLongOffsFrozHPosition; // ��ͷƽ�ֶ���ֲ���(��)
	typedef	 TTFTDVolume TTPropertyLongOffsFrozSPosition; // ��ͷƽ�ֶ���ֲ���(Ͷ)
	typedef	 TTFTDVolume TTPropertyLongOpenFrozHPosition; // ��ͷ���ֶ���ֲ��֣�����
	typedef	 TTFTDVolume TTPropertyLongOpenFrozSPosition; // ��ͷ���ֶ���ֲ��֣�Ͷ��
	typedef	 TTFTDPrice TTPropertyLowLimit; // ��ͣ��
	typedef	 TTFTDPercent TTPropertyLowLimitRate; // ��ͣ����
	typedef	 TTFTDPrice TTPropertyLowPrice;  // ��ͼ�
	typedef	 TTFTDPrice TTPropertyMargin;  // ��֤��
	typedef	 TTFTDMarketId TTPropertyMarketId;  // �г�����
	typedef	 TTFTDBoolFlag TTPropertyMarketMatchDataStatus;  // �Ƿ��������ͳɽ�����
	typedef	 TTFTDName TTPropertyMarketName;  // �г�����
	typedef	 TTFTDMarketStatus TTPropertyMarketStatusId;  // �г�����״̬����
	typedef	 TTFTDMatchCondition TTPropertyMatchCondition;  // �����ɽ�����
	typedef	 TTFTDDate TTPropertyMatchDate;  // �ɽ�����
	typedef	 TTFTDMatchFlag TTPropertyMatchFlag;  // �ɽ�˫��������
	typedef	 TTFTDMatchSession TTPropertyMatchSession;  // �����ɽ�ʱ��
	typedef	 TTFTDTime TTPropertyMatchTime;  // �ɽ�ʱ��
	typedef	 TTFTDVolume TTPropertyMaxLot;  // �����µ�����
	typedef	 TTFTDLocalId TTPropertyMaxOrderLocalId;  // ��󱨵����ر��
	typedef	 TTFTDMsgRef TTPropertyMessageReference;  // �û��Զ������ݡ��ɴ�ӡASCII �ַ�
	typedef	 TTFTDVolume TTPropertyMinimalVolume;  // ��С�ɽ���
	typedef	 TTFTDVolume TTPropertyMinLot;  // ��С���µ�����
	typedef	char TTPropertyName[20 + 1];  // ����
	typedef	 TTFTDPassword TTPropertyNewPassword;  // �¿���
	typedef	 TTFTDNewsType TTPropertyNewsType;  // ��Ϣ����
	typedef	 TTFTDNewsUrgency TTPropertyNewsUrgency;  // �����̶�
	typedef	 TTFTDOffsetFlag TTPropertyOffsetFlag;  // ��ƽ�ֱ��
	typedef	 TTFTDPassword TTPropertyOldPassword;  // �ɿ���
	typedef	 TTFTDVolume TTPropertyOpenInterest;  // �ֲ���
	typedef	 TTFTDPrice TTPropertyOpenPrice;  // ���̼�
	typedef	 TTFTDOptionType TTPropertyOptionsType;  // ��Ȩ����
	typedef	 TTFTDActionFlag TTPropertyOrderActionCode;  // ��������������
	typedef	 TTFTDLocalId TTPropertyOrderLocalId;  // ί�б��
	typedef	 TTFTDOrderStatus TTPropertyOrderStatus;  // ����״̬
	typedef	 TTFTDSysOrderId TTPropertyOrderSysId;  // ��ͬ���
	typedef	 TTFTDOrderType TTPropertyOrderType;  // ��������
	typedef	 TTFTDParticipantId TTPropertyParticipantId;  // ���׻�Ա����
	typedef	 TTFTDName TTPropertyParticipantName;  // ��Ա����
	typedef	 TTFTDParticipantType TTPropertyParticipantType;  // ��Ա����
	typedef	 TTFTDTradeRight TTPropertyPartiTrdRight;  // ��ԱȨ��
	typedef	 TTFTDPassword TTPropertyPassword;  // ����
	typedef	 TTFTDPrice TTPropertyPreClose;  // ǰ���̼۸�
	typedef	 TTFTDVolume TTPropertyPreOpenInterest;  // ǰ���ֲ�����˫�����
	typedef	 TTFTDPrice TTPropertyPreSettle;  // ǰ����۸�
	typedef	 TTFTDPrice TTPropertyPrice;  // �۸�
	typedef	 TTFTDDateTime TTPropertyPrivateLoginTime;  // ���һ��˽��ģʽ��¼ʱ��
	typedef	 TTFTDDateTime TTPropertyPrivateLogoutTime;  // ���һ��˽��ģʽ�˳�ʱ��
	typedef	 TTFTDBoolFlag TTPropertyPrivateStreamStatus;  // ˽��ģʽ��״̬
	typedef	 TTFTDProtocolVersion TTPropertyProtocolVersion;  // ʹ��) :   TTFTD �汾��
	typedef	 TTFTDPubStyle TTPropertyPubstyle;  // ���۽׶κ�Լ���鷢����ʽ
	typedef	 TTFTDValue TTPropertyPremium;  // Ȩ������֧
	typedef	 TTFTDSysOrderId TTPropertyQuoteSysID;  // ���۱��
	typedef	 TTFTDLocalId TTPropertyQuoteLocalID;  // ����ί�б��
	typedef	 TTFTDRequestByType TTPropertyRequestBy;  // ѯ�۷���
	typedef	 TTFTDRateUnit TTPropertyRateUnit;  // ���ʵ�λ
	typedef	 TTFTDPrice TTPropertyRatePrice;  // ���۸�
	typedef	 TTFTDValue TTPropertySellHedgeOffsetMargin;  // ����ƽ�ַ��ر�֤��
	typedef	 TTFTDValue TTPropertySellHedgeOffsetProfit;  // ����ƽ��ӯ��
	typedef	 TTFTDValue TTPropertySellHedgeOpenFrozMargin;  // �������ֶ��ᱣ֤��
	typedef	 TTFTDValue TTPropertySellHedgeOpenUsedMargin;  // ��������ʹ�ñ�֤��
	typedef	 TTFTDVolume TTPropertySellHedgePosition;  // ��������(��)
	typedef	 TTFTDValue TTPropertySellHedgeTurnOver;  // �����ɽ���
	typedef	 TTFTDVolume TTPropertySellHedgeVolume;  // ���ɽ���(��)
	typedef	 TTFTDVolume TTPropertySellOffsHPosition;  // ��ƽ����(��)
	typedef	 TTFTDVolume TTPropertySellOffsSPosition;  // ��ƽ����(Ͷ)
	typedef	 TTFTDValue TTPropertySellSpecOffsetMargin;  // ��Ͷƽ�ַ��ر�֤��
	typedef	 TTFTDValue TTPropertySellSpecOffsetProfit;  // ��Ͷƽ��ӯ��
	typedef	 TTFTDValue TTPropertySellSpecOpenFrozMargin;  // ��Ͷ���ֶ��ᱣ֤��
	typedef	 TTFTDValue TTPropertySellSpecOpenUsedMargin;  // ��Ͷ����ʹ�ñ�֤��
	typedef	 TTFTDVolume TTPropertySellSpecPosition;  // ��������(Ͷ)
	typedef	 TTFTDValue TTPropertySellSpecTurnOver;  // ��Ͷ�ɽ���
	typedef	 TTFTDVolume TTPropertySellSpecVolume;  // ���ɽ���(Ͷ)
	typedef	 TTFTDTime TTPropertySendTime;  // ����ʱ��
	typedef	 TTFTDSequenceNo TTPropertySequenceNo;  //���к�;  //
	typedef	 TTFTDSequenceSeries TTPropertySequenceSeries;  // ��������
	typedef	 TTFTDServerAppName TTPropertyServerAppName;  // ��ԱӦ��ϵͳ����
	typedef	 TTFTDPrice TTPropertySettlePrice;  // �����
	typedef	char TTPropertyShortCutKey;  // �����ݼ�
	typedef	 TTFTDVolume TTPropertyShortOffsFrozHPosition;  // ��ͷƽ�ֶ���ֲ���(��)
	typedef	 TTFTDVolume TTPropertyShortOffsFrozSPosition;  // ��ͷƽ�ֶ���ֲ���(Ͷ)
	typedef	 TTFTDVolume TTPropertyShortOpenFrozHPosition;  // ��ͷ���ֶ���ֲ��֣�����
	typedef	 TTFTDVolume TTPropertyShortOpenFrozSPosition;  // ��ͷ���ֶ���ֲ��֣�Ͷ��
	typedef	 TTFTDDate TTPropertyStartDelvDate;  // ��ʼ������
	typedef	 TTFTDTime TTPropertyStartTime;  // ��ʼʱ��
	typedef	 TTFTDDate TTPropertyStartTrdDate;  // ��ʼ������
	typedef	 TTFTDPrice TTPropertyStopPrice;  // ֹ��۸�
	typedef	 TTFTDTime TTPropertySuspendTime;  // ����ʱ��
	typedef	 TTFTDPrice TTPropertyStrikePrice;  // ִ�м۸�
	typedef	 TTFTDTime TTPropertyThroughTime;  // ֱ��ʱ��
	typedef	 TTFTDPrice TTPropertyTick;  // ��С��λ
	typedef	 TTFTDTimeOut TTPropertyTimeOut;  // ���ͼ���ź�ʱ����
	typedef	int TTPropertyTimeSpan;  // ʱ����������ʾ������������ʾ����
	typedef	 TTFTDTimeStamp TTPropertyTimeStamp;  // ʱ���
	typedef	int TTPropertyTotalMarketMatchData;  // ���ͳɽ������¼������������
	typedef	 TTFTDVolume TTPropertyTotalVolume;  // �ܳɽ���
	typedef	 TTFTDDate TTPropertyTradeDate;  // ��������
	typedef	 TTFTDTradeId TTPropertyTradeId;  // �ɽ����
	typedef	int TTPropertyTradeLot;  // �ܳɽ�������˫�����
	typedef	 TTFTDPrice TTPropertyTradePrice;  // ���³ɽ��۸�
	typedef	 TTFTDTradeRight TTPropertyTradeRights;  // ����Ȩ��
	typedef	 TTFTDVolume TTPropertyTradeTurnover;  // �ܳɽ���˫�����
	typedef	 TTFTDTradeType TTPropertyTradeType;  // �г���������
	typedef	int TTPropertyTradeVolume;  // ��ɽ���
	typedef	int TTPropertyUnit;  // ÿ�ֳ���
	typedef	 TTFTDTime TTPropertyUpdateTime;  // ����޸�ʱ��
	typedef	char TTPropertyURLLink[200 + 1];  // ����Ϣ��WEB ����
	typedef	 TTFTDUserId TTPropertyUserId;  // ����Ա����
	typedef	 TTFTDUserStatus TTPropertyUserStatus;  // ����Ա״̬
	typedef	 TTFTDUserType TTPropertyUserType;  // ����Ա���
	typedef	char TTPropertyUnderlyingInstrID[30 + 1];  // ������Ʒ����
	typedef	 TTFTDVolume TTPropertyUnderlyingMultiple; //������Ʒ����
	typedef	 TTFTDDate TTPropertyValidThrough;  // ��Чʱ��Լ��
	typedef	 TTFTDVolume TTPropertyVolume;  // ����
	typedef	int TTPropertyVolumeTotal;  // ʣ�����걨����������Ϊ��λ��
	typedef	int TTPropertyVolumeTotalOrginal;  // ԭʼ���걨����������Ϊ��λ��
	typedef	 TTFTDVolumeType TTPropertyVolumeType;  // ��������
	typedef	 TTFTDVolume TTPropertyYdBuyHedgePosition;  // ǰ��ֲ���(��)
	typedef	 TTFTDVolume TTPropertyYdBuyOffsHPosition;  // ��ƽ����(��)
	typedef	 TTFTDVolume TTPropertyYdBuyOffsSPosition;  // ��ƽ����(Ͷ)
	typedef	 TTFTDVolume TTPropertyYdBuySpecPosition;
}
#endif