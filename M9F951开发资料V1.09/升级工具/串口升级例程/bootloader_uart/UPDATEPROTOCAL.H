#ifndef _UPDATEPROTOCAL_H
#define _UPDATEPROTOCAL_H
#ifdef	_UPDATEPROTOCAL_C_
#define	_UPDATEPROTOCAL_E_
#else
#define	_UPDATEPROTOCAL_E_	extern
#endif

typedef enum
{
	CMD_DockBoot=1,
	CMD_WriteRomData,
	CMD_ReadRomData,
	CMD_End,
	CMD_Baud,

}UPDATEPROTOCAL_CMD;



#define TotalRomSize 32768
#define RomPageSize 128

#define LimitFlashAddr1_Begin 0X1000
#define LimitFlashAddr1_End 0X7FFF

#define HB(dat) ((dat&0XFF00)>>8)	//取高字节
#define LB(dat) ((dat&0XFF)>>0)	//取低字节


_UPDATEPROTOCAL_E_	 unsigned char	JumpUserFlag;


_UPDATEPROTOCAL_E_ void UpdateOverTime(void);
_UPDATEPROTOCAL_E_ void UpdateProtocal(void);
_UPDATEPROTOCAL_E_ unsigned char IAP_WritePage(unsigned int PageAddr);
_UPDATEPROTOCAL_E_ unsigned char WriteUpdateFlag(unsigned char dat);
_UPDATEPROTOCAL_E_ unsigned int ZXW_Update(unsigned int DockValue);
#endif