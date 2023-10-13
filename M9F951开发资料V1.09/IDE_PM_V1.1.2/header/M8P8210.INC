        NOLIST                                                                  
; M8P832.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P832 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P832                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P832                                             
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
                                                                              
IFNDEF __m8p8210  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                               
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================      
LCDCR0       EQU       1A8H
LCDCR1       EQU       1A9H
LCDCR2       EQU       1AAH
LCDCR3       EQU       1ABH
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
PWM0CR       EQU       1D8H
PWM0D        EQU       1D9H
PWM1CR       EQU       1DAH
PWM10D       EQU       1DBH                           
PWM11D       EQU       1DCH                           
PWM12D       EQU       1DDH                            
T2CR         EQU       1DEH
T2GCR        EQU       1DFH
PUA          EQU       1E0H
ANSCMP       EQU       1E1H                           
PUC          EQU       1E2H
PWM13D       EQU       1E3H                            
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

IRCCAL       EQU       1FCH
ORCH         EQU       1FDH                           

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



;------------------------------------------------------------------------
R            EQU       01H
A            EQU       00H

;----- LCDCR0 Bits --------
LCDEN        EQU       07H
LCDM         EQU       06H
BIAS         EQU       04H

;----- LCDCR1 Bits --------
LCDFR3       EQU       07H
LCDFR2       EQU       06H
LCDFR1       EQU       05H
LCDFR0       EQU       04H
LCDCKS       EQU       03H
CIOS1        EQU       01H
CIOS0        EQU       00H
;----- LCDCR2 Bits --------
LEDEN        EQU       07H
LEDPOL       EQU       06H
BRIGHT4      EQU       04H
BRIGHT3      EQU       03H
BRIGHT2      EQU       02H
BRIGHT1      EQU       01H
BRIGHT0      EQU       00H
;----- LCDCR3 Bits --------
SPEED2       EQU       07H
SPEED1       EQU       06H
SPEED0       EQU       05H
VLCD4        EQU       04H
VLCD3        EQU       03H
VLCD2        EQU       02H
VLCD1        EQU       01H
VLCD0        EQU       00H

;----- SEGIOSC Bits --------
SEGIOSC7      EQU       07H
SEGIOSC6      EQU       06H
SEGIOSC5      EQU       05H
SEGIOSC4      EQU       04H
SEGIOSC3      EQU       03H
SEGIOSC2      EQU       02H
SEGIOSC1      EQU       01H
SEGIOSC0      EQU       00H

;----- SEGIOSD Bits --------
SEGIOSD5      EQU       05H
SEGIOSD4      EQU       04H
SEGIOSD3      EQU       03H
SEGIOSD2      EQU       02H
SEGIOSD1      EQU       01H
SEGIOSD0      EQU       00H

;----- TXCR Bits ------------------------------------------------------
TXEN           EQU       07H
TMCLR          EQU       06H
SYNC           EQU       05H
TX9            EQU       04H
SLAVE          EQU       03H
SPD1           EQU       02H
SPD0           EQU       01H
TXD9           EQU       00H
;----- TXREG Bits ------------------------------------------------------
TXD7          EQU       07H
TXD6          EQU       06H
TXD5          EQU       05H
TXD4          EQU       04H
TXD3          EQU       03H
TXD2          EQU       02H
TXD1          EQU       01H
TXD0          EQU       00H
;----- RXCR Bits ------------------------------------------------------
RXEN          EQU       07H
CKPS          EQU       06H
RX9           EQU       04H
SREN          EQU       03H
RXOVF         EQU       02H
FRER          EQU       01H
RXD9          EQU       00H
;----- RXREG Bits ------------------------------------------------------
RX0D7        EQU       07H
RX0D6        EQU       06H
RX0D5        EQU       05H
RX0D4        EQU       04H
RX0D3        EQU       03H
RX0D2        EQU       02H
RX0D1        EQU       01H
RX0D0        EQU       00H
;----- BRGDH Bits ------------------------------------------------------
SBYTE        EQU       07H

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
;----- RFCCR Bits ------------------------------------------------------
RFCH2E       EQU       06H
RFCH1E       EQU       05H
RFCH0E       EQU       04H
RFCH1        EQU       01H
RFCH0        EQU       00H
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
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       07H
INT0IF       EQU       06H
IOCCHIF      EQU       01H
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
;----- IOB Bits ------------------------------------------------------
IOB7         EQU       07H
IOB6         EQU       06H
IOB5         EQU       05H
IOB4         EQU       04H
IOB3         EQU       03H
IOB2         EQU       02H
IOB1         EQU       01H
IOB0         EQU       00H
;----- OEB Bits ------------------------------------------------------
OEB7         EQU       07H
OEB6         EQU       06H
OEB5         EQU       05H
OEB4         EQU       04H
OEB3         EQU       03H
OEB2         EQU       02H
OEB1         EQU       01H
OEB0         EQU       00H
;----- IOC Bits ------------------------------------------------------
IOC7         EQU       07H
IOC6         EQU       06H
IOC5         EQU       05H
IOC4         EQU       04H
IOC3         EQU       03H
IOC2         EQU       02H
IOC1         EQU       01H
IOC0         EQU       00H
;----- OEC Bits ------------------------------------------------------
OEC7         EQU       07H
OEC6         EQU       06H
OEC5         EQU       05H
OEC4         EQU       04H
OEC3         EQU       03H
OEC2         EQU       02H
OEC1         EQU       01H
OEC0         EQU       00H
;----- IOD Bits ------------------------------------------------------
IOD7         EQU       07H
IOD6         EQU       06H
IOD5         EQU       05H
IOD4         EQU       04H
IOD3         EQU       03H
IOD2         EQU       02H
IOD1         EQU       01H
IOD0         EQU       00H
;----- OED Bits ------------------------------------------------------
OED7         EQU       07H
OED6         EQU       06H
OED5         EQU       05H
OED4         EQU       04H
OED3         EQU       03H
OED2         EQU       02H
OED1         EQU       01H
OED0         EQU       00H
;----- PWM0CR Bits ------------------------------------------------------
PWM0EN       EQU       07H
PWM0OE       EQU       06H
;----- PWM1CR Bits ------------------------------------------------------
PWM13EN      EQU       07H
PWM13OE      EQU       06H
PWM12EN      EQU       05H
PWM12OE      EQU       04H
PWM11EN      EQU       03H
PWM11OE      EQU       02H
PWM10EN      EQU       01H
PWM10OE      EQU       00H
;----- T2CR Bits ------------------------------------------------------
TC2EN       EQU       07H
TC2M        EQU       06H
TC2CKS1     EQU       04H
TC2CKS0     EQU       03H
TC2CKPS2    EQU       02H
TC2CKPS1    EQU       01H
TC2CKPS0    EQU       00H
;----- T2GCR Bits ------------------------------------------------------
TC2GEN      EQU       07H
TC2GO       EQU       06H
TC2GS1      EQU       03H
TC2GS0      EQU       02H
TC2GM1      EQU       01H
TC2GM0      EQU       00H
;----- PUA Bits ------------------------------------------------------
PUA7        EQU       07H
PUA6        EQU       06H
PUA5        EQU       05H
PUA4        EQU       04H
PUA3        EQU       03H
PUA2        EQU       02H
PUA1        EQU       01H
PUA0        EQU       00H
;----- ANSCMP Bits ------------------------------------------------------
ANSP1       EQU       03H
ANSP0       EQU       02H
ANSN1       EQU       01H
ANSN0       EQU       00H
;----- PUC Bits ------------------------------------------------------
PUC7        EQU       07H
PUC6        EQU       06H
PUC5        EQU       05H
PUC4        EQU       04H
PUC3        EQU       03H
PUC2        EQU       02H
PUC1        EQU       01H
PUC0        EQU       00H
;----- IOCICR Bits ------------------------------------------------------
IOCICR7        EQU       07H
IOCICR6        EQU       06H
IOCICR5        EQU       05H
IOCICR4        EQU       04H
IOCICR3        EQU       03H
IOCICR2        EQU       02H
IOCICR1        EQU       01H
IOCICR0        EQU       00H
;----- IODSCR0 Bits ------------------------------------------------------
IOADS        EQU       07H
IOBDS        EQU       05H
IODDS        EQU       00H
;----- IODSCR1 Bits ------------------------------------------------------
IOC7DS        EQU       07H
IOC6DS        EQU       06H
IOC5DS        EQU       05H
IOC4DS        EQU       04H
IOC3DS        EQU       03H
IOC2DS        EQU       02H
IOC1DS        EQU       01H
IOC0DS        EQU       00H
;----- IOCIR Bits ------------------------------------------------------
IOCHIS        EQU       05H
IOCLIS        EQU       04H
IOAHIS        EQU       01H
IOALIS        EQU       00H
;----- T0CR Bits ------------------------------------------------------
TC0EN         EQU       07H
TC0MOD        EQU       06H
TC0CKS1       EQU       04H
TC0CKS0       EQU       03H
TC0CKPS2      EQU       02H
TC0CKPS1      EQU       01H
TC0CKPS0      EQU       00H
;----- T1CR Bits ------------------------------------------------------
TC1EN         EQU       07H
TC1MOD        EQU       06H
TC1CKS1       EQU       04H
TC1CKS0       EQU       03H
TC1CKPS2      EQU       02H
TC1CKPS1      EQU       01H
TC1CKPS0      EQU       00H
;----- I2CADDR Bits ------------------------------------------------------
I2CADDR7      EQU       07H
I2CADDR6      EQU       06H
I2CADDR5      EQU       05H
I2CADDR4      EQU       04H
I2CADDR3      EQU       03H
I2CADDR2      EQU       02H
I2CADDR1      EQU       01H
I2CADDR0      EQU       00H
;----- I2CCON Bits ------------------------------------------------------
I2CEN        EQU       07H
R_W          EQU       06H
D_A          EQU       05H
BF           EQU       04H
NACK         EQU       03H
A2           EQU       02H
A1           EQU       01H
A0           EQU       00H
;----- CMPC0 Bits ------------------------------------------------------
CMPEN          EQU       07H
CMPOUT         EQU       06H
CINTS1         EQU       05H
CINTS0         EQU       04H
CMPNS1         EQU       03H
CMPNS0         EQU       02H
CMPPS1         EQU       01H
CMPPS0         EQU       00H
;----- CMPC1 Bits ------------------------------------------------------
CPVRC          EQU       06H
CMPOFM         EQU       05H
CMPOF3         EQU       03H
CMPOF2         EQU       02H
CMPOF1         EQU       01H
CMPOF0         EQU       00H
;----- CMPC2 Bits ------------------------------------------------------
VLVDS4         EQU       04H
VLVDS3         EQU       03H
VLVDS2         EQU       02H
VLVDS1         EQU       01H
VLVDS0         EQU       00H
;----- IRCCAL Bits ------------------------------------------------------
IRCCAL6        EQU       06H
IRCCAL5        EQU       05H
IRCCAL4        EQU       04H
IRCCAL3        EQU       03H
IRCCAL2        EQU       02H
IRCCAL1        EQU       01H
IRCCAL0        EQU       00H

;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE
#define     bTXIE       INTCR2     ,TXIE
#define     bTXIF       INTF2      ,TXIF
#define     bRXIE       INTCR2     ,RXIE
#define     bRXIF       INTF2      ,RXIF
#define     bI2CIE      INTCR2     ,I2CIE
#define     bI2CIF      INTF2      ,I2CIF
#define     bCMPIE      INTCR2     ,CMPIE
#define     bCMPIF      INTF2      ,CMPIF

#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF
#define     bTC2IE      INTCR0     ,TC2IE
#define     bTC2IF      INTF0      ,TC2IF
#define     bTC2GIE     INTCR0     ,TC2GIE
#define     bTC2GIF     INTF0      ,TC2GIF

#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IF
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IF
#define     bIOCCHIE    INTCR1     ,IOCCHIE
#define     bIOCCHIF    INTF1      ,IOCCHIF

;==========================================================================
;
; File End
;
;==========================================================================
        LIST
