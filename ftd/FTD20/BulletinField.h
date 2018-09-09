#ifndef FTD20_BULLETIN_FIELD_H
#define FTD20_BULLETIN_FIELD_H

#include "./FTDProperties.h"
#include "./FTDFields.h"



namespace FTD20 {
	static const int BulletinFieldProperties[] =
	{ 
		PROPERTY_ID_NewsType, //��Ϣ����
		PROPERTY_ID_NewsUrgency, // �����̶�
		PROPERTY_ID_SendTime, // ����ʱ��
		PROPERTY_ID_Abstract, // ժҪ / ˵��
		PROPERTY_ID_ComeFrom, // ��Ϣ��Դ
		PROPERTY_ID_MarketId, // �г�����
		PROPERTY_ID_Content, // ��Ϣ����
		PROPERTY_ID_URLLink // ����Ϣ��WEB ����
	};


	struct BulletinField
	{
		TTPropertyNewsType newsType; //��Ϣ����
		TTPropertyNewsUrgency newsUrgency; // �����̶�
		TTPropertySendTime  sendTime; // ����ʱ��
		TTPropertyAbstract  abstract; // ժҪ / ˵��
		TTPropertyComeFrom comeFrom; // ��Ϣ��Դ
		TTPropertyMarketId marketId; // �г�����
		TTPropertyContent content; // ��Ϣ����
		TTPropertyURLLink  urlLink; // ����Ϣ��WEB ����	
	};
}
#endif