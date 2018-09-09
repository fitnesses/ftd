#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "../FTDDataTypes.h"
#include "../FTDProperties.h"


namespace FTD20 {

	typedef	char TTPropertyAbstract[80 + 1]; //ժҪ / ˵��
	typedef	FTD::TTFTDLocalId TTPropertyActionLocalId; // �����������ر��
	typedef	FTD::TTFTDDate TTPropertyActionDate; //ʵ�ʽ�������
	typedef	FTD::TTFTDTime TTPropertyActiveTime;// ����ʱ��
	typedef	FTD::TTFTDUserId TTPropertyActiveUserId; // ��������Ա����
	typedef	FTD::TTFTDValue TTPropertyAddValue; // �������������ʽ�
	typedef	FTD::TTFTDVolume TTPropertyAskLot; // ��������
	typedef	FTD::TTFTDPrice TTPropertyAskPrice; // ������
	typedef	FTD::TTFTDBoolFlag TTPropertyAutoSuspend; // �Զ������־
	typedef	FTD::TTFTDPrice TTPropertyAveragePrice; // ����
	typedef	FTD::TTFTDValue TTPropertyBalanceValue; // ���ñ�֤�����
	typedef	FTD::TTFTDVolume TTPropertyBidLot; // ��������
	typedef	FTD::TTFTDPrice TTPropertyBidPrice; // ����۸�
	typedef	FTD::TTFTDDateTime TTPropertyBroadcastLoginTime; // ���һ�ι㲥ģʽ��¼ʱ��
	typedef	FTD::TTFTDDateTime TTPropertyBroadcastLogOutTime; // ���һ�ι㲥ģʽ�˳�ʱ��
	typedef	int TTPropertyBroadcastSequenceNo; // �㲥ģʽ�е��������к�
	typedef	int16_t TTPropertyBroadcastSequenceSeries; // �㲥ģʽ��������
	typedef	FTD::TTFTDBoolFlag TTPropertyBroadcastStreamStatus; // �㲥ģʽ����״̬
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOffsetMargin; // ��ƽ�ַ��ر�֤��
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOffsetProfit; // ��ƽ��ӯ��
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOpenFrozMargin; // �򱣿��ֶ��ᱣ֤��
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeOpenUsedMargin; // �򱣿���ʹ�ñ�֤��
	typedef	FTD::TTFTDVolume TTPropertyBuyHedgePosition; // �򿪲���(��)
	typedef	FTD::TTFTDValue TTPropertyBuyHedgeTurnOver; // �򱣳ɽ���
	typedef	FTD::TTFTDVolume TTPropertyBuyHedgeVolume; // ��ɽ���(��)
	typedef	FTD::TTFTDVolume TTPropertyBuyOffsHPosition; // ��ƽ����(��)
	typedef	FTD::TTFTDVolume TTPropertyBuyOffsSPosition; // ��ƽ����(Ͷ)
	typedef	FTD::TTFTDValue TTPropertyBuySpecOffsetMargin; // ��Ͷƽ�ַ��ر�֤��
	typedef	FTD::TTFTDValue TTPropertyBuySpecOffsetProfit; // ��Ͷƽ��ӯ��
	typedef	FTD::TTFTDValue TTPropertyBuySpecOpenFrozMargin; // ��Ͷ���ֶ��ᱣ֤��
	typedef	FTD::TTFTDValue TTPropertyBuySpecOpenUsedMargin; // ��Ͷ����ʹ�ñ�֤��
	typedef	FTD::TTFTDVolume TTPropertyBuySpecPosition; // �򿪲���(Ͷ)
	typedef	FTD::TTFTDValue TTPropertyBuySpecTurnOver; // ��Ͷ�ɽ���
	typedef	FTD::TTFTDVolume TTPropertyBuySpecVolume; // ��ɽ���(Ͷ)
	typedef	FTD::TTFTDDate TTPropertyCancelDate; // ȡ������
	typedef	FTD::TTFTDBoolFlag TTPropertyCancelFlag; // �ɽ��Ƿ�ȡ����
	typedef	FTD::TTFTDTime TTPropertyCancelTime; // ȡ��ʱ��
	typedef	FTD::TTFTDDate TTPropertyClearDate; // ��������
	typedef	FTD::TTFTDPrice TTPropertyClearPrice; // �����
	typedef	FTD::TTFTDClientId TTPropertyClientId; // �ͻ�����
	typedef	FTD::TTFTDName TTPropertyClientName; // �ͻ�����
	typedef	FTD::TTFTDClientType TTPropertyClientType; // �ͻ����
	typedef	FTD::TTFTDPrice TTPropertyClosePrice; // ���̼�
	typedef	char TTPropertyComeFrom[20 + 1]; // ��Ϣ��Դ
	typedef	FTD::TTFTDConnectionReference TTPropertyConnectionReference; // ��·��ʾ
	typedef	char TTPropertyContent[500 + 1]; // ��Ϣ����
	typedef	char TTPropertyCurrency[3 + 1]; // �����õĻ��ң�����ISO 4217 ��׼����
	typedef	FTD::TTFTDDataFlowFlag TTPropertyDataFlowFlag; // ����������
	typedef	FTD::TTFTDValue TTPropertyDelValue; // ������������ʽ�
	typedef	FTD::TTFTDDateTime TTPropertyDialogLoginTime;// ���һ�ζԻ�ģʽ��¼ʱ��
	typedef	FTD::TTFTDDateTime TTPropertyDialogLogoutTime;// ���һ�ζԻ�ģʽ�˳�ʱ��
	typedef	FTD::TTFTDBoolFlag TTPropertyDialogStreamStatus; // �Ի�ģʽ����״̬
	typedef	FTD::TTFTDDirection TTPropertyDirection;// ��������
	typedef	FTD::TTFTDDate TTPropertyEndDelvDate;// ��󽻸���
	typedef	FTD::TTFTDDate TTPropertyEndTrdDate;// �������
	typedef	FTD::TTFTDErrorCode TTPropertyErrorCode; // �������
	typedef	char TTPropertyErrorText[100 + 1]; // ��������
	typedef	FTD::TTFTDDateTime TTPropertyExchangeDateTime; // ������ϵͳʱ��
	typedef	FTD::TTFTDLocalId TTPropertyExecOrderLocalID; // ִ�����汾�ر��
	typedef	FTD::TTFTDSysOrderId TTPropertyExecOrderSysID; // ִ�б��
	typedef	int TTPropertyForcedistime; // ǿƽ�Ĵ�ϼ��
	typedef	FTD::TTFTDForceExitCode TTPropertyForceExitCode; // ǿ���˳���
	typedef	char TTPropertyForceExitMsg[100 + 1]; // ǿ���˳�ԭ��
	typedef	FTD::TTFTDLocalId TTPropertyForceGroupId; // ǿƽ���
	typedef	char TTPropertyFrontId[20 + 1]; // ǰ�û���ʶ
	typedef	FTD::TTFTDBoolFlag TTPropertyFuseFlag; // �۶ϱ��
	typedef	FTD::TTFTDPrice TTPropertyFuselimit; // �۶��޶�
	typedef	int TTPropertyFusepersisttime;// �۶�������ʱ��
	typedef	char TTPropertyFusepoint[6 + 1]; // �ڸ�ʱ���󲻿��۶ϣ�ΪHHmmss ��ʽ
	typedef	FTD::TTFTDBoolFlag TTPropertyFuseRights; // �ɷ��۶�
	typedef	FTD::TTFTDHedgeFlag TTPropertyHedgeFlag; // Ͷ�����
	typedef	FTD::TTFTDPrice TTPropertyHighLimit; // ��ͣ��
	typedef	FTD::TTFTDPercent TTPropertyHighLimitRate; // ��ͣ����
	typedef	FTD::TTFTDPrice TTPropertyHighPrice; // ��߼�
	typedef	FTD::TTFTDValue TTPropertyInitMargin; // ��ʼ��֤��
	typedef	FTD::TTFTDDateTime TTPropertyInsertTime;// ¼��ʱ��
	typedef	FTD::TTFTDStopCode TTPropertyInstrStopCode;// ֹͣ����ԭ��
	typedef	FTD::TTFTDInstrumentId TTPropertyInstrumentId; //��Լ����
	typedef	FTD::TTFTDName TTPropertyInstrumentName; // ��Լ����
	typedef	FTD::TTFTDInstrumentStatus TTPropertyInstrumentStatus; // ��Լ����״̬
	typedef	FTD::TTFTDInstrumentType TTPropertyInstrumentType;// ��Լ����
	typedef	FTD::TTFTDInstrumentVersion TTPropertyInstrumentVersion; // ��Լ�汾��
	typedef	char TTPropertyIpAddr[20 + 1]; // ��¼�ߵ�IP ��ַ
	typedef	FTD::TTFTDBoolFlag TTPropertyIsLogin; // �Ƿ��¼
	typedef	FTD::TTFTDVolume TTPropertyLastLot; // ���һ�ʳɽ�������˫�����
	typedef	FTD::TTFTDPrice TTPropertyLastPrice; // ���¼�
	typedef	FTD::TTFTDPrice TTPropertyLifeHigh; // ��ʷ��߳ɽ��۸�
	typedef	FTD::TTFTDPrice TTPropertyLifeLow; // ��ʷ��ͳɽ��۸�
	typedef	FTD::TTFTDPrice TTPropertyLimitPrice; // �޼�
	typedef	FTD::TTFTDVolume TTPropertyLongOffsFrozHPosition; // ��ͷƽ�ֶ���ֲ���(��)
	typedef	FTD::TTFTDVolume TTPropertyLongOffsFrozSPosition; // ��ͷƽ�ֶ���ֲ���(Ͷ)
	typedef	FTD::TTFTDVolume TTPropertyLongOpenFrozHPosition; // ��ͷ���ֶ���ֲ��֣�����
	typedef	FTD::TTFTDVolume TTPropertyLongOpenFrozSPosition; // ��ͷ���ֶ���ֲ��֣�Ͷ��
	typedef	FTD::TTFTDPrice TTPropertyLowLimit; // ��ͣ��
	typedef	FTD::TTFTDPercent TTPropertyLowLimitRate; // ��ͣ����
	typedef	FTD::TTFTDPrice TTPropertyLowPrice;  // ��ͼ�
	typedef	FTD::TTFTDPrice TTPropertyMargin;  // ��֤��
	typedef	FTD::TTFTDMarketId TTPropertyMarketId;  // �г�����
	typedef	FTD::TTFTDBoolFlag TTPropertyMarketMatchDataStatus;  // �Ƿ��������ͳɽ�����
	typedef	FTD::TTFTDName TTPropertyMarketName;  // �г�����
	typedef	FTD::TTFTDMarketStatus TTPropertyMarketStatusId;  // �г�����״̬����
	typedef	FTD::TTFTDMatchCondition TTPropertyMatchCondition;  // �����ɽ�����
	typedef	FTD::TTFTDDate TTPropertyMatchDate;  // �ɽ�����
	typedef	FTD::TTFTDMatchFlag TTPropertyMatchFlag;  // �ɽ�˫��������
	typedef	FTD::TTFTDMatchSession TTPropertyMatchSession;  // �����ɽ�ʱ��
	typedef	FTD::TTFTDTime TTPropertyMatchTime;  // �ɽ�ʱ��
	typedef	FTD::TTFTDVolume TTPropertyMaxLot;  // �����µ�����
	typedef	FTD::TTFTDLocalId TTPropertyMaxOrderLocalId;  // ��󱨵����ر��
	typedef	FTD::TTFTDMsgRef TTPropertyMessageReference;  // �û��Զ������ݡ��ɴ�ӡASCII �ַ�
	typedef	FTD::TTFTDVolume TTPropertyMinimalVolume;  // ��С�ɽ���
	typedef	FTD::TTFTDVolume TTPropertyMinLot;  // ��С���µ�����
	typedef	char TTPropertyName[20 + 1];  // ����
	typedef	FTD::TTFTDPassword TTPropertyNewPassword;  // �¿���
	typedef	FTD::TTFTDNewsType TTPropertyNewsType;  // ��Ϣ����
	typedef	FTD::TTFTDNewsUrgency TTPropertyNewsUrgency;  // �����̶�
	typedef	FTD::TTFTDOffsetFlag TTPropertyOffsetFlag;  // ��ƽ�ֱ��
	typedef	FTD::TTFTDPassword TTPropertyOldPassword;  // �ɿ���
	typedef	FTD::TTFTDVolume TTPropertyOpenInterest;  // �ֲ���
	typedef	FTD::TTFTDPrice TTPropertyOpenPrice;  // ���̼�
	typedef	FTD::TTFTDOptionType TTPropertyOptionsType;  // ��Ȩ����
	typedef	FTD::TTFTDActionFlag TTPropertyOrderActionCode;  // ��������������
	typedef	FTD::TTFTDLocalId TTPropertyOrderLocalId;  // ί�б��
	typedef	FTD::TTFTDOrderStatus TTPropertyOrderStatus;  // ����״̬
	typedef	FTD::TTFTDSysOrderId TTPropertyOrderSysId;  // ��ͬ���
	typedef	FTD::TTFTDOrderType TTPropertyOrderType;  // ��������
	typedef	FTD::TTFTDParticipantId TTPropertyParticipantId;  // ���׻�Ա����
	typedef	FTD::TTFTDName TTPropertyParticipantName;  // ��Ա����
	typedef	FTD::TTFTDParticipantType TTPropertyParticipantType;  // ��Ա����
	typedef	FTD::TTFTDTradeRight TTPropertyPartiTrdRight;  // ��ԱȨ��
	typedef	FTD::TTFTDPassword TTPropertyPassword;  // ����
	typedef	FTD::TTFTDPrice TTPropertyPreClose;  // ǰ���̼۸�
	typedef	FTD::TTFTDVolume TTPropertyPreOpenInterest;  // ǰ���ֲ�����˫�����
	typedef	FTD::TTFTDPrice TTPropertyPreSettle;  // ǰ����۸�
	typedef	FTD::TTFTDPrice TTPropertyPrice;  // �۸�
	typedef	FTD::TTFTDDateTime TTPropertyPrivateLoginTime;  // ���һ��˽��ģʽ��¼ʱ��
	typedef	FTD::TTFTDDateTime TTPropertyPrivateLogoutTime;  // ���һ��˽��ģʽ�˳�ʱ��
	typedef	FTD::TTFTDBoolFlag TTPropertyPrivateStreamStatus;  // ˽��ģʽ��״̬
	typedef	FTD::TTFTDProtocolVersion TTPropertyProtocolVersion;  // ʹ��) :  FTD::TTFTD �汾��
	typedef	FTD::TTFTDPubStyle TTPropertyPubstyle;  // ���۽׶κ�Լ���鷢����ʽ
	typedef	FTD::TTFTDValue TTPropertyPremium;  // Ȩ������֧
	typedef	FTD::TTFTDSysOrderId TTPropertyQuoteSysID;  // ���۱��
	typedef	FTD::TTFTDLocalId TTPropertyQuoteLocalID;  // ����ί�б��
	typedef	FTD::TTFTDRequestByType TTPropertyRequestBy;  // ѯ�۷���
	typedef	FTD::TTFTDRateUnit TTPropertyRateUnit;  // ���ʵ�λ
	typedef	FTD::TTFTDPrice TTPropertyRatePrice;  // ���۸�
	typedef	FTD::TTFTDValue TTPropertySellHedgeOffsetMargin;  // ����ƽ�ַ��ر�֤��
	typedef	FTD::TTFTDValue TTPropertySellHedgeOffsetProfit;  // ����ƽ��ӯ��
	typedef	FTD::TTFTDValue TTPropertySellHedgeOpenFrozMargin;  // �������ֶ��ᱣ֤��
	typedef	FTD::TTFTDValue TTPropertySellHedgeOpenUsedMargin;  // ��������ʹ�ñ�֤��
	typedef	FTD::TTFTDVolume TTPropertySellHedgePosition;  // ��������(��)
	typedef	FTD::TTFTDValue TTPropertySellHedgeTurnOver;  // �����ɽ���
	typedef	FTD::TTFTDVolume TTPropertySellHedgeVolume;  // ���ɽ���(��)
	typedef	FTD::TTFTDVolume TTPropertySellOffsHPosition;  // ��ƽ����(��)
	typedef	FTD::TTFTDVolume TTPropertySellOffsSPosition;  // ��ƽ����(Ͷ)
	typedef	FTD::TTFTDValue TTPropertySellSpecOffsetMargin;  // ��Ͷƽ�ַ��ر�֤��
	typedef	FTD::TTFTDValue TTPropertySellSpecOffsetProfit;  // ��Ͷƽ��ӯ��
	typedef	FTD::TTFTDValue TTPropertySellSpecOpenFrozMargin;  // ��Ͷ���ֶ��ᱣ֤��
	typedef	FTD::TTFTDValue TTPropertySellSpecOpenUsedMargin;  // ��Ͷ����ʹ�ñ�֤��
	typedef	FTD::TTFTDVolume TTPropertySellSpecPosition;  // ��������(Ͷ)
	typedef	FTD::TTFTDValue TTPropertySellSpecTurnOver;  // ��Ͷ�ɽ���
	typedef	FTD::TTFTDVolume TTPropertySellSpecVolume;  // ���ɽ���(Ͷ)
	typedef	FTD::TTFTDTime TTPropertySendTime;  // ����ʱ��
	typedef	FTD::TTFTDSequenceNo TTPropertySequenceNo;  //���к�;  //
	typedef	FTD::TTFTDSequenceSeries TTPropertySequenceSeries;  // ��������
	typedef	FTD::TTFTDServerAppName TTPropertyServerAppName;  // ��ԱӦ��ϵͳ����
	typedef	FTD::TTFTDPrice TTPropertySettlePrice;  // �����
	typedef	char TTPropertyShortCutKey;  // �����ݼ�
	typedef	FTD::TTFTDVolume TTPropertyShortOffsFrozHPosition;  // ��ͷƽ�ֶ���ֲ���(��)
	typedef	FTD::TTFTDVolume TTPropertyShortOffsFrozSPosition;  // ��ͷƽ�ֶ���ֲ���(Ͷ)
	typedef	FTD::TTFTDVolume TTPropertyShortOpenFrozHPosition;  // ��ͷ���ֶ���ֲ��֣�����
	typedef	FTD::TTFTDVolume TTPropertyShortOpenFrozSPosition;  // ��ͷ���ֶ���ֲ��֣�Ͷ��
	typedef	FTD::TTFTDDate TTPropertyStartDelvDate;  // ��ʼ������
	typedef	FTD::TTFTDTime TTPropertyStartTime;  // ��ʼʱ��
	typedef	FTD::TTFTDDate TTPropertyStartTrdDate;  // ��ʼ������
	typedef	FTD::TTFTDPrice TTPropertyStopPrice;  // ֹ��۸�
	typedef	FTD::TTFTDTime TTPropertySuspendTime;  // ����ʱ��
	typedef	FTD::TTFTDPrice TTPropertyStrikePrice;  // ִ�м۸�
	typedef	FTD::TTFTDTime TTPropertyThroughTime;  // ֱ��ʱ��
	typedef	FTD::TTFTDPrice TTPropertyTick;  // ��С��λ
	typedef	FTD::TTFTDTimeOut TTPropertyTimeOut;  // ���ͼ���ź�ʱ����
	typedef	int TTPropertyTimeSpan;  // ʱ����������ʾ������������ʾ����
	typedef	FTD::TTFTDTimeStamp TTPropertyTimeStamp;  // ʱ���
	typedef	int TTPropertyTotalMarketMatchData;  // ���ͳɽ������¼������������
	typedef	FTD::TTFTDVolume TTPropertyTotalVolume;  // �ܳɽ���
	typedef	FTD::TTFTDDate TTPropertyTradeDate;  // ��������
	typedef	FTD::TTFTDTradeId TTPropertyTradeId;  // �ɽ����
	typedef	int TTPropertyTradeLot;  // �ܳɽ�������˫�����
	typedef	FTD::TTFTDPrice TTPropertyTradePrice;  // ���³ɽ��۸�
	typedef	FTD::TTFTDTradeRight TTPropertyTradeRights;  // ����Ȩ��
	typedef	FTD::TTFTDVolume TTPropertyTradeTurnover;  // �ܳɽ���˫�����
	typedef	FTD::TTFTDTradeType TTPropertyTradeType;  // �г���������
	typedef	int TTPropertyTradeVolume;  // ��ɽ���
	typedef	int TTPropertyUnit;  // ÿ�ֳ���
	typedef	FTD::TTFTDTime TTPropertyUpdateTime;  // ����޸�ʱ��
	typedef	char TTPropertyURLLink[200 + 1];  // ����Ϣ��WEB ����
	typedef	FTD::TTFTDUserId TTPropertyUserId;  // ����Ա����
	typedef	FTD::TTFTDUserStatus TTPropertyUserStatus;  // ����Ա״̬
	typedef	FTD::TTFTDUserType TTPropertyUserType;  // ����Ա���
	typedef	char TTPropertyUnderlyingInstrID[30 + 1];  // ������Ʒ����
	typedef	FTD::TTFTDVolume TTPropertyUnderlyingMultiple; //������Ʒ����
	typedef	FTD::TTFTDDate TTPropertyValidThrough;  // ��Чʱ��Լ��
	typedef	FTD::TTFTDVolume TTPropertyVolume;  // ����
	typedef	int TTPropertyVolumeTotal;  // ʣ�����걨����������Ϊ��λ��
	typedef	int TTPropertyVolumeTotalOrginal;  // ԭʼ���걨����������Ϊ��λ��
	typedef	FTD::TTFTDVolumeType TTPropertyVolumeType;  // ��������
	typedef	FTD::TTFTDVolume TTPropertyYdBuyHedgePosition;  // ǰ��ֲ���(��)
	typedef	FTD::TTFTDVolume TTPropertyYdBuyOffsHPosition;  // ��ƽ����(��)
	typedef	FTD::TTFTDVolume TTPropertyYdBuyOffsSPosition;  // ��ƽ����(Ͷ)
	typedef	FTD::TTFTDVolume TTPropertyYdBuySpecPosition;
	///property : data_type
	static int getPropertyTypeID(int property_type_id)
	{
		switch (property_type_id)
		{
		case(FTD::PROPERTY_ID_Abstract): return FTD::TYPE_ID_StringType80; //ժҪ / ˵��
		case(FTD::PROPERTY_ID_ActionLocalId): return FTD::TYPE_ID_LocalId; // �����������ر��
		case(FTD::PROPERTY_ID_ActionDate): return FTD::TYPE_ID_Date; //ʵ�ʽ�������
		case(FTD::PROPERTY_ID_ActiveTime): return FTD::TYPE_ID_Time;// ����ʱ��
		case(FTD::PROPERTY_ID_ActiveUserId): return FTD::TYPE_ID_UserId; // ��������Ա����
		case(FTD::PROPERTY_ID_AddValue): return FTD::TYPE_ID_Value; // �������������ʽ�
		case(FTD::PROPERTY_ID_AskLot): return FTD::TYPE_ID_Volume; // ��������
		case(FTD::PROPERTY_ID_AskPrice): return FTD::TYPE_ID_Price; // ������
		case(FTD::PROPERTY_ID_AutoSuspend): return FTD::TYPE_ID_BoolFlag; // �Զ������־
		case(FTD::PROPERTY_ID_AveragePrice): return FTD::TYPE_ID_Price; // ����
		case(FTD::PROPERTY_ID_BalanceValue): return FTD::TYPE_ID_Value; // ���ñ�֤�����
		case(FTD::PROPERTY_ID_BidLot): return FTD::TYPE_ID_Volume; // ��������
		case(FTD::PROPERTY_ID_BidPrice): return FTD::TYPE_ID_Price; // ����۸�
		case(FTD::PROPERTY_ID_BroadcastLoginTime): return FTD::TYPE_ID_DateTime; // ���һ�ι㲥ģʽ��¼ʱ��
		case(FTD::PROPERTY_ID_BroadcastLogOutTime): return FTD::TYPE_ID_DateTime; // ���һ�ι㲥ģʽ�˳�ʱ��
		case(FTD::PROPERTY_ID_BroadcastSequenceNo): return FTD::TYPE_ID_IntType; // �㲥ģʽ�е��������к�
		case(FTD::PROPERTY_ID_BroadcastSequenceSeries): return FTD::TYPE_ID_WordType; // �㲥ģʽ��������
		case(FTD::PROPERTY_ID_BroadcastStreamStatus): return FTD::TYPE_ID_BoolFlag; // �㲥ģʽ����״̬
		case(FTD::PROPERTY_ID_BuyHedgeOffsetMargin): return FTD::TYPE_ID_Value; // ��ƽ�ַ��ر�֤��
		case(FTD::PROPERTY_ID_BuyHedgeOffsetProfit): return FTD::TYPE_ID_Value; // ��ƽ��ӯ��
		case(FTD::PROPERTY_ID_BuyHedgeOpenFrozMargin): return FTD::TYPE_ID_Value; // �򱣿��ֶ��ᱣ֤��
		case(FTD::PROPERTY_ID_BuyHedgeOpenUsedMargin): return FTD::TYPE_ID_Value; // �򱣿���ʹ�ñ�֤��
		case(FTD::PROPERTY_ID_BuyHedgePosition): return FTD::TYPE_ID_Volume; // �򿪲���(��)
		case(FTD::PROPERTY_ID_BuyHedgeTurnOver): return FTD::TYPE_ID_Value; // �򱣳ɽ���
		case(FTD::PROPERTY_ID_BuyHedgeVolume): return FTD::TYPE_ID_Volume; // ��ɽ���(��)
		case(FTD::PROPERTY_ID_BuyOffsHPosition): return FTD::TYPE_ID_Volume; // ��ƽ����(��)
		case(FTD::PROPERTY_ID_BuyOffsSPosition): return FTD::TYPE_ID_Volume; // ��ƽ����(Ͷ)
		case(FTD::PROPERTY_ID_BuySpecOffsetMargin): return FTD::TYPE_ID_Value; // ��Ͷƽ�ַ��ر�֤��
		case(FTD::PROPERTY_ID_BuySpecOffsetProfit): return FTD::TYPE_ID_Value; // ��Ͷƽ��ӯ��
		case(FTD::PROPERTY_ID_BuySpecOpenFrozMargin): return FTD::TYPE_ID_Value; // ��Ͷ���ֶ��ᱣ֤��
		case(FTD::PROPERTY_ID_BuySpecOpenUsedMargin): return FTD::TYPE_ID_Value; // ��Ͷ����ʹ�ñ�֤��
		case(FTD::PROPERTY_ID_BuySpecPosition): return FTD::TYPE_ID_Volume; // �򿪲���(Ͷ)
		case(FTD::PROPERTY_ID_BuySpecTurnOver): return FTD::TYPE_ID_Value; // ��Ͷ�ɽ���
		case(FTD::PROPERTY_ID_BuySpecVolume): return FTD::TYPE_ID_Volume; // ��ɽ���(Ͷ)
		case(FTD::PROPERTY_ID_CancelDate): return FTD::TYPE_ID_Date; // ȡ������
		case(FTD::PROPERTY_ID_CancelFlag): return FTD::TYPE_ID_BoolFlag; // �ɽ��Ƿ�ȡ����
		case(FTD::PROPERTY_ID_CancelTime): return FTD::TYPE_ID_Time; // ȡ��ʱ��
		case(FTD::PROPERTY_ID_ClearDate): return FTD::TYPE_ID_Date; // ��������
		case(FTD::PROPERTY_ID_ClearPrice): return FTD::TYPE_ID_Price; // �����
		case(FTD::PROPERTY_ID_ClientId): return FTD::TYPE_ID_ClientId; // �ͻ�����
		case(FTD::PROPERTY_ID_ClientName): return FTD::TYPE_ID_Name; // �ͻ�����
		case(FTD::PROPERTY_ID_ClientType): return FTD::TYPE_ID_ClientType; // �ͻ����
		case(FTD::PROPERTY_ID_ClosePrice): return FTD::TYPE_ID_Price; // ���̼�
		case(FTD::PROPERTY_ID_ComeFrom): return FTD::TYPE_ID_StringType20; // ��Ϣ��Դ
		case(FTD::PROPERTY_ID_ConnectionReference): return FTD::TYPE_ID_ConnectionReference; // ��·��ʾ
		case(FTD::PROPERTY_ID_Content): return FTD::TYPE_ID_StringType500; // ��Ϣ����
		case(FTD::PROPERTY_ID_Currency): return FTD::TYPE_ID_StringType3; // �����õĻ��ң�����ISO 4217 ��׼����
		case(FTD::PROPERTY_ID_DataFlowFlag): return FTD::TYPE_ID_DataFlowFlag; // ����������
		case(FTD::PROPERTY_ID_DelValue): return FTD::TYPE_ID_Value; // ������������ʽ�
		case(FTD::PROPERTY_ID_DialogLoginTime): return FTD::TYPE_ID_DateTime;// ���һ�ζԻ�ģʽ��¼ʱ��
		case(FTD::PROPERTY_ID_DialogLogoutTime): return FTD::TYPE_ID_DateTime;// ���һ�ζԻ�ģʽ�˳�ʱ��
		case(FTD::PROPERTY_ID_DialogStreamStatus): return FTD::TYPE_ID_BoolFlag; // �Ի�ģʽ����״̬
		case(FTD::PROPERTY_ID_Direction): return FTD::TYPE_ID_Direction;// ��������
		case(FTD::PROPERTY_ID_EndDelvDate): return FTD::TYPE_ID_Date;// ��󽻸���
		case(FTD::PROPERTY_ID_EndTrdDate): return FTD::TYPE_ID_Date;// �������
		case(FTD::PROPERTY_ID_ErrorCode): return FTD::TYPE_ID_ErrorCode; // �������
		case(FTD::PROPERTY_ID_ErrorText): return FTD::TYPE_ID_StringType100; // ��������
		case(FTD::PROPERTY_ID_ExchangeDateTime): return FTD::TYPE_ID_DateTime; // ������ϵͳʱ��
		case(FTD::PROPERTY_ID_ExecOrderLocalID): return FTD::TYPE_ID_LocalId; // ִ�����汾�ر��
		case(FTD::PROPERTY_ID_ExecOrderSysID): return FTD::TYPE_ID_SysOrderId; // ִ�б��
		case(FTD::PROPERTY_ID_Forcedistime): return FTD::TYPE_ID_IntType; // ǿƽ�Ĵ�ϼ��
		case(FTD::PROPERTY_ID_ForceExitCode): return FTD::TYPE_ID_ForceExitCode; // ǿ���˳���
		case(FTD::PROPERTY_ID_ForceExitMsg): return FTD::TYPE_ID_StringType100; // ǿ���˳�ԭ��
		case(FTD::PROPERTY_ID_ForceGroupId): return FTD::TYPE_ID_LocalId; // ǿƽ���
		case(FTD::PROPERTY_ID_FrontId): return FTD::TYPE_ID_StringType20; // ǰ�û���ʶ
		case(FTD::PROPERTY_ID_FuseFlag): return FTD::TYPE_ID_BoolFlag; // �۶ϱ��
		case(FTD::PROPERTY_ID_Fuselimit): return FTD::TYPE_ID_Price; // �۶��޶�
		case(FTD::PROPERTY_ID_Fusepersisttime): return FTD::TYPE_ID_IntType;// �۶�������ʱ��
		case(FTD::PROPERTY_ID_Fusepoint): return FTD::TYPE_ID_StringType6; // �ڸ�ʱ���󲻿��۶ϣ�ΪHHmmss ��ʽ
		case(FTD::PROPERTY_ID_FuseRights): return FTD::TYPE_ID_BoolFlag; // �ɷ��۶�
		case(FTD::PROPERTY_ID_HedgeFlag): return FTD::TYPE_ID_HedgeFlag; // Ͷ�����
		case(FTD::PROPERTY_ID_HighLimit): return FTD::TYPE_ID_Price; // ��ͣ��
		case(FTD::PROPERTY_ID_HighLimitRate): return FTD::TYPE_ID_Percent; // ��ͣ����
		case(FTD::PROPERTY_ID_HighPrice): return FTD::TYPE_ID_Price; // ��߼�
		case(FTD::PROPERTY_ID_InitMargin): return FTD::TYPE_ID_Value; // ��ʼ��֤��
		case(FTD::PROPERTY_ID_InsertTime): return FTD::TYPE_ID_DateTime;// ¼��ʱ��
		case(FTD::PROPERTY_ID_InstrStopCode): return FTD::TYPE_ID_StopCode;// ֹͣ����ԭ��
		case(FTD::PROPERTY_ID_InstrumentId): return FTD::TYPE_ID_InstrumentId; //��Լ����
		case(FTD::PROPERTY_ID_InstrumentName): return FTD::TYPE_ID_Name; // ��Լ����
		case(FTD::PROPERTY_ID_InstrumentStatus): return FTD::TYPE_ID_InstrumentStatus; // ��Լ����״̬
		case(FTD::PROPERTY_ID_InstrumentType): return FTD::TYPE_ID_InstrumentType;// ��Լ����
		case(FTD::PROPERTY_ID_InstrumentVersion): return FTD::TYPE_ID_InstrumentVersion; // ��Լ�汾��
		case(FTD::PROPERTY_ID_IpAddr): return FTD::TYPE_ID_StringType20; // ��¼�ߵ�IP ��ַ
		case(FTD::PROPERTY_ID_IsLogin): return FTD::TYPE_ID_BoolFlag; // �Ƿ��¼
		case(FTD::PROPERTY_ID_LastLot): return FTD::TYPE_ID_Volume; // ���һ�ʳɽ�������˫�����
		case(FTD::PROPERTY_ID_LastPrice): return FTD::TYPE_ID_Price; // ���¼�
		case(FTD::PROPERTY_ID_LifeHigh): return FTD::TYPE_ID_Price; // ��ʷ��߳ɽ��۸�
		case(FTD::PROPERTY_ID_LifeLow): return FTD::TYPE_ID_Price; // ��ʷ��ͳɽ��۸�
		case(FTD::PROPERTY_ID_LimitPrice): return FTD::TYPE_ID_Price; // �޼�
		case(FTD::PROPERTY_ID_LongOffsFrozHPosition): return FTD::TYPE_ID_Volume; // ��ͷƽ�ֶ���ֲ���(��)
		case(FTD::PROPERTY_ID_LongOffsFrozSPosition): return FTD::TYPE_ID_Volume; // ��ͷƽ�ֶ���ֲ���(Ͷ)
		case(FTD::PROPERTY_ID_LongOpenFrozHPosition): return FTD::TYPE_ID_Volume; // ��ͷ���ֶ���ֲ��֣�����
		case(FTD::PROPERTY_ID_LongOpenFrozSPosition): return FTD::TYPE_ID_Volume; // ��ͷ���ֶ���ֲ��֣�Ͷ��
		case(FTD::PROPERTY_ID_LowLimit): return FTD::TYPE_ID_Price; // ��ͣ��
		case(FTD::PROPERTY_ID_LowLimitRate): return FTD::TYPE_ID_Percent; // ��ͣ����
		case(FTD::PROPERTY_ID_LowPrice): return FTD::TYPE_ID_Price;  // ��ͼ�
		case(FTD::PROPERTY_ID_Margin): return FTD::TYPE_ID_Price;  // ��֤��
		case(FTD::PROPERTY_ID_MarketId): return FTD::TYPE_ID_MarketId;  // �г�����
		case(FTD::PROPERTY_ID_MarketMatchDataStatus): return FTD::TYPE_ID_BoolFlag;  // �Ƿ��������ͳɽ�����
		case(FTD::PROPERTY_ID_MarketName): return FTD::TYPE_ID_Name;  // �г�����
		case(FTD::PROPERTY_ID_MarketStatusId): return FTD::TYPE_ID_MarketStatus;  // �г�����״̬����
		case(FTD::PROPERTY_ID_MatchCondition): return FTD::TYPE_ID_MatchCondition;  // �����ɽ�����
		case(FTD::PROPERTY_ID_MatchDate): return FTD::TYPE_ID_Date;  // �ɽ�����
		case(FTD::PROPERTY_ID_MatchFlag): return FTD::TYPE_ID_MatchFlag;  // �ɽ�˫��������
		case(FTD::PROPERTY_ID_MatchSession): return FTD::TYPE_ID_MatchSession;  // �����ɽ�ʱ��
		case(FTD::PROPERTY_ID_MatchTime): return FTD::TYPE_ID_Time;  // �ɽ�ʱ��
		case(FTD::PROPERTY_ID_MaxLot): return FTD::TYPE_ID_Volume;  // �����µ�����
		case(FTD::PROPERTY_ID_MaxOrderLocalId): return FTD::TYPE_ID_LocalId;  // ��󱨵����ر��
		case(FTD::PROPERTY_ID_MessageReference): return FTD::TYPE_ID_MsgRef;  // �û��Զ������ݡ��ɴ�ӡASCII �ַ�
		case(FTD::PROPERTY_ID_MinimalVolume): return FTD::TYPE_ID_Volume;  // ��С�ɽ���
		case(FTD::PROPERTY_ID_MinLot): return FTD::TYPE_ID_Volume;  // ��С���µ�����
		case(FTD::PROPERTY_ID_Name): return FTD::TYPE_ID_StringType20;  // ����
		case(FTD::PROPERTY_ID_NewPassword): return FTD::TYPE_ID_Password;  // �¿���
		case(FTD::PROPERTY_ID_NewsType): return FTD::TYPE_ID_NewsType;  // ��Ϣ����
		case(FTD::PROPERTY_ID_NewsUrgency): return FTD::TYPE_ID_NewsUrgency;  // �����̶�
		case(FTD::PROPERTY_ID_OffsetFlag): return FTD::TYPE_ID_OffsetFlag;  // ��ƽ�ֱ��
		case(FTD::PROPERTY_ID_OldPassword): return FTD::TYPE_ID_Password;  // �ɿ���
		case(FTD::PROPERTY_ID_OpenInterest): return FTD::TYPE_ID_Volume;  // �ֲ���
		case(FTD::PROPERTY_ID_OpenPrice): return FTD::TYPE_ID_Price;  // ���̼�
		case(FTD::PROPERTY_ID_OptionsType): return FTD::TYPE_ID_OptionType;  // ��Ȩ����
		case(FTD::PROPERTY_ID_OrderActionCode): return FTD::TYPE_ID_ActionFlag;  // ��������������
		case(FTD::PROPERTY_ID_OrderLocalId): return FTD::TYPE_ID_LocalId;  // ί�б��
		case(FTD::PROPERTY_ID_OrderStatus): return FTD::TYPE_ID_OrderStatus;  // ����״̬
		case(FTD::PROPERTY_ID_OrderSysId): return FTD::TYPE_ID_SysOrderId;  // ��ͬ���
		case(FTD::PROPERTY_ID_OrderType): return FTD::TYPE_ID_OrderType;  // ��������
		case(FTD::PROPERTY_ID_ParticipantId): return FTD::TYPE_ID_ParticipantId;  // ���׻�Ա����
		case(FTD::PROPERTY_ID_ParticipantName): return FTD::TYPE_ID_Name;  // ��Ա����
		case(FTD::PROPERTY_ID_ParticipantType): return FTD::TYPE_ID_ParticipantType;  // ��Ա����
		case(FTD::PROPERTY_ID_PartiTrdRight): return FTD::TYPE_ID_TradeRight;  // ��ԱȨ��
		case(FTD::PROPERTY_ID_Password): return FTD::TYPE_ID_Password;  // ����
		case(FTD::PROPERTY_ID_PreClose): return FTD::TYPE_ID_Price;  // ǰ���̼۸�
		case(FTD::PROPERTY_ID_PreOpenInterest): return FTD::TYPE_ID_Volume;  // ǰ���ֲ�����˫�����
		case(FTD::PROPERTY_ID_PreSettle): return FTD::TYPE_ID_Price;  // ǰ����۸�
		case(FTD::PROPERTY_ID_Price): return FTD::TYPE_ID_Price;  // �۸�
		case(FTD::PROPERTY_ID_PrivateLoginTime): return FTD::TYPE_ID_DateTime;  // ���һ��˽��ģʽ��¼ʱ��
		case(FTD::PROPERTY_ID_PrivateLogoutTime): return FTD::TYPE_ID_DateTime;  // ���һ��˽��ģʽ�˳�ʱ��
		case(FTD::PROPERTY_ID_PrivateStreamStatus): return FTD::TYPE_ID_BoolFlag;  // ˽��ģʽ��״̬
		case(FTD::PROPERTY_ID_ProtocolVersion): return FTD::TYPE_ID_ProtocolVersion;  // ʹ��) : return FTD::TYPE_ID_ �汾��
		case(FTD::PROPERTY_ID_Pubstyle): return FTD::TYPE_ID_PubStyle;  // ���۽׶κ�Լ���鷢����ʽ
		case(FTD::PROPERTY_ID_Premium): return FTD::TYPE_ID_Value;  // Ȩ������֧
		case(FTD::PROPERTY_ID_QuoteSysID): return FTD::TYPE_ID_SysOrderId;  // ���۱��
		case(FTD::PROPERTY_ID_QuoteLocalID): return FTD::TYPE_ID_LocalId;  // ����ί�б��
		case(FTD::PROPERTY_ID_RequestBy): return FTD::TYPE_ID_RequestByType;  // ѯ�۷���
		case(FTD::PROPERTY_ID_RateUnit): return FTD::TYPE_ID_RateUnit;  // ���ʵ�λ
		case(FTD::PROPERTY_ID_RatePrice): return FTD::TYPE_ID_Price;  // ���۸�
		case(FTD::PROPERTY_ID_SellHedgeOffsetMargin): return FTD::TYPE_ID_Value;  // ����ƽ�ַ��ر�֤��
		case(FTD::PROPERTY_ID_SellHedgeOffsetProfit): return FTD::TYPE_ID_Value;  // ����ƽ��ӯ��
		case(FTD::PROPERTY_ID_SellHedgeOpenFrozMargin): return FTD::TYPE_ID_Value;  // �������ֶ��ᱣ֤��
		case(FTD::PROPERTY_ID_SellHedgeOpenUsedMargin): return FTD::TYPE_ID_Value;  // ��������ʹ�ñ�֤��
		case(FTD::PROPERTY_ID_SellHedgePosition): return FTD::TYPE_ID_Volume;  // ��������(��)
		case(FTD::PROPERTY_ID_SellHedgeTurnOver): return FTD::TYPE_ID_Value;  // �����ɽ���
		case(FTD::PROPERTY_ID_SellHedgeVolume): return FTD::TYPE_ID_Volume;  // ���ɽ���(��)
		case(FTD::PROPERTY_ID_SellOffsHPosition): return FTD::TYPE_ID_Volume;  // ��ƽ����(��)
		case(FTD::PROPERTY_ID_SellOffsSPosition): return FTD::TYPE_ID_Volume;  // ��ƽ����(Ͷ)
		case(FTD::PROPERTY_ID_SellSpecOffsetMargin): return FTD::TYPE_ID_Value;  // ��Ͷƽ�ַ��ر�֤��
		case(FTD::PROPERTY_ID_SellSpecOffsetProfit): return FTD::TYPE_ID_Value;  // ��Ͷƽ��ӯ��
		case(FTD::PROPERTY_ID_SellSpecOpenFrozMargin): return FTD::TYPE_ID_Value;  // ��Ͷ���ֶ��ᱣ֤��
		case(FTD::PROPERTY_ID_SellSpecOpenUsedMargin): return FTD::TYPE_ID_Value;  // ��Ͷ����ʹ�ñ�֤��
		case(FTD::PROPERTY_ID_SellSpecPosition): return FTD::TYPE_ID_Volume;  // ��������(Ͷ)
		case(FTD::PROPERTY_ID_SellSpecTurnOver): return FTD::TYPE_ID_Value;  // ��Ͷ�ɽ���
		case(FTD::PROPERTY_ID_SellSpecVolume): return FTD::TYPE_ID_Volume;  // ���ɽ���(Ͷ)
		case(FTD::PROPERTY_ID_SendTime): return FTD::TYPE_ID_Time;  // ����ʱ��
		case(FTD::PROPERTY_ID_SequenceNo): return FTD::TYPE_ID_SequenceNo;  //���к�;  //
		case(FTD::PROPERTY_ID_SequenceSeries): return FTD::TYPE_ID_SequenceSeries;  // ��������
		case(FTD::PROPERTY_ID_ServerAppName): return FTD::TYPE_ID_ServerAppName;  // ��ԱӦ��ϵͳ����
		case(FTD::PROPERTY_ID_SettlePrice): return FTD::TYPE_ID_Price;  // �����
		case(FTD::PROPERTY_ID_ShortCutKey): return FTD::TYPE_ID_CharType;  // �����ݼ�
		case(FTD::PROPERTY_ID_ShortOffsFrozHPosition): return FTD::TYPE_ID_Volume;  // ��ͷƽ�ֶ���ֲ���(��)
		case(FTD::PROPERTY_ID_ShortOffsFrozSPosition): return FTD::TYPE_ID_Volume;  // ��ͷƽ�ֶ���ֲ���(Ͷ)
		case(FTD::PROPERTY_ID_ShortOpenFrozHPosition): return FTD::TYPE_ID_Volume;  // ��ͷ���ֶ���ֲ��֣�����
		case(FTD::PROPERTY_ID_ShortOpenFrozSPosition): return FTD::TYPE_ID_Volume;  // ��ͷ���ֶ���ֲ��֣�Ͷ��
		case(FTD::PROPERTY_ID_StartDelvDate): return FTD::TYPE_ID_Date;  // ��ʼ������
		case(FTD::PROPERTY_ID_StartTime): return FTD::TYPE_ID_Time;  // ��ʼʱ��
		case(FTD::PROPERTY_ID_StartTrdDate): return FTD::TYPE_ID_Date;  // ��ʼ������
		case(FTD::PROPERTY_ID_StopPrice): return FTD::TYPE_ID_Price;  // ֹ��۸�
		case(FTD::PROPERTY_ID_SuspendTime): return FTD::TYPE_ID_Time;  // ����ʱ��
		case(FTD::PROPERTY_ID_StrikePrice): return FTD::TYPE_ID_Price;  // ִ�м۸�
		case(FTD::PROPERTY_ID_ThroughTime): return FTD::TYPE_ID_Time;  // ֱ��ʱ��
		case(FTD::PROPERTY_ID_Tick): return FTD::TYPE_ID_Price;  // ��С��λ
		case(FTD::PROPERTY_ID_TimeOut): return FTD::TYPE_ID_TimeOut;  // ���ͼ���ź�ʱ����
		case(FTD::PROPERTY_ID_TimeSpan): return FTD::TYPE_ID_NumberType3;  // ʱ����������ʾ������������ʾ����
		case(FTD::PROPERTY_ID_TimeStamp): return FTD::TYPE_ID_TimeStamp;  // ʱ���
		case(FTD::PROPERTY_ID_TotalMarketMatchData): return FTD::TYPE_ID_IntType;  // ���ͳɽ������¼������������
		case(FTD::PROPERTY_ID_TotalVolume): return FTD::TYPE_ID_Volume;  // �ܳɽ���
		case(FTD::PROPERTY_ID_TradeDate): return FTD::TYPE_ID_Date;  // ��������
		case(FTD::PROPERTY_ID_TradeId): return FTD::TYPE_ID_TradeId;  // �ɽ����
		case(FTD::PROPERTY_ID_TradeLot): return FTD::TYPE_ID_IntType;  // �ܳɽ�������˫�����
		case(FTD::PROPERTY_ID_TradePrice): return FTD::TYPE_ID_Price;  // ���³ɽ��۸�
		case(FTD::PROPERTY_ID_TradeRights): return FTD::TYPE_ID_TradeRight;  // ����Ȩ��
		case(FTD::PROPERTY_ID_TradeTurnover): return FTD::TYPE_ID_Volume;  // �ܳɽ���˫�����
		case(FTD::PROPERTY_ID_TradeType): return FTD::TYPE_ID_TradeType;  // �г���������
		case(FTD::PROPERTY_ID_TradeVolume): return FTD::TYPE_ID_IntType;  // ��ɽ���
		case(FTD::PROPERTY_ID_Unit): return FTD::TYPE_ID_IntType;  // ÿ�ֳ���
		case(FTD::PROPERTY_ID_UpdateTime): return FTD::TYPE_ID_Time;  // ����޸�ʱ��
		case(FTD::PROPERTY_ID_URLLink): return FTD::TYPE_ID_StringType200;  // ����Ϣ��WEB ����
		case(FTD::PROPERTY_ID_UserId): return FTD::TYPE_ID_UserId;  // ����Ա����
		case(FTD::PROPERTY_ID_UserStatus): return FTD::TYPE_ID_UserStatus;  // ����Ա״̬
		case(FTD::PROPERTY_ID_UserType): return FTD::TYPE_ID_UserType;  // ����Ա���
		case(FTD::PROPERTY_ID_UnderlyingInstrID): return FTD::TYPE_ID_StringType30;  // ������Ʒ����
		case(FTD::PROPERTY_ID_UnderlyingMultiple): return FTD::TYPE_ID_Volume; // ������Ʒ����
		case(FTD::PROPERTY_ID_ValidThrough): return FTD::TYPE_ID_Date;  // ��Чʱ��Լ��
		case(FTD::PROPERTY_ID_Volume): return FTD::TYPE_ID_Volume;  // ����
		case(FTD::PROPERTY_ID_VolumeTotal): return FTD::TYPE_ID_IntType;  // ʣ�����걨����������Ϊ��λ��
		case(FTD::PROPERTY_ID_VolumeTotalOrginal): return FTD::TYPE_ID_IntType;  // ԭʼ���걨����������Ϊ��λ��
		case(FTD::PROPERTY_ID_VolumeType): return FTD::TYPE_ID_VolumeType;  // ��������
		case(FTD::PROPERTY_ID_YdBuyHedgePosition): return FTD::TYPE_ID_Volume;  // ǰ��ֲ���(��)
		case(FTD::PROPERTY_ID_YdBuyOffsHPosition): return FTD::TYPE_ID_Volume;  // ��ƽ����(��)
		case(FTD::PROPERTY_ID_YdBuyOffsSPosition): return FTD::TYPE_ID_Volume;  // ��ƽ����(Ͷ)
		case(FTD::PROPERTY_ID_YdBuySpecPosition): return FTD::TYPE_ID_Volume;  // ǰ��ֲ���(Ͷ)
		default:
			return -1;
		}
		return -1;

		
	}
}
#endif