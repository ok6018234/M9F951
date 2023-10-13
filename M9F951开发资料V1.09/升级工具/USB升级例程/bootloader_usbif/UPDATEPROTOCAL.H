#ifndef _UPDATEPROTOCAL_H
#define _UPDATEPROTOCAL_H
#ifdef	_UPDATEPROTOCAL_C_
#define	_UPDATEPROTOCAL_E_
#else
#define	_UPDATEPROTOCAL_E_	extern
#endif

typedef enum
{
	CMD_JumpToBoot,
	CMD_DockBoot,
	CMD_WriteRomData,
	CMD_ReadRomData,
	CMD_SumCheck,
	CMD_End,

}UPDATEPROTOCAL_CMD;

#define RomPageSize 128

#define HB(dat) ((dat&0XFF00)>>8)	//取高字节
#define LB(dat) ((dat&0XFF)>>0)	//取低字节

#define	Timer1_ms	2000UL
#define	Timer1_Clk	64000UL
#define	Timer1_Div	2UL
#define	T1Value	Timer1_ms*Timer1_Clk/Timer1_Div/1000UL-1



_UPDATEPROTOCAL_E_ void UpdateOverTime(void);
_UPDATEPROTOCAL_E_ void UpdateProtocal(void);
_UPDATEPROTOCAL_E_ unsigned char IAP_WritePage(unsigned int PageAddr);
_UPDATEPROTOCAL_E_ unsigned char WriteUpdateFlag(unsigned char dat);
_UPDATEPROTOCAL_E_ unsigned int ZXW_Update(unsigned int DockValue);
#endif