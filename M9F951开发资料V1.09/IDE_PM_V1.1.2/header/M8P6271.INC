        NOLIST                                                                  
; M8P6271.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P6271 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P626                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P6271                                             
;       3. Processor Type entry in the ZCASM full-screen interface            
                                                                              
;==========================================================================   
;                                                                             
;       Revision History                                                      
;                                                                             
;==========================================================================   
                                                                              
;Rev:   Date:    Reason:                                                      
                                                                              
;1.00   00/00/00 Initial Release                                              
                                                                              
;==========================================================================   
;                                                                             
;       Verify Processor                                                      
;                                                                             
;==========================================================================   
                                                                              
IFNDEF __m8p6271  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;========================================================================== 
I2CADR       EQU       0ADH
I2CCON       EQU       0AEH
I2CBUF       EQU       0AFH  
INDF0        EQU       0B0H
FSR0         EQU       0B1H
TKCTR0       EQU       0B2H
TKCTR1       EQU       0B3H
TKCNTL       EQU       0B4H
TKCNTH       EQU       0B5H
TKCHSL       EQU       0B6H
INDF1        EQU       0B8H
FSR1         EQU       0B9H
PCL          EQU       0BAH
STATUS       EQU       0BBH
OPTION       EQU       0BCH
OSCM         EQU       0BDH
WDTC         EQU       0BEH
IOAICR       EQU       0BFH
INDF2        EQU       0C0H
HBUF         EQU       0C1H
MPUART       EQU       0C2H
INTCR0       EQU       0C4H
INTF0        EQU       0C5H
INTCR1       EQU       0C6H
INTF1        EQU       0C7H
IOA          EQU       0C8H
OEA          EQU       0C9H
PUA          EQU       0CAH
ANSA       EQU       0CBH
PWM01D       EQU       0CDH
PWM02D       EQU       0CEH
PWM03D       EQU       0CFH
IOAOR        EQU       0D0H
IOAODS0      EQU       0D1H
IOAIPS       EQU       0D2H
CMPC0        EQU       0D4H
CMPC1        EQU       0D5H
CMPC2        EQU       0D6H
PWM0CR       EQU       0D8H
PWM00D       EQU       0D9H
TX0CR         EQU       0DAH
TX0REG        EQU       0DBH
RX0CR         EQU       0DCH
RX0REG        EQU       0DDH
BRGD0H        EQU       0DEH
BRGD0L        EQU       0DFH
ADCON0       EQU       0E0H
ADCON1       EQU       0E1H
ADL          EQU       0E2H
ADH          EQU       0E3H
ADCON2       EQU       0E4H
T1CR         EQU       0E5H
TC1CL        EQU       0E6H
TC1CH        EQU       0E7H
T0CR         EQU       0E8H
TC0CL        EQU       0E9H
TC0CH        EQU       0EAH
PWMDEADT     EQU       0EBH
PWM1DEAD     EQU       0EBH
PWM1S        EQU       0ECH
PWM1CR       EQU       0EDH
PWM1DL       EQU       0EEH
PWM1DH       EQU       0EFH
IRCCAL       EQU       0FCH
VREFCAL      EQU       0FAH
;------------------------------------------------------------------------
R            EQU       01H
A            EQU       00H
;----- I2CADR Bits ------------------------------------------------------
I2CADR7      EQU       07H
I2CADR6      EQU       06H
I2CADR5      EQU       05H
I2CADR4      EQU       04H
I2CADR3      EQU       03H
I2CADR2      EQU       02H
I2CADR1      EQU       01H
I2CADR0      EQU       00H
;----- I2CCON Bits ------------------------------------------------------
I2CEN        EQU       07H
R_W          EQU       06H
D_A          EQU       05H
BF           EQU       04H
NACK         EQU       03H
IICM         EQU       01H
IICPS        EQU       00H
;----- I2CBUF Bits ------------------------------------------------------
I2CBUF7      EQU       07H
I2CBUF6      EQU       06H
I2CBUF5      EQU       05H
I2CBUF4      EQU       04H
I2CBUF3      EQU       03H
I2CBUF2      EQU       02H
I2CBUF1      EQU       01H
I2CBUF0      EQU       00H
;----- INDF0 Bits ------------------------------------------------------
INDF07       EQU       07H
INDF06       EQU       06H
INDF05       EQU       05H
INDF04       EQU       04H
INDF03       EQU       03H
INDF02       EQU       02H
INDF01       EQU       01H
INDF00       EQU       00H
;----- FSR0 Bits ------------------------------------------------------
FSR07        EQU       07H
FSR06        EQU       06H
FSR05        EQU       05H
FSR04        EQU       04H
FSR03        EQU       03H
FSR02        EQU       02H
FSR01        EQU       01H
FSR00        EQU       00H
;----- TKCTR0 Bits ------------------------------------------------------
TKEN         EQU       07H
TKSTART      EQU       06H
TKCKS1       EQU       05H
TKCKS0       EQU       04H
;----- TKCTR1 Bits ------------------------------------------------------
TKVLS1       EQU       07H
TKVLS0       EQU       06H
TKVCS1       EQU       05H
TKVCS0       EQU       04H
;----- TKCNTL Bits ------------------------------------------------------
TKCNTL7      EQU       07H
TKCNTL6      EQU       06H
TKCNTL5      EQU       05H
TKCNTL4      EQU       04H
TKCNTL3      EQU       03H
TKCNTL2      EQU       02H
TKCNTL1      EQU       01H
TKCNTL0      EQU       00H
;----- TKCNTH Bits ------------------------------------------------------
TKCNTH7      EQU       07H
TKCNTH6      EQU       06H
TKCNTH5      EQU       05H
TKCNTH4      EQU       04H
TKCNTH3      EQU       03H
TKCNTH2      EQU       02H
TKCNTH1      EQU       01H
TKCNTH0      EQU       00H
;----- TKCHSL Bits ------------------------------------------------------
TKCHS7       EQU       07H
TKCHS6       EQU       06H
TKCNT5       EQU       05H
TKCNT4       EQU       04H
TKCNT3       EQU       03H
TKCNT2       EQU       02H
TKCNT1       EQU       01H
TKCNT0       EQU       00H
;----- INDF1 Bits ------------------------------------------------------
INDF17       EQU       07H
INDF16       EQU       06H
INDF15       EQU       05H
INDF14       EQU       04H
INDF13       EQU       03H
INDF12       EQU       02H
INDF11       EQU       01H
INDF10       EQU       00H
;----- FSR1 Bits ------------------------------------------------------
FSR17        EQU       07H
FSR16        EQU       06H
FSR15        EQU       05H
FSR14        EQU       04H
FSR13        EQU       03H
FSR12        EQU       02H
FSR11        EQU       01H
FSR10        EQU       00H
;----- PCL Bits ------------------------------------------------------
PCL7         EQU       07H
PCL6         EQU       06H
PCL5         EQU       05H
PCL4         EQU       04H
PCL3         EQU       03H
PCL2         EQU       02H
PCL1         EQU       01H
PCL0         EQU       00H
;----- STATUS Bits ------------------------------------------------------
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OPTION Bits ------------------------------------------------------
GIE          EQU       07H
TO           EQU       05H
PD           EQU       04H
MINT11       EQU       03H
MINT10       EQU       02H
MINT01       EQU       01H
MINT00       EQU       00H
;----- OSCM Bits ------------------------------------------------------
STBH         EQU       07H
STBL         EQU       06H
STOP         EQU       04H
CLKM         EQU       03H
STPH         EQU       02H
STPL         EQU       00H
;----- WDTC Bits ------------------------------------------------------
WDTC7        EQU       07H
WDTC6        EQU       06H
WDTC5        EQU       05H
WDTC4        EQU       04H
WDTC3        EQU       03H
WDTC2        EQU       02H
WDTC1        EQU       01H
WDTC0        EQU       00H
;----- IOAICR Bits ------------------------------------------------------
IOAICR7      EQU       07H
IOAICR6      EQU       06H
IOAICR5      EQU       05H
IOAICR4      EQU       04H
IOAICR3      EQU       03H
IOAICR2      EQU       02H
IOAICR1      EQU       01H
IOAICR0      EQU       00H
;----- INDF2 Bits ------------------------------------------------------
INDF27       EQU       07H
INDF26       EQU       06H
INDF25       EQU       05H
INDF24       EQU       04H
INDF23       EQU       03H
INDF22       EQU       02H
INDF21       EQU       01H
INDF20       EQU       00H
;----- HBUF Bits ------------------------------------------------------
HBUF7        EQU       07H
HBUF6        EQU       06H
HBUF5        EQU       05H
HBUF4        EQU       04H
HBUF3        EQU       03H
HBUF2        EQU       02H
HBUF1        EQU       01H
HBUF0        EQU       00H
;----- MPUART Bits ------------------------------------------------------
MPRX2        EQU       06H
MPRX1        EQU       05H
MPRX0        EQU       04H
MPTX2        EQU       02H
MPTX1        EQU       01H
MPTX0        EQU       00H
;----- INTCR0 Bits ------------------------------------------------------
TKIE         EQU       07H
ADIE         EQU       06H
RXIE         EQU       05H
TXIE         EQU       04H
I2CIE        EQU       03H
CMP0IE       EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TKIF         EQU       07H
ADIF         EQU       06H
RXIF         EQU       05H
TXIF         EQU       04H
I2CIF        EQU       03H
CMP0IF       EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE       EQU       03H
INT0IE       EQU       02H
IOACHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       03H
INT0IF       EQU       02H
IOACHIF      EQU       00H
;----- IOA Bits ------------------------------------------------------
IOA7         EQU       07H
IOA6         EQU       06H
IOA5         EQU       05H
IOA4         EQU       04H
IOA3         EQU       03H
IOA2         EQU       02H
IOA1         EQU       01H
IOA0         EQU       00H
;----- OEA Bits ------------------------------------------------------
OEA7         EQU       07H
OEA6         EQU       06H
OEA5         EQU       05H
OEA4         EQU       04H
OEA3         EQU       03H
OEA2         EQU       02H
OEA1         EQU       01H
OEA0         EQU       00H
;----- PUA Bits ------------------------------------------------------
PUA7         EQU       07H
PUA6         EQU       06H
PUA5         EQU       05H
PUA4         EQU       04H
PUA3         EQU       03H
PUA2         EQU       02H
PUA1         EQU       01H
PUA0         EQU       00H
;----- ANSA Bits ------------------------------------------------------
PDA3         EQU       07H
ANSA6        EQU       06H
ANSA5        EQU       05H
ANSA4        EQU       04H
ANSA3        EQU       03H
ANSA2        EQU       02H
ANSA1        EQU       01H
ANSA0        EQU       00H
;----- PMM01D Bits ------------------------------------------------------
PMM01D7        EQU       07H
PMM01D6        EQU       06H
PMM01D5        EQU       05H
PMM01D4        EQU       04H
PMM01D3        EQU       03H
PMM01D2        EQU       02H
PMM01D1        EQU       01H
PMM01D0        EQU       00H
;----- PMM02D Bits ------------------------------------------------------
PMM02D7        EQU       07H
PMM02D6        EQU       06H
PMM02D5        EQU       05H
PMM02D4        EQU       04H
PMM02D3        EQU       03H
PMM02D2        EQU       02H
PMM02D1        EQU       01H
PMM02D0        EQU       00H
;----- PMM03D Bits ------------------------------------------------------
PMM03D7        EQU       07H
PMM03D6        EQU       06H
PMM03D5        EQU       05H
PMM03D4        EQU       04H
PMM03D3        EQU       03H
PMM03D2        EQU       02H
PMM03D1        EQU       01H
PMM03D0        EQU       00H
;----- IOAOR Bits ------------------------------------------------------
IOAOR7         EQU       07H
IOAOR6         EQU       06H
IOAOR5         EQU       05H
IOAOR4         EQU       04H
IOAOR3         EQU       03H
IOAOR2         EQU       02H
IOAOR1         EQU       01H
IOAOR0         EQU       00H
;----- IOAODS0 Bits ------------------------------------------------------
IOAODS07       EQU       07H
IOAODS06       EQU       06H
IOAODS05       EQU       05H
IOAODS04       EQU       04H
IOAODS03       EQU       03H
IOAODS02       EQU       02H
IOAODS01       EQU       01H
IOAODS00       EQU       00H
;----- IOAIPS Bits ------------------------------------------------------
IOAIPS7        EQU       07H
IOAIPS6        EQU       06H
IOAIPS5        EQU       05H
IOAIPS4        EQU       04H
IOAIPS3        EQU       03H
IOAIPS2        EQU       02H
IOAIPS1        EQU       01H
IOAIPS0        EQU       00H
;----- CMPC0 Bits ------------------------------------------------------
CMPEN          EQU       07H
CMPOUT         EQU       06H
CMPNS2         EQU       05H
CMPNS1         EQU       04H
CMPNS0         EQU       03H
CMPPS2         EQU       02H
CMPPS1         EQU       01H
CMPPS0         EQU       00H
;----- CMPC1 Bits ------------------------------------------------------
C0PVRC        EQU       06H
CMPVLD4        EQU       04H
CMPVLD3        EQU       03H
CMPVLD2        EQU       02H
CMPVLD1        EQU       01H
CMPVLD0        EQU       00H
;----- CMPC2 Bits ------------------------------------------------------
CINTS1         EQU       07H
CINTS0         EQU       06H
DEB2           EQU       02H
DEB1           EQU       01H
DEB0           EQU       00H
;----- PWM0CR Bits ------------------------------------------------------
PWM03EN        EQU       07H
PWM03OE        EQU       06H
PWM02EN        EQU       05H
PWM02OE        EQU       04H
PWM01EN        EQU       03H
PWM01OE        EQU       02H
PWM00EN        EQU       01H
PWM00OE        EQU       00H
;----- PMM00D Bits ------------------------------------------------------
PMM00D7        EQU       07H
PMM00D6        EQU       06H
PMM00D5        EQU       05H
PMM00D4        EQU       04H
PMM00D3        EQU       03H
PMM00D2        EQU       02H
PMM00D1        EQU       01H
PMM00D0        EQU       00H
;----- TX0CR Bits ------------------------------------------------------
TXEN           EQU       07H
TMCLR          EQU       06H
SYNC           EQU       05H
TX9            EQU       04H
SLAVE          EQU       03H
SPD1           EQU       02H
SPD0           EQU       01H
TXD9           EQU       00H
;----- TX0REG Bits ------------------------------------------------------
TX0D7        EQU       07H
TX0D6        EQU       06H
TX0D5        EQU       05H
TX0D4        EQU       04H
TX0D3        EQU       03H
TX0D2        EQU       02H
TX0D1        EQU       01H
TX0D0        EQU       00H
;----- RX0CR Bits ------------------------------------------------------
RXEN           EQU       07H
CKPS           EQU       06H
RX9            EQU       04H
SREN           EQU       03H
RXOVF          EQU       02H
FRER           EQU       01H
RXD9           EQU       00H
;----- RX0REG Bits ------------------------------------------------------
RX0D7        EQU       07H
RX0D6        EQU       06H
RX0D5        EQU       05H
RX0D4        EQU       04H
RX0D3        EQU       03H
RX0D2        EQU       02H
RX0D1        EQU       01H
RX0D0        EQU       00H
;----- BRGD0H Bits ------------------------------------------------------
SBYTE        EQU       07H
BRGD9        EQU       01H
BRGD8        EQU       00H
;----- BRGD0L Bits ------------------------------------------------------
BRGD7        EQU       07H
BRGD6        EQU       06H
BRGD5        EQU       05H
BRGD4        EQU       04H
BRGD3        EQU       03H
BRGD2        EQU       02H
BRGD1        EQU       01H
BRGD0        EQU       00H
;----- ADCON0 Bits ------------------------------------------------------
ADON         EQU       07H
ADS          EQU       06H
ADEOC        EQU       05H
ADFM         EQU       04H
CHS3         EQU       03H
CHS2         EQU       02H
CHS1         EQU       01H
CHS0         EQU       00H
;----- ADCON1 Bits ------------------------------------------------------
VHS2         EQU       07H
ADCKS2       EQU       06H
ADCKS1       EQU       05H
ADCKS0       EQU       04H
VREMS1       EQU       03H
VREMS0       EQU       02H
VHS1         EQU       01H
VHS0         EQU       00H
;----- ADCON2 Bits ------------------------------------------------------
ADVOS3       EQU       03H
ADVOS2       EQU       02H
ADVOS1       EQU       01H
ADVOS0       EQU       00H
;----- ADL Bits ------------------------------------------------------
ADL7        EQU       07H
ADL6        EQU       06H
ADL5        EQU       05H
ADL4        EQU       04H
ADL3        EQU       03H
ADL2        EQU       02H
ADL1        EQU       01H
ADL0        EQU       00H
;----- ADH Bits ------------------------------------------------------
ADH7        EQU       07H
ADH6        EQU       06H
ADH5        EQU       05H
ADH4        EQU       04H
ADH3        EQU       03H
ADH2        EQU       02H
ADH1        EQU       01H
ADH0        EQU       00H
;----- T1CR Bits ------------------------------------------------------
TC1EN       EQU       07H
TC1MOD      EQU       06H
TC1CKS1     EQU       04H
TC1CKS0     EQU       03H
TC1CKPS2    EQU       02H
TC1CKPS1    EQU       01H
TC1CKPS0    EQU       00H
;----- T0CR Bits ------------------------------------------------------
TC0EN       EQU       07H
TC0MOD      EQU       06H
TC0CKS1     EQU       04H
TC0CKS0     EQU       03H
TC0CKPS2    EQU       02H
TC0CKPS1    EQU       01H
TC0CKPS0    EQU       00H
;----- TC1CL Bits ------------------------------------------------------
TC1CL7        EQU       07H
TC1CL6        EQU       06H
TC1CL5        EQU       05H
TC1CL4        EQU       04H
TC1CL3        EQU       03H
TC1CL2        EQU       02H
TC1CL1        EQU       01H
TC1CL0        EQU       00H
;----- TC1CH Bits ------------------------------------------------------
TC1CH7        EQU       07H
TC1CH6        EQU       06H
TC1CH5        EQU       05H
TC1CH4        EQU       04H
TC1CH3        EQU       03H
TC1CH2        EQU       02H
TC1CH1        EQU       01H
TC1CH0        EQU       00H
;----- TC0CL Bits ------------------------------------------------------
TC0CL7        EQU       07H
TC0CL6        EQU       06H
TC0CL5        EQU       05H
TC0CL4        EQU       04H
TC0CL3        EQU       03H
TC0CL2        EQU       02H
TC0CL1        EQU       01H
TC0CL0        EQU       00H
;----- TC0CH Bits ------------------------------------------------------
TC0CH7        EQU       07H
TC0CH6        EQU       06H
TC0CH5        EQU       05H
TC0CH4        EQU       04H
TC0CH3        EQU       03H
TC0CH2        EQU       02H
TC0CH1        EQU       01H
TC0CH0        EQU       00H
;----- PWMDEADT Bits ------------------------------------------------------
DEADTF3        EQU       07H
DEADTF2        EQU       06H
DEADTF1        EQU       05H
DEADTF0        EQU       04H
DEADTR3        EQU       03H
DEADTR2        EQU       02H
DEADTR1        EQU       01H
DEADTR0        EQU       00H
;----- PWM1S Bits ------------------------------------------------------
PWM1C        EQU       02H
PWM1B        EQU       01H
PWM1A        EQU       00H
;----- PWM1CR Bits ------------------------------------------------------
PWM1EN         EQU       07H
PWM1POE        EQU       06H
PWM1NON        EQU       05H
PWM1PAS        EQU       04H
PWM1NAS        EQU       03H
PWM1M          EQU       01H
PWM1T          EQU       00H
;----- PWM1DL Bits ------------------------------------------------------
PWM1DL7        EQU       07H
PWM1DL6        EQU       06H
PWM1DL5        EQU       05H
PWM1DL4        EQU       04H
PWM1DL3        EQU       03H
PWM1DL2        EQU       02H
PWM1DL1        EQU       01H
PWM1DL0        EQU       00H
;----- PWM1DH Bits ------------------------------------------------------
PWM1DH7        EQU       07H
PWM1DH6        EQU       06H
PWM1DH5        EQU       05H
PWM1DH4        EQU       04H
PWM1DH3        EQU       03H
PWM1DH2        EQU       02H
PWM1DH1        EQU       01H
PWM1DH0        EQU       00H
;----- IRCCAL Bits ------------------------------------------------------
IRCCAL6        EQU       06H
IRCCAL5        EQU       05H
IRCCAL4        EQU       04H
IRCCAL3        EQU       03H
IRCCAL2        EQU       02H
IRCCAL1        EQU       01H
IRCCAL0        EQU       00H



#define     bADON      ADCON0,ADON
#define     bADS       ADCON0,ADS
#define     bADEOC     ADCON0,ADEOC
;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE
#define     bTKIE       INTCR0     ,TKIE
#define     bTKIF       INTF0      ,TKIF
#define     bADIE       INTCR0     ,ADIE
#define     bADIF       INTF0      ,ADIF
#define     bTXIE       INTCR0     ,TXIE
#define     bTXIF       INTF0      ,TXIF
#define     bRXIE       INTCR0     ,RXIE
#define     bRXIF       INTF0      ,RXIF
#define     bI2CIE      INTCR0     ,I2CIE
#define     bI2CIF      INTF0      ,I2CIF
#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF

#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IF
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IF
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOBCHIF    INTF1      ,IOBCHIF


;==========================================================================
;
; File End
;
;==========================================================================
        LIST
