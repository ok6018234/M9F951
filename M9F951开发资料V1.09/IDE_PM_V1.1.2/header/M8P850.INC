        NOLIST                                                                  
; M8P850.INC  Standard Header File, Version 1.00.
                                                               
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P850 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P850                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P850                                             
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
                                                                              
IFNDEF __m8p850  ;XXX                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                               
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   
TKCHSL       EQU       17CH
TKCHSH       EQU       17DH
TKCNTL       EQU       17EH
TKCNTH       EQU       17FH
TKCTR        EQU       180H
I2CADDR      EQU       181H
I2CCON       EQU       182H
I2CBUF       EQU       183H   
EECON0       EQU       184H
EECON1       EQU       185H
SEGIOSL      EQU       186H
SEGIOSK      EQU       187H
SEGIOSJ      EQU       188H
SEGIOSI      EQU       189H
SEGIOSH      EQU       18AH
SEGIOSG      EQU       18BH
SEGIOSF      EQU       18CH
SEGIOSE      EQU       18DH
SEGIOSD      EQU       18EH
SEGIOSC      EQU       18FH
LCDCR0       EQU       190H
LCDCR1       EQU       191H
LCDCR2       EQU       192H
T3GCR        EQU       193H
TC3GCR        EQU       193H
T0CR         EQU       194H
T1CR         EQU       195H
T2CR         EQU       196H
T3CR         EQU       197H
TC0PRL       EQU       198H
TC0PRH       EQU       199H
TC1PRL       EQU       19AH
TC1PRH       EQU       19BH
TC2PRL       EQU       19CH
TC2PRH       EQU       19DH
TC3PRL       EQU       19EH
TC3PRH       EQU       19FH
TC0CL        EQU       1A0H
TC0CH        EQU       1A1H
TC1CL        EQU       1A2H
TC1CH        EQU       1A3H
TC2CL        EQU       1A4H
TC2CH        EQU       1A5H
TC3CL        EQU       1A6H
TC3CH        EQU       1A7H

RFC0CR       EQU       1A8H
RFC1CR       EQU       1A9H
TX0CR        EQU       1AAH
TX0REG       EQU       1ABH
RX0CR        EQU       1ACH
RX0REG       EQU       1ADH
BRGD0H       EQU       1AEH
BRGD0L       EQU       1AFH

INDF0        EQU       1B0H
FSR0         EQU       1B1H
TX1CR        EQU       1B2H
TX1REG       EQU       1B3H
RX1CR        EQU       1B4H
RX1REG       EQU       1B5H
BRGD1H       EQU       1B6H
BRGD1L       EQU       1B7H
INDF1        EQU       1B8H
FSR1         EQU       1B9H
PCL          EQU       1BAH
STATUS       EQU       1BBH
OPTION       EQU       1BCH
OSCM         EQU       1BDH
WDTC         EQU       1BEH
T2GCR        EQU       1BFH

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
IOI          EQU       1D8H
OEI          EQU       1D9H
IOJ          EQU       1DAH
OEJ          EQU       1DBH
IOK          EQU       1DCH
OEK          EQU       1DDH
IOL          EQU       1DEH
OEL          EQU       1DFH

PUA          EQU       1E0H
PUB          EQU       1E1H
PUK          EQU       1E2H
PUL          EQU       1E3H
IOAICR       EQU       1E4H
IOBICR       EQU       1E5H
IOKICR       EQU       1E6H
IOLICR       EQU       1E7H

IODSCR0      EQU       1E8H
IODSCR1      EQU       1E9H
IOICR        EQU       1EAH

PWM0CR       EQU       1EBH
PWM0DH       EQU       1ECH
PWM0DL       EQU       1EDH
PWM1CR       EQU       1EEH
PWM1DH       EQU       1EFH
PWM1DL       EQU       1F0H
PWM2CR       EQU       1F1H
PWM2DH       EQU       1F2H
PWM2DL       EQU       1F3H
PWMDEADT     EQU       1F4H

CMPC0        EQU       1F5H
CMPC1        EQU       1F6H
CMPC2        EQU       1F7H
LPVOL        EQU       1F7H

IRCCAL       EQU       1FCH
VREFCAL      EQU       1FAH

LCDDS00      EQU       100H
LCDDS01      EQU       101H
LCDDS02      EQU       102H
LCDDS03      EQU       103H
LCDDS04      EQU       104H
LCDDS05      EQU       105H
LCDDS06      EQU       106H
LCDDS07      EQU       107H
LCDDS08      EQU       108H
LCDDS09      EQU       109H
LCDDS10      EQU       10AH
LCDDS11      EQU       10BH
LCDDS12      EQU       10CH
LCDDS13      EQU       10DH
LCDDS14      EQU       10EH
LCDDS15      EQU       10FH
LCDDS16      EQU       110H
LCDDS17      EQU       111H
LCDDS18      EQU       112H
LCDDS19      EQU       113H
LCDDS20      EQU       114H
LCDDS21      EQU       115H
LCDDS22      EQU       116H
LCDDS23      EQU       117H
LCDDS24      EQU       118H
LCDDS25      EQU       119H
LCDDS26      EQU       11AH
LCDDS27      EQU       11BH
LCDDS28      EQU       11CH
LCDDS29      EQU       11DH
LCDDS30      EQU       11EH
LCDDS31      EQU       11FH
LCDDS32      EQU       120H
LCDDS33      EQU       121H
LCDDS34      EQU       122H
LCDDS35      EQU       123H
LCDDS36      EQU       124H
LCDDS37      EQU       125H
LCDDS38      EQU       126H
LCDDS39      EQU       127H
LCDDS40      EQU       128H
LCDDS41      EQU       129H
LCDDS42      EQU       12AH
LCDDS43      EQU       12BH
LCDDS44      EQU       12CH
LCDDS45      EQU       12DH
LCDDS46      EQU       12EH
LCDDS47      EQU       12FH
LCDDS48      EQU       130H
LCDDS49      EQU       131H
LCDDS50      EQU       132H
LCDDS51      EQU       133H
LCDDS52      EQU       134H
LCDDS53      EQU       135H
LCDDS54      EQU       136H
LCDDS55      EQU       137H
LCDDS56      EQU       138H
LCDDS57      EQU       139H
LCDDS58      EQU       13AH
LCDDS59      EQU       13BH
LCDDS60      EQU       13CH
LCDDS61      EQU       13DH
LCDDS62      EQU       13EH
LCDDS63      EQU       13FH
LCDDS64      EQU       140H
LCDDS65      EQU       141H
LCDDS66      EQU       142H
LCDDS67      EQU       143H
LCDDS68      EQU       144H
LCDDS69      EQU       145H
LCDDS70      EQU       146H
LCDDS71      EQU       147H
LCDDS72      EQU       148H
LCDDS73      EQU       149H
LCDDS74      EQU       14AH
LCDDS75      EQU       14BH
LCDDS76      EQU       14CH


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
TC3GIE       EQU       07H
TC2GIE       EQU       06H

TC3IE        EQU       03H
TC2IE        EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TC3GIF       EQU       07H
TC2GIF       EQU       06H


TC3IF        EQU       03H
TC2IF        EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE       EQU       07H
INT0IE       EQU       06H

IOLCHIE      EQU       03H
IOKCHIE      EQU       02H
IOBCHIE      EQU       01H
IOACHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       07H
INT0IF       EQU       06H

IOLCHIF      EQU       03H
IOKCHIF      EQU       02H
IOBCHIF      EQU       01H
IOACHIF      EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
CMPIE        EQU       07H
TKIE         EQU       06H

I2CIE        EQU       04H
RX1IE        EQU       03H
TX1IE        EQU       02H
RX0IE        EQU       01H
TX0IE        EQU       00H
;----- INTF2 Bits -------------------------------------------------------
CMPIF        EQU       07H
TKIF         EQU       06H

I2CIF        EQU       04H
RX1IF        EQU       03H
TX1IF        EQU       02H
RX0IF        EQU       01H
TX0IF        EQU       00H
;----- STATUS Bits ------------------------------------------------------
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OSCM Bits --------------------------------------------------------
STBH         EQU       07H 
STBL         EQU       06H 
HSPDX2       EQU       05H
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
EEMOD        EQU       07H
WERR         EQU       01H
EEWEN        EQU       00H
;//---EECON1 Bits ---------------------------------------------------------
EEWE         EQU       00H
EEWR         EQU       00H
;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE

#define     bTKIE       INTCR2     ,TKIE
#define     bTKIF       INTF2      ,TKIF
#define     bCMPIE      INTCR2     ,CMPIE
#define     bCMPIF      INTF2      ,CMPIF
#define     bTX0IE      INTCR2     ,TX0IE
#define     bTX0IF      INTF2      ,TX0IF
#define     bRX0IE      INTCR2     ,RX0IE
#define     bRX0IF      INTF2      ,RX0IF
#define     bTX1IE      INTCR2     ,TX1IE
#define     bTX1IF      INTF2      ,TX1IF
#define     bRX1IE      INTCR2     ,RX1IE
#define     bRX1IF      INTF2      ,RX1IF
#define     bI2CIE      INTCR2     ,I2CIE
#define     bI2CIF      INTF2      ,I2CIF
;===========================================================================
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IF
#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IF
#define     bIOLCHIE    INTCR1     ,IOLCHIE
#define     bIOLCHIF    INTF1      ,IOLCHIF
#define     bIOKCHIE    INTCR1     ,IOKCHIE
#define     bIOKCHIF    INTF1      ,IOKCHIF
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOBCHIF    INTF1      ,IOBCHIF
#define     bIOACHIE    INTCR1     ,IOACHIE
#define     bIOACHIF    INTF1      ,IOACHIF
;===========================================================================
#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF
#define     bTC2IE      INTCR0     ,TC2IE
#define     bTC2IF      INTF0      ,TC2IF
#define     bTC2GIE     INTCR0     ,TC2GIE
#define     bTC2GIF     INTF0      ,TC2GIF
#define     bTC3IE      INTCR0     ,TC3IE
#define     bTC3IF      INTF0      ,TC3IF
#define     bTC3GIE     INTCR0     ,TC3GIE
#define     bTC3GIF     INTF0      ,TC3GIF
;==========================================================================
#define     bEEMOD      EECON0     ,EEMOD
#define     bWERR       EECON0     ,WERR
#define     bEEWEN      EECON0     ,EEWEN
#define     bEEWR       EECON1     ,EEWE

#define     SSPCON      I2CCON
#define     SSPBUF      I2CBUF
#define     SSPEN       I2CEN
#define     SSPIE       I2CIE
#define     SSPIF       I2CIF
;==========================================================================
;Macro
;ACALL macro x
;      DW    h'03e0'
;      DW    x
;      endm
;AGOTO macro x
;      DW    h'03f0'
;      DW    x
;      endm
;//+++++++++++++++++++++++++++++++++++++++++++++++
;//Write EE or MTP   ADDRESS = {FSR1,FSR0}  DATA = {HBUF,A}   
;//Return Value     HBUF,A = INPUT Value   
;//
WEEPROM macro      
      bset           bEEMOD
      bset           bEEWEN
      bset           bEEWR      
      nop
      xoria          0xff
      comr           HBUF,A
      RDT      
              
      bclr           bEEMOD                      
      endm
;==========================================================================      
  ORG   0x4000
  DW    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
  DW    0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
