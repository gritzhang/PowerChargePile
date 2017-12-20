 /****************************************Copyright (c)*********************************************
**                                     ��������ʢ�����Ƽ����޹�˾
**									       ��   ��   ��
**--------------�ļ���Ϣ---------------------------------------------------------------------------
**��   ��   ��: datastructure.h
**��   ��   ��: ��Сӱ
**�� �� �� �� ��2009��03��06��
**��        ��: ��ų����õ��ĸ��ṹ������Ͳ�������
**--------------��ǰ�汾�޶�-----------------------------------------------------------------------
** �޸���: 
** �ա���: 
** �衡��: __TIME__
**
**************************************************************************************************/
#ifndef __DATASTRUCTURE_H__
#define __DATASTRUCTURE_H__

#include "stdint.h"

/*********************************************************************************************
** 
**   4Kÿ���ܴ洢���ٸ����ݿ� �� 4096 / �ṹ��ߴ�
**	 �洢һ���µ����� 31 �죬��Ҫ���ٸ����ݿ�
**   ����������С��¼ Ϊ 0 
**   ������������¼Ϊ�����ö��ٿ� * ������ 
**********************************************************************************************/


/******************************************************************************************
**
**		��������
**
*******************************************************************************************/

/************************************************************************
**
**	�ƷѲ����·��������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	    MD5	    �ƷѲ��Ե�MD5��	 BCD��	    16Byte	   16�ֽڼƷѲ��Ե�MD5��
**	2	    JLSL	��¼����	     HEX��	    1Byte	   1���ֽڵļ�¼����
**	3	    JFCL	����x   	     HEX��	    4*24Byte   24��4���ֽڵĲ���
************************************************************************/
typedef struct
{
	uint8_t   order_num[16];
	uint8_t		MD5[16] ;
	uint8_t		recode_num ;
	uint8_t		strategy_kwh[24*6] ;	
}CHASTRATEGY_UP_PARA;

/************************************************************************
**
**	�·���׼�������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	SXSJ	��Чʱ��	BIN��	7Byte	CP56Time2a��ʽ
**	2	SXSJ	ʧЧʱ��	BIN��	7Byte	CP56Time2a��ʽ
**	3	ZXZT	ִ��״̬	BCD��	2Byte	0001-��Ч 0002-��Ч
**	4	JLLX	��������	BCD��	2Byte	0001-��� 0002-����� 0003-�ŵ���
**	5	JDJ		����	BIN��	4Byte	��ȷ��С�������λ
**	6	FDJ		����	BIN��	4Byte	��ȷ��С�������λ
**	7	PDJ		ƽ���	BIN��	4Byte	��ȷ��С�������λ
**	8	GDJ		�ȵ��	BIN��	4Byte	��ȷ��С�������λ
**
************************************************************************/
typedef struct
{
	uint8_t		QYSJ[7] ;
	uint8_t		SXSJ[7] ;
	uint16_t	ZXZT ;
	uint16_t	JLLX ;
	uint32_t	JDJ ;
	uint32_t	FDJ ;
	uint32_t	PDJ ;
	uint32_t	GDJ ;

}RATE_PARA;

/************************************************************************
**
**	�������·�ʱ�����������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	LJKH	�߼�����	BCD��	8Byte	16λ����
**	2	ZT		״̬	BCD��	2Byte	0001-��ʧ 0002-���
**	3	ZHGXSJ	������ʱ��	BIN��	7Byte	CP56Time2a��ʽ
**
************************************************************************/
typedef struct
{
	uint8_t		LJKH[8] ;
	uint16_t	ZT ;
	uint8_t		ZHGXSJ[7] ;
		
}BLACKLIST_PARA;

/************************************************************************
**
**	��Ȩ�����������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	ZDJQBM	�ն˻�������	BCD��	8Byte	���׮�ʲ���ţ�ϵͳ�����ı��
**	2	LJKH	������	BCD��	8Byte	16λ����
**  3 LOGIC_NUM �߼�����
**	3	DDQCWYBS	�綯����Ψһ��ʶ	�ַ�	32Byte	32λ����ǰ��λ����֯��������
**	4	JFMXBM	�Ʒ�ģ�ͱ���	BCD��	8Byte	8λ����
**	5	KKHKYE	�ۿ�����	BIN��	4Byte	��ȷ��С�������λ
**	6	JQCGBZ	��Ȩ�ɹ���־	BIN��	1Byte	�����ͣ�1����Ȩ�ɹ���0����Ȩʧ�ܣ�
**	7	JQSBYY	��Ȩʧ��ԭ��	BCD��	2Byte	0000-�ɹ� 0001-�˻����� 0002-�ײ����� 0003-�Ƿ��û� 0004-��ʧ�� 0005-������ƥ��
**	8	SYLC	ʣ�����	BIN��	4Byte	��ȷ��С�������λ
**	9	SYDL	ʣ�����	BIN��	4Byte	��ȷ��С�������λ
**	10 SYCS	ʣ�����    BIN��	4Byte	��ȷ��С�������λ
**	11 OrderNo �������·���16λ������� ˢ�����ʱ�·��ļ�Ȩ���ز����˱�ţ�ֻ��APPɨ�����·��ļ�Ȩ�Ŵ��˱��   2016��9��23�գ������º�̨���Ӵ˹��� 
************************************************************************/
typedef struct
{
	uint8_t		ZDJQBM[8] ;
	uint8_t		LJKH[8] ;
	uint8_t		LOGIC_NUM[16];
	uint8_t		DDQCWYBS[32] ;
	uint8_t		JFMXBM[8] ;
	uint32_t	KKHKYE ;
	uint8_t		JQCGBZ ;
	uint16_t	JQSBYY ;
	uint32_t	SYLC ;
	uint32_t	SYDL ;
	uint32_t	SYCS ;
	uint8_t		OrderNo[16];			//APPɨ����ʱ�����������·�16λ�Ķ������ 	
}CHECKDOWN_PARA;

/************************************************************************
**
**	��Ȩ���ݰ����ݽṹ��
**  ���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	ZDJQBM		�ն˻�������		BCD��	8Byte	���׮�ʲ���ţ�ϵͳ�����ı��
**	2	LJKH		������			BCD��	8Byte	16λ����
**	3	KMM			������				�ַ�	16Byte	16λ�ַ�����ͬ����������ͬ
**  4	SRMM		��������			�ַ�	16Byte	16λ�ַ���
**	5	KYE			�����				BIN��	4Byte	��ȷ��С�������λ������Ҫ��д
**  6	KZT			��״̬				BIN��	2Byte	0001-����0002-��ʧ0003-Ƿ�� 0004-���� 0005-ע��������Ҫ��д
**	7	DDQCWYBS	�綯����Ψһ��ʶ	�ַ�	32Byte	32λ����ǰ��λ����֯�������룬����Ҫ��д
**	8	JFMXBM		�Ʒ�ģ�ͱ���		BCD��	8Byte	8λ���룬����Ҫ��д
************************************************************************/
typedef struct
{
	uint8_t		ZDJQBM[8] ;
	uint8_t		LJKH[8] ;
	uint8_t		KMM[16] ;
	uint8_t		SRMM[16] ;
	uint32_t	KYE ;
	uint16_t	KZT ;
	uint8_t		DDQCWYBS[32] ;
	uint8_t		JFMXBM[8] ;
		
}CHECKUP_PARA;

/************************************************************************
**
**	���߽������ߺ��ϴ����׼�¼�������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	ZDJQBM	�ն˻�������	BCD��	8Byte	16λ�豸����
**	2	JYLSH	������ˮ��	BCD��	10Byte	19λ���״���
**	3	YHBH	�û����	BCD��	8Byte	16λ�豸����
**	3	LJKH	������	BCD��	8Byte	16λ����
**		LOGIC_NUM		�߼�����
**	4	LXJYLX	���߽�������	BCD��	1Byte	0��1��
**	5	KSSJ	��ʼʱ��	BIN��	7Byte	CP56Time2a��ʽ
**	6	JSSJ	����ʱ��	BIN��	7Byte	CP56Time2a��ʽ
**	7	JQSZ	����ʾֵ	BIN��	4Byte	����
**	8	JZSJ	��ֹʾֵ	BIN��	4Byte	����
**	9	FQSZ	����ʾֵ	BIN��	4Byte	����
**	10	FZSZ	��ֹʾֵ	BIN��	4Byte	����
**	11	PQSZ	ƽ��ʾֵ	BIN��	4Byte	����
**	12	PZSZ	ƽֹʾֵ	BIN��	4Byte	����
**	13	GQSZ	����ʾֵ	BIN��	4Byte	����
**	14	GZSZ	��ֹʾֵ	BIN��	4Byte	����
**	15	JLLX	��������	BCD��	2Byte	0001-��� 0002-����� 0003-�ŵ���
**	16	BCJLSS	���μ���ʾ��	BIN��	4Byte	����
**	17	SCJLSS	�ϴμ���ʾ��	BIN��	4Byte	����
**	18	GDJ		�ⵥ��	BIN��	4Byte	��ȷ��С�������λ
**	29	GDL		�����	BIN��	4Byte	����
**	20	GGE		����	BIN��	4Byte	��ȷ��С�������λ
**	21	FDJ		�嵥��	BIN��	4Byte	��ȷ��С�������λ
**	22	FDL		�����	BIN��	4Byte	����
**	23	FJE		����	BIN��	4Byte	��ȷ��С�������λ
**	24	PDJ		ƽ����	BIN��	4Byte	��ȷ��С�������λ
**	25	PDL		ƽ����	BIN��	4Byte	����
**	26	PJE		ƽ���	BIN��	4Byte	��ȷ��С�������λ
**	27	GDJ		�ȵ���	BIN��	4Byte	��ȷ��С�������λ
**	28	GDL		�ȵ���	BIN��	4Byte	����
**	29	GJE		�Ƚ��	BIN��	4Byte	��ȷ��С�������λ
**	30	ZDL		�ܵ���	BIN��	4Byte	����
**	31	YWLX	ҵ������	BCD��	2Byte	0001-��� 0002-����
**	32	XFSZ	������ֵ	BIN��	4Byte	����
**	33	XFDJ	���ѵ���	BIN��	4Byte	��ȷ��С�������λ
**	34	XFJE	���ѽ��	BIN��	4Byte	��ȷ��С�������λ
**	35	DDQCWYBS	�綯����Ψһ��ʶ	�ַ�	32Byte	32λ����ǰ��λ����֯��������
**
************************************************************************/
typedef struct
{
	uint8_t		ZDJQBM[8] ;
	uint8_t		JYLSH[16] ;
	uint8_t		YHBH[8] ;
	uint8_t		LJKH[8] ;
	uint8_t		LOGIC_NUM[16];
	uint8_t		LXJYLX ;
	uint8_t		KSSJ[7] ;
	uint8_t		JSSJ[7] ;
	uint32_t	JQSZ ;
	uint32_t	JZSZ ;
	uint32_t	FQSZ ;
	uint32_t	FZSZ ;
	uint32_t	PQSZ ;
	uint32_t	PZSZ ;
	uint32_t	GQSZ ;
	uint32_t	GZSZ ;
	uint16_t	JLLX ;
	uint32_t	BCJLSS ;
	uint32_t	SCJLSS ;
	uint32_t	JDJ ;
	uint32_t	JDL ;
	uint32_t	JJE ;
	uint32_t	FDJ ;
	uint32_t	FDL ;
	uint32_t	FJE ;
	uint32_t	PDJ ;
	uint32_t	PDL ;
	uint32_t	PJE ;
	uint32_t	GDJ ;
	uint32_t	GDL ;
	uint32_t	GJE ;
	uint32_t	ZDL ;
	uint16_t	YWLX ;
	uint32_t	XFSZ ;
	uint32_t	XFDJ ;
	uint32_t	XFJE ;
	uint8_t		DDQCWYBS[32] ;
	uint8_t		cs;	
}CHGOFFLINE_PARA;

/************************************************************************
**
**	���������ֹͣ���ʱ�ϴ���¼�������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	JYLSH	������ˮ��		BCD ��	16Byte	32λ���״���
**	2	YWLX	ҵ������		BCD��	2Byte	0001-��� 0002-����
**	3	ZDJQBM	�ն˻�������	BCD��	8Byte	���׮�ʲ���ţ�ϵͳ�����ı��
**	4	YHBH	�û����		BCD��	8Byte	16λ�豸����,����Ҫ��д
**	5	LJKH	������		BCD��	8Byte	16λ����
**		LOGIC_NUM		�߼�����
**	6	KSSJ	��ʼʱ��		BIN��	7Byte	CP56Time2a��ʽ
**	7	JSSJ	����ʱ��		BIN��	7Byte	CP56Time2a��ʽ
**	8	JQSZ	����ʾֵ		BIN��	4Byte	��ȷ��С������λ
**	9	JZSZ	��ֹʾֵ		BIN��	4Byte	��ȷ��С������λ
**	10	FQSZ	����ʾֵ		BIN��	4Byte	��ȷ��С������λ
**	11	FZSZ	��ֹʾֵ		BIN��	4Byte	��ȷ��С������λ
**	12	PQSZ	ƽ��ʾֵ		BIN��	4Byte	��ȷ��С������λ
**	13	PZSZ	ƽֹʾֵ		BIN��	4Byte	��ȷ��С������λ
**	14	GQSZ	����ʾֵ		BIN��	4Byte	��ȷ��С������λ
**	15	GZSZ	��ֹʾֵ		BIN��	4Byte	��ȷ��С������λ
**	16	JDL		�����			BIN��	4Byte	��ȷ��С������λ
**	17	FDL		�����			BIN��	4Byte	��ȷ��С������λ
**	18	PDL		ƽ����			BIN��	4Byte	��ȷ��С������λ
**	19	GDL		�ȵ���			BIN��	4Byte	��ȷ��С������λ
**	20	ZDL		�ܵ���			BIN��	4Byte	��ȷ��С������λ
**	21	JLSSLX	����ʾ������	BCD��	2Byte	0001-��� 0002-����� 0003-�ŵ����� 
**	22	BCJLSS	���μ���ʾ��	BIN��	4Byte	���ͣ�����Ҫ��д
**	23	SCJLSS	�ϴμ���ʾ��	BIN��	4Byte	���ͣ�����Ҫ��д
**	24	SCCHDZBH	�ϴγ任��վ���	BCD��	5Byte	9λ���ű���  ��ɢ���׮���Ӽ�����ģʽ�ϴ�׮���ǰ5λ������Ҫ��д
**	25	SCYWLX	�ϴ�ҵ������	BCD��	2Byte	0001-��� 0002-���磬����Ҫ��д
**	26	DDQCWYBS	�綯����Ψһ��ʶ	�ַ�	32Byte	32λ����ǰ��λ����֯�������룬����Ҫ��д
**
************************************************************************/
typedef struct
{
	uint8_t		JYLSH[16] ;
	uint16_t	YWLX ;
	uint8_t		ZDJQBM[8] ;
	uint8_t		YHBH[8] ;
	uint8_t		LJKH[8] ;
	uint8_t		LOGIC_NUM[16];
	uint8_t		KSSJ[7] ;
	uint8_t		JSSJ[7] ;
	uint32_t	JQSZ ;
	uint32_t	JZSZ ;
	uint32_t	FQSZ ;
	uint32_t	FZSZ ;
	uint32_t	PQSZ ;
	uint32_t	PZSZ ;
	uint32_t	GQSZ ;
	uint32_t	GZSZ ;
	uint32_t	JDL ;
	uint32_t	FDL ;
	uint32_t	PDL ;
	uint32_t	GDL ;
	uint32_t	ZDL ;
	uint16_t	JLSSLX ;
	uint32_t	BCJLSS ;
	uint32_t	SCJLSS ;
	uint8_t		SCCHDZBH[5] ;
	uint16_t	SCYWLX ;
	uint8_t		DDQCWYBS[32] ;
		
}CHGONLINE_PARA;

/************************************************************************
**
**	�ۿ������������ݽṹ��
**	���	��������	��������	�ֶ�����	�ֶγ���	��ע
**	1	ZDJQBM	�ն˻�������	BCD��	8Byte	16λ�豸����
**	2	LJKH	������	BCD��	8Byte	16λ����
**  3 LOGIC_NUM �߼����� 16�ֽ�
**	3	KKJE	�ۿ���	BIN��	4Byte	��ȷ��С�������λ
**	4	ZHYE	�ʻ����	BIN��	4Byte	��ȷ��С�������λ
**	5	KKCGBZ	�ۿ�ɹ���־	BIN��	1Byte	������,(1���ۿ�ɹ���0�ۿ�ʧ��)
**	6	KKSBYY	�ۿ�ʧ��ԭ��	BCD��	2Byte	0000-�ɹ�0001-�˻����� 0002-�ײ����� 0003-������ͬ 0004-��ʧ�� 0005-������ƥ��
**	7	KCLC	�۳����	BIN��	4Byte	��ȷ��С�������λ
**	8	SYLC	ʣ�����	BIN��	4Byte	��ȷ��С�������λ
**	9	KCDL	�۳�����	BIN��	4Byte	��ȷ��С�������λ
**	10	SYDL	ʣ�����	BIN��	4Byte	��ȷ��С�������λ
**	11	KCCS	�۳�����	BIN��	4Byte	��ȷ��С�������λ
**	12	SYCS	ʣ�����	BIN��	4Byte	��ȷ��С�������λ
**
************************************************************************/
typedef struct
{
	uint8_t		ZDJQBM[8] ;
	uint8_t		LJKH;
	uint8_t   LOGIC_NUM[16];
	uint32_t	KKJE ;
	uint32_t	ZHYE ;
	uint8_t		KKCGBZ ;
	uint16_t	KKSBYY ;
	uint32_t	KCLC ;
	uint32_t	SYLC ;
	uint32_t	KCDL ;
	uint32_t	SYDL ;
	uint32_t	KCCS ;
	uint32_t	SYCS ;
		
}BALANCEDOWN_PARA;

/******************************************************************************************
**
**		ʱ��ṹ����
**
*******************************************************************************************/

typedef	struct
{
	uint8_t	second;							//0-59
	uint8_t	minute;							//0-59
	uint8_t	hour;							//0-23
	uint8_t	day;							//1-31
	uint8_t	month;							//1-12
	uint16_t year ;							//2000 - 
}DATE7;

typedef	struct
{
	uint8_t	minute;							//0-59
	uint8_t	hour;							//0-23
	uint8_t	day;							//1-31
	uint8_t	month;							//1-12
	uint8_t	year;							//00-99
}DATE5;

typedef	struct
{
	uint8_t	minute;							//0-59
	uint8_t	hour;							//0-23
	uint8_t	day;							//1-31
}DATE3;

typedef	struct
{
	uint8_t	second ;      					//0-59
	uint8_t	minute;							//0-59
	uint8_t	hour;							//0-23
}TIME3;


/*****************************************************************************
**
**�ն˲���
**
******************************************************************************/

/*�ն˲���0X801F�ṹ��*/
typedef struct					// 0xF8 Byte
{
	uint16_t  	ParaFlag ;
	uint8_t		ChargeNo[8];					/*���׮���*/
	uint8_t		TerminalNo[8];					/*�ն˻������*/
	uint8_t		CHGMode ;						/*���׮ͨ��ģʽ*/
	uint8_t		CHGProtocol; 					/*���׮ͨ��Э��*/
	uint8_t		APN[16];						/*APN����*/
	uint8_t		APNUSER[32];					/*APN��½�û���*/
	uint8_t		APNPassword[32];				/*APN��½����*/
    uint8_t     ServerIP[4];   					/*������IP*/ 
    uint16_t   	ServerPort ;					/*�������˿�*/
	uint8_t     GateWay[4] ;                	/*����*/
    uint8_t		SelfIP[4] ;						/*����IP*/
    uint16_t   	SelfPort ;						/*����˿�*/
    uint8_t 	SelfMASK[4];           			/*��������*/
    uint8_t 	SelfMAC[6];            			/*�����ַ*/
    uint16_t   	RatedVoltage ;					/*���ѹ*/
    uint16_t   	RatedCurrent ;					/*�����*/
    uint16_t   	Overload ;						/*��������*/
    uint16_t   	OverloadRecovery ;				/*�����ָ�����*/
    uint16_t   	Overvoltage ;					/*��ѹ����*/
    uint16_t   	OvervoltagRecovery ;			/*��ѹ�ָ�����*/
    uint16_t   	Undervoltage ;					/*Ƿѹ����*/
    uint16_t   	UndervoltagRecovery ;			/*Ƿѹ�ָ�����*/
    uint16_t   	MinCurrent ;					/*��С����*/
    uint16_t   	MaxCurrent ;					/*������*/
    uint32_t	AdminPassword;					/*����Ա����*/
    uint8_t   	JudgeTime ;						/*���ء���ѹ��Ƿѹ�ж�ʱ��*/
	uint8_t		HeartBeat;						/*�������� ��λ min*/
	uint8_t		ComTimeOut ;					/*ͨѶ��ʱʱ��*/
	uint8_t		RepeatTime ;					/*�ط����� */
    uint16_t   	LedStart ;						/*LED�ƿ���ʱ��*/
    uint16_t   	LedStop ;						/*LED�ƹر�ʱ��*/
    uint16_t    SoftVer ;						/*�ն�����汾��*/
    uint16_t	HardwareVer ;					/*�ն�Ӳ���汾��*/
	uint8_t		WifiParas[64] ;					/*WIFI���ò���*/
	uint32_t	Jingdu;							/*����*/
	uint32_t	Weidu;							/*γ��*/
	uint8_t		ChargeStation[8] ;				/*���վ���*/
	uint8_t		ChargePoint ;					/*���׮����*/
	uint8_t		DutyCycle;						/*ռ�ձ�*/
    uint8_t		cs ;
}TERM_PARA;

#endif

/*************************************************************************************************
**                            End Of File
**************************************************************************************************/
