#define	_UPDATEPROTOCAL_C_
#include "USBD_HID_LIB.H"
#include "UPDATEPROTOCAL.H"
#include"HWCONFIG.H"
#include"string.h"

#include<zc.h>

typedef union
{
	unsigned int u16;
	unsigned char u8[2];
}u16_t;

static unsigned char FlashBuff[RomPageSize] @0X780;
static unsigned char LockValue=0;
static bit WriteRomEn=0;

static unsigned int	SumCheck;
static unsigned int	FlashAddr;
static unsigned char FlashPageCnt;
static unsigned int	FlashWriteLen;
static unsigned int	FlashWriteLenback;
static unsigned char ConnectValue=0;

void IAP_Lock(void)
{
	LockValue = 0;
}

void IAP_UnLock(void)
{
	LockValue = 0X3A;
}

unsigned char IAP_WritePage(unsigned int PageAddr)
{
	if(ConnectValue!=0X7A) //检查是否连通上位机
	{
		IAP_Lock();
		return 0;
	}
	ConnectValue = 0;
	ERASE = 1;
	CLRPL = 1;
	WRITE = 1;
	TBLPTR = PageAddr;
		
	if(LockValue!=0X3A) //检查是否解锁
	{
		IAP_Lock();
		return 0;
	}

	EELOCK3 = 1;
	EELOCK2 = 1;
	EELOCK1 = 1;
	#asm
	WDT*
	#endasm	//启动擦写
	
	if(WERR == 0)
	{
		IAP_Lock();
		return 1;
	}
	else
	{
		IAP_Lock();
		return 0;
	}	
}

static void User_SendData(void)
{
	UE5IOPS = MAX_EP5_SIZE;
	UE5INS = 1;
	while(!UE5INF)
	{
		CLRWDT();
	}
	UE5INF = 0;
}

void User_ReturnWriteCmd(unsigned char cmd,unsigned char status)
{
	UsbEp5Buffer[0] = 0XAA;
	UsbEp5Buffer[1] = 0XFF;
	UsbEp5Buffer[2] = cmd;
	UsbEp5Buffer[3] = 0X01;
	UsbEp5Buffer[4] = status;

	User_SendData();
}


void WR_Romdata(void)
{
	IAP_UnLock();
	if(IAP_WritePage(FlashAddr))
	{
		const unsigned char *pRom = (const unsigned char *)FlashAddr;
		for(unsigned char i=0;i<128;i++)		//回读页数据，和校验
		{
			SumCheck += *pRom++;
		}
		FlashAddr += sizeof(FlashBuff);
	}
	else
	{
		User_ReturnWriteCmd(CMD_WriteRomData,0);
	}
}

void UpdateOverTime(void)
{
	if(TC1EN && TC1IF)
	{
		T1CR = 0;
		TC1IF = 0;
		WriteRomEn = 0;
	}
}

void UpdateProtocal(void)
{
	ConnectValue = 0X7A;
	
	if(WriteRomEn)
	{
		TC1C = 0;
		for(unsigned char i=0;i<UE5IOPS;i++)
		{
			FlashBuff[FlashPageCnt++] = UsbEp5Buffer[i];
		}
		FlashWriteLenback += UE5IOPS;
		if(FlashPageCnt>=sizeof(FlashBuff))	//128字节一页
		{
			FlashPageCnt = 0;
			WR_Romdata();
		}
		if(FlashWriteLenback>=FlashWriteLen)
		{
			WriteRomEn = 0;
			T1CR = 0;
		}
		return;
	}
	if(UsbEp5Buffer[0]!=0X55)
		return;
	if(UsbEp5Buffer[1]!=0XFF)
		return;
	UsbEp5Buffer[0] = 0XAA;
	
	switch(UsbEp5Buffer[2])
	{
		case CMD_DockBoot:
		{
			u16_t DockValue;
			DockValue.u8[1] = UsbEp5Buffer[4];
			DockValue.u8[0] = UsbEp5Buffer[5];
			DockValue.u16 = ZXW_Update(DockValue.u16);
			SumCheck = 0;
			UsbEp5Buffer[3] = 2;
			UsbEp5Buffer[4] = DockValue.u8[1];
			UsbEp5Buffer[5] = DockValue.u8[0];
			User_SendData();
		}
		break;
		case CMD_WriteRomData:		
			FlashAddr = (UsbEp5Buffer[4]<<8)|UsbEp5Buffer[5];
			FlashWriteLen = (UsbEp5Buffer[6]<<8)|UsbEp5Buffer[7];
			FlashWriteLenback = 0;
			WriteRomEn = 1;
			FlashPageCnt = 0;
			User_ReturnWriteCmd(CMD_WriteRomData,1);
			TC1C = 0;
			TC1PR = T1Value; //T1用作超时判断定时
			T1CR = 0b10000001;
		break;
		case CMD_ReadRomData:
		{
			UsbEp5Buffer[3] = 4;
			UsbEp5Buffer[4] = 0;
			UsbEp5Buffer[5] = 0;
			UsbEp5Buffer[6] = HB(32768);
			UsbEp5Buffer[7] = LB(32768);
			User_SendData();
			
			unsigned int len = 32768/MAX_EP5_SIZE;
			const unsigned char *pRom = (const unsigned char*)0X0000;
			while(len--)
			{
				memcpy(UsbEp5Buffer,pRom,MAX_EP5_SIZE);
				pRom += MAX_EP5_SIZE;
				User_SendData();
			}
		}
		break;
		case CMD_SumCheck:
			UsbEp5Buffer[3] = 2;
			UsbEp5Buffer[4] = SumCheck>>8;
			UsbEp5Buffer[5] = SumCheck;
			User_SendData();
		break;
		case CMD_End:
		{
			unsigned char temp = UsbEp5Buffer[4];
			
			const unsigned char *pRom = (const unsigned char *)(0X8000-sizeof(FlashBuff));
			for(unsigned char i=0;i<sizeof(FlashBuff);i++)		//回读页数据，和校验
			{
				FlashBuff[i] += *pRom++;
			}
			FlashBuff[sizeof(FlashBuff)-1] = 0;
			IAP_UnLock();
			if(IAP_WritePage(0X8000-sizeof(FlashBuff)))
			{
				User_ReturnWriteCmd(CMD_End,1);
				if(temp)
				{
					Reset();
				}
			}
			else
				User_ReturnWriteCmd(CMD_End,0);
			
		}
		break;
		default:break;
	}
}
