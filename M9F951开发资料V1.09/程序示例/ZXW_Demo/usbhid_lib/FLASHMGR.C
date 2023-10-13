#define	_FLASH_MGR_C_
#include"FLASHMGR.H"
#include"string.h"

static unsigned char FlashBuff[128] @(0X780);
static unsigned char eeLockValue=0,codeLockValue=0,codeWritePhase=0;
static unsigned int eeCheckAddr,codeCheckAddr;

//上锁
void FlashMgr_Lock(void)
{
	eeLockValue = 0;
	codeLockValue = 0;
	codeWritePhase = 0;
}
//解锁EE
void FlashMgr_UnLockEE(void)
{
	eeLockValue = 0X55;
}

unsigned char FlashMgr_EEWritePage(unsigned int pageAddr)
{
	eeCheckAddr = ~eeCheckAddr;
	
	ERASE = 1;
	CLRPL = 1;
	WRITE = 1;
	TBLPTR = pageAddr;
	
	if((TBLPTR<EE_BeginAddr)||(TBLPTR>=EE_EndAddr))	//检查范围是否合法
	{
		FlashMgr_Lock();
		return 0;
	}

	if(eeLockValue!=0X55) //检查是否解锁
	{
		FlashMgr_Lock();
		return 0;
	}

	if(TBLPTR==eeCheckAddr) //校验地址 检查是否解锁
	{
		EELOCK3 = 1;
		EELOCK2 = 1;
		EELOCK1 = 1;
		#asm
		WDT*
		#endasm
		
		if(WERR == 0)
		{
			return 1;
		}
		else
		{
			FlashMgr_Lock();
			return 0;
		}		
	}
	else
	{
		FlashMgr_Lock();
		return 0;
	}
}

/*********************************************************
*** 函数名称：void FlashMgr_WriteEE(void* dat,unsigned int addr,unsigned char len)
*** 功能描述：向Flash的数据存储区指定地址写入n个字节
*** 参数：  *dat:待写入的数据
			addr:ROM存储起始地址(0-32767),
			len:字节数
*** 返回值:1=操作成功 0=操作失败
*** 创建者:GJN
*** 创建时间：2020.12.08
*** 最后更新:2023.02.28
*** 说明:可跨页存储,调用前先调用FlashMgr_UnLockEE
*********************************************************/
unsigned char FlashMgr_WriteEE(void *dat,unsigned int addr,unsigned char len)
{
	unsigned char SAddr = addr&0X007F;		//计算当前地址相对于页起始地址的偏移量
	addr &= 0XFF80;
	const unsigned char *pRom = (const unsigned char*)addr;

	while(len)
	{
		eeCheckAddr = ~addr;	//地址反码,用于后续校验
		memcpy(FlashBuff,pRom,128);
		pRom += 128;
		unsigned char EAddr = len > (128-SAddr) ? (128-SAddr) : len;
		len -= EAddr;
		
		while(EAddr--)
		{
			FlashBuff[SAddr++] = *(char*)dat;
			dat = (char*)dat + 1;
		}
		
		SAddr = 0;
		
		unsigned char optionback = OPTION;	//保存中断状态
		OPTION = 0; //关闭中断
		unsigned char result = FlashMgr_EEWritePage(addr); //开始写页
		OPTION = optionback;//恢复中断状态
		addr += 128;
		if(result==0)
		{
			return 0;
		}
	}
	FlashMgr_Lock();
	return 1;
}


//解锁code区
void FlashMgr_UnLockCode(void)
{
	codeLockValue = 0XDD;
	codeWritePhase = 0XC5;
}

unsigned char FlashMgr_CodeWritePage(unsigned int pageAddr)
{
	codeCheckAddr = ~codeCheckAddr;
	codeWritePhase++;
		
	ERASE = 1;
	CLRPL = 1;
	WRITE = 1;
	TBLPTR = pageAddr;

	if(codeWritePhase!=0XC9) //校验流程顺序
	{
		FlashMgr_Lock();
		return 0;
	}

	if(codeLockValue!=0XDD) //检查是否开锁
	{
		FlashMgr_Lock();
		return 0;
	}
	if(TBLPTR==codeCheckAddr)//校验地址
	{
		EELOCK3 = 1;
		EELOCK2 = 1;
		EELOCK1 = 1;
		#asm
		WDT*
		#endasm
		FlashMgr_Lock();
		if(WERR == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}		
	}
	else
	{
		FlashMgr_Lock();
		return 0;
	}
}
/*********************************************************
*** 函数名称：void FlashMgr_OverwriteCode(unsigned char dat,unsigned int addr)
*** 功能描述：覆写程序区数据
*** 参数：  dat:数据
			addr:地址(0-32767)
*** 返回值:1=操作成功 0=操作失败
*** 创建者:GJN
*** 创建时间：2022.08.02
*** 最后更新:2022.08.02
*** 说明:调用前先调用FlashMgr_UnLockCode
*********************************************************/
unsigned char FlashMgr_OverwriteCode(unsigned char dat,unsigned int addr)
{
	unsigned char SAddr = addr&0X007F;		//计算当前地址相对于页起始地址的偏移量
	addr &= 0XFF80;
	codeWritePhase++;	//操作+1
	
	codeCheckAddr = ~addr; //取地址反码,用于校验
	codeWritePhase++;	//操作+1
	
	memcpy(FlashBuff,(const unsigned char*)addr,128); //取出页的全部数据
	FlashBuff[SAddr] = dat;
	codeWritePhase++; //操作+1
	
	unsigned char optionback = OPTION;	//保存中断状态
	OPTION = 0; //关闭中断
	
	unsigned char result = FlashMgr_CodeWritePage(addr);
	OPTION = optionback;//恢复中断状态
	return result;
}


#if(EE_BeginAddr%128 != 0)

#error "EE起始地址必须为128的倍数"

#elif(EE_EndAddr%128 != 0)
#error "EE结束地址必须为128的倍数"
#endif