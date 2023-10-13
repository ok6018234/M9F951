#ifndef _HWCONFIG_H
#define _HWCONFIG_H

//以下为仿真调试时的设置
//#define IDE_DEBUG //仿真调试时请打开,代码调试完成注释
#define APP_StartAddr 0X1000//本工程编译起始地址

//以下配置无需修改
#ifdef IDE_DEBUG
#if(APP_StartAddr>0)
#define AppStartAddr_Word (APP_StartAddr>>1)
#define HB_AppStartAddr ((AppStartAddr_Word&0XFF00)>>8)
#define LB_AppStartAddr ((AppStartAddr_Word&0XFF)>>0)

#define ReMapLIntAddr (AppStartAddr_Word+0X04)
#define HB_ReMapLIntAddr ((ReMapLIntAddr&0XFF00)>>8)
#define LB_ReMapLIntAddr ((ReMapLIntAddr&0XFF)>>0)

#define ReMapHIntAddr (AppStartAddr_Word+0X0C)
#define HB_ReMapHIntAddr ((ReMapHIntAddr&0XFF00)>>8)
#define LB_ReMapHIntAddr ((ReMapHIntAddr&0XFF)>>0)

const unsigned int goAppStart[2] @0X0000=
{
	0XDF00|LB_AppStartAddr,0XF000|HB_AppStartAddr, //跳转至工程起始地址
};

const unsigned int remapLowInt[2] @0X0008=
{
	0XDF00|LB_ReMapLIntAddr,0XF000|HB_ReMapLIntAddr, //低优先级中断映射至编译起始地址后的第8个地址 相当于汇编goto XXXX
};

const unsigned int remapHighInt[2] @0X0018=
{
	0XDF00|LB_ReMapHIntAddr,0XF000|HB_ReMapHIntAddr, //高优先级中断映射至起始地址后的第24个地址  相当于汇编goto XXXX
};
#info "已开启仿真模式,中断入口已重映射"

#endif
#endif

#endif

