#include<zc.h>
#include"FLASHMGR.H"
#include"string.h"

unsigned char FlashData[255];

const unsigned char ee[256]@(0X6F00);



void main()
{
	for(unsigned char i=0;i<sizeof(FlashData);i++)
	{
		FlashData[i] = i;
	}

	FlashMgr_UnLockEE(); //解锁数据存储区
	FlashMgr_WriteEE(FlashData,0X6F00,sizeof(FlashData));//写入255字节
	memset(FlashData,0,sizeof(FlashData));
	memcpy(FlashData,(const unsigned char*)0X6F00,sizeof(FlashData)); //读出255字节
	FlashMgr_UnLockCode(); //解锁程序区
	FlashMgr_OverwriteCode(0X57,0X7FFF);
	while(1)
	{
	}
}