;//*****************(ASM) COPYRIGHT 2021 Masses-Chip ****************************
;* Project Name		  : M9F951_PWM2.Prj
;* File Name		  : M9F951_PWM2.ASM
;* Author			  : MASSES CHIP
;* Version			  : V2.00
;* Date				  : 2021/09/15
;* Web				  : www.masses-chip.com
;* FAE				  : Luo
;					  : QQ：411680975
;//******************************************************************************
;
;Option:16M/16T,WDT-Enable-288ms,RST-IO,BOR 2.4V 
;说明：本范例以系统时钟为时基，产生1KHz，占空比为50%前、后死区时间5.25us的PWM波形
;PWM输出口为PWM2_0PA(IOE0)、PWM2_0NA(IOE1)、PWM2_1PA(IOE2)、PWM2_1NA(IOE3)、
;PWM2_2PA(IOE4)、PWM2_2NA(IOE5)
;PWM波形每100Ms开关一次
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
userdata	udata	H'00'

R_Temp1			RES			1
R_Temp2			RES			1

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
		CALL		SYSTEM_INIT				;//系统初始化
		CALL		Clr_RAM_0000H_07FFH		;//清零RAM
		CALL		PWM2_INIT				;//PWM2初始化
;//------------------------------主函数循环--------------------------------------		
MainLoop:
		CLRWDT
		BANKBSR		0x0E
		MOVIA		0x55
		MOVAR		PWM2RLDEN
		BSET		PWM2OE,0
		BSET		PWM2OE,1
		BSET		PWM2OE,2
		BSET		PWM2OE,3
		BSET		PWM2OE,4
		BSET		PWM2OE,5
		CALL		Delay_100ms
		BCLR		PWM2OE,0
		BCLR		PWM2OE,1
		BCLR		PWM2OE,2
		BCLR		PWM2OE,3
		BCLR		PWM2OE,4
		BCLR		PWM2OE,5
		CALL		Delay_100ms		
		MOVIA		0xAA
		MOVAR		PWM2RLDEN
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
;//*********************************PWM1初始化***********************************
;//PWM2RLDEN寄存器写入0x55，允许软件对模块寄存器的修改
;//PWM2时基设置：16M，无预分频，无后分频，中心对齐模式
;//PWM2设置：互补输出，频率1KHz，前后死区5.25us，占空比50% 
;//==============================================================================	
PWM2_INIT:
;//1、PWM2设置
		BANKBSR		0x0E
		MOVIA		0x55
		MOVAR		PWM2RLDEN			;//允许修改PWM2相关寄存器

		MOVIA		0x10
		MOVAR		PWM2CR0
		CLRR		PWM2CR1
		MOVIA		0x08
		MOVAR		PWM2CR2
		MOVIA		0x00
		MOVAR		PWM2OE
		MOVIA		0x3F
		MOVAR		PMANUALCR1			;//注：必须先写PMANUALCR1，再写PMANUALCR0
		CLRR		PMANUALCR0
		CLRR		FLTCR

;//2、周期设置
		MOVIA		0x40
		MOVAR		PWM2PRL
		MOVIA		0x1F
		MOVAR		PWM2PRH
		
;//3、死区设置
		MOVIA		0x55
		MOVAR		PWM2DT0L
		MOVIA		0x00
		MOVAR		PWM2DT0H
		MOVIA		0x55
		MOVAR		PWM2DT1L
		MOVIA		0x00
		MOVAR		PWM2DT1H

;//4、占空比设置
		MOVIA		0xA0
		MOVAR		PWM2_0PL
		MOVIA		0x0F
		MOVAR		PWM2_0PH
		MOVIA		0xA0
		MOVAR		PWM2_0NL
		MOVIA		0x0F
		MOVAR		PWM2_0NH
		MOVIA		0xA0
		MOVAR		PWM2_1PL
		MOVIA		0x0F
		MOVAR		PWM2_1PH
		MOVIA		0xA0
		MOVAR		PWM2_1NL
		MOVIA		0x0F
		MOVAR		PWM2_1NH
		MOVIA		0xA0
		MOVAR		PWM2_2PL
		MOVIA		0x0F
		MOVAR		PWM2_2PH
		MOVIA		0xA0
		MOVAR		PWM2_2NL
		MOVIA		0x0F
		MOVAR		PWM2_2NH
;//5、使能输出，允许重载
		BSET		PWM2OE,7
		MOVIA		0xAA
		MOVAR		PWM2RLDEN
		RETURN


;//==============================================================================
;//*********************************延时函数*************************************
;//延时100Ms
;//==============================================================================	
Delay_100ms:
		MOVIA		167
		MOVAR		R_Temp1
D1:
		MOVIA		200
		MOVAR		R_Temp2
D2:
		DJZR		R_Temp2,1,0
		GOTO		D2
		DJZR		R_Temp1,1,0
		GOTO		D1
		RETURN

;//==============================================================================
;//**********************************系统初始化**********************************
;//系统时钟初始化：快钟、慢钟都正常工作，不进休眠
;//IO初始化:设置个IO状态为输出低，且关闭上下拉
;//中断总开关：关闭总开关
;//==============================================================================		
SYSTEM_INIT:
;//-----------------------------------------------------------------------           
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

;//------------------------------------------------------------------------      
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