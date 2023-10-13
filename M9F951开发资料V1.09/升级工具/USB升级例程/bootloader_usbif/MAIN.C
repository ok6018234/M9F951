/*********************************************************************************************
M8F951芯片Flash有16384个地址，每个地址2个字节，共32768个字节；
分为256页，每页64个地址，即每页128个字节；
将写入数据放入以0X780为起始的128字节RAM中，指定页面后，即可写入。
************************************************************************************************/
#include<zc.h>
#include"USBD_HID_LIB.H"
#include"HWCONFIG.H"
#include"UPDATEPROTOCAL.H"
#include"string.h"

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

unsigned char CheckIO(void)
{
	unsigned char temp=0;
	ANSA2 = 0;
	PUA2 = 1;
	OEA2 = 0;
	
	__delaywdt_ms(10);
	
	if(!IOA2)
		temp = 1;
	
	ANSA2 = 1;
	PUA2 = 0;
	return temp;
}

void main()
{
//	if(CheckIO()==0)
//	{
		const unsigned char *pRom = (const unsigned char *)APP_StartAddr;
		if(*pRom!=0XFF)	//检查用户程序是否存在,不存在强制进入bootloader
		{
			pRom = (const unsigned char *)0X7FFF;
			if(*pRom!=0X01)	//查询进入boot条件
			{
				#asm
				goto APP_StartAddr	//跳转用户区
				#endasm
			}
		}
//	}
		
	USBD_Init();	//使能USB
	while(1)
	{
		CLRWDT();

		UpdateOverTime();
		if(UBRST)
		{
			UBRST = 0;
			USBD_Reset();
		}

		USBD_EP0_Handler();
		if(UE5OUTF)	
		{
			UE5OUTF = 0;
			/*User Handle*/
			UpdateProtocal();
			UE5OUTS = 1;
		}
	}	
}

