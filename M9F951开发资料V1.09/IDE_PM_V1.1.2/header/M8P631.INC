        NOLIST                                                                  
; M8P631.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P631 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P631                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P631                                             
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
                                                                              
IFNDEF __m8p631  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================     
LCDCR0       EQU       1A0H
LCDCR1       EQU       1A1H
LCDCR2       EQU       1A2H
CMPC0        EQU       1A3H
CMPC1        EQU       1A4H
OPAC0        EQU       1A5H
OPAC1        EQU       1A6H
COPAC        EQU       1A7H
RFCCR0       EQU       1A8H
RFCCR        EQU       1A8H
TKCTR        EQU       1A9H   
ANSA         EQU       1AAH
ANSF         EQU       1ABH
PWM2CR       EQU       1ACH
PWM2DH       EQU       1ADH
PWM2DL       EQU       1AEH
INDF0        EQU       1B0H
FSR0         EQU       1B1H
TXCR         EQU       1B2H
TXREG        EQU       1B3H
RXCR         EQU       1B4H
RXREG        EQU       1B5H
BRGDH        EQU       1B6H
BRGDL        EQU       1B7H
INDF1        EQU       1B8H
FSR1         EQU       1B9H
INDF2        EQU       1C0H
PCL          EQU       1BAH
STATUS       EQU       1BBH
OPTION       EQU       1BCH
OSCM         EQU       1BDH
WDTC         EQU       1BEH
HBUF         EQU       1C1H
INTCR0       EQU       1C4H
INTF0        EQU       1C5H
INTCR1       EQU       1C6H
INTF1        EQU       1C7H
IOA          EQU       1C8H
OEA          EQU       1C9H
PUA          EQU       1CAH
IOAICR       EQU       1CBH
IOB          EQU       1CCH
OEB          EQU       1CDH
IOC          EQU       1D0H
OEC          EQU       1D1H
IOD          EQU       1D4H
OED          EQU       1D5H
IOE          EQU       1D8H
OEE          EQU       1D9H
IODS         EQU       1DBH
IOF          EQU       1DCH
OEF          EQU       1DDH
PUF          EQU       1DEH
IOFICR       EQU       1DFH
PWM0CR       EQU       1E0H
PWM0DH       EQU       1E1H
PWM0DL       EQU       1E2H
PWMDEADT     EQU       1E3H
PWM1CR       EQU       1E4H
PWM1DH       EQU       1E5H
PWM1DL       EQU       1E6H

T0CR         EQU       1E8H
TC0CL        EQU       1E9H
TC0CH        EQU       1EAH

T1CR         EQU       1ECH
TC1CL        EQU       1EDH
TC1CH        EQU       1EEH
T2CR         EQU       1F0H
TC2CL        EQU       1F1H
TC2CH        EQU       1F2H
T2GCR        EQU       1F3H
ADCON0       EQU       1F4H
ADCON1       EQU       1F5H
ADCON2       EQU       1BFH
ADL          EQU       1F6H
ADH          EQU       1F7H
LVDCON       EQU       1F8H

IRCCAL       EQU       1FCH
OSCCAL       EQU       1FCH
VREFCAL      EQU       1FAH

LCDCR0       EQU       1A0H
LCDCR1       EQU       1A1H
LCDCR2       EQU       1A2H
LCDDS0       EQU       180H
LCDDS1       EQU       181H
LCDDS2       EQU       182H
LCDDS3       EQU       183H
LCDDS4       EQU       184H
LCDDS5       EQU       185H
LCDDS6       EQU       186H
LCDDS7       EQU       187H
LCDDS8       EQU       188H
LCDDS9       EQU       189H
LCDDS10      EQU       18AH
LCDDS11      EQU       18BH
LCDDS12      EQU       18CH
LCDDS13      EQU       18DH
LCDDS14      EQU       18EH
LCDDS15      EQU       18FH
LCDDS16      EQU       190H
LCDDS17      EQU       191H
LCDDS18      EQU       192H
LCDDS19      EQU       193H
LCDDS20      EQU       194H
LCDDS21      EQU       195H
LCDDS22      EQU       196H
LCDDS23      EQU       197H
LCDDS24      EQU       198H
LCDDS25      EQU       199H
LCDDS26      EQU       19AH
LCDDS27      EQU       19BH
LCDDS28      EQU       19CH
LCDDS29      EQU       19DH
LCDDS30      EQU       19EH
LCDDS31      EQU       19FH

R            EQU       01H
A            EQU       00H
;----- INTCR0 Bits ------------------------------------------------------
TKIE         EQU       07H
ADIE         EQU       06H
RXIE         EQU       05H
TXIE         EQU       04H
RX0IE        EQU       05H
TX0IE        EQU       04H
TC2GIE       EQU       03H
TC2IE        EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TKIF         EQU       07H
ADIF         EQU       06H
RXIF         EQU       05H
TXIF         EQU       04H
RX0IF        EQU       05H
TX0IF        EQU       04H
TC2GIF       EQU       03H
TC2IF        EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
CMPIE        EQU       07H
OPAIE        EQU       06H
LVDIE        EQU       04H
;INT1IE       EQU       03H
;INT0IE       EQU       02H
IOFCHIE      EQU       01H
IOACHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
CMPIF        EQU       07H
OPAIF        EQU       06H
LVDIF        EQU       04H
;INT1IF       EQU       03H
;INT0IF       EQU       02H
IOFCHIF      EQU       01H
IOACHIF      EQU       00H
;----- STATUS Bits ------------------------------------------------------
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
LIRC500K     EQU       01H
STPL         EQU       00H
;----- Option Bits --------------------------------------------------------
GIE          EQU       07H
TO           EQU       05H
PD           EQU       04H
;MINT11       EQU       03H
;MINT10       EQU       02H
;MINT01       EQU       01H
;MINT00       EQU       00H

#define     TX0CR       TXCR
#define     TX0REG      TXREG
#define     RX0CR       RXCR
#define     RX0REG      RXREG
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
