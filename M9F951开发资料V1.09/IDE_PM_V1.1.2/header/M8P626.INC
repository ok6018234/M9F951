        NOLIST                                                                  
; M8P626.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P626 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P626                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P626                                             
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
                                                                              
IFNDEF __m8p626  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   
INDF0        EQU       0B0H
FSR0         EQU       0B1H
TKCTR0       EQU       0B2H
TKCTR1       EQU       0B3H
TKCNTL       EQU       0B4H
TKCNTH       EQU       0B5H
TKCHSL       EQU       0B6H
TKCHSH       EQU       0B7H
INDF1        EQU       0B8H
FSR1         EQU       0B9H
PCL          EQU       0BAH
STATUS       EQU       0BBH
OPTION       EQU       0BCH
OSCM         EQU       0BDH
WDTC         EQU       0BEH
IOBICR       EQU       0BFH
INDF2        EQU       0C0H
HBUF         EQU       0C1H
PDB          EQU       0C2H
INTCR0       EQU       0C4H
INTF0        EQU       0C5H
INTCR1       EQU       0C6H
INTF1        EQU       0C7H
IOA          EQU       0C8H
OEA          EQU       0C9H
PUA          EQU       0CAH
ANSA         EQU       0CBH
IOB          EQU       0CCH
OEB          EQU       0CDH
PUB          EQU       0CEH
ANSB         EQU       0CFH
IOC          EQU       0D0H
OEC          EQU       0D1H
PUC          EQU       0D2H
ANSC         EQU       0D3H
IOIDS        EQU       0D4H
I2CADR       EQU       0D5H
I2CCON       EQU       0D6H
I2CBUF       EQU       0D7H
PWM0CR       EQU       0D8H
PWM0D        EQU       0D9H
TXCR         EQU       0DAH
TXREG        EQU       0DBH
RXCR         EQU       0DCH
RXREG        EQU       0DDH
BRGDH        EQU       0DEH
BRGDL        EQU       0DFH
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
EECON1			 EQU			 0F0H
EECON2       EQU			 0F1H
IRCCAL       EQU       1FCH
VREFCAL      EQU       1FAH
;------------------------------------------------------------------------
R            EQU       01H
A            EQU       00H
;----- I2CCON Bits ------------------------------------------------------
I2CEN        EQU       07H
R_W          EQU       06H
D_A          EQU       05H
BF           EQU       04H
NACK         EQU       03H
;----- INTCR0 Bits ------------------------------------------------------
TKIE         EQU       07H
ADIE         EQU       06H
RXIE         EQU       05H
TXIE         EQU       04H
I2CIE        EQU       03H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TKIF         EQU       07H
ADIF         EQU       06H
RXIF         EQU       05H
TXIF         EQU       04H
I2CIF        EQU       03H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE       EQU       03H
INT0IE       EQU       02H
IOBCHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       03H
INT0IF       EQU       02H
IOBCHIF      EQU       00H
;----- STATUS Bits ------------------------------------------------------
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OSCM Bits --------------------------------------------------------
STBH         EQU       07H 
STBL         EQU       06H 
HSPDX2			 EQU			 05H
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
MINT11       EQU       03H
MINT10       EQU       02H
MINT01       EQU       01H
MINT00       EQU       00H
;----- ADCON0 Bits --------------------------------------------------------
ADEN         EQU       07H
ADON         EQU       07H
ADS          EQU       06H 
EOC          EQU       05H
ADEOC        EQU       05H
ADFM         EQU       04H
#define     bADON      ADCON0,ADEN
#define     bADS       ADCON0,ADS
#define     bADEOC     ADCON0,EOC
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
#define     bEEMOD      EECON1     ,7
#define     bWERR       EECON1     ,1
#define     bEEWEN      EECON1     ,0
#define     bEELOCK3    EECON2     ,3
#define     bEELOCK2    EECON2     ,2
#define     bEELOCK1    EECON2     ,1
#define     bEEWR       EECON2     ,0
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
