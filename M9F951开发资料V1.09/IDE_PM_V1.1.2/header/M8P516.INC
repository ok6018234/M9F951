        NOLIST                                                                  
; M8P516.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                       
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P516 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P516                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P516                                             
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
                                                                              
IFNDEF __m8p516  ;XXX                                                        
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
TKCHS        EQU       0B6H
INDF1        EQU       0B8H
FSR1         EQU       0B9H
PCL          EQU       0BAH
STATUS       EQU       0BBH
OPTION       EQU       0BCH
OSCM         EQU       0BDH
WDTC         EQU       0BEH
INDF2        EQU       0C0H
HBUF         EQU       0C1H
;PDB          EQU       0C2H
INTCR0       EQU       0C4H
INTF0        EQU       0C5H
INTCR1       EQU       0C6H
INTF1        EQU       0C7H
IOA          EQU       0C8H
OEA          EQU       0C9H
PUA          EQU       0CAH
IOAICR       EQU       0CBH
ANSA         EQU       0CCH
PWM0CR       EQU       0D8H
PWM0D        EQU       0D9H
PWM1CR       EQU       0DAH
PWM1D        EQU       0DBH
T0CR         EQU       0E8H
TC0CL        EQU       0E9H
TC0CH        EQU       0EAH
LVDCR        EQU       0F0H
IRCCAL       EQU       1FCH
IRCLOCK			 EQU			 1F9H
;------------------------------------------------------------------------
R            EQU       01H
A            EQU       00H

;----- INTCR0 Bits ------------------------------------------------------
TKIE         EQU       07H
TC0IE        EQU       00H
;----- INTF0 Bits -------------------------------------------------------
TKIF         EQU       07H
TC0IF        EQU       00H
;----- INTCR1 Bits ------------------------------------------------------
LVDIE        EQU       07H
IOACHIE      EQU       00H
IOAHIE       EQU       00H 
;----- INTF1 Bits -------------------------------------------------------
LVDIF        EQU       07H
IOACHIF      EQU       00H
IOAHIF       EQU       00H
;----- STATUS Bits ------------------------------------------------------
Z            EQU       02H
DC           EQU       01H
C            EQU       00H
;----- OSCM Bits --------------------------------------------------------
STBH         EQU       07H 
STBL         EQU       06H 
STOP         EQU       04H
STPH         EQU       02H 
LPSPD        EQU       01H
LIRC500K     EQU       01H
STPL         EQU       00H
;----- Option Bits --------------------------------------------------------
GIE          EQU       07H
TO           EQU       05H
PD           EQU       04H

;-----Bit Define-----------------------------------------------------------
#define     bGIE        OPTION     ,GIE
#define     bTKIE       INTCR0     ,TKIE
#define     bTKIF       INTF0      ,TKIF

#define     bTC0IE      INTCR0     ,TC0IE
#define     bTC0IF      INTF0      ,TC0IF

#define     bLVDIE      INTCR1     ,LVDIE
#define     bLVDIF     INTF1       ,LVDIF
#define     bIOACHIE    INTCR1     ,IOACHIE
#define     bIOACHIF    INTF1      ,IOACHIF

;==========================================================================
;
; File End
;
;==========================================================================
        LIST
