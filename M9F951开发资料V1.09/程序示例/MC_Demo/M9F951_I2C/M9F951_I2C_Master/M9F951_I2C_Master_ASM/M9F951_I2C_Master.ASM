;//*****************(ASM) COPYRIGHT 2021 Masses-Chip ****************************
;* Project Name		  : M9F951_I2C Master.Prj
;* File Name		  : M9F951_I2C_Master.ASM
;* Author			  : MASSES CHIP
;* Version			  : V2.00
;* Date				  : 2021/09/15
;* Web				  : www.masses-chip.com
;* FAE				  : Luo
;					  : QQ：411680975
;//******************************************************************************
;
;Option:16M/16T,WDT-Enable-288ms,1ST-IO,BOR 2.4V 
;说明：本范例为IIC主机模式，数据线SDA0(IOF5)、时钟线SCL0(IOF6)；
;包括主机的写与读操作，从机的器件地址为0x20
;主机在从机RAM区0x20开始写入数据0x55、0xAA、0xFF，
;主机读取从机的数据在RAM区0x20开始存放
;//******************************************************************************
;//==============================================================================
;//***********************************头文件*************************************
;//用户不可更改
;//==============================================================================
		LIST 		P=M9F951
INCLUDE	 	M9F951.INC


;//==============================================================================
;//******************************定义全局变量************************************
;//用户可以自行看需求定义变量
;//==============================================================================
userdata	 udata		H'00'

R_Temp1				res		1
R_Temp2				res		1
R_Count				res		1		;//计数
R_Data_Address		res		1		;//数据地址
;//==============================================================================
;//*********************************C O D E**************************************
;//==============================================================================	
		ORG			0000H
		GOTO		MainProgram
		ORG			0008H
		GOTO		Interrupt


;//==============================================================================
;//********************************程序主函数************************************
;//==============================================================================			
;//--------------------------------程序初始化------------------------------------
MainProgram:
		CALL       	SYSTEM_INIT				;//系统初始化
		CALL       	Clr_RAM_0000H_07FFH		;//清零RAM
		CALL       	I2C_Master_INIT			;//I2C主机初始化
		MOVIA		0x20
		MOVAR		R_Data_Address
;//------------------------------主函数循环--------------------------------------		
MainLoop:
		CLRWDT
		CALL		I2C_Master_Write
		CALL		Delay
		CLRWDT
		MOVIA		0x03
		MOVAR		R_Count
		CALL		I2C_Master_Read
		CALL		Delay
		GOTO		MainLoop
		
		
;//==============================================================================
;//******************************中断服务子程序**********************************
;//==============================================================================
;//中断进来
Interrupt:
		NOP

Interrupt_END:
;//中断结束
	    RETIE		1						;//返回A、BSR、STATUS的值

;//==============================================================================
;//*******************************I2C主机初始化**********************************
;//端口设置：端口IOF5（数据线SDA0）、IOF6（时钟线SCL0）设为输出模式，开启上拉
;//I2C主机设置：开启I2C模块，作为主机，作为主机，主机不需设置本机地址
;//==============================================================================	
I2C_Master_INIT:
;//1、端口设置
		BCLR		PUF,5			;//SDA0
		BCLR		OEF,5
		BCLR		PUF,6			;//SCL0
		BCLR		OEF,6
		BANKBSR		0x0F
		BCLR		ANSF,5
		BCLR		ANSF,6
;//2、I2C主机设置
		MOVIA		0x88
		MOVAR		I2C0CR1
		MOVIA		0x20
		MOVAR		I2C0CR2
		MOVIA		0x0F
		MOVAR		I2C0PRESC
		RETURN
;//------------------------------------------------
;//延时
Delay
		MOVIA		5
		MOVAR		R_Temp1
D1:
		MOVIA		50
		MOVAR		R_Temp2
D2:
		NOP
		DJZR		R_Temp2,1
		GOTO		D2
		DJZR		R_Temp1,1
		GOTO		D1
		RETURN

;//==============================================================================
;//*******************************I2C主机写数据**********************************
;//主机向从机发送四个数据，第一个数据为要写入RAM区的地址；在从机RAM的0x20处分别写
;  入0x55、0xAA、0xFF
;//==============================================================================
I2C_Master_Write:
		MOVIA   	0xA0						;//发送从机的器件地址
		MOVAR   	I2C0DBUF
		MOVIA		0x20						;//要写入的数据地址
		MOVAR   	I2C0DBUF
		BSET    	I2C0CR1,5					;//起始信号，注：这里要先写buf
		JBTS1   	I2C0SR,3 	
		GOTO    	$-1

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
;//主机先发送要读出RAM区的地址，再读数据在主机RAM区0x20开始写入数据
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
		MOVIA		0x20						
		MOVAR		R_Data_Address		
		RETURN
;//==============================================================================
;//**********************************系统初始化**********************************
;//系统时钟初始化：快钟、慢钟都正常工作，不进休眠
;//IO初始化:设置个IO状态为输出低，且关闭上下拉
;//中断总开关：关闭总开关
;//==============================================================================		
SYSTEM_INIT:
;//------------------------------------------------           
;//Init Clock
		MOVIA       b'00000000'
		MOVAR		OSCM
;//Init IO	
		BANKBSR	   	0x0F		;//切页，ANSx寄存器需要切页操作
        ;//IOA
        MOVIA      	0x00 
		MOVAR		ANSA		;//0:数字口	  1:模拟口 
        MOVAR     	PUA			;//0:上拉关闭 1:上拉使能  	 	
        MOVAR      	PDA			;//0:下拉关闭 1:下拉使能
		MOVAR      	IOA        	;//0:输出低   1:输出高
		MOVIA      	0xFF    	
        MOVAR      	OEA			;//0:输入     1:输出   	
		;//IOB
        MOVIA      	0x00
		MOVAR		ANSB
        MOVAR      	PUB
        MOVAR      	PDB
        MOVAR      	IOB
		MOVIA      	0xFF
        MOVAR      	OEB
		;//IOC
        MOVIA      	0x00
		MOVAR		ANSC
        MOVAR      	PUC
        MOVAR      	PDC
        MOVAR      	IOC
		MOVIA      	0xFF
        MOVAR      	OEC
		;//IOD
        MOVIA      	0x00
		MOVAR		ANSD
        MOVAR      	PUD
        MOVAR      	PDD
        MOVAR      	IOD
		MOVIA      	0xFF
        MOVAR      	OED
		;//IOE
        MOVIA      	0x00
		MOVAR		ANSE
        MOVAR      	PUE
        MOVAR      	PDE
        MOVAR      	IOE
		MOVIA      	0xFF
        MOVAR      	OEE
		;//IOF
        MOVIA      	0x00
		MOVAR		ANSF
        MOVAR     	PUF
        MOVAR      	PDF
        MOVAR      	IOF
		MOVIA      	0xFF
        MOVAR      	OEF

;//-------------------------------------------------      
;//Init Interrupt           
        BCLR       	OPTION,6		;//1:全局中断低优先级中断使能,0:屏蔽全局中断低优先级中断
		BCLR       	OPTION,7		;//1:全局中断高优先级中断使能,0:屏蔽全局中断高优先级中断
		RETURN

;//==============================================================================
;//*****************************RAM清零(0000H~07FFH)*****************************
;//RAM清零：RAM区0000H~07FFH全部清零
;//==============================================================================				
Clr_RAM_0000H_07FFH:
		CLRR    	FSR0L
		CLRR    	FSR0H
ClrRam_Loop:
		MOVIA		0x00
		MOVAR   	INDF0
		INCR    	FSR0L,1
		MOVIA		0
		ADCAR		FSR0H,1
		MOVIA		8
		SUBRA		FSR0H,0
		JBTS1		STATUS,C
		GOTO    	ClrRam_Loop
RAM_INIT_END:
		RETURN


		END
;//******************************END OF FILE************************************