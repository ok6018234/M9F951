;//*****************(ASM) COPYRIGHT 2021 Masses-Chip ****************************
;* Project Name		  : M9F951 I2C Slave.prj
;* File Name		  : I2C_Slave_Work.ASM
;* Author			  : MASSES CHIP
;* Version			  : V2.00
;* Date				  : 2021/09/15
;* Web				  : www.masses-chip.com
;* FAE				  : Luo
;					  : QQ：411680975
;//******************************************************************************
;
;说明:本范例为IIC主机模式，数据线SDA0(IOF5)、时钟线SCL0(IOF6)；
;包括主机的写与读操作，主机在从机RAM区0x20开始写入数据0x55、0xAA、0xFF，
;主机读取从机的数据在RAM区0x20开始存放
;设备地址为0xA0
;//******************************************************************************
;//==============================================================================
;//*******************************I2C从机工作************************************
;//==============================================================================
I2C_Slave_Work:
		JBTS0  		I2C0SR,5					;//判断主机读还是写
		GOTO		I2C_Master_Read


;//-------------------------------------------
;//主机写
I2C_Master_Write:
		JBTS0       I2C0SR,4					;//判断主机发送从机地址还是数据
		GOTO        I2C_Master_Write_Data	
;//-------------------------------------------
;//主机发送从机地址
I2C_Master_Write_Address:
		BCLR		b_Data_Address_F
		MOVR		I2C0DBUF,0					;//接收到的从机地址，取出
		GOTO		Interrupt_End
;//-------------------------------------------
;//主机发送数据
I2C_Master_Write_Data:
		JBTS0		b_Data_Address_F			;//判断是否有数据地址
	    GOTO		I2C_yes_Data_Address
;//-------------------------------------------
;//没有数据地址，该次发送的是数据地址
I2C_no_Data_Address:
		BSET		b_Data_Address_F			;//设置数据地址标志
		MOVR		I2C0DBUF,0
		MOVAR       R_Data_Address
		GOTO		Interrupt_End
;//-------------------------------------------
;//有数据地址，接收数据，读取I2C0DBUF，写入
I2C_yes_Data_Address:
		MOVIA		0x00
		MOVAR		FSR0H
		MOVR		R_Data_Address,0
		MOVAR 		FSR0L
		MOVR 		I2C0DBUF,0
		MOVAR		INDF0
		INCR 		R_Data_Address,1
		GOTO		Interrupt_End 



;//-------------------------------------------
;//主机读
I2C_Master_Read:
		MOVR		I2C0DBUF,0
		JBTS0       I2C0SR,1
		GOTO        I2C_Master_NACK_yes
;//-------------------------------------------
;//没有接收到NACK，一个字节传输传输未完成
I2C_Master_NACK_no:
		MOVIA		0x00
		MOVAR		FSR0H
		MOVR		R_Data_Address,0
		MOVAR		FSR0L
		MOVR		INDF0,0
		MOVAR		I2C0DBUF
		INCR 		R_Data_Address,1
		GOTO		Interrupt_End
;//-------------------------------------------
;//接收到NACK，一个字节传输完成
I2C_Master_NACK_yes:
		MOVIA		0x55
		MOVAR		I2C0DBUF
		GOTO		Interrupt_End
;//******************************END OF FILE************************************