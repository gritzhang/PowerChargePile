

#define	__GLOBAL_C__

#include	"global.h"



//ȫ�ֱ�����ʼ��
void GolbalVarInit(void)
{
//	OS_ENTER_CRITICAL();	
//	memset(&SysCtlWrod,0,sizeof(sSysCtl));
//	memset(Chgcard,0,sizeof(Chgcard));
//	memset((uint8_t *)&energy_data,0,sizeof(energy_data));
//	memset((uint8_t *)&real_power,0,sizeof(real_power));
//	memset((uint8_t *)&sSysOvrTim,0,sizeof(sSysOvrTim));
//	memset((uint8_t *)&Term_Para1,0,sizeof(Term_Para1));
//	OS_EXIT_CRITICAL();
}

//��ȡ�ն˲�����������
void SystemParaInit(void)
{
	uint8_t cs;	
	//static uint32_t nn ;
	
	//nn = sizeof(Term_Para1) ;
	//nn = sizeof(sSysCtl);
	
//	ReadJYLSH();  													    //��ȡ������ˮ��
//	Readlxjycs();											            //��ȡ���׼�¼����	
//				
	FRAMRead((uint8_t *)&Term_Para1, TERMINAL_PARA_ADD, sizeof(Term_Para1));
//	cs	= CheckSum1((uint8_t *)&Term_Para1, &Term_Para1.cs);
//	if(cs != Term_Para1.cs){
//		FRAMRead((uint8_t *)&Term_Para1, TERMINAL_PARA_ADD_BAK, sizeof(Term_Para1));
//		cs	= CheckSum1((uint8_t *)&Term_Para1, &Term_Para1.cs);
//		if(cs != Term_Para1.cs){
//			Term_Para1.ParaFlag = 0;
//		}
//		else{			
//			FRAMWrite((uint8_t *)&Term_Para1, TERMINAL_PARA_ADD, sizeof(Term_Para1));
//		}
//	}	
	if(Term_Para1.ParaFlag != VALID_PARA)
    { 						        /* ��λ����								*/
		memset(&Term_Para1, 0x00 , sizeof(Term_Para1)) ;
		Term_Para1.ChargeNo[0]       	    = 0x01 ;					/* ���׮���		0000000000000001	*/
		Term_Para1.TerminalNo[0]	  	    = 0x01	;					/* ���׮�豸���	0000000000000001	*/
		Term_Para1.CHGMode		 			= MODE_RJ45 ;			    /* ����ͨ����GPRS/WIFI/RJ45/RS485		*/
		Term_Para1.CHGProtocol				= 0x01 ;					/* ���׮Э�� 01 ������ͨ104  			*/

		Term_Para1.ServerIP[0]  			= 100;						/* ��վIP*/	
		Term_Para1.ServerIP[1]  			= 1;			
		Term_Para1.ServerIP[2]  			= 168;			
		Term_Para1.ServerIP[3]  			= 192;
		Term_Para1.ServerPort   			= 2406 ;					/* ��վ�˿�*/	

		Term_Para1.GateWay[0]  				= 1;						/* ���׮���� */	
		Term_Para1.GateWay[1]  				= 1;			
		Term_Para1.GateWay[2]  				= 168;			
		Term_Para1.GateWay[3]  				= 192;			

		Term_Para1.SelfIP[0]  				= 185;						/* ���׮IP*/	
		Term_Para1.SelfIP[1]  				= 1;			
		Term_Para1.SelfIP[2]  				= 168;			
		Term_Para1.SelfIP[3]  				= 192;		
		Term_Para1.SelfPort   				= 9000 ;					/* ���׮�˿�*/		

		Term_Para1.SelfMASK[0]  			= 0 ;						/* �������� */
		Term_Para1.SelfMASK[1]  			= 255 ;			
		Term_Para1.SelfMASK[2]  			= 255 ;			
		Term_Para1.SelfMASK[3]  			= 255 ;			

		Term_Para1.SelfMAC[0]  				= 0x00 ;					/* ���׮MAC��ַ */	
		Term_Para1.SelfMAC[1]  				= 0x00 ;			
		Term_Para1.SelfMAC[2]  				= 0x10 ;			
		Term_Para1.SelfMAC[3]  				= 0x00 ;			
		Term_Para1.SelfMAC[4]  				= 0x00 ;			
		Term_Para1.SelfMAC[5]  				= 0x00 ;			
	
		Term_Para1.RatedVoltage 	 		= 0x2200 ;                  /* ���ѹ */
		Term_Para1.RatedCurrent 	 		= 0x3200 ;                  /* ����� */
		
		Term_Para1.Overload 		 		= 0x0110 ;				    /* ���� 1.10 �����ָ� 1.00 */
		Term_Para1.OverloadRecovery 	    = 0x0105 ;

		Term_Para1.Overvoltage 		 		= 0x0110 ;				    /* ��ѹ 1.10 ��ѹ�ָ� 1.05 */
		Term_Para1.OvervoltagRecovery       = 0x0105 ;

		Term_Para1.Undervoltage 		 	= 0x0090 ;				    /* Ƿѹ 0.8  Ƿѹ�ָ� 0.95 */
		Term_Para1.UndervoltagRecovery      = 0x0095 ;

		Term_Para1.MinCurrent 		 		= 0x0200 ;				    /* ��С���� 5% 1.6A ���������� 36 A */
		Term_Para1.MaxCurrent 				= 0x9900 ;

		Term_Para1.AdminPassword 			= 0x12345611 ;		        /* ����Ա���� */
		Term_Para1.JudgeTime 				= 0x01 ;				    /* ��ѹ����Ƿѹ�ж�ʱ�� */	
		Term_Para1.HeartBeat 		 		= 0x01 ;				    /* ��������*/
		Term_Para1.ComTimeOut 		 		= 0x01 ;					/* ͨѶ��ʱʱ��*/
		Term_Para1.RepeatTime 		 		= 0x03 ;					/* �ط����� */
		Term_Para1.LedStart 		 		= 0x1800 ;				    /* LED ����ʱ�� */
		Term_Para1.LedStop 			 		= 0x0600 ;				    /* LED �ر�ʱ�� */
		Term_Para1.SoftVer 		 			= 0x1208 ;				    /* PCB ˿ӡ����*/
		Term_Para1.HardwareVer 				= 0x2014 ;	
		Term_Para1.DutyCycle                = 0x53;						/* ռ�ձ�	  */
		 
		memcpy((uint8_t *)&Term_Para1.APN,"CMNET",sizeof("CMNET"));
		memcpy((uint8_t *)&Term_Para1.WifiParas,"at+wifi_conf=ANDY,auto,wifimima\r\n",sizeof("at+wifi_conf=ANDY,auto,wifimima\r\n"));
		Term_Para1.ParaFlag           = VALID_PARA;	
		
//		Term_Para1.cs	= CheckSum1((uint8_t *)&Term_Para1, &Term_Para1.cs);
//		FRAMWrite((uint8_t *)&Term_Para1, TERMINAL_PARA_ADD, sizeof(Term_Para1));
//		FRAMWrite((uint8_t *)&Term_Para1, TERMINAL_PARA_ADD_BAK, sizeof(Term_Para1));
	}
#if LOCAL_DEBUG    
    
                      //debug
//                    Term_Para1.ServerIP[0]  			= 100;						/* ��վIP*/	
//                    Term_Para1.ServerIP[1]  			= 1;			
//                    Term_Para1.ServerIP[2]  			= 168;			
//                    Term_Para1.ServerIP[3]  			= 192;  
 
                    Term_Para1.ServerIP[0]  			= 40;						/* ��վIP*/	
                    Term_Para1.ServerIP[1]  			= 185;			
                    Term_Para1.ServerIP[2]  			= 93;			
                    Term_Para1.ServerIP[3]  			= 47;  
    
//                    Term_Para1.SelfIP[0]  				= 185;						/* ���׮IP*/	
//                    Term_Para1.SelfIP[1]  				= 1;			
//                    Term_Para1.SelfIP[2]  				= 168;			
//                    Term_Para1.SelfIP[3]  				= 192;	    
#endif    
    
    Term_Para1.ServerPort   			= 2406 ;
    
//	FRAMRead((uint8_t *)&SysCtlWrod, CHGPARA_ADD, sizeof(SysCtlWrod));
//	cs	= CheckSum1((uint8_t *)&SysCtlWrod, &SysCtlWrod.cs);
//	if(cs != SysCtlWrod.cs)
//	{
//		FRAMRead((uint8_t *)&SysCtlWrod, CHGPARA_ADD_BAK, sizeof(SysCtlWrod));
//		cs	= CheckSum1((uint8_t *)&SysCtlWrod, &SysCtlWrod.cs) ;
//		if(cs != SysCtlWrod.cs){
//			SysCtlWrod.ParaFlag = 0 ; 
//		}
//		else{
//			FRAMWrite((uint8_t *)&SysCtlWrod, CHGPARA_ADD, sizeof(SysCtlWrod));
//		}
//	}	
//	if(SysCtlWrod.ParaFlag != VALID_PARA)
//	{		
//		memset(&SysCtlWrod , 0x00 , sizeof(SysCtlWrod)) ;	
//		SysCtlWrod.ParaFlag = VALID_PARA;
//		SysCtlWrod.cs	= CheckSum1((uint8_t *)&SysCtlWrod, &SysCtlWrod.cs);
//		FRAMWrite((uint8_t *)&SysCtlWrod, CHGPARA_ADD, sizeof(SysCtlWrod));
//		FRAMWrite((uint8_t *)&SysCtlWrod, CHGPARA_ADD_BAK, sizeof(SysCtlWrod));
//	} 
//	
	
    FRAMRead(MD5, MD5_ADD ,16);
    FRAMRead(&RecodeNum, CHARGE_STRATEGY_RECODE_NUM_ADD ,1);
    FRAMRead(Strategy, CHARGE_STRATEGY_ADD , 24*4);

//	
//	if(SysCtlWrod.card1pwdok!=1 || SysCtlWrod.status != WORK3){
//	//if(SysCtlWrod.card1pwdok!=1 || SysCtlWrod.status == WORK11 ||SysCtlWrod.status == WORK8){
//		dspwelcom();								  					//��������	
//	}			
}



#undef	__GLOBAL_C__

