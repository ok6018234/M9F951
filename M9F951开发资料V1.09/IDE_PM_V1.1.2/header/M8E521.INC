        NOLIST                                                                  
; M8E521.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                               
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8E521 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8E521                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8E521                                             
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
                                                                              
IFNDEF __m8e521  ;XXX                                                        
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
TXCR         EQU       0B2H
TXREG        EQU       0B3H
RXCR         EQU       0B4H
RXREG        EQU       0B5H
BRGDH        EQU       0B6H
BRGDL        EQU       0B7H
INDF1        EQU       0B8H
FSR1         EQU       0B9H
PCL          EQU       0BAH
STATUS       EQU       0BBH
OPTION       EQU       0BCH
OSCM         EQU       0BDH
WDTC         EQU       0BEH

INDF2        EQU       0C0H
HBUF         EQU       0C1H
INTCR2       EQU       0C2H
INTF2        EQU       0C3H
INTCR0       EQU       0C4H
INTF0        EQU       0C5H
INTCR1       EQU       0C6H
INTF1        EQU       0C7H
IOA          EQU       0C8H
OEA          EQU       0C9H
IOB          EQU       0CAH
OEB          EQU       0CBH
PWM3CR       EQU       0D2H
PWM3DL       EQU       0D3H
PWM3DH       EQU       0D4H
PWM4CR       EQU       0D5H
PWM4DL       EQU       0D6H
PWM4DH       EQU       0D7H
PWM0CR       EQU       0D8H
PWM0D        EQU       0D9H
PWM1CR       EQU       0DAH
PWM1DL       EQU       0DBH
PWM1DH       EQU       0DCH
PWM2CR       EQU       0DDH
PWM2DL       EQU       0DEH
PWM2DH       EQU       0DFH
PUA          EQU       0E0H
PUB          EQU       0E1H
PDA          EQU       0E2H
PDB          EQU       0E3H
IOAICR       EQU       0E4H
IOBICR       EQU       0E5H
IOIDS        EQU       0E6H
T0CR         EQU       0E8H
TC0CL        EQU       0E9H
TC0CH        EQU       0EAH
T1CR         EQU       0EBH
TC1CL        EQU       0ECH
TC1CH        EQU       0EDH
TC1PRL       EQU       0EEH
TC1PRH       EQU       0EFH
EECON1       EQU       0F3H
EECON2       EQU       0F4H
CMPC0        EQU       0F5H
LVDCR        EQU       0F6H

IRCCAL       EQU       1FCH
VREFCAL      EQU       1FAH
;------------------------------------------------------------------------
R            EQU       01H
A            EQU       00H
;----- INTCR0 Bits ------------------------------------------------------
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
INT1IE       EQU       07H
INT0IE       EQU       06H

IOBCHIE      EQU       01H
IOACHIE      EQU       00H
;----- INTF1 Bits -------------------------------------------------------
INT1IF       EQU       07H
INT0IF       EQU       06H

IOBCHIF      EQU       01H
IOACHIF      EQU       00H
;----- INTCR2 Bits ------------------------------------------------------
CMPIE        EQU       07H
LVDIE        EQU       06H

RXIE         EQU       01H
TXIE         EQU       00H
;----- INTF2 Bits -------------------------------------------------------
CMPIF        EQU       07H
LVDIF        EQU       06H

RXIF         EQU       01H
TXIF         EQU       00H
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
;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE

#define     bCMPIE      INTCR2     ,CMPIE
#define     bCMPIF      INTF2      ,CMPIF
#define     bLVDIE      INTCR2     ,LVDIE
#define     bLVDIF      INTF2      ,LVDIF
#define     bTXIE       INTCR2     ,TXIE
#define     bTXIF       INTF2      ,TXIF
#define     bRXIE       INTCR2     ,RXIE
#define     bRXIF       INTF2      ,RXIF
;===========================================================================
#define     bINT1IE     INTCR1     ,INT1IE
#define     bINT1IF     INTF1      ,INT1IF
#define     bINT0IE     INTCR1     ,INT0IE
#define     bINT0IF     INTF1      ,INT0IF

#define     bIOACHIE    INTCR1     ,IOACHIE
#define     bIOACHIF    INTF1      ,IOACHIF
#define     bIOBCHIE    INTCR1     ,IOBCHIE
#define     bIOBCHIF    INTF1      ,IOBCHIF
;===========================================================================
#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF
#define     bTC1IE      INTCR0     ,TC1IE
#define     bTC1IF      INTF0      ,TC1IF
;==========================================================================
;//---EECON0 Bits ---------------------------------------------------------
#define     bEEMOD      EECON1     ,7
#define     bWERR       EECON1     ,1
#define     bEEWEN      EECON1     ,0
#define     bEELOCK3    EECON2     ,3
#define     bEELOCK2    EECON2     ,2
#define     bEELOCK1    EECON2     ,1
#define     bEEWR       EECON2     ,0
;==========================================================================
;Macro

;==========================================================================      

;==========================================================================

;//+++++++++++++++++++++++++++++++++++++++++++++++
;//Write EE or MTP   ADDRESS = {FSR1,FSR0}  DATA = {HBUF,A}   
;//Return Value     HBUF,A = INPUT Value   
;//

;
;==========================================================================
        LIST
