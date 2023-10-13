#ifndef _HWCONFIG_H
#define _HWCONFIG_H

#define Usart_Num 0

#define UpdateFlagAddr 0X7FFF
#define APP_StartAddr 0X1000//用户工程编译起始地址

#define AppStartAddr_Word (APP_StartAddr>>1)
#define HB_AppStartAddr ((AppStartAddr_Word&0XFF00)>>8)
#define LB_AppStartAddr ((AppStartAddr_Word&0XFF)>>0)

#define ReMapLIntAddr (AppStartAddr_Word+0X04)
#define HB_ReMapLIntAddr ((ReMapLIntAddr&0XFF00)>>8)
#define LB_ReMapLIntAddr ((ReMapLIntAddr&0XFF)>>0)

#define ReMapHIntAddr (AppStartAddr_Word+0X0C)
#define HB_ReMapHIntAddr ((ReMapHIntAddr&0XFF00)>>8)
#define LB_ReMapHIntAddr ((ReMapHIntAddr&0XFF)>>0)


const unsigned int remapLowInt[2] @0X0008=
{
	0XDF00|LB_ReMapLIntAddr,0XF000|HB_ReMapLIntAddr, //低优先级中断映射至编译起始地址后的第8个地址
};

const unsigned int remapHighInt[2] @0X0018=
{
	0XDF00|LB_ReMapHIntAddr,0XF000|HB_ReMapHIntAddr, //高优先级中断映射至起始地址后的第24个地址
};

#define Fosc 24000000UL
#define	Timer1_us	300000UL
#define	Timer1_Clk	24UL
#define	Timer1_Div	128UL
#define	T1Value	Timer1_us*Timer1_Clk/Timer1_Div-1

#define	Timer2_us	200UL
#define	Timer2_Clk	24UL
#define	Timer2_Div	64UL
#define	T2Value	Timer2_us*Timer2_Clk/Timer2_Div-1

#endif

