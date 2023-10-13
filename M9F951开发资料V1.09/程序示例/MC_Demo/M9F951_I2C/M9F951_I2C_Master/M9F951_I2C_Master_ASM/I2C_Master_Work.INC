;//==============================================================================
;//*******************************I2C主机写数据**********************************
;//在从机RAM的0x20处开始写入0x55、0xAA、0xFF
;//==============================================================================
I2C_Master_Write:
		BSET		I2C0CR1,5			;//起始信号

		MOVIA		0xA0				;//发送从机地址
		CALL		I2C_Send_Data
		MOVIA		0x20				;//发送写入从机数据的地址
		CALL		I2C_Send_Data

		MOVIA		0x55
		CALL		I2C_Send_Data
		MOVIA		0xAA
		CALL		I2C_Send_Data
		MOVIA		0xFF
		CALL		I2C_Send_Data

		BSET		I2C0CR1,4			;//停止信号
		NOP
		RETURN
;//I2C主机数据发送
I2C_Send_Data:
		MOVAR		I2C0DBUF
		JBTS1		I2C0SR,3
		GOTO		$-1
		RETURN

;//==============================================================================
;//*******************************I2C主机读数据**********************************
;//主机向从机读取数据，在RAM区的0x20开始存放
;//==============================================================================
I2C_Master_Read:
        BCLR		I2C0CR2,5                   ;//注：软件清除CxACK位
		MOVIA   	0xA0						;//发送地址写
		MOVAR   	I2C0DBUF
		MOVIA		0x20
		MOVAR   	I2C0DBUF
		BSET    	I2C0CR1,5					;//起始信号，注：这里要先写buf
		JBTS1   	I2C0SR,3 	
		GOTO    	$-1
		
		BSET    	I2C0CR1,5                   ;//注：这里要先写起始信号
		MOVIA   	0xA1						;//发送地址读
		CALL		I2C_Send_DATA
		
		MOVAR		I2C0DBUF					;//注：写一下buf,清除CxBF标志
I2C_Master_Read_Loop:		
		JBTS1   	I2C0SR,3 	
		GOTO    	$-1
		DECR		R_Count,1					;//注：读buf前先计数-1
		JBTS1		STATUS,Z
		GOTO		I2C_Master_Read_Data
		BSET		I2C0CR2,5					;//停止读，注：设置了停止读后，实际还会有一次读时钟，该数舍去
I2C_Master_Read_Data:
		CLRR		FSR0H
		MOVR		R_Data_Address,0
		MOVAR		FSR0L
		MOVR		I2C0DBUF,0
		MOVAR		INDF0
		INCR		R_Data_Address,1
        MOVR		R_Count,1
		JBTS1		STATUS,Z
        GOTO		I2C_Master_Read_Loop
I2C_Master_Read_End:
		JBTS1   	I2C0SR,3 	                ;//注：设置了停止读后，实际还会有一次读时钟，该数舍去
		GOTO    	$-1
		MOVR		I2C0DBUF,0                  ;//注：读buf,清除CxBF标志
		BSET		I2C0CR1,4					;//停止信号
		JBTS0   	I2C0CR1,4 	                ;//注：等待发送完停止信号
		GOTO    	$-1
		RETURN
;//******************************END OF FILE*************************************