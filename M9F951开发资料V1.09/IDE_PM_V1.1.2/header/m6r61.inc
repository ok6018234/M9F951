        NOLIST                                                                  
; M6R61.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M6R61 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M6R61                                
;       2. LIST directive in the source file                                  
;               LIST   P=M6R61                                             
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
                                                                              
IFNDEF __m6r61                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================        
RREG         EQU       082H
ZREG         EQU       083H
YREG         EQU       084H
STATUS       EQU       086H
ANSEL        EQU       0AEH
VREFH        EQU       0AFH
ADM          EQU       0B1H
ADB          EQU       0B2H
ADR          EQU       0B3H
OEB          EQU       0B8H
PEDGE        EQU       0BFH
OEA          EQU       0C4H
OEC          EQU       0C5H
INTRQ        EQU       0C8H
INTEN        EQU       0C9H
OSCM         EQU       0CAH
WDTR         EQU       0CCH
TC0R         EQU       0CDH
PCL          EQU       0CEH
PCH          EQU       0CFH
IOB          EQU       0D0H
IOA          EQU       0D4H
IOC          EQU       0D5H
T0M          EQU       0D8H
TC0M         EQU       0DAH
TC0C         EQU       0DBH
TC1M         EQU       0DCH
TC1C         EQU       0DDH
TC1R         EQU       0DEH
STKP         EQU       0DFH
PUB          EQU       0E0H
PUA          EQU       0E4H
PUC          EQU       0E5H
INDF         EQU       0E7H
STK3L        EQU       0F8H
STK3H        EQU       0F9H
STK2L        EQU       0FAH
STK2H        EQU       0FBH
STK1L        EQU       0FCH
STK1H        EQU       0FDH
STK0L        EQU       0FEH
STK0H        EQU       0FFH

R            EQU       01H
A            EQU       00H
;----- INTEN Bits -------------------------------------------------------
ADCIEN       EQU       07H
TC1IEN       EQU       06H
TC0IEN       EQU       05H
P01IEN       EQU       01H
P00IEN       EQU       00H
INT1IEN      EQU       01H
INT0IEN			 EQU       00H
;----- INTRQ Bits -------------------------------------------------------
ADCIRQ       EQU       07H
TC1IRQ       EQU       06H
TC0IRQ       EQU       05H
P01IRQ       EQU       01H
P00IRQ       EQU       00H
INT1IRQ      EQU       01H
INT0IRQ      EQU       00H
;----- STATUS Bits ------------------------------------------------------
NT0          EQU       07H
NPD          EQU       06H
LVD36        EQU       05H
LVD24        EQU       04H
C            EQU       02H
DC           EQU       01H
Z            EQU       00H
;----- OSCM Bits --------------------------------------------------------
CPUM1        EQU       04H 
CPUM0        EQU       03H 
CLKMD        EQU       02H
STPHX        EQU       01H
;------ ADM Bits --------------------------------------------------------
ADENB        EQU       0x07
ADS          EQU       0x06
EOC          EQU       0x05 
GCHS         EQU       0x04
CHS2         EQU       0x02
CHS1         EQU       0x01
CHS0         EQU       0x00
;------ STKP Bits --------------------------------------------------------
GIE          EQU       0x07
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
