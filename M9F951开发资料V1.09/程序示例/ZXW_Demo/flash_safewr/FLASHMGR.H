#ifndef	_FLASH_MGR_H_
#define	_FLASH_MGR_H_
#ifdef	_FLASH_MGR_C_
#define	_FLASH_MGR_E_
#else
#define	_FLASH_MGR_E_	extern
#endif

#include<zc.h>

#define EE_BeginAddr 0X6F00 //必须为128的倍数
#define EE_EndAddr 0X7000 //必须为128的倍数


_FLASH_MGR_E_ unsigned char FlashMgr_WriteEE(void *dat,unsigned int addr,unsigned char len);
_FLASH_MGR_E_ void FlashMgr_Lock(void);
_FLASH_MGR_E_ void FlashMgr_UnLockEE(void);
_FLASH_MGR_E_ void FlashMgr_UnLockCode(void);
_FLASH_MGR_E_ unsigned char FlashMgr_OverwriteCode(unsigned char dat,unsigned int addr);


#endif

