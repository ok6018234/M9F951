        NOLIST                                                                  
; M8R512.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8R512 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8R512                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8R512                                             
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
                                                                              
IFNDEF __m8r512                                                        
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
IOBICR                  EQU     00BFH
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
IOB                     EQU     00CCH
OEB                     EQU     00CDH
PUB                     EQU     00CEH
IOC                     EQU     00D0H
OEC                     EQU     00D1H
PUC                     EQU     00D2H
ANSC                    EQU     00D3H
PDA                     EQU     00D7H
PWM0CR                  EQU     00D8H
PWM1CR                  EQU     00DCH
PWM1DH                  EQU     00DDH    
PWM1DL                  EQU     00DEH
CMP0C                   EQU     00E4H
CMP0S                   EQU     00E5H       
CMP1C                   EQU     00E6H
CMP1S                   EQU     00E7H
T0CR                    EQU     00E8H
TC0R                    EQU     00E9H
TC0CL                   EQU     00E9H
TC0C                    EQU     00EAH
TC0CH                   EQU     00EAH
T1CR                    EQU     00ECH
TC1CL                   EQU     00EDH
TC1CH                   EQU     00EEH
LVDCR                   EQU     00F8H     
                        
R                       EQU     0001H
A                       EQU     0000H
;----- INTCR0 Bits -------------------------------------------------------
   
TC1IE                   EQU     0001H     
TC0IE                   EQU     0000H       
;----- INTF0 Bits -------------------------------------------------------
   
TC1IF                   EQU     0001H     
TC0IF                   EQU     0000H    
;----- INTCR1 Bits -------------------------------------------------------
CMP0IE                  EQU     0007H 
CMP1IE                  EQU     0006H
LVDIE                   EQU     0004H    
INT0IE                  EQU     0002H        
IOBIE                   EQU     0000H 
IOCHIE                  EQU     0000H        
;----- INTF1 Bits -------------------------------------------------------
CMP0IF                  EQU     0007H 
CMP1IF                  EQU     0006H
LVDIF                   EQU     0004H   
INT0IF                  EQU     0002H       
IOBIF                   EQU     0000H 
IOCHIF                  EQU     0000H      
                                       
;----- PFLAG/STATUS Bits --------------------------------------------------------
Z                       EQU     0002H
DC                      EQU     0001H
C                       EQU     0000H
;----- OSCM Bits --------------------------------------------------------
STOP                    EQU     0004H
CLKM                    EQU     0003H
STPH                    EQU     0002H 
LPSPD                   EQU     0001H
STPL                    EQU     0000H 
;----- Option Bits --------------------------------------------------------
GIE                     EQU       07H
TO                      EQU       05H
PD                      EQU       04H
MINT01                  EQU       01H
MINT00                  EQU       00H

 
;==========================================================================
;
; File End
;
;==========================================================================
       LIST
