        NOLIST                                                                  
; M8R82.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8R82 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8R82                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8R82                                             
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
                                                                              
IFNDEF __m8r82                                                        
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
PCL          EQU       0BAH
STATUS       EQU       0BBH
OPTION       EQU       0BCH
OSCM         EQU       0BDH
WDTC         EQU       0BEH
INTCR0       EQU       0C4H
INTF0        EQU       0C5H
INTCR1       EQU       0C6H
INTF1        EQU       0C7H
IOA          EQU       0C8H
OEA          EQU       0C9H
PUA          EQU       0CAH
IOB          EQU       0CCH
OEB          EQU       0CDH
IOC          EQU       0D0H
OEC          EQU       0D1H
PUC          EQU       0D2H
IOCICR       EQU       0D3H
IOD          EQU       0D4H
OED          EQU       0D5H
IOE          EQU       0D8H
OEE          EQU       0D9H
IOF          EQU       0DCH
OEF          EQU       0DDH
T0CR         EQU       0E8H
TC0R         EQU       0E9H
TC0C         EQU       0EAH
T1CR         EQU       0ECH
TC1R         EQU       0EDH
TC1C         EQU       0EEH
T2CR         EQU       0F0H
TC2CL        EQU       0F1H
TC2CH        EQU       0F2H
IRCR         EQU       0F4H
IRCKS        EQU       0F5H
IRHT         EQU       0F6H
IRLT         EQU       0F7H
LVDCON       EQU       0F8H
INDF1        EQU       0B8H
FSR1         EQU       0B9H
INDF2        EQU       0C0H
HBUF         EQU       0C1H
RFCCR0       EQU       0A8H
RFCCR1       EQU       0A9H
KEYCR        EQU       0ACH
KEYSC        EQU       0ADH
KEYSS        EQU       0AEH
LCDCR0       EQU       0A0H
LCDCR1       EQU       0A1H
LCDCR2       EQU       0A2H
LCDDS0       EQU       080H
LCDDS1       EQU       081H
LCDDS2       EQU       082H
LCDDS3       EQU       083H
LCDDS4       EQU       084H
LCDDS5       EQU       085H
LCDDS6       EQU       086H
LCDDS7       EQU       087H
LCDDS8       EQU       088H
LCDDS9       EQU       089H
LCDDS10      EQU       08AH
LCDDS11      EQU       08BH
LCDDS12      EQU       08CH
LCDDS13      EQU       08DH
LCDDS14      EQU       08EH
LCDDS15      EQU       08FH
LCDDS16      EQU       090H
LCDDS17      EQU       091H
LCDDS18      EQU       092H
LCDDS19      EQU       093H
LCDDS20      EQU       094H
LCDDS21      EQU       095H
LCDDS22      EQU       096H
LCDDS23      EQU       097H
LCDDS24      EQU       098H
LCDDS25      EQU       099H
LCDDS26      EQU       09AH
LCDDS27      EQU       09BH
LCDDS28      EQU       09CH
LCDDS29      EQU       09DH
LCDDS30      EQU       09EH
LCDDS31      EQU       09FH

R            EQU       01H
A            EQU       00H
;----- INTCR0 Bits ------------------------------------------------------
IRHTIE       EQU       05H
IRLTIE       EQU       04H
TC2GIE       EQU       03H
TC2IE        EQU       02H
TC1IE        EQU       01H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
IRHTIF       EQU       05H
IRLTIF       EQU       04H
TC2GIF       EQU       03H
TC2IF        EQU       02H
TC1IF        EQU       01H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
LVDIE        EQU       04H
INT1IE       EQU       03H
INT0IE       EQU       02H
KEYIE        EQU       01H
IOCHIE       EQU       00H
;----- INTF1 Bits -------------------------------------------------------
LVDIF        EQU       04H
INT1IF       EQU       03H
INT0IF       EQU       02H
KEYIF        EQU       01H
IOCHIF       EQU       00H
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
STPL         EQU       00H
;----- Option Bits --------------------------------------------------------
GIE          EQU       07H
TO           EQU       05H
PD           EQU       04H
MINT11       EQU       03H
MINT10       EQU       02H
MINT01       EQU       01H
MINT00       EQU       00H
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
