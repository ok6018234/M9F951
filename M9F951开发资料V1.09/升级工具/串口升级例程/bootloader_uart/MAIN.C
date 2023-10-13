/*********************************************************************************************
M8F951芯片Flash有16384个地址，每个地址2个字节，共32768个字节；
分为256页，每页64个地址，即每页128个字节；
将写入数据放入以0X780为起始的128字节RAM中，指定页面后，即可写入。
************************************************************************************************/
#include<zc.h>
#include"HWCONFIG.H"
#include"UPDATEPROTOCAL.H"
#include"USARTMGR.H"

#define _Fcpu 6000000

/*
//旧版bootloader必须定义此常量数组
const unsigned int table[] @0X7FF8 = 
{
	0XDF00,
	0XF038,
	0XFFFF,
	0XFFFF
};
*/


void main()
{	
	const unsigned char* pRom = (const unsigned char *)APP_StartAddr;
	if(*pRom!=0XFF)
	{
		TC1C = 0;
		TC1PR = T1Value;
		T1CR = 0b10001111;
	}
	
	
	TC2C = 0;
	TC2PR = T2Value;
	T2CR = 0b10001110;
	
	UsartMgr_Init(2);	//上电默认串口配置4800
	
	while(1)
	{
		CLRWDT();
		
		if(JumpUserFlag)
		{
		//	Reset();
			T1CR = 0;
			T2CR = 0;
			#if(Usart_Num==0)
			TX0CR = 0;
			RX0CR = 0;
			ANSF = 0;
			PUF = 0;
			#else
			TX1CR = 0;
			RX1CR = 0;
			ANSE = 0;
			PUE = 0;
			#endif
			#asm
			goto APP_StartAddr
			#endasm
		}
		else if(TC1EN&&TC1IF)
		{
			T1CR = 0;
			T2CR = 0;
			#if(Usart_Num==0)
			TX0CR = 0;
			RX0CR = 0;
			ANSF = 0;
			PUF = 0;
			#else
			TX1CR = 0;
			RX1CR = 0;
			ANSE = 0;
			PUE = 0;
			#endif
			#asm
			goto APP_StartAddr
			#endasm
		}
		UsartMgr_Int();
		if(TC2IF)
		{
			TC2IF = 0;
			if(UsartMgr.RXDLen)	//接收状态
			{
				if(++UsartMgr.RXDOverTime>=UsartMgr.RXDOverTimeSet)
				{
					pUsartBuf = UsartMgr.Buffer;
					UpdateProtocal();
					UsartMgr.RXDLen = 0;
				}
			}
		}
	}	
}




