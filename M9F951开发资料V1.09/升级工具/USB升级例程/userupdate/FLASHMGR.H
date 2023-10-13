#ifndef	_FLASH_MGR_H_
#define	_FLASH_MGR_H_
#ifdef	_FLASH_MGR_C_
#define	_FLASH_MGR_E_
#else
#define	_FLASH_MGR_E_	extern
#endif

#include<zc.h>

#define EE_BeginAddr 0X7F80
#define EE_EndAddr 0X7FFF

_FLASH_MGR_E_ void FlashMgr_ReadData(unsigned char *dat,unsigned int addr,unsigned char len);
_FLASH_MGR_E_ unsigned char FlashMgr_WriteEE(unsigned char *dat,unsigned int addr,unsigned char len);
_FLASH_MGR_E_ void FlashMgr_Lock(void);
_FLASH_MGR_E_ void FlashMgr_UnLockEE(void);
_FLASH_MGR_E_ void FlashMgr_UnLockCode(void);
_FLASH_MGR_E_ unsigned char FlashMgr_OverwriteCode(unsigned char dat,unsigned int addr);

#endif

