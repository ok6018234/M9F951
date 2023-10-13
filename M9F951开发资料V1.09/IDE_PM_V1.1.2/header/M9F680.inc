        NOLIST                                                                  
; TC030.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the TC030 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p TC030                                
;       2. LIST directive in the source file                                  
;               LIST   P=tc030                                             
;       3. Processor Type entry in the ZCASM full-screen interface            
                                                                              
;==========================================================================   
;                                                                             
;       Revision History                                                      
;                                                                             
;==========================================================================   
                                                                              
;Rev:   Date:    Reason:                                                      
                                                                              
;1.00   20/08/11 Initial Release                                              
                                                                              
;==========================================================================   
;                                                                             
;       Verify Processor                                                      
;                                                                             
;==========================================================================   
                                                                              
IFNDEF __m9f680  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
;==========================================================================
;Interrupt Vector define
;
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   

;2020/10/9 星期五 17:55:30
;==========================================================================
FLASHBUF       EQU                    0x1C0
;==========================================================================
INTPTC1		   EQU                    0x000
FLASHLOCK	   EQU                    0x001

LEDDS00		   EQU                    0x200
LEDDS01		   EQU                    0x201
LEDDS02		   EQU                    0x202
LEDDS03		   EQU                    0x203
LEDDS04		   EQU                    0x204
LEDDS05		   EQU                    0x205
LEDDS06		   EQU                    0x206
LEDDS07		   EQU                    0x207
LEDDS08		   EQU                    0x208
LEDDS09		   EQU                    0x209
LEDDS10	       EQU                    0x20A
LEDDS11		   EQU                    0x20B
LEDDS12		   EQU                    0x20C
LEDDS13		   EQU                    0x20D
LEDDS14		   EQU                    0x20E
LEDDS15		   EQU                    0x20F
LEDDS16		   EQU                    0x210
LEDDS17		   EQU                    0x211
LEDDS18		   EQU                    0x212
LEDDS19		   EQU                    0x213
LEDDS20	       EQU                    0x214
LEDDS21		   EQU                    0x215
LEDDS22		   EQU                    0x216
LEDDS23		   EQU                    0x217
LEDDS24		   EQU                    0x218
LEDDS25		   EQU                    0x219
LEDDS26		   EQU                    0x21A
LEDDS27		   EQU                    0x21B
LEDDS28		   EQU                    0x21C
LEDDS29		   EQU                    0x21D


TOSU           EQU                    0xFFF
TOSH           EQU                    0xFFE
TOSL           EQU                    0xFFD
SKTPTR         EQU                    0xFFC
PCLATU         EQU                    0xFFB
PCLATH         EQU                    0xFFA
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
#define			   INT_BASE_ADDR			    (0xFD7)
#define			   INT_BANKSEL				    (0xF)
INTCR1			   EQU       				      (INT_BASE_ADDR-0)
INTCR0			   EQU       				      (INT_BASE_ADDR-1)
INTF1			     EQU       				      (INT_BASE_ADDR-2)
INTF0			     EQU       				      (INT_BASE_ADDR-3)
INTP1			     EQU       				      (INT_BASE_ADDR-4)
INTP0			     EQU       				      (INT_BASE_ADDR-5)

;========================================================================== 
#define			   IO_BASE_ADDR			      (0xFCB)
#define			   IO_BANKSEL				      (0xF)
IOD				     EQU       				      (IO_BASE_ADDR-0)
IOC				     EQU       				      (IO_BASE_ADDR-1)
IOB				     EQU       				      (IO_BASE_ADDR-2)
IOA				     EQU       				      (IO_BASE_ADDR-3)

;========================================================================== 
#define			   OE_BASE_ADDR			      (0xFC7)
#define			   OE_BANKSEL				      (0xF)
OED				     EQU       				      (OE_BASE_ADDR-0)
OEC				     EQU       				      (OE_BASE_ADDR-1)
OEB				     EQU       				      (OE_BASE_ADDR-2)
OEA				     EQU       				      (OE_BASE_ADDR-3)

;========================================================================== 
#define			   OR_BASE_ADDR			      (0xFC3)
#define			   OR_BANKSEL				      (0xF)
IODOR			     EQU       				      (OR_BASE_ADDR-0)
IOCOR   		   EQU       				      (OR_BASE_ADDR-1)
IOBOR			     EQU       				      (OR_BASE_ADDR-2)
IOAOR			     EQU       				      (OR_BASE_ADDR-3)

;========================================================================== 
#define			   AN_BASE_ADDR			      (0xFBF)
#define			   AN_BANKSEL				      (0xF)
ANSD			     EQU       				      (AN_BASE_ADDR-0)
ANSC			     EQU       				      (AN_BASE_ADDR-1)
ANSB			     EQU       				      (AN_BASE_ADDR-2)
ANSA			     EQU       				      (AN_BASE_ADDR-3)

;==========================================================================  
#define			   ADC_BASE_ADDR			    (0xFA7)
#define			   ADC_BANKSEL				    (0xF)
ADCON3			   EQU       				      (ADC_BASE_ADDR-0)
ADCON2			   EQU       				      (ADC_BASE_ADDR-1)
ADCON1			   EQU       				      (ADC_BASE_ADDR-2)
ADCON0			   EQU       				      (ADC_BASE_ADDR-3)
ADH				     EQU       				      (ADC_BASE_ADDR-4)
ADL				     EQU       				      (ADC_BASE_ADDR-5)
;==========================================================================
OSCM           EQU                    0xFA0
;========================================================================== 
#define			   TIMER_BASE_ADDR			  (0xF9D)
#define			   TIMER_BANKSEL			    (0xF)
T0CR2 		     EQU       				      (TIMER_BASE_ADDR-0)
T0CR           EQU       				      (TIMER_BASE_ADDR-1)
TC0CH			     EQU       				      (TIMER_BASE_ADDR-2)
TC0CL			     EQU       				      (TIMER_BASE_ADDR-3)
PWM00CR 			 EQU       				      (TIMER_BASE_ADDR-4)
PWM00D			   EQU       				      (TIMER_BASE_ADDR-5)
PWM01CR 			 EQU       				      (TIMER_BASE_ADDR-6)
PWM01D			   EQU       				      (TIMER_BASE_ADDR-7)
PWM02CR 			 EQU       				      (TIMER_BASE_ADDR-8)
PWM02D			   EQU       				      (TIMER_BASE_ADDR-9)
PWM03CR 			 EQU       				      (TIMER_BASE_ADDR-10)
PWM03D			   EQU       				      (TIMER_BASE_ADDR-11)
T1CR			     EQU       				      (TIMER_BASE_ADDR-12)
TC1PRH			   EQU       				      (TIMER_BASE_ADDR-13)		
TC1PRL			   EQU       				      (TIMER_BASE_ADDR-14)
TC1CH			     EQU       				      (TIMER_BASE_ADDR-15)
TC1CL			     EQU       				      (TIMER_BASE_ADDR-16)
PWM1CR 			   EQU       				      (TIMER_BASE_ADDR-17)
PWM10DH			   EQU       				      (TIMER_BASE_ADDR-18)
PWM10DL			   EQU       				      (TIMER_BASE_ADDR-19)
PWM11DH			   EQU       				      (TIMER_BASE_ADDR-20)
PWM11DL			   EQU       				      (TIMER_BASE_ADDR-21)
;========================================================================== 
#define			   TIMER2_BASE_ADDR			  (0xF69)
#define			   TIMER2_BANKSEL			    (0xF)
T2CR			     EQU       				      (TIMER2_BASE_ADDR-0)
TC2GCR			   EQU       				      (TIMER2_BASE_ADDR-1)
TC2PRH			   EQU       				      (TIMER2_BASE_ADDR-2)
TC2PRL			   EQU       				      (TIMER2_BASE_ADDR-3)
TC2CH			     EQU       				      (TIMER2_BASE_ADDR-4)
TC2CL			     EQU       				      (TIMER2_BASE_ADDR-5)
;==========================================================================  
#define			   UART0_BASE_ADDR			  (0xFD1)
#define			   UART0_BANKSEL			    (0xF)
TX0CR			     EQU       				      (UART0_BASE_ADDR-0)
RX0CR			     EQU       				      (UART0_BASE_ADDR-1)
BRGD0H			   EQU       				      (UART0_BASE_ADDR-2)
BRGD0L			   EQU       				      (UART0_BASE_ADDR-3)
TX0REG			   EQU       				      (UART0_BASE_ADDR-4)
RX0REG			   EQU       				      (UART0_BASE_ADDR-5)
;========================================================================== 
#define        PD_BASE_ADDR           (0xFB7)
#define        PD_BANKSEL             (0xF) 
PDD				     EQU       				      (PD_BASE_ADDR-0)
PDC				     EQU       				      (PD_BASE_ADDR-1)
PDB				     EQU       				      (PD_BASE_ADDR-2)
PDA				     EQU       				      (PD_BASE_ADDR-3)

;========================================================================== 
#define        PU_BASE_ADDR           (0xFBB)
#define        PU_BANKSEL             (0xF)
PUD				     EQU       				      (PU_BASE_ADDR-0)
PUC				     EQU       				      (PU_BASE_ADDR-1)
PUB				     EQU       				      (PU_BASE_ADDR-2)
PUA				     EQU       				      (PU_BASE_ADDR-3)

;========================================================================== 
#define        IC_BASE_ADDR           (0xFB3)
#define        IC_BANKSEL             (0xF)
IODICR			   EQU                    (IC_BASE_ADDR-0)
IOCICR			   EQU                    (IC_BASE_ADDR-1)
IOBICR			   EQU                    (IC_BASE_ADDR-2)
IOAICR			   EQU                    (IC_BASE_ADDR-3)

;==========================================================================
#define			   IOXODS0_BASE_ADDR		  (0xFAE)
#define			   IOXODS0_BANKSEL			  (0xF)
IODODS0			   EQU       				      (IOXODS0_BASE_ADDR-0)
IOCODS0			   EQU       				      (IOXODS0_BASE_ADDR-2)
IOBODS0			   EQU       				      (IOXODS0_BASE_ADDR-4)
IOAODS0			   EQU       				      (IOXODS0_BASE_ADDR-6)

;========================================================================== 
#define			   IOXODS1_BASE_ADDR		  (0xFAF)
#define			   IOXODS1_BANKSEL			  (0xF)
IODODS1			   EQU       				      (IOXODS1_BASE_ADDR-0)
IOCODS1			   EQU       				      (IOXODS1_BASE_ADDR-2)
IOBODS1			   EQU       				      (IOXODS1_BASE_ADDR-4)
IOAODS1			   EQU       				      (IOXODS1_BASE_ADDR-6)

;========================================================================== 
#define			   IPS_BASE_ADDR		      (0xF84)
#define			   IPS_BANKSEL			      (0xF)
IODIPS			   EQU       				      (IPS_BASE_ADDR-0)
IOCIPS			   EQU       				      (IPS_BASE_ADDR-1)
IOBIPS			   EQU       				      (IPS_BASE_ADDR-2)
IOAIPS			   EQU       				      (IPS_BASE_ADDR-3)

;========================================================================== 

                
;==========================================================================   
#define			   CMP_BASE_ADDR			    (0xF87)
#define			   CMP_BANKSEL				    (0xF)
CMPC2			     EQU       				      (CMP_BASE_ADDR-0)
CMPC1			     EQU       				      (CMP_BASE_ADDR-1)
CMPC0			     EQU       				      (CMP_BASE_ADDR-2)

;========================================================================== 
#define			   I2C_BASE_ADDR			    (0xF7F)
#define			   I2C_BANKSEL				    (0xF)	
I2CCR			     EQU       				      (I2C_BASE_ADDR-0)
I2CSTA			   EQU       				      (I2C_BASE_ADDR-1)
I2CDATA			   EQU       				      (I2C_BASE_ADDR-2)
I2CADR			   EQU       				      (I2C_BASE_ADDR-3)

;========================================================================== 
#define			   SPI_BASE_ADDR			    (0xF7B)
#define			   SPI_BANKSEL				    (0xF)	
SPICR			     EQU       				      (SPI_BASE_ADDR-0)
SPISTA			   EQU       				      (SPI_BASE_ADDR-1)
SPIDATA			   EQU       				      (SPI_BASE_ADDR-2)

;==========================================================================   
#define			   TK_BASE_ADDR			      (0xF77)
#define			   TK_BANKSEL				      (0xF)	
TKCTR5			   EQU       				      (TK_BASE_ADDR-0)
TKCTR4			   EQU       				      (TK_BASE_ADDR-1)
TKCTR3			   EQU       				      (TK_BASE_ADDR-2)
TKCTR2			   EQU       				      (TK_BASE_ADDR-3)
TKCTR1			   EQU       				      (TK_BASE_ADDR-4)
TKCTR0			   EQU       				      (TK_BASE_ADDR-5)
TKCHS3			   EQU       				      (TK_BASE_ADDR-6)
TKCHS2			   EQU       				      (TK_BASE_ADDR-7)
TKCHS1			   EQU       				      (TK_BASE_ADDR-8)
TKCHS0			   EQU       				      (TK_BASE_ADDR-9)
TKCNTH			   EQU       				      (TK_BASE_ADDR-10)
TKCNTL			   EQU       				      (TK_BASE_ADDR-11)
TKRCTR			   EQU       				      (TK_BASE_ADDR-12)
TKCCTR			   EQU       				      (TK_BASE_ADDR-13)

;==========================================================================
#define			   INTCR2_BASE_ADDR			   (0xF62)
#define			   INTCR2_BANKSEL				  (0xF)	
INTCR2			   EQU       				      (INTCR2_BASE_ADDR-0)
INTF2			   EQU       				      (INTCR2_BASE_ADDR-1)
INTP2			   EQU       				      (INTCR2_BASE_ADDR-2)
;==========================================================================
#define       MP_BASE_ADDR            0xF5F
#define       MP_BANKSEL              0xF
MPTX          EQU                     (MP_BASE_ADDR-0)
MPRX          EQU                     (MP_BASE_ADDR-1)
MPSDA         EQU                     (MP_BASE_ADDR-2)
MPSCL         EQU                     (MP_BASE_ADDR-3)
MPPWM0        EQU                     (MP_BASE_ADDR-4)
MPPWM10       EQU                     (MP_BASE_ADDR-5)
MPPWM11       EQU                     (MP_BASE_ADDR-6)
;==========================================================================
#define       LED_BASE_ADDR           0xF1F
#define       LED_BANKSEL             0xF
LEDCR1        EQU                     (LED_BASE_ADDR-0)
LEDCR0        EQU                     (LED_BASE_ADDR-1)
COMIOS        EQU                     (LED_BASE_ADDR-2)
MPCOM         EQU                     (LED_BASE_ADDR-3)
SEGIOSD       EQU                     (LED_BASE_ADDR-4)
SEGIOSC       EQU                     (LED_BASE_ADDR-5)
SEGIOSB       EQU                     (LED_BASE_ADDR-6)
SEGIOSA       EQU                     (LED_BASE_ADDR-7)
;==========================================================================
#define       CAL_BASE_ADDR           0xEFF
#define       CAL_BANKSEL             0xE
IRCCAL        EQU                     (CAL_BASE_ADDR-0)
IRCCAH        EQU                     (CAL_BASE_ADDR-1)
CALLOCK       EQU                     (CAL_BASE_ADDR-6)
;==========================================================================
FLIPCR        EQU                     0xF63

;----- INTCR0 Bits ------------------------------------------------------
RX0IE          EQU       07H
TX0IE          EQU       06H
I2CIE          EQU       05H
CMP0IE         EQU       04H
TC2GIE         EQU       03H
TC2IE          EQU       02H
TC1IE          EQU       01H
TC0IE          EQU       00H
;----- INTF0 Bits -------------------------------------------------------
RX0IF          EQU       07H
TX0IF          EQU       06H
I2CIF          EQU       05H
CMP0IF         EQU       04H
TC2GIF         EQU       03H
TC2IF          EQU       02H
TC1IF          EQU       01H
TC0IF          EQU       00H
;----- INTP0 Bits -------------------------------------------------------
RX0IP          EQU       07H
TX0IP          EQU       06H
I2CIP          EQU       05H
CMP0IP         EQU       04H
TC2GIP         EQU       03H
TC2IP          EQU       02H
TC1IP          EQU       01H
TC0IP          EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE         EQU       07H
INT0IE         EQU       06H
TKIE         EQU       07H
ADIE         EQU       06H
IODCHIE        EQU       03H
IOCCHIE        EQU       02H
IOBCHIE        EQU       01H
IOACHIE        EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF         EQU       07H
INT0IF         EQU       06H
TKIF         EQU       07H
ADIF         EQU       06H
IODCHIF        EQU       03H
IOCCHIF        EQU       02H
IOBCHIF        EQU       01H
IOACHIF        EQU       00H
;----- INTP1 Bits -------------------------------------------------------
INT1IP         EQU       07H
INT0IP         EQU       06H
TKIP         EQU       07H
ADIP         EQU       06H
IODCHIP        EQU       03H
IOCCHIP        EQU       02H
IOBCHIP        EQU       01H
IOACHIP        EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
SPIIE          EQU       00H

;----- INTF2 Bits -------------------------------------------------------
SPIF2          EQU       00H

;----- INTP2 Bits -------------------------------------------------------
SPIP          EQU       00H

;----- FLIPCR Bits -------------------------------------------------------
FLIPCR0          EQU       00H

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
LIRC500K        EQU       01H
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

;-----Bit Define-----------------------------------------------------------
#define     bTKIE       INTCR1      ,TKIE
#define     bTKIF       INTF1       ,TKIF
#define     bTKIP       INTP1       ,TKIP
#define     bADIE       INTCR1      ,ADIE
#define     bADIF       INTF1       ,ADIF
#define     bADIP       INTP1       ,ADIP 

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
 
#define     bRX0IE      INTCR0     ,RX0IE
#define     bRX0IF      INTF0      ,RX0IF
#define     bRX0IP      INTP0      ,RX0IP 

#define     bTX0IE      INTCR0     ,TX0IE
#define     bTX0IF      INTF0      ,TX0IF
#define     bTX0IP      INTP0      ,TX0IP
 
#define     bCMP0IE     INTCR0     ,CMP0IE
#define     bCMP0IF     INTF0      ,CMP0IF
#define     bCMP0IP     INTP0      ,CMP0IP


#define     bGIEL       OPTION     ,GIEL 
#define     bGIEH       OPTION     ,GIEH
#define     bGIE        OPTION     ,GIE

#define     bIOACHIE    INTCR1     ,IOACHIE
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOCCHIE    INTCR1     ,IOCCHIE
#define     bIODCHIE    INTCR1     ,IODCHIE
#define     bIOACHIF    INTF1      ,IOACHIF
#define     bIOBCHIF    INTF1      ,IOBCHIF
#define     bIOCCHIF    INTF1      ,IOCCHIF
#define     bIODCHIF    INTF1      ,IODCHIF
#define     bIOACHIP    INTP1      ,IOACHIP
#define     bIOBCHIP    INTP1      ,IOBCHIP
#define     bIOCCHIP    INTP1      ,IOCCHIP
#define     bIODCHIP    INTP1      ,IODCHIP

#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IE
#define     bINT0IP     INTP1      ,INT0IP
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IE
#define     bINT1IP     INTP1      ,INT1IP

;==========================================================================

; File End

;==========================================================================
        LIST
