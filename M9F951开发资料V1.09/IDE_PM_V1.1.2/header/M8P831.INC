        NOLIST                                                                  
; M8P831.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                               
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P831 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P831                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P831                                             
;       3. Processor Type entry in the ZCASM full-screen interface            
                                                                              
;==========================================================================   
;                                                                             
;       Revision History         2019-4-2                                             
;                                                                             
;==========================================================================   
                                                                              
;Rev:   Date:    Reason:                                                      
                                                                              
;1.00   00/00/00 Initial Release                                              
                                                                              
;==========================================================================   
;                                                                             
;       Verify Processor                                                      
;                                                                             
;==========================================================================   
                                                                              
IFNDEF __m8p831  ;XXX                                                        
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
LCDCR3       EQU       1A3H
SEGIOSH      EQU       1AAH
SEGIOSG      EQU       1ABH
SEGIOSF      EQU       1ACH
SEGIOSE      EQU       1ADH
SEGIOSD      EQU       1AEH
SEGIOSC      EQU       1AFH
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
PCL          EQU       1BAH
STATUS       EQU       1BBH
OPTION       EQU       1BCH
OSCM         EQU       1BDH
WDTC         EQU       1BEH
RFCCR        EQU       1BFH
INDF2        EQU       1C0H
HBUF         EQU       1C1H
INTCR2       EQU       1C2H
INTF2        EQU       1C3H
INTCR0       EQU       1C4H
INTF0        EQU       1C5H
INTCR1       EQU       1C6H
INTF1        EQU       1C7H
IOA          EQU       1C8H
OEA          EQU       1C9H
IOB          EQU       1CAH
OEB          EQU       1CBH
IOC          EQU       1CCH
OEC          EQU       1CDH
IOD          EQU       1CEH
OED          EQU       1CFH
IOE          EQU       1D0H
OEE          EQU       1D1H
IOF          EQU       1D2H
OEF          EQU       1D3H
IOG          EQU       1D4H
OEG          EQU       1D5H
IOH          EQU       1D6H 
OEH          EQU       1D7H
PWM0CR       EQU       1D8H
PWM0D        EQU       1D9H
PWM1CR       EQU       1DAH
PWM1D	     EQU       1DBH
PWM2CR       EQU       1DCH
PWM2D        EQU       1DDH
T2CR         EQU       1DEH
T2GCR        EQU       1DFH
PUA          EQU       1E0H
PUB          EQU       1E1H
PUC          EQU       1E2H
IOBICR       EQU       1E3H
IOCICR       EQU       1E4H
IODSCR0      EQU       1E5H
IODSCR1      EQU       1E6H
IOICR        EQU       1E7H
T0CR         EQU       1E8H
TC0CL        EQU       1E9H
TC0CH        EQU       1EAH
T1CR         EQU       1EBH
TC1CL        EQU       1ECH
TC1CH        EQU       1EDH
TC2CL        EQU       1EEH
TC2CH        EQU       1EFH
I2CADDR      EQU       1F0H
I2CCON       EQU       1F1H
I2CBUF       EQU       1F2H
CMPC0        EQU       1F5H
CMPC1        EQU       1F6H
CMPC2        EQU       1F7H
;LPVOL        EQU       1F7H
VREFCAL      EQU       1FAH
IRCCAL       EQU       1FCH


LCDDS00      EQU       170H
LCDDS01      EQU       171H
LCDDS02      EQU       172H
LCDDS03      EQU       173H
LCDDS04      EQU       174H
LCDDS05      EQU       175H
LCDDS06      EQU       176H
LCDDS07      EQU       177H
LCDDS08      EQU       178H
LCDDS09      EQU       179H
LCDDS10      EQU       17AH
LCDDS11      EQU       17BH
LCDDS12      EQU       17CH
LCDDS13      EQU       17DH
LCDDS14      EQU       17EH
LCDDS15      EQU       17FH
LCDDS16      EQU       180H
LCDDS17      EQU       181H
LCDDS18      EQU       182H
LCDDS19      EQU       183H
LCDDS20      EQU       184H
LCDDS21      EQU       185H
LCDDS22      EQU       186H
LCDDS23      EQU       187H
LCDDS24      EQU       188H
LCDDS25      EQU       189H
LCDDS26      EQU       18AH
LCDDS27      EQU       18BH
LCDDS28      EQU       18CH
LCDDS29      EQU       18DH
LCDDS30      EQU       18EH





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
TC2GIE       EQU       03H
TC2IE        EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TC2GIF       EQU       03H
TC2IF        EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE       EQU       07H
INT0IE       EQU       06H

IOCCHIE      EQU       01H
IOBCHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       07H
INT0IF       EQU       06H

IOCCHIF      EQU       01H
IOBCHIF      EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
CMPIE        EQU       07H

I2CIE        EQU       04H

RXIE         EQU       01H
TXIE         EQU       00H
;----- INTF2 Bits -------------------------------------------------------
CMPIF        EQU       07H

I2CIF        EQU       04H
RXIF         EQU       01H
TXIF         EQU       00H
;----- STATUS Bits ------------------------------------------------------
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OSCM Bits --------------------------------------------------------
STBH         EQU       07H 
STBL         EQU       06H 
HSPDX2			 EQU       05H
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
;//---EECON0 Bits ---------------------------------------------------------
;EEMOD        EQU       07H
;WERR         EQU       01H
;EEWEN        EQU       00H
;//---EECON1 Bits ---------------------------------------------------------
;EEWR         EQU       00H
;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE

#define     bCMPIE      INTCR2     ,CMPIE
#define     bCMPIF      INTF2      ,CMPIF
#define     bTXIE       INTCR2     ,TXIE
#define     bTXIF       INTF2      ,TXIF
#define     bRXIE       INTCR2     ,RXIE
#define     bRXIF       INTF2      ,RXIF
#define     bI2CIE      INTCR2     ,I2CIE
#define     bI2CIF      INTF2      ,I2CIF
;===========================================================================
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IF
#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IF

#define     bIOCCHIE    INTCR1     ,IOCCHIE
#define     bIOCCHIF    INTF1      ,IOCCHIF
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOBCHIF    INTF1      ,IOBCHIF
;===========================================================================
#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF
#define     bTC2IE      INTCR0     ,TC2IE
#define     bTC2IF      INTF0      ,TC2IF
#define     bTC2GIE     INTCR0     ,TC2GIE
#define     bTC2GIF     INTF0      ,TC2GIF

;==========================================================================

;==========================================================================

;==========================================================================
;
; File End
;
;==========================================================================
        LIST
