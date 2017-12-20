#ifndef	__GLOBAL_H__
#define	__GLOBAL_H__

#include "AllHand.h"
#include "fram.h"

#ifdef	__GLOBAL_C__
#define	GLOBAL_DECL
#else
#define	GLOBAL_DECL	extern
#endif


//===========================================================
//		  
//===========================================================
#define 	TPEV					
#ifdef 		TPEV
#define 	CARDNUM			1
#else
#define 	CARDNUM			2
#endif

//===========================================================
//
//===========================================================
#define 	UPOK		  0
#define 	UPERR0		1
#define 	UPERR1		2
#define 	UPERR2		3
#define 	UPERR3		4
#define 	UPERRcrc	5
#define 	UPERRwrt	6
#define 	UPLO		0x55
#define 	UPHI		0xAA
#define 	UPST		0xff
//===========================================================
//
//===========================================================
#define 	CNT_OPN	 0x2D1	 				//���˿�����,��Ӧ��ֵ�����
#define 	CNT_ETH	 0x000				 	//���˿ڽӵ�,��Ӧ��ֵ0
#define 	CNT_CON	 0x20C	 				//���˿����ӳ��ǹ��������S2δ�ر�,��Ӧ��ѹֵ2740ŷ��
#define 	CNT_WRK	 0x148				 	//���˿ڳ���׼���ã�������S2�ر�,��Ӧ��ѹֵ883ŷ��

#define 	MIN6V	 (CNT_WRK-0x62)			//�������CP��ѹ��Сֵ
#define 	MAX6V	 (CNT_WRK+0x62)			//�������CP��ѹ���ֵ

#define 	MIN9V	 (CNT_CON-0x62)	 		//���˿����ӣ�������S2δ�ر�,��Ӧ��ѹֵ2740ŷ��
#define 	MAX9V	 (CNT_CON+0x62)	 		//���˿����ӣ�������S2δ�ر�,��Ӧ��ѹֵ2740ŷ��

#define 	MIN12V	 (CNT_OPN-0x62)			//���˿�����,��Ӧ��ֵ�����
#define 	MAX12V	 (CNT_OPN+0x62)			//���˿�����,��Ӧ��ֵ�����
//===========================================================
//
//===========================================================
#define		UARTBUFLEN			500
#define 	MAXFLEN0904			UARTBUFLEN
#define 	MINFLEN0904			13
#define 	MINFLEN104			6
//===========================================================
//
//===========================================================
//����ͨ��ģʽ����
#define 	MODE_RJ45			1  		  //��̫��
#define 	MODE_GPRS			2		    //GPRS����
#define 	MODE_WIFI			3		    //WIFI����
#define 	MODE_RS485          4	   	  //���ش���
#define     MODE_4G             5       //4Gģ��

//��ֵ����
#define 	KEYCLR					0x11
#define 	KEYENT					0x22

//�����㶨��	
#define 	BALTOOLOW 				10
	
//�������ݵ�ַ����
#define     VALID_PARA				0xaaaa 						//ϵͳ������Ч��ʶ
#define 	TERMINAL_PARA_ADD 		0x0000 						//�豸�����洢��ַ
#define 	TERMINAL_PARA_ADD_BAK	0x0100
#define 	CHGPARA_ADD				0x0200 		  				//�������洢��ַ		0x200-0x400
//#define 	CHGPARA_ADD_BAK			0x0300
#define 	CHGPARA_ADD_BAK			0x01800					// 0x1800-0x2000   ʵ��272byte

#define 	ZXJYLSH_ADD				0x0400 						//���߽�����ˮ�Ŵ洢��ַ
#define 	LXJYLSH_ADD				0x0420						//���߽�����ˮ�Ŵ洢��ַ

#define 	LJLEN					210			 				//��¼���ݳ���
#define 	JLCS_ADD				0x0440 						//���߽��׼�¼�����洢��ַ
#define 	JLCS_ADD_BAK			0x0480
#define		JLSJBAS				 	0x500						//��¼���ݴ洢��ַ
#define 	JL1AD					JLADBAS 					//���߽��׼�¼�����洢��ַ
#define 	JL1ADBAK				JLADBAS+LJLEN*1
#define 	JL2AD					JLADBAS+LJLEN*2 			//���߽��׼�¼�����洢��ַ
#define 	JL2ADBAK				JLADBAS+LJLEN*3
#define 	JL3AD					JLADBAS+LJLEN*4 			//���߽��׼�¼�����洢��ַ
#define 	JL3ADBAK				JLADBAS+LJLEN*5
#define 	JL4AD					JLADBAS+LJLEN*6 			//���߽��׼�¼�����洢��ַ
#define 	JL4ADBAK				JLADBAS+LJLEN*7
#define 	JL5AD					JLADBAS+LJLEN*8 			//���߽��׼�¼�����洢��ַ
#define 	JL5ADBAK				JLADBAS+LJLEN*9
#define 	JL6AD					JLADBAS+LJLEN*10 			//���߽��׼�¼�����洢��ַ
#define 	JL6ADBAK				JLADBAS+LJLEN*11
#define 	JL7AD					JLADBAS+LJLEN*12 			//���߽��׼�¼�����洢��ַ
#define 	JL7ADBAK				JLADBAS+LJLEN*13
#define 	JL8AD					JLADBAS+LJLEN*14 			//���߽��׼�¼�����洢��ַ
#define 	JL8ADBAK				JLADBAS+LJLEN*15
#define 	JL9AD					JLADBAS+LJLEN*16 			//���߽��׼�¼�����洢��ַ
#define 	JL9ADBAK				JLADBAS+LJLEN*17
#define 	JL10AD					JLADBAS+LJLEN*18 			//���߽��׼�¼�����洢��ַ
#define 	JL10ADBAK				JLADBAS+LJLEN*19

#define     CHARGE_STRATEGY_BAK_NEW_ADD          0x1700    //1  byte
#define     CHARGE_STRATEGY_RECODE_NUM_ADD       0x1701    //1  byte
#define     CHARGE_STRATEGY_RECODE_NUM_BAK_ADD   0x1702    //1  byte
#define     ORDER_ID_FLAG_ADD                    0x1703    //1  byte
#define     ORDER_ID_ADD                         0x1710    //16 bytes
#define     MD5_ADD                              0x1720    //16 bytes
#define     MD5_BAK_ADD                          0x1730    //16 bytes
#define     CHARGE_STRATEGY_ADD                  0x1740    //96 byts
#define     CHARGE_STRATEGY_BAK_ADD              0x17A0    //96 byts 0x17A0- 0x1800

//���ǹ״̬���˿ڣ�������
#define GUNPIN      	(1ul << 9) 
#define GUNPINSTS       (LPC_GPIO1->PIN & GUNPIN)				            // P1.9 ����״̬									 
#define GUNPININT() 	(LPC_GPIO1->DIR &= (~GUNPIN))     		            /* P1.9 ��ʼ��   		  */

//�Ӵ���״̬���˿�
#define PWRPIN      	(1ul << 9) 
#define PWRPINSTS		(LPC_GPIO2->PIN & PWRPIN)				            // P2.9 ����״̬									 
#define PWRPININT() 	(LPC_GPIO2->DIR &= (~PWRPIN))     		            /* P2.9 ��ʼ��   		  */

//ϵͳ�ӵؼ��˿�
#define PEPIN      		(1ul << 13) 
//#define PEPINSTS		(LPC_GPIO2->PIN & PEPIN)				            // P2.13 ����״̬	
#define PEPINSTS			1				            					//�������޸ģ����νӵؼ�⹦��							 
#define PEPININT()  	(LPC_GPIO2->DIR &= (~PEPIN))     				 	 /* PE�ӵؼ��P2.13��ʼ�� */

#ifdef TP1B
#define CCPIN      		(1ul << 29)
#define EARTHCON		(LPC_GPIO4->PIN &CCPIN)         					 // P4.29 ����״̬	
#define EARTHPIN()  	(LPC_GPIO4->DIR &= (~CCPIN))     				 	 /* CC�ӵؼ��P4.29��ʼ�� */
#else 
#define CCPIN      		(1ul << 2)
#define EARTHCON	    (LPC_GPIO1->PIN & CCPIN)         				 	 // P1.2 ״̬	
#define EARTHPIN()  	(LPC_GPIO1->DIR &= (~CCPIN))     				 	 /* CC�ӵؼ��P4.29��ʼ�� */
#endif

#define RSPIN      		(1ul << 29 | 1ul << 30) 
#define RSPINON()   	LPC_GPIO0->DIR |= RSPIN; LPC_GPIO0->SET |= RSPIN     /*                       */
#define RSPINOFF()   	LPC_GPIO0->DIR |= RSPIN; LPC_GPIO0->CLR |= RSPIN 	 /*                       */
//�������˿�����
#define BEEP        	(1ul << 27)                              			 /* P1.27 �ſ��Ʒ�����    */                     
#define BEEPON()   		LPC_GPIO1->DIR |= BEEP; LPC_GPIO1->SET |= BEEP     	 /*                       */
#define BEEPOFF()   	LPC_GPIO1->DIR |= BEEP; LPC_GPIO1->CLR |= BEEP 		 /*                       */

//��ʾ���������
#define LCDC        	(1ul << 12)                              			 /* P1.12 ��ʾ�������������    */                     
#define LCDCON()   		LPC_GPIO1->DIR |= LCDC; LPC_GPIO1->SET |= LCDC     	 /*                       */
#define LCDCOFF()   	LPC_GPIO1->DIR |= LCDC; LPC_GPIO1->CLR |= LCDC 		 /*                       */

//PWM�������
#define PWMC        	(1ul << 5)                              			 /* P1.5*/                     
#define PWMCON()   		LPC_GPIO1->DIR |= PWMC; LPC_GPIO1->SET |= PWMC     	 /*                       */
#define PWMCOFF()   	LPC_GPIO1->DIR |= PWMC; LPC_GPIO1->CLR |= PWMC 		 /*                       */

//CC�̵�������
#define CCRC        	(1ul << 2)                              			 /* P3.2*/                     
#define CCRCON()   		LPC_GPIO3->DIR |= CCRC; LPC_GPIO3->SET |= CCRC     	 /*                       */
#define CCRCOFF()   	LPC_GPIO3->DIR |= CCRC; LPC_GPIO3->CLR |= CCRC 		 /*                       */

//RELAY1�������
#define RLY1        	(1ul << 15)                              			 /* P2.15  */                     
#define RLY1ON()   		LPC_GPIO2->DIR |= RLY1; LPC_GPIO2->SET |= RLY1     	 /*                       */
#define RLY1OFF()   	LPC_GPIO2->DIR |= RLY1; LPC_GPIO2->CLR |= RLY1 		 /*                       */

//RELAY2�������
#define RLY2        	(1ul << 14)                              			 /* P2.14*/                     
#define RLY2ON()   		LPC_GPIO2->DIR |= RLY2; LPC_GPIO2->SET |= RLY2     	 /*                       */
#define RLY2OFF()   	LPC_GPIO2->DIR |= RLY2; LPC_GPIO2->CLR |= RLY2 		 /*                       */

//ָʾ�ƶ˿����ã����̻ƣ�
#define LEDG        	(1ul << 29)                                          /* LED:GREEN             */                     
#define LEDGON()    	LPC_GPIO1->DIR |= LEDG; LPC_GPIO1->SET |= LEDG       /*                       */
#define LEDGOFF()   	LPC_GPIO1->DIR |= LEDG; LPC_GPIO1->CLR |= LEDG       /*                       */
#define LEDY        	(1ul << 27)                                          /* LED:YELLOW            */                     
#define LEDYON()    	LPC_GPIO0->DIR |= LEDY; LPC_GPIO0->SET |= LEDY       /*                       */
#define LEDYOFF()   	LPC_GPIO0->DIR |= LEDY; LPC_GPIO0->CLR |= LEDY       /*                       */
#define LEDR        	(1ul << 9)                                           /* LED:RED               */                     
#define LEDRON()    	LPC_GPIO1->DIR |= LEDR; LPC_GPIO1->SET |= LEDR       /*                       */
#define LEDROFF()   	LPC_GPIO1->DIR |= LEDR; LPC_GPIO1->CLR |= LEDR       /*                       */

#ifndef TP1B
//ָʾ�ƶ˿����ã�ϵͳ���У�
#define SYSRUN        	(1ul << 27) 
#define SYSRUNON()    	LPC_GPIO0->DIR |= SYSRUN; LPC_GPIO0->SET |= SYSRUN
#define SYSRUNOFF()   	LPC_GPIO0->DIR |= SYSRUN; LPC_GPIO0->CLR |= SYSRUN
#else
#define SYSRUNON()    	  
#define SYSRUNOFF()   	 
#endif

//ָʾ�ƶ˿����ã�����ƣ�
#define LEDLD        	(1ul << 20)                                           /*  ������ݶ˿�         */                     
#define LedLDH()    	LPC_GPIO0->SET |= LEDLD; 	LPC_GPIO0->DIR |= LEDLD   /*                       */
#define LedLDL()   		LPC_GPIO0->CLR |= LEDLD; 	LPC_GPIO0->DIR |= LEDLD   /*                       */
#define LEDLC        	(1ul << 11)                                           /*  ���ʱ�Ӷ˿�         */                     
#define LedLCH()    	LPC_GPIO2->SET |= LEDLC; 	LPC_GPIO2->DIR |= LEDLC   /*                       */
#define LedLCL()   		LPC_GPIO2->CLR |= LEDLC; 	LPC_GPIO2->DIR |= LEDLC   /*                       */
#define LEDLRR        	(1ul << 12)                                           /*  ����̵ƶ˿�         */                     
#define LedLRH()    	LPC_GPIO2->SET |= LEDLRR; 	LPC_GPIO2->DIR |= LEDLRR  /*                       */
#define LedLRL()   		LPC_GPIO2->CLR |= LEDLRR; 	LPC_GPIO2->DIR |= LEDLRR  /*                       */
#define LEDLGR        	(1ul << 26)                                           /*  ����ƶ˿�         */                     
#define LedLGH()    	LPC_GPIO3->SET |= LEDLGR; 	LPC_GPIO3->DIR |= LEDLGR  /*                       */
#define LedLGL()   		LPC_GPIO3->CLR |= LEDLGR; 	LPC_GPIO3->DIR |= LEDLGR  /*                       */

#define LEDRD        	(1ul << 28)                                           /*  �Ҳ����ݶ˿�         */                     
#define LedRDH()    	LPC_GPIO1->SET |= LEDRD; 	LPC_GPIO1->DIR |= LEDRD   /*                       */
#define LedRDL()   		LPC_GPIO1->CLR |= LEDRD; 	LPC_GPIO1->DIR |= LEDRD   /*                       */
#define LEDRC        	(1ul << 29)                                           /*  �Ҳ�ʱ�Ӷ˿�         */                     
#define LedRCH()    	LPC_GPIO1->SET |= LEDRC; 	LPC_GPIO1->DIR |= LEDRC   /*                       */
#define LedRCL()   		LPC_GPIO1->CLR |= LEDRC; 	LPC_GPIO1->DIR |= LEDRC   /*                       */
#define LEDRGR      	(1ul << 19)                                           /*  �Ҳ��̵ƶ˿�         */                     
#define LedRGH()    	LPC_GPIO0->SET |= LEDRGR; 	LPC_GPIO0->DIR |= LEDRGR  /*                       */
#define LedRGL()   		LPC_GPIO0->CLR |= LEDRGR; 	LPC_GPIO0->DIR |= LEDRGR  /*                       */
#define LEDRRR        	(1ul << 8)                                            /*  �Ҳ��ƶ˿�         */                     
#define LedRRH()    	LPC_GPIO2->SET |= LEDRRR; 	LPC_GPIO2->DIR |= LEDRRR  /*                       */
#define LedRRL()   		LPC_GPIO2->CLR |= LEDRRR; 	LPC_GPIO2->DIR |= LEDRRR  /*                       */

#define P027        	(1ul << 27)                                           /*P3.26����P0.27����LED���Ƹ�λ,P0.27��Ϊ����  */                     
#define P027INPUT()    	(LPC_GPIO0->DIR &= ~P027)                    		  /*                       */


//����SPIƬѡ����
#define FMCS      		(1ul << 21)                                          /* P1.21 FM24CL64 SPI CS */                     
#define FMCSON() 		LPC_GPIO1->DIR |= FMCS; LPC_GPIO1->SET |= FMCS       /*                       */
#define FMCSOFF()  		LPC_GPIO1->DIR |= FMCS; LPC_GPIO1->CLR |= FMCS       /*                       */
#define	CE_Low()		FMCSOFF()
#define CE_High()		FMCSON()

//����SPIƬѡ����
#define RFCS      		(1ul << 16)                                          /* P0.16 FM1702SL SPI CS */                     
#define RFCSON() 		LPC_GPIO0->DIR |= RFCS; LPC_GPIO0->SET |= RFCS       /*                       */
#define RFCSOFF()  		LPC_GPIO0->DIR |= RFCS; LPC_GPIO0->CLR |= RFCS       /*                       */

//���Ź��������
#define WDTP      		(1ul << 20)                                          /* P1.20 �ſ���WDT       */                     
#define WDTPON() 			LPC_GPIO1->DIR |= WDTP; LPC_GPIO1->SET |= WDTP       /*                       */
#define WDTPOFF()  		LPC_GPIO1->DIR |= WDTP; LPC_GPIO1->CLR |= WDTP       /*                       */



//485�շ�����
#ifdef TP1B
#define ENRS485     	(1ul << 20)                                          /* P4.28 RS485 R/W CS    */                     
#define ENRD485()   	LPC_GPIO0->DIR |= ENRS485; LPC_GPIO0->SET |= ENRS485 /*                       */
#define ENWR485() 		LPC_GPIO0->DIR |= ENRS485; LPC_GPIO0->CLR |= ENRS485 /*                       */
#else
#define ENRD485()   	LPC_GPIO1->DIR |= (1<<3); LPC_GPIO1->SET |= (1<<3)   /*                       */
#define ENWR485() 		LPC_GPIO1->DIR |= (1<<3); LPC_GPIO1->CLR |= (1<<3)   /*                       */
#endif

//WIFIģ�����
#define P0P22       	(1ul << 22)                                          /* P0.22 �ſ���RELAY2   */                     
#define WIFIRSTON()   	LPC_GPIO0->DIR |= P0P22; LPC_GPIO0->SET |= P0P22     /*                      */
#define WIFIRSTOFF()  	LPC_GPIO0->DIR |= P0P22; LPC_GPIO0->CLR |= P0P22     /*                      */

//�����������
#ifndef LPC1778
#define P1P22       	(1ul << 22)                                          /* P1.22 �ſ���RELAY2   */                     
#define P1P22ON()   	LPC_GPIO1->DIR |= P1P22; LPC_GPIO1->SET |= P1P22     /*                      */
#define P1P22OFF()  	LPC_GPIO1->DIR |= P1P22; LPC_GPIO1->CLR |= P1P22     /*                      */
#define P1P30       	(1ul << 30)                                          /* P1.30 �ſ���RELAY2   */                     
#define P1P30ON()   	LPC_GPIO1->DIR |= P1P30; LPC_GPIO1->SET |= P1P30     /*                      */
#define P1P30OFF()  	LPC_GPIO1->DIR |= P1P30; LPC_GPIO1->CLR |= P1P30     /*                      */
#else
#define P1P22       	(1ul << 0)                                           /* P1.22 �ſ���RELAY2   */                     
#define P1P22ON()   	LPC_GPIO3->DIR |= P1P22; LPC_GPIO3->SET |= P1P22     /*                      */
#define P1P22OFF()  	LPC_GPIO3->DIR |= P1P22; LPC_GPIO3->CLR |= P1P22     /*                      */
#define P1P30       	(1ul << 1)                                           /* P1.30 �ſ���RELAY2   */                     
#define P1P30ON()   	LPC_GPIO3->DIR |= P1P30; LPC_GPIO3->SET |= P1P30     /*                      */
#define P1P30OFF()  	LPC_GPIO3->DIR |= P1P30; LPC_GPIO3->CLR |= P1P30     /*                      */
#endif

#define P1P16       	(1ul << 16)                                          /* P1.16 �ſ���RELAY2   */                     
#define P1P16ON()   	LPC_GPIO1->DIR |= P1P16; LPC_GPIO1->SET |= P1P16     /*                      */
#define P1P16OFF()  	LPC_GPIO1->DIR |= P1P16; LPC_GPIO1->CLR |= P1P16   
#define P1P16_INT()		(LPC_GPIO1->PIN & P1P16)									 								 

#define P3P25       	(1ul << 25)                                          /* P3.25 �ſ���RELAY1   */                     
#define P3P25ON()   	LPC_GPIO3->DIR |= P3P25; LPC_GPIO3->SET |= P3P25     /*                      */
#define P3P25OFF()  	LPC_GPIO3->DIR |= P3P25; LPC_GPIO3->CLR |= P3P25     /*                      */

#define P3P0       	    (1ul << 0)                                          /* P3.0 �ſ���  */                     
#define P3P0ON()   	LPC_GPIO3->DIR |= P3P0; LPC_GPIO3->SET |= P3P0     /*                      */
#define P3P0OFF()  	LPC_GPIO3->DIR |= P3P0; LPC_GPIO3->CLR |= P3P0     /*                      */

#define P3P1       	    (1ul << 1)                                          /* P3.1 �ſ���  */                     
#define P3P1ON()   	LPC_GPIO3->DIR |= P3P1; LPC_GPIO3->SET |= P3P1     /*                      */
#define P3P1OFF()  	LPC_GPIO3->DIR |= P3P1; LPC_GPIO3->CLR |= P3P1     /*                      */


//W5100�ӿ�����
#define	W5100_RST				(1<<4)								//p0.04 w5100 ��λ�ź�
#define	W5100_RST_ON()			LPC_GPIO0->DIR |= W5100_RST; LPC_GPIO0->SET |= W5100_RST
#define	W5100_RST_OFF()			LPC_GPIO0->DIR |= W5100_RST; LPC_GPIO0->CLR |= W5100_RST
#define	W5100_CS				(1<<5)								//p0.05 w5100 Ƭѡ�ź�
#define	W5100_CS_ON()			LPC_GPIO0->DIR |= W5100_CS; LPC_GPIO0->SET |= W5100_CS
#define	W5100_CS_OFF()			LPC_GPIO0->DIR |= W5100_CS; LPC_GPIO0->CLR |= W5100_CS
#define	W5100SPICS				(1<<6)								//p0.06 w5100 SPIѡͨ�ź�
#define	CLR_SPICS()				LPC_GPIO0->DIR |= W5100SPICS; LPC_GPIO0->CLR |= W5100SPICS
#define	SET_SPICS()				LPC_GPIO0->DIR |= W5100SPICS; LPC_GPIO0->SET |= W5100SPICS
#define	W5100_INT				(1<<17)								//p1.17 w5100 �жϼ��
#define W5100_INT_STS()			(!(LPC_GPIO1->PIN & W5100_INT))									 								 
#define W5100_INT_INI()			(LPC_GPIO1->DIR &= ~W5100_INT)     				 			


//GPRS�ӿ�����
#define 	GPRSRSTPIN		(1 << 23)	              						//p0.23  GPRS RESET PIN               
#define 	GPRSRSTON()		LPC_GPIO0->DIR |= GPRSRSTPIN; LPC_GPIO0->CLR |= GPRSRSTPIN 	                            
#define 	GPRSRSTOFF()	LPC_GPIO0->DIR |= GPRSRSTPIN; LPC_GPIO0->SET |= GPRSRSTPIN 
#define 	GPRSPWRPIN		(1 << 24)	              						//p0.24  GPRS POWER CONTROL               
#define 	GPRSPWRON()		LPC_GPIO0->DIR |= GPRSPWRPIN; LPC_GPIO0->CLR |= GPRSPWRPIN 	                            
#define 	GPRSPWROFF()	LPC_GPIO0->DIR |= GPRSPWRPIN; LPC_GPIO0->SET |= GPRSPWRPIN 
#define 	GPRSWRKPIN		(1 << 28)	              						//p0.28  GPRS TURN ON/OFF PIN               
#define 	GPRSWRKON()		LPC_GPIO0->DIR |= GPRSWRKPIN; LPC_GPIO0->CLR |= GPRSWRKPIN 	                            
#define 	GPRSWRKOFF()	LPC_GPIO0->DIR |= GPRSWRKPIN; LPC_GPIO0->SET |= GPRSWRKPIN 

//����SPI�ӿ����ã�ATT7053)
#define ATTCS1      			(1ul << 6)                                          /* P0.6  Meter1 SPI CS  */                     
#define ATTCS1ON()  			LPC_GPIO0->DIR |= ATTCS1; LPC_GPIO0->SET |= ATTCS1                /*                      */
#define ATTCS1OFF() 			LPC_GPIO0->DIR |= ATTCS1; LPC_GPIO0->CLR |= ATTCS1                /*                      */
#define ATTCS2      			(1ul << 22)                                         /* P1.22 Meter2 SPI CS  */                     
#define ATTCS2ON()  			LPC_GPIO1->DIR |= ATTCS2; LPC_GPIO1->SET |= ATTCS2                /*                      */
#define ATTCS2OFF() 			LPC_GPIO1->DIR |= ATTCS2; LPC_GPIO1->CLR |= ATTCS2                /*                      */

//LCD�ӿ�����
#define LCDRD       	(1ul << 18)                                                               
#define LCDRDON()   	LPC_GPIO1->SET |= LCDRD;	LPC_GPIO1->DIR |= LCDRD                      /*                       */
#define LCDRDOFF()  	LPC_GPIO1->CLR |= LCDRD;	LPC_GPIO1->DIR |= LCDRD   
#define LCDWR       	(1ul << 19)                                                              
#define LCDWRON()   	LPC_GPIO1->SET |= LCDWR;	LPC_GPIO1->DIR |= LCDWR                      /*                       */
#define LCDWROFF()  	LPC_GPIO1->CLR |= LCDWR;	LPC_GPIO1->DIR |= LCDWR                      /*                       */
#define LCDCS       	(1ul << 25)                                                               
#define LCDCSON()   	LPC_GPIO1->SET |= LCDCS;	LPC_GPIO1->DIR |= LCDCS                      /*                       */
#define LCDCSOFF()  	LPC_GPIO1->CLR |= LCDCS;	LPC_GPIO1->DIR |= LCDCS                      /*                       */
#define LCDA0       	(1ul << 26)                                                              
#define LCDA0ON()   	LPC_GPIO1->SET |= LCDA0;	LPC_GPIO1->DIR |= LCDA0                      /*                       */
#define LCDA0OFF()  	LPC_GPIO1->CLR |= LCDA0;	LPC_GPIO1->DIR |= LCDA0  
#define LCDRST      	(1ul << 29)                                                               
#define LCDRSTON()  	LPC_GPIO1->SET |= LCDRST;	LPC_GPIO1->DIR |= LCDRST                     /*                       */
#define LCDRSTOFF() 	LPC_GPIO1->CLR |= LCDRST;	LPC_GPIO1->DIR |= LCDRST  

#define LCDBUS      	(uint8_t)(LPC_GPIO2->PIN & 0x000000ff)                                  			                     
#define LCDBUSIN()  	LPC_GPIO2->DIR &= 0xffffff00
#define LCDBUSOUT() 	LPC_GPIO2->DIR |= 0x000000ff                 						     /*                       */
//=========================================================
//ȫ�ֱ���
//=========================================================

//ϵͳ����
GLOBAL_DECL TERM_PARA   Term_Para1;

//�������к�
GLOBAL_DECL uint32_t 	JYSN;
GLOBAL_DECL uint32_t 	LXJYSN;

//APPɨ��ʱ�������·��Ķ������
GLOBAL_DECL uint8_t OrderNo[16];

//=========================================================
//��������
//=========================================================

//ȫ�ֱ�����ʼ��
void GolbalVarInit(void);
//��ȡ�ն˲�����������
void SystemParaInit(void);

#endif
//=========================================================
// 	END OF FILE
//=========================================================
