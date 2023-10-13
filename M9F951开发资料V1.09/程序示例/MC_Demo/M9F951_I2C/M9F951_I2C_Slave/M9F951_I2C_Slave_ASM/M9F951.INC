        LIST                                                                  
; M9F951.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
        NOLIST                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the TC030 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M9F951                                
;       2. LIST directive in the source file                                  
;               LIST   P=tc030                                             
;       3. Processor Type entry in the ZCASM full-screen interface            
                                                                              
;==========================================================================   
;                                                                             
;       Revision History                                                      
;                                                                             
;==========================================================================   
                                                                              
;Rev:   Date:    Reason:                                                      
                                                                              
;1.00   21/08/03 Initial Release 
                                             
                                                                              
;==========================================================================   
;                                                                             
;       Verify Processor                                                      
;                                                                             
;==========================================================================   
                                                                              
IFNDEF __m9f951  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
;==========================================================================
;Interrupt Vector define

;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   
EP0BUF       EQU       800H
EP1IOBUF     EQU       822H
EP2IOBUF     EQU       844H
EP3IOBUF     EQU       866H
EP4IOBUF     EQU       878H
EP5IOBUF     EQU       8BAH

;==========================================================================
TOSU           EQU                    0xFFF
TOSH           EQU                    0xFFE
TOSL           EQU                    0xFFD
STKPTR         EQU                    0xFFC
PCLATU        EQU                    0xFFB
PCLATH        EQU                    0xFFA
PCL            EQU                    0xFF9
TBLPTRU        EQU                    0xFF8
TBLPTRH        EQU                    0xFF7
TBLPTRL        EQU                    0xFF6
TABLAT         EQU                    0xFF5
PRODH          EQU                    0xFF4
PRODL          EQU                    0xFF3
OPTION         EQU                    0xFF2
EECON1         EQU                    0xFF1
EECON2         EQU                    0xFF0
INDF0          EQU                    0xFEF
POSTINC0       EQU                    0xFEE
POSTDEC0       EQU                    0xFED
PREINC0        EQU                    0xFEC
PLUSW0         EQU                    0xFEB
FSR0H          EQU                    0xFEA
FSR0L          EQU                    0xFE9
AREG           EQU                    0xFE8
INDF1          EQU                    0xFE7
POSTINC1       EQU                    0xFE6
POSTDEC1       EQU                    0xFE5
PREINC1        EQU                    0xFE4
PLUSW1         EQU                    0xFE3
FSR1H          EQU                    0xFE2
FSR1L          EQU                    0xFE1
BSR            EQU                    0xFE0
INDF2          EQU                    0xFDF
POSTINC2       EQU                    0xFDE
POSTDEC2       EQU                    0xFDD
PREINC2        EQU                    0xFDC
PLUSW2         EQU                    0xFDB
FSR2H          EQU                    0xFDA
FSR2L          EQU                    0xFD9
STATUS         EQU                    0xFD8 
PCON           EQU                    0xF80
;==========================================================================  
#define			INT_BASE_ADDR			(0xFD7)
#define			INT_BANKSEL				(0xF)
INTCR0			EQU       				(INT_BASE_ADDR-0)
INTCR1			EQU       				(INT_BASE_ADDR-1)
INTCR2			EQU       				(INT_BASE_ADDR-2)
UINTCR0     EQU               (INT_BASE_ADDR-3)
INTF0			  EQU       				(INT_BASE_ADDR-4)
INTF1		  	EQU       				(INT_BASE_ADDR-5)
INTF2			  EQU       				(INT_BASE_ADDR-6)

INTP0			EQU       				(INT_BASE_ADDR-8)
INTP1			EQU       				(INT_BASE_ADDR-9)
INTP2			EQU       				(INT_BASE_ADDR-10)
UINTP			EQU       				(INT_BASE_ADDR-11)
;========================================================================== 
#define			IO_BASE_ADDR			(0xFCB)
#define			IO_BANKSEL				(0xF)
IOA				EQU       				(IO_BASE_ADDR-0)
IOB				EQU       				(IO_BASE_ADDR-1)
IOC				EQU       				(IO_BASE_ADDR-2)
IOD				EQU       				(IO_BASE_ADDR-3)
IOE				EQU       				(IO_BASE_ADDR-4)
IOF				EQU       				(IO_BASE_ADDR-5)
IOG				EQU       				(IO_BASE_ADDR-6)
IOH				EQU       				(IO_BASE_ADDR-7)
IOI				EQU       				(IO_BASE_ADDR-8)
;========================================================================== 
#define			OE_BASE_ADDR			(0xFC2)
#define			OE_BANKSEL				(0xF)
OEA				EQU       				(OE_BASE_ADDR-0)
OEB				EQU       				(OE_BASE_ADDR-1)
OEC				EQU       				(OE_BASE_ADDR-2)
OED				EQU       				(OE_BASE_ADDR-3)
OEE				EQU       				(OE_BASE_ADDR-4)
OEF				EQU       				(OE_BASE_ADDR-5)
OEG				EQU       				(OE_BASE_ADDR-6)
OEH				EQU       				(OE_BASE_ADDR-7)
OEI				EQU       				(OE_BASE_ADDR-8)
;========================================================================== 
#define			OR_BASE_ADDR			(0xFB9)
#define			OR_BANKSEL				(0xF)
IOAOR			EQU       				(OR_BASE_ADDR-0)
IOBOR   		EQU       				(OR_BASE_ADDR-1)
IOCOR			EQU       				(OR_BASE_ADDR-2)
IODOR			EQU       				(OR_BASE_ADDR-3)
IOEOR   		EQU       				(OR_BASE_ADDR-4)
IOFOR   		EQU       				(OR_BASE_ADDR-5)
IOGOR			EQU       				(OR_BASE_ADDR-6)
IOHOR			EQU       				(OR_BASE_ADDR-7)
IOIOR			EQU       				(OR_BASE_ADDR-8)
;========================================================================== 
#define			AN_BASE_ADDR			(0xFB0)
#define			AN_BANKSEL				(0xF)
ANSA			EQU       				(AN_BASE_ADDR-0)
ANSB			EQU       				(AN_BASE_ADDR-1)
ANSC			EQU       				(AN_BASE_ADDR-2)
ANSD			EQU       				(AN_BASE_ADDR-3)
ANSE			EQU       				(AN_BASE_ADDR-4)
ANSF			EQU       				(AN_BASE_ADDR-5)
ANSG			EQU       				(AN_BASE_ADDR-6)
ANSH			EQU       				(AN_BASE_ADDR-7)
ANSI			EQU       				(AN_BASE_ADDR-8)
;==========================================================================  
#define			ADC_BASE_ADDR			(0xFA7)
#define			ADC_BANKSEL				(0xF)
ADCON0			EQU       				(ADC_BASE_ADDR-0)
ADCON1			EQU       				(ADC_BASE_ADDR-1)
ADCON2			EQU       				(ADC_BASE_ADDR-2)
ADH				EQU       				(ADC_BASE_ADDR-4)
ADL				EQU       				(ADC_BASE_ADDR-5)
;==========================================================================
WDTC            EQU                      0xFA1
OSCM            EQU                      0xFA0
;========================================================================== 
#define			TIMER_BASE_ADDR			(0xF9F)
#define			TIMER_BANKSEL			(0xF)
T0CR			EQU       				(TIMER_BASE_ADDR-0)
TC0CH			EQU       				(TIMER_BASE_ADDR-1)
TC0CL			EQU       				(TIMER_BASE_ADDR-2)
PWM0CR 			EQU       				(TIMER_BASE_ADDR-3)
PWM0D			EQU       				(TIMER_BASE_ADDR-4)
T1CR			EQU       				(TIMER_BASE_ADDR-5)
TC1PRH			EQU       				(TIMER_BASE_ADDR-6)		
TC1PRL			EQU       				(TIMER_BASE_ADDR-7)
TC1CH			EQU       				(TIMER_BASE_ADDR-8)
TC1CL			EQU       				(TIMER_BASE_ADDR-9)
T2CR			EQU       				(TIMER_BASE_ADDR-10)
TC2GCR			EQU       				(TIMER_BASE_ADDR-11)
TC2PRH			EQU       				(TIMER_BASE_ADDR-12)
TC2PRL			EQU       				(TIMER_BASE_ADDR-13)
TC2CH			EQU       				(TIMER_BASE_ADDR-14)
TC2CL			EQU       				(TIMER_BASE_ADDR-15)
;==========================================================================  
#define			UART0_BASE_ADDR			(0xF8F)
#define			UART0_BANKSEL			(0xF)
TX0CR			EQU       				(UART0_BASE_ADDR-0)
RX0CR			EQU       				(UART0_BASE_ADDR-1)
BRGD0H			EQU       				(UART0_BASE_ADDR-2)
BRGD0L			EQU       				(UART0_BASE_ADDR-3)
TX0REG			EQU       				(UART0_BASE_ADDR-4)
RX0REG			EQU       				(UART0_BASE_ADDR-5)
;==========================================================================
FLIPCR      EQU               0xF81
;==========================================================================
#define			I2C0_BASE_ADDR			(0xF7F)
#define			I2C0_BANKSEL			(0xF)
I2C0CR1			EQU       				(I2C0_BASE_ADDR-0)
I2C0CR2			EQU       				(I2C0_BASE_ADDR-1)
I2C0OAR			EQU       				(I2C0_BASE_ADDR-2)
I2C0PRESC		EQU       				(I2C0_BASE_ADDR-3)
I2C0DBUF		EQU       				(I2C0_BASE_ADDR-4)
I2C0SR			EQU       				(I2C0_BASE_ADDR-5)
;========================================================================== 
#define			USB_BASE_ADDR			(0xF79)
#define			USB_BANKSEL				(0xF)
USBCON			EQU       				(USB_BASE_ADDR-0)
UDADR			EQU       				(USB_BASE_ADDR-1)
UE0CON			EQU       				(USB_BASE_ADDR-2)
UE0IOPS			EQU       				(USB_BASE_ADDR-3)
UE1CON			EQU       				(USB_BASE_ADDR-4)
UE1IOPS			EQU       				(USB_BASE_ADDR-5)
UE2CON			EQU       				(USB_BASE_ADDR-6)
UE2IOPS			EQU       				(USB_BASE_ADDR-7)
UE3CON			EQU       				(USB_BASE_ADDR-8)
UE3IOPS			EQU       				(USB_BASE_ADDR-9)
UE4CON			EQU       				(USB_BASE_ADDR-10)
UE4IOPS			EQU       				(USB_BASE_ADDR-11)
UE5CON			EQU       				(USB_BASE_ADDR-12)
UE5IOPS			EQU       				(USB_BASE_ADDR-13)
UCLKCON			EQU       				(USB_BASE_ADDR-14)

;========================================================================== 
#define         PU_BASE_ADDR           (0xF5F)
#define         PU_BANKSEL             (0xF)
PUA				EQU       				(PU_BASE_ADDR-0)
PUB				EQU       				(PU_BASE_ADDR-1)
PUC				EQU       				(PU_BASE_ADDR-2)
PUD				EQU       				(PU_BASE_ADDR-3)
PUE				EQU       				(PU_BASE_ADDR-4)
PUF				EQU       				(PU_BASE_ADDR-5)
PUG				EQU       				(PU_BASE_ADDR-6)
PUH				EQU       				(PU_BASE_ADDR-7)
PUI				EQU       				(PU_BASE_ADDR-8)
;========================================================================== 
#define         PD_BASE_ADDR           (0xF56)
#define         PD_BANKSEL             (0xF) 
PDA				EQU       				(PD_BASE_ADDR-0)
PDB				EQU       				(PD_BASE_ADDR-1)
PDC				EQU       				(PD_BASE_ADDR-2)
PDD				EQU       				(PD_BASE_ADDR-3)
PDE				EQU       				(PD_BASE_ADDR-4)
PDF				EQU       				(PD_BASE_ADDR-5)
PDG				EQU       				(PD_BASE_ADDR-6)
PDH				EQU       				(PD_BASE_ADDR-7)
PDI				EQU       				(PD_BASE_ADDR-8)
;========================================================================== 
#define         IC_BASE_ADDR            (0xF4D)
#define         IC_BANKSEL              (0xF)
IOAICR			EQU                     (IC_BASE_ADDR-0)
IOBICR			EQU                     (IC_BASE_ADDR-1)
IOCICR			EQU                     (IC_BASE_ADDR-2)
IODICR			EQU                     (IC_BASE_ADDR-3)
IOEICR			EQU                     (IC_BASE_ADDR-4)
IOFICR			EQU                     (IC_BASE_ADDR-5)
IOGICR			EQU                     (IC_BASE_ADDR-6)
IOHICR			EQU                     (IC_BASE_ADDR-7)
IOIICR			EQU                     (IC_BASE_ADDR-8)
;==========================================================================
#define			IOXODS0_BASE_ADDR		(0xF3F)
#define			IOXODS0_BANKSEL			(0xF)
IOAODS0			EQU       				(IOXODS0_BASE_ADDR-0)
IOBODS0			EQU       				(IOXODS0_BASE_ADDR-1)
IOCODS0			EQU       				(IOXODS0_BASE_ADDR-2)
IODODS0			EQU       				(IOXODS0_BASE_ADDR-3)
IOEODS0			EQU       				(IOXODS0_BASE_ADDR-4)
IOFODS0			EQU       				(IOXODS0_BASE_ADDR-5)
IOGODS0			EQU       				(IOXODS0_BASE_ADDR-6)
IOHODS0			EQU       				(IOXODS0_BASE_ADDR-7)
IOIODS0			EQU       				(IOXODS0_BASE_ADDR-8)
;========================================================================== 
#define			IOXODS1_BASE_ADDR		(0xF36)
#define			IOXODS1_BANKSEL			(0xF)
IOAODS1			EQU       				(IOXODS1_BASE_ADDR-0)
IOBODS1			EQU       				(IOXODS1_BASE_ADDR-1)
IOCODS1			EQU       				(IOXODS1_BASE_ADDR-2)
IODODS1			EQU       				(IOXODS1_BASE_ADDR-3)
IOEODS1			EQU       				(IOXODS1_BASE_ADDR-4)
IOFODS1			EQU       				(IOXODS1_BASE_ADDR-5)
IOGODS1			EQU       				(IOXODS1_BASE_ADDR-6)
IOHODS1			EQU       				(IOXODS1_BASE_ADDR-7)
IOIODS1			EQU       				(IOXODS1_BASE_ADDR-8)
;========================================================================== 
#define			IPS1_BASE_ADDR		    (0xF2D)
#define			IPS1_BANKSEL			(0xF)
IOAIPS1			EQU       				(IPS1_BASE_ADDR-0)
IOBIPS1			EQU       				(IPS1_BASE_ADDR-1)
IOCIPS1			EQU       				(IPS1_BASE_ADDR-2)
IODIPS1			EQU       				(IPS1_BASE_ADDR-3)
IOEIPS1			EQU       				(IPS1_BASE_ADDR-4)
IOFIPS1			EQU       				(IPS1_BASE_ADDR-5)
IOGIPS1			EQU       				(IPS1_BASE_ADDR-6)
IOHIPS1			EQU       				(IPS1_BASE_ADDR-7)
IOIIPS1			EQU       				(IPS1_BASE_ADDR-8)
;========================================================================== 
#define			UART1_BASE_ADDR			(0xF1F)
#define			UART1_BANKSEL			(0xF)
TX1CR			EQU       				(UART1_BASE_ADDR-0)  
RX1CR			EQU       				(UART1_BASE_ADDR-1)  
BRGD1H			EQU       				(UART1_BASE_ADDR-2)
BRGD1L			EQU       				(UART1_BASE_ADDR-3)
TX1REG			EQU       				(UART1_BASE_ADDR-4)
RX1REG			EQU       				(UART1_BASE_ADDR-5)
;========================================================================== 
#define			I2C1_BASE_ADDR			(0xF19)
#define			I2C1_BANKSEL			(0xF)
I2C1CR1			EQU       				(I2C1_BASE_ADDR-0)
I2C1CR2			EQU       				(I2C1_BASE_ADDR-1)
I2C1OAR			EQU       				(I2C1_BASE_ADDR-2)
I2C1PRESC		EQU       				(I2C1_BASE_ADDR-3)
I2C1DBUF		EQU       				(I2C1_BASE_ADDR-4)
I2C1SR			EQU       				(I2C1_BASE_ADDR-5)
;==========================================================================   
#define			CMP_BASE_ADDR			(0xEDF)
#define			CMP_BANKSEL				(0xE)
CMPC0			 EQU       				 (CMP_BASE_ADDR-0)
CMPC1			 EQU       				 (CMP_BASE_ADDR-1)
CMPC2			 EQU       				 (CMP_BASE_ADDR-2)
;==========================================================================
IRCCAL      EQU               0xF0F
IRCCAH      EQU               0xF0E
CALLOCK     EQU               0xF09
WDTCR       EQU               0xF08
;==========================================================================
#define         FT_BASE_ADDR            (0xF0F)
#define         FT_BANKSEL              (0xF)
FUNT0 			EQU       				(FT_BASE_ADDR-0)
FUNT1 			EQU       				(FT_BASE_ADDR-1)
FUNT2 			EQU       				(FT_BASE_ADDR-2)
FUNT3 			EQU       				(FT_BASE_ADDR-3)
FUNT4 			EQU       				(FT_BASE_ADDR-4)
FUNT5 			EQU       				(FT_BASE_ADDR-5)
FUNT6 			EQU       				(FT_BASE_ADDR-6)
;==========================================================================
#define			PWMCR_BASE_ADDR			(0xEBF)
#define			PWMCR_BANKSEL			((0xE)
PWM100CR		EQU       				(PWMCR_BASE_ADDR-0)
PWM101CR		EQU       				(PWMCR_BASE_ADDR-1)
PWM102CR		EQU       				(PWMCR_BASE_ADDR-2)
PWM103CR		EQU       				(PWMCR_BASE_ADDR-3)
PWM104CR		EQU       				(PWMCR_BASE_ADDR-4)
PWM105CR		EQU       				(PWMCR_BASE_ADDR-5)
PWM106CR		EQU       				(PWMCR_BASE_ADDR-6)
PWM107CR		EQU       				(PWMCR_BASE_ADDR-7)
PWM108CR		EQU       				(PWMCR_BASE_ADDR-8)
PWM109CR		EQU       				(PWMCR_BASE_ADDR-9)
PWM110CR		EQU       				(PWMCR_BASE_ADDR-10)
PWM111CR		EQU       				(PWMCR_BASE_ADDR-11)
PWM112CR		EQU       				(PWMCR_BASE_ADDR-12)
PWM113CR		EQU       				(PWMCR_BASE_ADDR-13)
PWM114CR		EQU       				(PWMCR_BASE_ADDR-14)
PWM115CR		EQU       				(PWMCR_BASE_ADDR-15)
PWM116CR		EQU       				(PWMCR_BASE_ADDR-16)
PWM117CR		EQU       				(PWMCR_BASE_ADDR-17)
PWM118CR		EQU       				(PWMCR_BASE_ADDR-18)
PWM119CR		EQU       				(PWMCR_BASE_ADDR-19)
PWM120CR		EQU       				(PWMCR_BASE_ADDR-20)
PWM121CR		EQU       				(PWMCR_BASE_ADDR-21)
;==========================================================================
#define			PWMDX_BASE_ADDR			(0xEA9)
#define			PWMDX_BANKSEL			((0xE)
PWM100DH		EQU       				(PWMDX_BASE_ADDR-0)
PWM100DL		EQU       				(PWMDX_BASE_ADDR-1)
PWM101DH		EQU       				(PWMDX_BASE_ADDR-2)
PWM101DL		EQU       				(PWMDX_BASE_ADDR-3)
PWM102DH		EQU       				(PWMDX_BASE_ADDR-4)
PWM102DL		EQU       				(PWMDX_BASE_ADDR-5)
PWM103DH		EQU       				(PWMDX_BASE_ADDR-6)
PWM103DL		EQU       				(PWMDX_BASE_ADDR-7)
PWM104DH		EQU       				(PWMDX_BASE_ADDR-8)
PWM104DL		EQU       				(PWMDX_BASE_ADDR-9)
PWM105DH		EQU       				(PWMDX_BASE_ADDR-10)
PWM105DL		EQU       				(PWMDX_BASE_ADDR-11)
PWM106DH		EQU       				(PWMDX_BASE_ADDR-12)
PWM106DL		EQU       				(PWMDX_BASE_ADDR-13)
PWM107DH		EQU       				(PWMDX_BASE_ADDR-14)
PWM107DL		EQU       				(PWMDX_BASE_ADDR-15)
PWM108DH		EQU       				(PWMDX_BASE_ADDR-16)
PWM108DL		EQU       				(PWMDX_BASE_ADDR-17)
PWM109DH		EQU       				(PWMDX_BASE_ADDR-18)
PWM109DL		EQU       				(PWMDX_BASE_ADDR-19)
PWM110DH		EQU       				(PWMDX_BASE_ADDR-20)
PWM110DL		EQU       				(PWMDX_BASE_ADDR-21)
PWM111DH		EQU       				(PWMDX_BASE_ADDR-22)
PWM111DL		EQU       				(PWMDX_BASE_ADDR-23)
PWM112DH		EQU       				(PWMDX_BASE_ADDR-24)
PWM112DL		EQU       				(PWMDX_BASE_ADDR-25)
PWM113DH		EQU       				(PWMDX_BASE_ADDR-26)
PWM113DL		EQU       				(PWMDX_BASE_ADDR-27)
PWM114DH		EQU       				(PWMDX_BASE_ADDR-28)
PWM114DL		EQU       				(PWMDX_BASE_ADDR-29)
PWM115DH		EQU       				(PWMDX_BASE_ADDR-30)
PWM115DL		EQU       				(PWMDX_BASE_ADDR-31)
PWM116DH		EQU       				(PWMDX_BASE_ADDR-32)
PWM116DL		EQU       				(PWMDX_BASE_ADDR-33)
PWM117DH		EQU       				(PWMDX_BASE_ADDR-34)
PWM117DL		EQU       				(PWMDX_BASE_ADDR-35)
PWM118DH		EQU       				(PWMDX_BASE_ADDR-36)
PWM118DL		EQU       				(PWMDX_BASE_ADDR-37)
PWM119DH		EQU       				(PWMDX_BASE_ADDR-38)
PWM119DL		EQU       				(PWMDX_BASE_ADDR-39)
PWM120DH		EQU       				(PWMDX_BASE_ADDR-40)
PWM120DL		EQU       				(PWMDX_BASE_ADDR-41)
PWM121DH		EQU       				(PWMDX_BASE_ADDR-42)
PWM121DL		EQU       				(PWMDX_BASE_ADDR-43)
;==========================================================================


#define			PWM2_BASE_ADDR			(0xEFF)
#define			PWM2_BANKSEL			(0xE)
PWM2CR1			EQU       				(PWM2_BASE_ADDR-0)
PWM2CR2			EQU       				(PWM2_BASE_ADDR-1)
PMANUALCR0	EQU       				(PWM2_BASE_ADDR-2)
PMANUALCR1	EQU       				(PWM2_BASE_ADDR-3)
PWM2DT0H		EQU       				(PWM2_BASE_ADDR-4)
PWM2DT0L		EQU       				(PWM2_BASE_ADDR-5)
PWM2DT1H		EQU       				(PWM2_BASE_ADDR-6)
PWM2DT1L		EQU       				(PWM2_BASE_ADDR-7)
FLTCR			  EQU       				(PWM2_BASE_ADDR-8)
PWM2INTCR		EQU       				(PWM2_BASE_ADDR-9)
PWM2INTF		EQU       				(PWM2_BASE_ADDR-10)
PWM2RLDEN		EQU       				(PWM2_BASE_ADDR-11)
PWM2_0PH		EQU       				(PWM2_BASE_ADDR-12)
PWM2_0PL		EQU       				(PWM2_BASE_ADDR-13)
PWM2_1PH		EQU       				(PWM2_BASE_ADDR-14)
PWM2_1PL		EQU       				(PWM2_BASE_ADDR-15)
PWM2_2PH		EQU       				(PWM2_BASE_ADDR-16)
PWM2_2PL		EQU       				(PWM2_BASE_ADDR-17)
PWM2_0NH		EQU       				(PWM2_BASE_ADDR-18)
PWM2_0NL		EQU       				(PWM2_BASE_ADDR-19)
PWM2_1NH		EQU       				(PWM2_BASE_ADDR-20)
PWM2_1NL		EQU       				(PWM2_BASE_ADDR-21)
PWM2_2NH		EQU       				(PWM2_BASE_ADDR-22)
PWM2_2NL		EQU       				(PWM2_BASE_ADDR-23)
PWM2CR0			EQU       				(PWM2_BASE_ADDR-24)
PWM2OE			EQU       				(PWM2_BASE_ADDR-25)
PWM2PRH			EQU       				(PWM2_BASE_ADDR-26)
PWM2PRL			EQU       				(PWM2_BASE_ADDR-27)	
;==========================================================================

;----- INTCR0 Bits ------------------------------------------------------
CMPIE          EQU       04H
TC2GIE         EQU       03H
TC2IE          EQU       02H
TC1IE          EQU       01H
TC0IE          EQU       00H
;----- INTF0 Bits -------------------------------------------------------
CMPIF          EQU       04H
TC2GIF         EQU       03H
TC2IF          EQU       02H
TC1IF          EQU       01H
TC0IF          EQU       00H
;----- INTP0 Bits -------------------------------------------------------
CMPIP          EQU       04H
TC2GIP         EQU       03H
TC2IP          EQU       02H
TC1IP          EQU       01H
TC0IP          EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE         EQU       07H
INT0IE         EQU       06H
IOFCHIE        EQU       05H
IOECHIE        EQU       04H
IODCHIE        EQU       03H
IOCCHIE        EQU       02H
IOBCHIE        EQU       01H
IOACHIE        EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF         EQU       07H
INT0IF         EQU       06H
IOFCHIF        EQU       05H
IOECHIF        EQU       04H
IODCHIF        EQU       03H
IOCCHIF        EQU       02H
IOBCHIF        EQU       01H
IOACHIF        EQU       00H
;----- INTP1 Bits -------------------------------------------------------
INT1IP         EQU       07H
INT0IP         EQU       06H
IOFCHIP        EQU       05H
IOECHIP        EQU       04H
IODCHIP        EQU       03H
IOCCHIP        EQU       02H
IOBCHIP        EQU       01H
IOACHIP        EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
RX1IE          EQU       07H 
TX1IE          EQU       06H
RX0IE          EQU       05H
TX0IE          EQU       04H
ADIE           EQU       02H
I2C1IE         EQU       01H
I2C0IE         EQU       00H
;----- INTF2 Bits -------------------------------------------------------
RX1IF          EQU       07H 
TX1IF          EQU       06H
RX0IF          EQU       05H
TX0IF          EQU       04H
ADIF           EQU       02H
I2C1IF         EQU       01H
I2C0IF         EQU       00H
;----- INTP2 Bits -------------------------------------------------------
RX1IP          EQU       07H 
TX1IP          EQU       06H
RX0IP          EQU       05H
TX0IP          EQU       04H
ADIP           EQU       02H
I2C1IP         EQU       01H
I2C0IP         EQU       00H
;-----UINTCR0 Bits -------------------------------------------------------
UINTEP5        EQU       06H
UINTEP4        EQU       05H
UINTEP3        EQU       04H
UINTEP2        EQU       03H
UINTEP1        EQU       02H
UINTEP0        EQU       01H
UINTBUS        EQU       00H
;-----UINTP0 Bits -------------------------------------------------------
UINTP5         EQU       06H
UINTP4         EQU       05H
UINTP3         EQU       04H
UINTP2         EQU       03H
UINTP1         EQU       02H
UINTP0         EQU       01H
UINTBUSP       EQU       00H
;----- STATUS Bits ------------------------------------------------------
N            EQU       04H
OV           EQU       03H
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OSCM Bits --------------------------------------------------------
STBH         EQU       07H 
STBL         EQU       06H 
STOP         EQU       04H
CLKM         EQU       03H
STPH         EQU       02H 
LPSPD        EQU       01H
STPL         EQU       00H
;----- Option Bits --------------------------------------------------------
GIE          EQU       07H
GIEH         EQU       07H
GIEL         EQU       06H
TO           EQU       05H
PD           EQU       04H
MINT11       EQU       03H
MINT10       EQU       02H
MINT01       EQU       01H
MINT00       EQU       00H
;--------------------------------------------------------------------------
FAST         EQU       01H
;-----Bit Define-----------------------------------------------------------


#define     bADIE      INTCR2      ,ADIE
#define     bADIF      INTF2       ,ADIF
#define     bADIP      INTP2       ,ADIP 

#define     bTC0IE      INTCR0      ,TC0IE
#define     bTC0IF      INTF0       ,TC0IF
#define     bTC0IP      INTP0       ,TC0IP
#define     bTC1IE      INTCR0      ,TC1IE
#define     bTC1IF      INTF0       ,TC1IF
#define     bTC1IP      INTP0       ,TC1IP
#define     bTC2IE      INTCR0      ,TC2IE
#define     bTC2IF      INTF0       ,TC2IF
#define     bTC2IP      INTP0       ,TC2IP
#define     bTC2GIE     INTCR0      ,TC2GIE
#define     bTC2GIF     INTF0       ,TC2GIF
#define     bTC2GIP     INTP0       ,TC2GIP
#define     bCMP0IE     INTCR0      ,CMP0IE
#define     bCMP0IF     INTF0       ,CMP0IF
#define     bCMP0IP     INTP0       ,CMP0IP


#define     bRX0IE     INTCR2     ,RX0IE
#define     bRX0IF     INTF2      ,RX0IF
#define     bRX0IP     INTP2      ,RX0IP 
#define     bTX0IE     INTCR2     ,TX0IE
#define     bTX0IF     INTF2      ,TX0IF
#define     bTX0IP     INTP2      ,TX0IP
#define     bRX1IE     INTCR2     ,RX1IE
#define     bRX1IF     INTF2      ,RX1IF
#define     bRX1IP     INTP2      ,RX1IP 
#define     bTX1IE     INTCR2     ,TX1IE
#define     bTX1IF     INTF2      ,TX1IF
#define     bTX1IP     INTP2      ,TX1IP


#define     bGIEL       OPTION     ,GIEL 
#define     bGIEH       OPTION     ,GIEH
#define     bGIE        OPTION     ,GIE

#define     bINT0IE       INTCR1,INT0IE
#define     bINT0IF       INTF1,INT0IE
#define     bINT0IP       INTP1,INT0IP
#define     bINT1IE       INTCR1,INT1IE
#define     bINT1IF       INTF1,INT1IE
#define     bINT1IP       INTP1,INT1IP

#define     bIOACHIE     INTCR1,IOACHIE
#define     bIOBCHIE     INTCR1,IOBCHIE
#define     bIOCCHIE     INTCR1,IOCCHIE
#define     bIODCHIE     INTCR1,IODCHIE
#define     bIOECHIE     INTCR1,IOECHIE
#define     bIOFCHIE     INTCR1,IOFCHIE
#define     bIOACHIF     INTF1,IOACHIF
#define     bIOBCHIF     INTF1,IOBCHIF
#define     bIOCCHIF     INTF1,IOCCHIF
#define     bIODCHIF     INTF1,IODCHIF
#define     bIOECHIF     INTF1,IOECHIF
#define     bIOFCHIF     INTF1,IOFCHIF
#define     bIOACHIP     INTP1,IOACHIP
#define     bIOBCHIP     INTP1,IOBCHIP
#define     bIOCCHIP     INTP1,IOCCHIP
#define     bIODCHIP     INTP1,IODCHIP
#define     bIOECHIP     INTP1,IOECHIP
#define     bIOFCHIP     INTP1,IOFCHIP

#define     bSSP0IE      INTCR2     ,I2C0IE
#define     bSSP0IF      INTF2      ,I2C0IF
#define     bSSP0IP      INTP2      ,I2C0IP
#define     bSSP1IE      INTCR2     ,I2C1IE
#define     bSSP1IF      INTF2      ,I2C1IF
#define     bSSP1IP      INTP2      ,I2C1IP

#define     bUINTEP5     UINTCR0,UINTEP5
#define     bUINTEP4     UINTCR0,UINTEP4
#define     bUINTEP3     UINTCR0,UINTEP3
#define     bUINTEP2     UINTCR0,UINTEP2
#define     bUINTEP1     UINTCR0,UINTEP1
#define     bUINTEP0     UINTCR0,UINTEP0
#define     bUINTBUS     UINTCR0,UINTBUS

#define     bUINTP5     UINTP0,UINTP5                                               
#define     bUINTP4     UINTP0,UINTP4                                         
#define     bUINTP3     UINTP0,UINTP3                                         
#define     bUINTP2     UINTP0,UINTP2                                         
#define     bUINTP1     UINTP0,UINTP1                                         
#define     bUINTP0     UINTP0,UINTP0                                           
#define     bUINTBUSP   UINTP0,UINTBUSP
;==========================================================================

; File End

;==========================================================================
        LIST
