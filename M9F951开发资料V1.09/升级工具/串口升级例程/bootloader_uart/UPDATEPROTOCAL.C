#define	_UPDATEPROTOCAL_C_
#include "USARTMGR.H"
#include "UPDATEPROTOCAL.H"
#include"HWCONFIG.H"
#include<string.h>


typedef union
{
	unsigned int u16;
	unsigned char u8[2];
}u16_t;

static unsigned char FlashBuff[128] @0X780;
static unsigned int	SumCheck;
static unsigned char WriteRomEn=0;
static unsigned char ConnectValue=0;

static unsigned char LockValue;

unsigned char JumpUserFlag=0;

#define Protocol_Head 0
#define Protocol_Cmd 1
#define Protocol_BCmd 2
#define Protocol_Len 3
#define Protocol_Data 5

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


unsigned char ProtocolCheck(unsigned char *ptr, unsigned int len) 
{
    unsigned char  sumCheck = 0;
 
    while (len--)
    {
        sumCheck += *ptr++;
    }
    return (sumCheck);
}


void User_ReturnWriteCmd(unsigned char cmd,unsigned char status)
{
	UsartMgr.Buffer[Protocol_Head] = 0XAA;
	UsartMgr.Buffer[Protocol_Cmd] = 0XFF;
	UsartMgr.Buffer[Protocol_BCmd] = cmd;
	UsartMgr.Buffer[Protocol_Len] = 0X00;
	UsartMgr.Buffer[Protocol_Len+1] = 0X01;
	UsartMgr.Buffer[Protocol_Data] = status;
	UsartMgr.Buffer[Protocol_Data+1] = ProtocolCheck(UsartMgr.Buffer+1,5);
	UsartMgr_BeginTx(7);
}


void UpdateProtocal(void)
{
	if((UsartMgr.RXDLen==1) && (UsartMgr.Buffer[0]==0X5A))
	{
		T1CR = 0;
		UsartMgr.Buffer[Protocol_Head] = 0XA5;
		UsartMgr_BeginTx(1);
		return;
	}
	if(UsartMgr.Buffer[Protocol_Head]!=0X55)
		return;
	if(UsartMgr.Buffer[Protocol_Cmd]!=0XFF)
		return;
	if(UsartMgr.Buffer[UsartMgr.RXDLen-1]!=ProtocolCheck(UsartMgr.Buffer+1,UsartMgr.RXDLen-2))
		return;

	ConnectValue = 0X7A;
	UsartMgr.Buffer[Protocol_Head] = 0XAA;

	switch(UsartMgr.Buffer[Protocol_BCmd])
	{
		case CMD_DockBoot:
		{
			u16_t DockValue;
			DockValue.u8[1] = UsartMgr.Buffer[Protocol_Data];
			DockValue.u8[0] = UsartMgr.Buffer[Protocol_Data+1];
			
			DockValue.u16=ZXW_Update(DockValue.u16);
			
			SumCheck = 0;
			UsartMgr.Buffer[Protocol_Len] = 0;
			UsartMgr.Buffer[Protocol_Len+1] = 2;
			UsartMgr.Buffer[Protocol_Data] = DockValue.u8[1];
			UsartMgr.Buffer[Protocol_Data+1] = DockValue.u8[0];
			UsartMgr.Buffer[Protocol_Data+2] = ProtocolCheck(UsartMgr.Buffer+1,6);
			UsartMgr_BeginTx(8);
			WriteRomEn = 1;
		}
		break;
		case CMD_WriteRomData:
		{
			if(WriteRomEn)
			{
				u16_t FlashAddr;
				FlashAddr.u8[1] = UsartMgr.Buffer[Protocol_Data];
				FlashAddr.u8[0] = UsartMgr.Buffer[Protocol_Data+1];
				
				u16_t FlashLen;
				FlashLen.u8[1] = UsartMgr.Buffer[Protocol_Len];
				FlashLen.u8[0] = UsartMgr.Buffer[Protocol_Len+1];
				FlashLen.u16 -= 2;
				
				if(FlashAddr.u16<TotalRomSize)
				{
					unsigned int pos = Protocol_Data+2;
					while(FlashLen.u16)
					{
						CLRWDT();
						memcpy(FlashBuff,&UsartMgr.Buffer[pos],sizeof(FlashBuff));
						
						IAP_UnLock();
						if(IAP_WritePage(FlashAddr.u16))
						{
							const unsigned char *pRead = (const unsigned char *)FlashAddr.u16;
							for(unsigned char i=0;i<128;i++)		//回读页数据，和校验
							{
								SumCheck += *pRead++;
							}
							FlashAddr.u16 += sizeof(FlashBuff);
							pos += sizeof(FlashBuff);
							FlashLen.u16 -= sizeof(FlashBuff);
						}
						else
						{
							User_ReturnWriteCmd(CMD_WriteRomData,0);
							return;
						}
					}
					ConnectValue = 0;
					UsartMgr.Buffer[Protocol_Len] = 0;
					UsartMgr.Buffer[Protocol_Len+1] = 3;
					UsartMgr.Buffer[Protocol_Data] = 1;
					UsartMgr.Buffer[Protocol_Data+1] = HB(SumCheck);
					UsartMgr.Buffer[Protocol_Data+2] = LB(SumCheck);
					UsartMgr.Buffer[Protocol_Data+3] = ProtocolCheck(UsartMgr.Buffer+1,7);
					UsartMgr_BeginTx(9);
				}
				else
					User_ReturnWriteCmd(CMD_WriteRomData,0);
			}
			else
				User_ReturnWriteCmd(CMD_WriteRomData,0);
		}	
		break;
		case CMD_ReadRomData:
		{
			u16_t FlashAddr;
			FlashAddr.u8[1] = UsartMgr.Buffer[Protocol_Data];
			FlashAddr.u8[0] = UsartMgr.Buffer[Protocol_Data+1];
		
			u16_t readLen;
			readLen.u8[1] = UsartMgr.Buffer[Protocol_Data+2];
			readLen.u8[0] = UsartMgr.Buffer[Protocol_Data+3];
			
			UsartMgr.Buffer[Protocol_Len] = readLen.u8[1];
			UsartMgr.Buffer[Protocol_Len+1] = readLen.u8[0];

			const unsigned char* pRom = (const unsigned char*)(FlashAddr.u16);
			for(unsigned int i=0;i<readLen.u16;i++)
			{
				UsartMgr.Buffer[Protocol_Data+i] =  *pRom++;
			}

			UsartMgr.Buffer[readLen.u16+5] = ProtocolCheck(UsartMgr.Buffer+1,readLen.u16+4);
			UsartMgr_BeginTx(readLen.u16+6);
		}
		break;
		case CMD_End:
			JumpUserFlag = 1;
			User_ReturnWriteCmd(CMD_End,1);
		break;
		case CMD_Baud:
			if(UsartMgr.Buffer[Protocol_Data]<=12)
			{
				u8 baudNum = UsartMgr.Buffer[Protocol_Data];
				User_ReturnWriteCmd(CMD_Baud,1);
				UsartMgr_Init(baudNum);
			}
			else
			{
				User_ReturnWriteCmd(CMD_Baud,0);
			}
		break;
		default:break;
	}
}
