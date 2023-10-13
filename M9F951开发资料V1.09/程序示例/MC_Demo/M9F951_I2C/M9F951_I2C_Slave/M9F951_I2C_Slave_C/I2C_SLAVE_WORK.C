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

volatile ab8 R_I2C_Flag;			//定义位寄存器
#define		b_Data_Address_F		R_I2C_Flag.oneBit.b0		//主机地址发送标志

//-----------------------------------------------------------------------------
void I2C_Slave_Work(void)
{
	if(C0DIR==1)								//主机读
	{
		R_Temp=I2C0DBUF;
		if(C0NACKF==1)
		{
			I2C0DBUF=0x55;
		}
		else if(C0NACKF==0)
		{
			FSR0H=0x00;
			FSR0L=R_Data_Address;
			I2C0DBUF=INDF0;
			R_Data_Address++;
		}
	}
	else if(C0DIR==0)							//主机写
	{
		if(C0AD==1)
		{
			if(b_Data_Address_F==1)
			{
				FSR0H=0x00;
				FSR0L=R_Data_Address;
				INDF0=I2C0DBUF;
				R_Data_Address++;
			}
			else if(b_Data_Address_F==0)
			{
				b_Data_Address_F=1;
				R_Data_Address=I2C0DBUF;
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