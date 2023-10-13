#ifndef	_TIMER_MGR_H_
#define	_TIMER_MGR_H_
#ifdef	_TIMER_MGR_C_
#define	_TIMER_MGR_E_
#else
#define	_TIMER_MGR_E_	extern
#endif

#include<zc.h>

#define T0CLK 24UL		//T0时钟源(MHz)
#define T0CKPS 128UL		//T0分频比
#define T0Time 1000UL		//定时时间(us)
#define T0Value	T0Time*T0CLK/T0CKPS-1	//8位模式
//#define T0Value 65535-T0Time*T0CLK/T0CKPS //16位模式

#define T1CLK 24UL		//T1时钟源(MHz)
#define T1CKPS 128UL		//T1分频比
#define T1Time 1000UL		//定时时间(us)
#define T1Value	T1Time*T1CLK/T1CKPS-1 //递增/递减模式公式
//#define T1Value (T1Time*T1CLK/T1CKPS-1)/2 //中心对齐模式公式

#define T2CLK 24UL		//T2时钟源(MHz)
#define T2CKPS 128UL		//T2分频比
#define T2Time 1000UL		//定时时间(us)
#define T2Value	T2Time*T2CLK/T2CKPS-1 //递增/递减模式公式
//#define T2Value (T2Time*T2CLK/T2CKPS-1)/2 //中心对齐模式公式

//T0CR控制寄存器
#define		TC0EN_1				0b10000000               //使能TC0			
#define	  	TC0MOD_16			0b01000000				//16位模式
#define	  	TC0MOD_8			0b00000000				//8位模式
#define		TC0CKS_Foscl		0b00000000				//Foscl(低频系统时钟)
#define		TC0CKS_Fosch		0b00001000				//Fosch(高频系统时钟)
#define		TC0CKS_Fcpu			0b00010000				//Fcpu
#define		TC0CKS_T0cki		0b00011000				//T0cki(外接信号)
#define		TC0CKPS_1_1			0b00000000				//分频比1：1
#define		TC0CKPS_1_2			0b00000001				//分频比1：2
#define		TC0CKPS_1_4			0b00000010				//分频比1：4
#define		TC0CKPS_1_8			0b00000011				//分频比1：8
#define		TC0CKPS_1_16		0b00000100				//分频比1：16
#define		TC0CKPS_1_32		0b00000101				//分频比1：32
#define		TC0CKPS_1_64		0b00000110				//分频比1：64
#define		TC0CKPS_1_128		0b00000111				//分频比1：128

//T1CR控制寄存器
#define		TC1EN_1				0b10000000               //使能TC0			
#define	  	TC1MOD_Inc			0b00000000				//递增模式
#define	  	TC1MOD_Dec			0b00100000				//递减模式
#define	  	TC1MOD_Center		0b01000000				//中心对齐模式
#define		TC1CKS_Foscl		0b00000000				//Foscl(低频系统时钟)
#define		TC1CKS_Fosch		0b00001000				//Fosch(高频系统时钟)
#define		TC1CKS_Fcpu			0b00010000				//Fcpu
#define		TC1CKS_T1cki		0b00011000				//T1cki(外接信号)
#define		TC1CKPS_1_1			0b00000000				//分频比1：1
#define		TC1CKPS_1_2			0b00000001				//分频比1：2
#define		TC1CKPS_1_4			0b00000010				//分频比1：4
#define		TC1CKPS_1_8			0b00000011				//分频比1：8
#define		TC1CKPS_1_16		0b00000100				//分频比1：16
#define		TC1CKPS_1_32		0b00000101				//分频比1：32
#define		TC1CKPS_1_64		0b00000110				//分频比1：64
#define		TC1CKPS_1_128		0b00000111				//分频比1：128


//T2CR控制寄存器
#define		TC2EN_1				0b10000000               //使能TC0			
#define	  	TC2MOD_Inc			0b00000000				//递增模式
#define	  	TC2MOD_Dec			0b00100000				//递减模式
#define	  	TC2MOD_Center		0b01000000				//中心对齐模式
#define		TC2CKS_Foscl		0b00000000				//Foscl(低频系统时钟)
#define		TC2CKS_Fosch		0b00001000				//Fosch(高频系统时钟)
#define		TC2CKS_Fcpu			0b00010000				//Fcpu
#define		TC2CKS_T2cki		0b00011000				//T2cki(外接信号)
#define		TC2CKPS_1_1			0b00000000				//分频比1：1
#define		TC2CKPS_1_2			0b00000001				//分频比1：2
#define		TC2CKPS_1_4			0b00000010				//分频比1：4
#define		TC2CKPS_1_8			0b00000011				//分频比1：8
#define		TC2CKPS_1_16		0b00000100				//分频比1：16
#define		TC2CKPS_1_32		0b00000101				//分频比1：32
#define		TC2CKPS_1_64		0b00000110				//分频比1：64
#define		TC2CKPS_1_128		0b00000111				//分频比1：128

//TC2GCR门控控制寄存器
#define		TC2GEN_1			0b10000000				//使能门控功能
#define		TC2GO_1				0b01000000				//启动门控
#define		TC2GO_0				0b00000000				//门控计数完成
#define		TC2GS_G0			0b00000000				//门控源T2G0(IOF5)
#define		TC2GS_G1			0b00000100				//门控源T2G1(IOF6)
#define		TC2GS_G2			0b00001000				//门控源T2G2(IOF7)
#define		TC2GS_TimeOut		0b00001100				//门控源T2溢出
#define		TC2GM_U2D			0b00000000				//门控模式上升沿到下降沿
#define		TC2GM_D2U			0b00000001				//门控模式下降沿到上升沿
#define		TC2GM_U2U			0b00000010				//门控模式上升沿到上升沿
#define		TC2GM_D2D			0b00000011				//门控模式下降沿到下降沿
                    
#define DELAY_1MS	1//延时1MS					
#define DELAY_2MS	2//延时2MS  
#define DELAY_4MS	4//延时4MS  
#define DELAY_6MS	6//延时6MS  
#define DELAY_8MS	8//延时8MS  
#define DELAY_10MS	10//延时10MS
#define DELAY_20MS	20//延时20MS
#define DELAY_50MS	50//延时50MS
#define DELAY_100MS	100//延时100MS
#define DELAY_200MS	200//延时200MS
#define DELAY_300MS	300//延时300MS
#define DELAY_400MS	400//延时400MS
#define DELAY_500MS	500//延时500MS
#define DELAY_800MS 800//延时800MS
#define DELAY_1SEC	1000//延时1SEC
#define DELAY_2SEC	2000//延时2SEC
#define DELAY_3SEC	300//延时3SEC
#define DELAY_4SEC	4000//延时4SEC
#define DELAY_5SEC	5000//延时5SEC


_TIMER_MGR_E_ void Timer0_Init(void);
_TIMER_MGR_E_ void Timer0_Intr(void);
_TIMER_MGR_E_ void Timer1_Init(void);
_TIMER_MGR_E_ void Timer1_Intr(void);
_TIMER_MGR_E_ void Timer2_Init(void);
_TIMER_MGR_E_ void Timer2_Intr(void);
_TIMER_MGR_E_ unsigned char TimerMgr_RefTime(unsigned int *timepoint,unsigned int timelen);



#endif



