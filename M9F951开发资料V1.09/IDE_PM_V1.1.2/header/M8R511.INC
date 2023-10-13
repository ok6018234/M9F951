        NOLIST                                                                  
; M8R511.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8R511 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8R511                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8R511                                             
;       3. Processor Type entry in the ZCASM full-screen interface            
                                                                              
;==========================================================================   
;                                                                             
;       Revision History          2019-4-2                                            
;                                                                             
;==========================================================================   
                                                                              
;Rev:   Date:    Reason:                                                      
                                                                              
;1.00   00/00/00 Initial Release                                              
                                                                              
;==========================================================================   
;                                                                             
;       Verify Processor                                                      
;                                                                             
;==========================================================================   
                                                                              
IFNDEF __m8r511                                                       
 ;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================  
INDF0                   EQU     00B0H
FSR0                    EQU     00B1H
INDF1                   EQU     00B8H
FSR1                    EQU     00B9H
PCL                     EQU     00BAH
STATUS                  EQU     00BBH
OPTION                  EQU     00BCH
OSCM                    EQU     00BDH
WDTC                    EQU     00BEH
IOAICR                  EQU     00BFH
INDF2                   EQU     00C0H
HBUF                    EQU     00C1H 
INTCR0                  EQU     00C4H
INTF0                   EQU     00C5H
INTCR1                  EQU     00C6H
INTF1                   EQU     00C7H
IOA                     EQU     00C8H
OEA                     EQU     00C9H
PUA                     EQU     00CAH
ANSA                    EQU     00CBH
IODS                    EQU     00CCH

PWM0CR                  EQU     00D8H

CMP0C										EQU			00E4H
CMP0S										EQU			00E5H     
T0CR                    EQU     00E8H
TC0R                    EQU     00E9H
TC0C                    EQU     00EAH

VEEFC                   EQU     00F5H
LVDCR                   EQU     00F8H     
                        
R                       EQU     0001H
A                       EQU     0000H
;----- INTCR0 Bits -------------------------------------------------------
   
;TC1IE                   EQU     0001H     
TC0IE                   EQU     0000H       
;----- INTF0 Bits -------------------------------------------------------
   
;TC1IF                   EQU     0001H     
TC0IF                   EQU     0000H    
;----- INTCR1 Bits -------------------------------------------------------
CMP0IE									EQU			0007H
LVDIE                   EQU     0004H        
IOAIE                   EQU     0000H  
IOCHIE                  EQU     0000H      
;----- INTF1 Bits -------------------------------------------------------
CMP0IF									EQU			0007H
LVDIF                   EQU     0004H         
IOAIF                   EQU     0000H   
IOCHIF                  EQU     0000H    
                                       
;----- PFLAG/STATUS Bits --------------------------------------------------------
Z                       EQU     0002H
DC                      EQU     0001H
C                       EQU     0000H
;----- OSCM Bits --------------------------------------------------------
STOP                    EQU     0004H
STPH                    EQU     0002H 
STPL                    EQU     0000H 
;----- Option Bits --------------------------------------------------------
GIE                     EQU       07H
TO                      EQU       05H
PD                      EQU       04H

;==========================================================================
;
; File End
;
;==========================================================================
       LIST
