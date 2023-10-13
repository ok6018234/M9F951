/*******************(C) COPYRIGHT 2021 Masses-Chip ****************************
* Project Name       : M9F951_I2C_Slave.Prj
* File Name          : I2C_Slave_Work.C
* Author             : MASSES CHIP
* Version            : V2.00
* Date               : 2021/09/15
* Web    			 : www.masses-chip.com
* FAE				 : Luo
*  				 	 : QQ：2546077008
*******************************************************************************
*
*说明:本范例为IIC主机模式，数据线SDA0(IOF5)、时钟线SCL0(IOF6)；
*包括主机的写与读操作，主机在从机RAM区0x20开始写入数据0x55、0xAA、0xFF，
*主机读取从机的数据在RAM区0x20开始存放
*设备地址为0xA0
******************************************************************************/
//=============================================================================
//*******************************I2C从机工作**********************************
//=============================================================================
//申明头文件和调用，用户不可更改
#include "zc.h"
#include "MASSESCHIP_DEFINE.H"

//-----------------------------------------------------------------------------
//定义变量
volatile unsigned char	R_Temp;
volatile unsigned char	R_Data_Address;
extern  unsigned char	i2c_buf[20] @(0x020);	
ab8 R_I2C_Flag;													//定义位寄存器
#define		b_Data_Address_F		R_I2C_Flag.oneBit.b0		//主机地址发送标志
extern	unsigned char	R_Count;
//-----------------------------------------------------------------------------
void I2C_Slave_Work(void)
{
	unsigned char i;
	if(C0DIR==1)												//主机读
	{
		R_Temp=I2C0DBUF;
		if(C0NACKF==1)
		{
			I2C0DBUF=0x55;										//该标志位置高时不会进中断，此判断程序无意义
		}
		else if(C0NACKF==0)
		{
			I2C0DBUF = 	i2c_buf[R_Count++];
		}
	}
	else if(C0DIR==0)											//主机写
	{
		if(C0AD==1)
		{
			if(b_Data_Address_F==1)
			{
				TC0CH = 0;
				for(i=0;i<4;i++)							  //读取接收到的N个数据
				{
					i2c_buf[R_Count++] = I2C0DBUF;
				}
			}
			else if(b_Data_Address_F==0)
			{
				b_Data_Address_F=1;
				R_Data_Address=I2C0DBUF;						//读取的是从机接收数据存储的RAM地址即数组定义的地址
				I2C0CR1 = 0x86;									//设置N值
				TC0EN = 1;										//开启定时器
				R_Count = 0;
			}
		}
		else if(C0AD==0)
		{
			b_Data_Address_F=0;
			R_Temp=I2C0DBUF;
		}
	}
}
//******************************END OF FILE*************************************