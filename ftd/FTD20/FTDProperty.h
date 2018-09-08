#ifndef FTD20_PROPERTY_H
#define FTD20_PROPERTY_H

#include "FTDDataTypes.h"
#include "FTDProperty.h"

namespace FTD20 {

static int getPropertyTypeID(int property_type_id)
{
	switch (property_type_id)
	{
	case(PROPERTY_ID_Abstract): return TYPE_ID_StringType80; //ժҪ / ˵��
	case(PROPERTY_ID_ActionLocalId): return TYPE_ID_LocalId; // �����������ر��
	case(PROPERTY_ID_ActionDate): return TYPE_ID_Date; //ʵ�ʽ�������
	case(PROPERTY_ID_ActiveTime): return TYPE_ID_Time;// ����ʱ��
	case(PROPERTY_ID_ActiveUserId): return TYPE_ID_UserId; // ��������Ա����
	case(PROPERTY_ID_AddValue): return TYPE_ID_Value; // �������������ʽ�
	case(PROPERTY_ID_AskLot): return TYPE_ID_Volume; // ��������
	case(PROPERTY_ID_AskPrice): return TYPE_ID_Price; // ������
	case(PROPERTY_ID_AutoSuspend): return TYPE_ID_BoolFlag; // �Զ������־
	case(PROPERTY_ID_AveragePrice): return TYPE_ID_Price; // ����
	case(PROPERTY_ID_BalanceValue): return TYPE_ID_Value; // ���ñ�֤�����
	case(PROPERTY_ID_BidLot): return TYPE_ID_Volume; // ��������
	case(PROPERTY_ID_BidPrice): return TYPE_ID_Price; // ����۸�
	case(PROPERTY_ID_BroadcastLoginTime): return TYPE_ID_DateTime; // ���һ�ι㲥ģʽ��¼ʱ��
	case(PROPERTY_ID_BroadcastLogOutTime): return TYPE_ID_DateTime; // ���һ�ι㲥ģʽ�˳�ʱ��
	case(PROPERTY_ID_BroadcastSequenceNo): return TYPE_ID_IntType; // �㲥ģʽ�е��������к�
	case(PROPERTY_ID_BroadcastSequenceSeries): return TYPE_ID_WordType; // �㲥ģʽ��������
	case(PROPERTY_ID_BroadcastStreamStatus): return TYPE_ID_BoolFlag; // �㲥ģʽ����״̬
	case(PROPERTY_ID_BuyHedgeOffsetMargin): return TYPE_ID_Value; // ��ƽ�ַ��ر�֤��
	case(PROPERTY_ID_BuyHedgeOffsetProfit): return TYPE_ID_Value; // ��ƽ��ӯ��
	case(PROPERTY_ID_BuyHedgeOpenFrozMargin): return TYPE_ID_Value; // �򱣿��ֶ��ᱣ֤��
	case(PROPERTY_ID_BuyHedgeOpenUsedMargin): return TYPE_ID_Value; // �򱣿���ʹ�ñ�֤��
	case(PROPERTY_ID_BuyHedgePosition): return TYPE_ID_Volume; // �򿪲���(��)
	case(PROPERTY_ID_BuyHedgeTurnOver): return TYPE_ID_Value; // �򱣳ɽ���
	case(PROPERTY_ID_BuyHedgeVolume): return TYPE_ID_Volume; // ��ɽ���(��)
	case(PROPERTY_ID_BuyOffsHPosition): return TYPE_ID_Volume; // ��ƽ����(��)
	case(PROPERTY_ID_BuyOffsSPosition): return TYPE_ID_Volume; // ��ƽ����(Ͷ)
	case(PROPERTY_ID_BuySpecOffsetMargin): return TYPE_ID_Value; // ��Ͷƽ�ַ��ر�֤��
	case(PROPERTY_ID_BuySpecOffsetProfit): return TYPE_ID_Value; // ��Ͷƽ��ӯ��
	case(PROPERTY_ID_BuySpecOpenFrozMargin): return TYPE_ID_Value; // ��Ͷ���ֶ��ᱣ֤��
	case(PROPERTY_ID_BuySpecOpenUsedMargin): return TYPE_ID_Value; // ��Ͷ����ʹ�ñ�֤��
	case(PROPERTY_ID_BuySpecPosition): return TYPE_ID_Volume; // �򿪲���(Ͷ)
	case(PROPERTY_ID_BuySpecTurnOver): return TYPE_ID_Value; // ��Ͷ�ɽ���
	case(PROPERTY_ID_BuySpecVolume): return TYPE_ID_Volume; // ��ɽ���(Ͷ)
	case(PROPERTY_ID_CancelDate): return TYPE_ID_Date; // ȡ������
	case(PROPERTY_ID_CancelFlag): return TYPE_ID_BoolFlag; // �ɽ��Ƿ�ȡ����
	case(PROPERTY_ID_CancelTime): return TYPE_ID_Time; // ȡ��ʱ��
	case(PROPERTY_ID_ClearDate): return TYPE_ID_Date; // ��������
	case(PROPERTY_ID_ClearPrice): return TYPE_ID_Price; // �����
	case(PROPERTY_ID_ClientId): return TYPE_ID_ClientId; // �ͻ�����
	case(PROPERTY_ID_ClientName): return TYPE_ID_Name; // �ͻ�����
	case(PROPERTY_ID_ClientType): return TYPE_ID_ClientType; // �ͻ����
	case(PROPERTY_ID_ClosePrice): return TYPE_ID_Price; // ���̼�
	case(PROPERTY_ID_ComeFrom): return TYPE_ID_StringType20; // ��Ϣ��Դ
	case(PROPERTY_ID_ConnectionReference): return TYPE_ID_ConnectionReference; // ��·��ʾ
	case(PROPERTY_ID_Content): return TYPE_ID_StringType500; // ��Ϣ����
	case(PROPERTY_ID_Currency): return TYPE_ID_StringType3; // �����õĻ��ң�����ISO 4217 ��׼����
	case(PROPERTY_ID_DataFlowFlag): return TYPE_ID_DataFlowFlag; // ����������
	case(PROPERTY_ID_DelValue): return TYPE_ID_Value; // ������������ʽ�
	case(PROPERTY_ID_DialogLoginTime): return TYPE_ID_DateTime;// ���һ�ζԻ�ģʽ��¼ʱ��
	case(PROPERTY_ID_DialogLogoutTime): return TYPE_ID_DateTime;// ���һ�ζԻ�ģʽ�˳�ʱ��
	case(PROPERTY_ID_DialogStreamStatus): return TYPE_ID_BoolFlag; // �Ի�ģʽ����״̬
	case(PROPERTY_ID_Direction): return TYPE_ID_Direction;// ��������
	case(PROPERTY_ID_EndDelvDate): return TYPE_ID_Date;// ��󽻸���
	case(PROPERTY_ID_EndTrdDate): return TYPE_ID_Date;// �������
	case(PROPERTY_ID_ErrorCode): return TYPE_ID_ErrorCode; // �������
	case(PROPERTY_ID_ErrorText): return TYPE_ID_StringType100; // ��������
	case(PROPERTY_ID_ExchangeDateTime): return TYPE_ID_DateTime; // ������ϵͳʱ��
	case(PROPERTY_ID_ExecOrderLocalID): return TYPE_ID_LocalId; // ִ�����汾�ر��
	case(PROPERTY_ID_ExecOrderSysID): return TYPE_ID_SysOrderId; // ִ�б��
	case(PROPERTY_ID_Forcedistime): return TYPE_ID_IntType; // ǿƽ�Ĵ�ϼ��
	case(PROPERTY_ID_ForceExitCode): return TYPE_ID_ForceExitCode; // ǿ���˳���
	case(PROPERTY_ID_ForceExitMsg): return TYPE_ID_StringType100; // ǿ���˳�ԭ��
	case(PROPERTY_ID_ForceGroupId): return TYPE_ID_LocalId; // ǿƽ���
	case(PROPERTY_ID_FrontId): return TYPE_ID_StringType20; // ǰ�û���ʶ
	case(PROPERTY_ID_FuseFlag): return TYPE_ID_BoolFlag; // �۶ϱ��
	case(PROPERTY_ID_Fuselimit): return TYPE_ID_Price; // �۶��޶�
	case(PROPERTY_ID_Fusepersisttime): return TYPE_ID_IntType;// �۶�������ʱ��
	case(PROPERTY_ID_Fusepoint): return TYPE_ID_StringType6; // �ڸ�ʱ���󲻿��۶ϣ�ΪHHmmss ��ʽ
	case(PROPERTY_ID_FuseRights): return TYPE_ID_BoolFlag; // �ɷ��۶�
	case(PROPERTY_ID_HedgeFlag): return TYPE_ID_HedgeFlag; // Ͷ�����
	case(PROPERTY_ID_HighLimit): return TYPE_ID_Price; // ��ͣ��
	case(PROPERTY_ID_HighLimitRate): return TYPE_ID_Percent; // ��ͣ����
	case(PROPERTY_ID_HighPrice): return TYPE_ID_Price; // ��߼�
	case(PROPERTY_ID_InitMargin): return TYPE_ID_Value; // ��ʼ��֤��
	case(PROPERTY_ID_InsertTime): return TYPE_ID_DateTime;// ¼��ʱ��
	case(PROPERTY_ID_InstrStopCode): return TYPE_ID_StopCode;// ֹͣ����ԭ��
	case(PROPERTY_ID_InstrumentId): return TYPE_ID_InstrumentId; //��Լ����
	case(PROPERTY_ID_InstrumentName): return TYPE_ID_Name; // ��Լ����
	case(PROPERTY_ID_InstrumentStatus): return TYPE_ID_InstrumentStatus; // ��Լ����״̬
	case(PROPERTY_ID_InstrumentType): return TYPE_ID_InstrumentType;// ��Լ����
	case(PROPERTY_ID_InstrumentVersion): return TYPE_ID_InstrumentVersion; // ��Լ�汾��
	case(PROPERTY_ID_IpAddr): return TYPE_ID_StringType20; // ��¼�ߵ�IP ��ַ
	case(PROPERTY_ID_IsLogin): return TYPE_ID_BoolFlag; // �Ƿ��¼
	case(PROPERTY_ID_LastLot): return TYPE_ID_Volume; // ���һ�ʳɽ�������˫�����
	case(PROPERTY_ID_LastPrice): return TYPE_ID_Price; // ���¼�
	case(PROPERTY_ID_LifeHigh): return TYPE_ID_Price; // ��ʷ��߳ɽ��۸�
	case(PROPERTY_ID_LifeLow): return TYPE_ID_Price; // ��ʷ��ͳɽ��۸�
	case(PROPERTY_ID_LimitPrice): return TYPE_ID_Price; // �޼�
	case(PROPERTY_ID_LongOffsFrozHPosition): return TYPE_ID_Volume; // ��ͷƽ�ֶ���ֲ���(��)
	case(PROPERTY_ID_LongOffsFrozSPosition): return TYPE_ID_Volume; // ��ͷƽ�ֶ���ֲ���(Ͷ)
	case(PROPERTY_ID_LongOpenFrozHPosition): return TYPE_ID_Volume; // ��ͷ���ֶ���ֲ��֣�����
	case(PROPERTY_ID_LongOpenFrozSPosition): return TYPE_ID_Volume; // ��ͷ���ֶ���ֲ��֣�Ͷ��
	case(PROPERTY_ID_LowLimit): return TYPE_ID_Price; // ��ͣ��
	case(PROPERTY_ID_LowLimitRate): return TYPE_ID_Percent; // ��ͣ����
	case(PROPERTY_ID_LowPrice): return TYPE_ID_Price ��ͼ�
	case(PROPERTY_ID_Margin): return TYPE_ID_Price ��֤��
	case(PROPERTY_ID_MarketId): return TYPE_ID_MarketId �г�����
	case(PROPERTY_ID_MarketMatchDataStatus): return TYPE_ID_BoolFlag �Ƿ��������ͳɽ�����
	case(PROPERTY_ID_MarketName): return TYPE_ID_Name �г�����
	case(PROPERTY_ID_MarketStatusId): return TYPE_ID_MarketStatus �г�����״̬����
	case(PROPERTY_ID_MatchCondition): return TYPE_ID_MatchCondition �����ɽ�����
	case(PROPERTY_ID_MatchDate): return TYPE_ID_Date �ɽ�����
	case(PROPERTY_ID_MatchFlag): return TYPE_ID_MatchFlag �ɽ�˫��������
	case(PROPERTY_ID_MatchSession): return TYPE_ID_MatchSession �����ɽ�ʱ��
	case(PROPERTY_ID_MatchTime): return TYPE_ID_Time �ɽ�ʱ��
	case(PROPERTY_ID_MaxLot): return TYPE_ID_Volume �����µ�����
	case(PROPERTY_ID_MaxOrderLocalId): return TYPE_ID_LocalId ��󱨵����ر��
	case(PROPERTY_ID_MessageReference): return TYPE_ID_MsgRef �û��Զ������ݡ��ɴ�ӡASCII �ַ�
	case(PROPERTY_ID_MinimalVolume): return TYPE_ID_Volume ��С�ɽ���
	case(PROPERTY_ID_MinLot): return TYPE_ID_Volume ��С���µ�����
	case(PROPERTY_ID_Name): return TYPE_ID_StringType<20> ����
	case(PROPERTY_ID_NewPassword): return TYPE_ID_Password �¿���
	case(PROPERTY_ID_NewsType): return TYPE_ID_NewsType ��Ϣ����
	case(PROPERTY_ID_NewsUrgency): return TYPE_ID_NewsUrgency �����̶�
	case(PROPERTY_ID_OffsetFlag): return TYPE_ID_OffsetFlag ��ƽ�ֱ��
	case(PROPERTY_ID_OldPassword): return TYPE_ID_Password �ɿ���
	case(PROPERTY_ID_OpenInterest): return TYPE_ID_Volume �ֲ���
	case(PROPERTY_ID_OpenPrice): return TYPE_ID_Price ���̼�
	case(PROPERTY_ID_OptionsType): return TYPE_ID_OptionType ��Ȩ����
	case(PROPERTY_ID_OrderActionCode): return TYPE_ID_ActionFlag ��������������
	case(PROPERTY_ID_OrderLocalId): return TYPE_ID_LocalId ί�б��
	case(PROPERTY_ID_OrderStatus): return TYPE_ID_OrderStatus ����״̬
	case(PROPERTY_ID_OrderSysId): return TYPE_ID_SysOrderId ��ͬ���
	case(PROPERTY_ID_OrderType): return TYPE_ID_OrderType ��������
	case(PROPERTY_ID_ParticipantId): return TYPE_ID_ParticipantId ���׻�Ա����
	case(PROPERTY_ID_ParticipantName): return TYPE_ID_Name ��Ա����
	case(PROPERTY_ID_ParticipantType): return TYPE_ID_ParticipantType ��Ա����
	case(PROPERTY_ID_PartiTrdRight): return TYPE_ID_TradeRight ��ԱȨ��
	case(PROPERTY_ID_Password): return TYPE_ID_Password ����
	case(PROPERTY_ID_PreClose): return TYPE_ID_Price ǰ���̼۸�
	case(PROPERTY_ID_PreOpenInterest): return TYPE_ID_Volume ǰ���ֲ�����˫�����
	case(PROPERTY_ID_PreSettle): return TYPE_ID_Price ǰ����۸�
	case(PROPERTY_ID_Price): return TYPE_ID_Price �۸�
	case(PROPERTY_ID_PrivateLoginTime): return TYPE_ID_DateTime ���һ��˽��ģʽ��¼ʱ��
	case(PROPERTY_ID_PrivateLogoutTime): return TYPE_ID_DateTime ���һ��˽��ģʽ�˳�ʱ��
	case(PROPERTY_ID_PrivateStreamStatus): return TYPE_ID_BoolFlag ˽��ģʽ��״̬
	case(PROPERTY_ID_ProtocolVersion): return TYPE_ID_ProtocolVersion ʹ��) : return TYPE_ID_ �汾��
	case(PROPERTY_ID_Pubstyle): return TYPE_ID_PubStyle ���۽׶κ�Լ���鷢����ʽ
	case(PROPERTY_ID_Premium): return TYPE_ID_Value Ȩ������֧
	case(PROPERTY_ID_QuoteSysID): return TYPE_ID_SysOrderId ���۱��
	case(PROPERTY_ID_QuoteLocalID): return TYPE_ID_LocalId ����ί�б��
	case(PROPERTY_ID_RequestBy): return TYPE_ID_RequestByType ѯ�۷���
	case(PROPERTY_ID_RateUnit): return TYPE_ID_RateUnit ���ʵ�λ
	case(PROPERTY_ID_RatePrice): return TYPE_ID_Price ���۸�
	case(PROPERTY_ID_SellHedgeOffsetMargin): return TYPE_ID_Value ����ƽ�ַ��ر�֤��
	case(PROPERTY_ID_SellHedgeOffsetProfit): return TYPE_ID_Value ����ƽ��ӯ��
	case(PROPERTY_ID_SellHedgeOpenFrozMargin): return TYPE_ID_Value �������ֶ��ᱣ֤��
	case(PROPERTY_ID_SellHedgeOpenUsedMargin): return TYPE_ID_Value ��������ʹ�ñ�֤��
	case(PROPERTY_ID_SellHedgePosition): return TYPE_ID_Volume ��������(��)
	case(PROPERTY_ID_SellHedgeTurnOver): return TYPE_ID_Value �����ɽ���
	case(PROPERTY_ID_SellHedgeVolume): return TYPE_ID_Volume ���ɽ���(��)
	case(PROPERTY_ID_SellOffsHPosition): return TYPE_ID_Volume ��ƽ����(��)
	case(PROPERTY_ID_SellOffsSPosition): return TYPE_ID_Volume ��ƽ����(Ͷ)
	case(PROPERTY_ID_SellSpecOffsetMargin): return TYPE_ID_Value ��Ͷƽ�ַ��ر�֤��
	case(PROPERTY_ID_SellSpecOffsetProfit): return TYPE_ID_Value ��Ͷƽ��ӯ��
	case(PROPERTY_ID_SellSpecOpenFrozMargin): return TYPE_ID_Value ��Ͷ���ֶ��ᱣ֤��
	case(PROPERTY_ID_SellSpecOpenUsedMargin): return TYPE_ID_Value ��Ͷ����ʹ�ñ�֤��
	case(PROPERTY_ID_SellSpecPosition): return TYPE_ID_Volume ��������(Ͷ)
	case(PROPERTY_ID_SellSpecTurnOver): return TYPE_ID_Value ��Ͷ�ɽ���
	case(PROPERTY_ID_SellSpecVolume): return TYPE_ID_Volume ���ɽ���(Ͷ)
	case(PROPERTY_ID_SendTime): return TYPE_ID_Time ����ʱ��
	case(PROPERTY_ID_SequenceNo): return TYPE_ID_SequenceNo ���к�
	case(PROPERTY_ID_SequenceSeries): return TYPE_ID_SequenceSeries ��������
	case(PROPERTY_ID_ServerAppName): return TYPE_ID_ServerAppName ��ԱӦ��ϵͳ����
	case(PROPERTY_ID_SettlePrice): return TYPE_ID_Price �����
	case(PROPERTY_ID_ShortCutKey): return TYPE_ID_CharType �����ݼ�
	case(PROPERTY_ID_ShortOffsFrozHPosition): return TYPE_ID_Volume ��ͷƽ�ֶ���ֲ���(��)
	case(PROPERTY_ID_ShortOffsFrozSPosition): return TYPE_ID_Volume ��ͷƽ�ֶ���ֲ���(Ͷ)
	case(PROPERTY_ID_ShortOpenFrozHPosition): return TYPE_ID_Volume ��ͷ���ֶ���ֲ��֣�����
	case(PROPERTY_ID_ShortOpenFrozSPosition): return TYPE_ID_Volume ��ͷ���ֶ���ֲ��֣�Ͷ��
	case(PROPERTY_ID_StartDelvDate): return TYPE_ID_Date ��ʼ������
	case(PROPERTY_ID_StartTime): return TYPE_ID_Time ��ʼʱ��
	case(PROPERTY_ID_StartTrdDate): return TYPE_ID_Date ��ʼ������
	case(PROPERTY_ID_StopPrice): return TYPE_ID_Price ֹ��۸�
	case(PROPERTY_ID_SuspendTime): return TYPE_ID_Time ����ʱ��
	case(PROPERTY_ID_StrikePrice): return TYPE_ID_Price ִ�м۸�
	case(PROPERTY_ID_ThroughTime): return TYPE_ID_Time ֱ��ʱ��
	case(PROPERTY_ID_Tick): return TYPE_ID_Price ��С��λ
	case(PROPERTY_ID_TimeOut): return TYPE_ID_TimeOut ���ͼ���ź�ʱ����
	case(PROPERTY_ID_TimeSpan): return TYPE_ID_NumberType<3> ʱ����������ʾ������������ʾ����
	case(PROPERTY_ID_TimeStamp): return TYPE_ID_TimeStamp ʱ���
	case(PROPERTY_ID_TotalMarketMatchData): return TYPE_ID_IntType ���ͳɽ������¼������������
	case(PROPERTY_ID_TotalVolume): return TYPE_ID_Volume �ܳɽ���
	case(PROPERTY_ID_TradeDate): return TYPE_ID_Date ��������
	case(PROPERTY_ID_TradeId): return TYPE_ID_TradeId �ɽ����
	case(PROPERTY_ID_TradeLot): return TYPE_ID_IntType �ܳɽ�������˫�����
	case(PROPERTY_ID_TradePrice): return TYPE_ID_Price ���³ɽ��۸�
	case(PROPERTY_ID_TradeRights): return TYPE_ID_TradeRight ����Ȩ��
	case(PROPERTY_ID_TradeTurnover): return TYPE_ID_Volume �ܳɽ���˫�����
	case(PROPERTY_ID_TradeType): return TYPE_ID_TradeType �г���������
	case(PROPERTY_ID_TradeVolume): return TYPE_ID_IntType ��ɽ���
	case(PROPERTY_ID_Unit): return TYPE_ID_IntType ÿ�ֳ���
	case(PROPERTY_ID_UpdateTime): return TYPE_ID_Time ����޸�ʱ��
	case(PROPERTY_ID_URLLink): return TYPE_ID_StringType<200> ����Ϣ��WEB ����
	case(PROPERTY_ID_UserId): return TYPE_ID_UserId ����Ա����
	case(PROPERTY_ID_UserStatus): return TYPE_ID_UserStatus ����Ա״̬
	case(PROPERTY_ID_UserType): return TYPE_ID_UserType ����Ա���
	case(PROPERTY_ID_UnderlyingInstrID): return TYPE_ID_StringType<30> ������Ʒ����
	case(PROPERTY_ID_UnderlyingMultiple): return TYPE_ID_Volume ������Ʒ����
	case(PROPERTY_ID_ValidThrough): return TYPE_ID_Date ��Чʱ��Լ��
	case(PROPERTY_ID_Volume): return TYPE_ID_Volume ����
	case(PROPERTY_ID_VolumeTotal): return TYPE_ID_IntType ʣ�����걨����������Ϊ��λ��
	case(PROPERTY_ID_VolumeTotalOrginal): return TYPE_ID_IntType ԭʼ���걨����������Ϊ��λ��
	case(PROPERTY_ID_VolumeType): return TYPE_ID_VolumeType ��������
	case(PROPERTY_ID_YdBuyHedgePosition): return TYPE_ID_Volume ǰ��ֲ���(��)
	case(PROPERTY_ID_YdBuyOffsHPosition): return TYPE_ID_Volume ��ƽ����(��)
	case(PROPERTY_ID_YdBuyOffsSPosition): return TYPE_ID_Volume ��ƽ����(Ͷ)
		case(PROPERTY_ID_YdBuySpecPosition Volume ǰ��ֲ���(Ͷ)
	}
	return 0;
}

}
#endif