        NOLIST                                                                  
; M8E634.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                   
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8E634 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8E634                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8E634                                             
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
                                                                              
IFNDEF __m8e634  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   
CMP1C0       EQU       196H
CMP1C1       EQU       197H

TC0PRL       EQU       198H
TC0PRH       EQU       199H
TC1PRL       EQU       19AH
TC1PRH       EQU       19BH
TC2PRL       EQU       19CH
TC2PRH       EQU       19DH

TK1CNTL      EQU       19EH
TK1CNTH      EQU       19FH
TK1CTR       EQU       1A0H  
TK1CTR0      EQU       1A0H
TK1CHSL      EQU       1A1H
TK1CHSH      EQU       1A2H  

TK0CNTL       EQU      1A3H
TK0CNTH       EQU      1A4H  
TK0CTR        EQU      1A5H
TK0CTR0       EQU      1A5H
TK0CHSL       EQU      1A6H  
TK0CHSH       EQU      1A7H  

OPA1C0       EQU       1A8H
OPA1C1       EQU       1A9H
COPA1C       EQU       1AAH  
CMPC0        EQU       1ABH
CMP0C0       EQU       1ABH
CMPC1        EQU       1ACH
CMP0C1       EQU       1ACH
OPA0C0       EQU       1ADH
OPA0C1       EQU       1AEH
COPA0C       EQU       1AFH

INDF0        EQU       1B0H
FSR0         EQU       1B1H
TX0CR        EQU       1B2H
TXCR         EQU       1B2H
TX0REG       EQU       1B3H
TXREG        EQU       1B3H
RX0CR        EQU       1B4H
RXCR         EQU       1B4H
RX0REG       EQU       1B5H
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
ADCON2       EQU       1BFH
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
PUA          EQU       1CAH
PDA          EQU       1CBH
IOB          EQU       1CCH
OEB          EQU       1CDH
PUB          EQU       1CEH
PDB          EQU       1CFH
IOC          EQU       1D0H
OEC          EQU       1D1H
PUC          EQU       1D2H
PDC          EQU       1D3H
IOD          EQU       1D4H
OED          EQU       1D5H
PUD          EQU       1D6H
PDD          EQU       1D7H

ANSA         EQU       1D8H
ANSC         EQU       1D9H
IOBICR       EQU       1DAH
IOCICR       EQU       1DBH
IODICR       EQU       1DCH

PWM2CR       EQU       1DDH
PWM2DH       EQU       1DEH
PWM2DL       EQU       1DFH

PWM0CR       EQU       1E0H
PWM0DH       EQU       1E1H
PWM0DL       EQU       1E2H
PWMDEAT      EQU       1E3H
PWMDEADT     EQU       1E3H
PWM1CR       EQU       1E4H
PWM1DH       EQU       1E5H
PWM1DL       EQU       1E6H
I2CCON       EQU       1E7H
T0CR         EQU       1E8H
TC0CL        EQU       1E9H
TC0CH        EQU       1EAH
IODS         EQU       1EBH
T1CR         EQU       1ECH
TC1CL        EQU       1EDH
TC1CH        EQU       1EEH
I2CBUF       EQU       1EFH
T2CR         EQU       1F0H
TC2CL        EQU       1F1H
TC2CH        EQU       1F2H
T2GCR        EQU       1F3H
ADCON0       EQU       1F4H
ADCON1       EQU       1F5H
ADL          EQU       1F6H
ADH          EQU       1F7H
PWMS         EQU       1F8H

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
I2CIE        EQU       07H
ADIE         EQU       06H
RXIE         EQU       05H
TXIE         EQU       04H
TC2GIE       EQU       03H
TC2IE        EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
I2CIF        EQU       07H
ADIF         EQU       06H
RXIF         EQU       05H
TXIF         EQU       04H
TC2GIF       EQU       03H
TC2IF        EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
CMPIE        EQU       07H
CMP0IE       EQU       07H
OPA0IE       EQU       06H
OPA1IE       EQU       05H
IODCHIE      EQU       04H
INT1IE       EQU       03H
INT0IE       EQU       02H
IOCCHIE      EQU       01H
IOBCHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
CMPIF        EQU       07H
CMP0IF       EQU       07H
OPA0IF       EQU       06H
OPA1IF       EQU       05H
IODCHIF      EQU       04H
INT1IF       EQU       03H
INT0IF       EQU       02H
IOCCHIF      EQU       01H
IOBCHIF      EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
TK1IE        EQU       07H
TK0IE        EQU       06H
;CMP1IE       EQU       00H
;----- INTF2 Bits -------------------------------------------------------
TK1IF        EQU       07H
TK0IF        EQU       06H
;CMP1IF       EQU       00H
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
LIRC500K		 EQU			 01H
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
ADENB        EQU       07H
ADON         EQU       07H
ADS          EQU       06H 
EOC          EQU       05H
ADEOC        EQU       05H
#define     bADON      ADCON0,ADENB
#define     bADS       ADCON0,ADS
#define     bADEOC     ADCON0,EOC
;-----Bit Define-----------------------------------------------------------
#define     bTK0IE      INTCR2     ,TK0IE
#define     bTK0IF      INTF2      ,TK0IF
#define     bTK1IE      INTCR2     ,TK1IE
#define     bTK1IF      INTF2      ,TK1IF
;#define     bCMP1IE     INTCR2     ,CMP1IE
;#define     bCMP1IF     INTF2      ,CMP1IF

#define     bCMP0IE     INTCR1     ,CMPIE
#define     bCMP0IF     INTF1      ,CMPIF
#define     bOPA0IE     INTCR1     ,OPA0IE
#define     bOPA0IF     INTF1      ,OPA0IF
#define     bOPA1IE     INTCR1     ,OPA1IE
#define     bOPA1IF     INTF1      ,OPA1IF
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOBCHIF    INTF1      ,IOBCHIF
#define     bIOCCHIE    INTCR1     ,IOCCHIE
#define     bIOCCHIF    INTF1      ,IOCCHIF
#define     bIODCHIE    INTCR1     ,IODCHIE
#define     bIODCHIF    INTF1      ,IODCHIF

#define     bI2CIE      INTCR0     ,I2CIE
#define     bI2CIF      INTF0      ,I2CIF
#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF
#define     bTC2IE      INTCR0     ,TC2IE
#define     bTC2IF      INTF0      ,TC2IF

#define     SSPCON      I2CCON
#define     SSPBUF      I2CBUF
#define     SSPEN       I2CEN
#define     SSPIE       I2CIE
#define     SSPIF       I2CIF

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
