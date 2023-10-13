        NOLIST                                                                  
; M8P515.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                               
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8P515 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8P515                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8P515                                             
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
                                                                              
IFNDEF __m8p515                                                        
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
;AOSR                    EQU     00B7H
INDF1                   EQU     00B8H
FSR1                    EQU     00B9H
PCL                     EQU     00BAH
STATUS                  EQU     00BBH
OPTION                  EQU     00BCH
OSCM                    EQU     00BDH
WDTC                    EQU     00BEH
IOICR                   EQU     00BFH
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
ANSB                    EQU     00CFH
IOLDS                   EQU     00D5H
IOHDS                   EQU     00D6H
;PDAB                    EQU     00D7H
;PWM0CR                  EQU     00D8H
;PWM0D                   EQU     00D9H  
PWM1CR                  EQU     00DCH
PWM1DH                  EQU     00DDH    
PWM1DL                  EQU     00DEH
;PWMDEADT                EQU     00DFH
T0CR                    EQU     00E8H
TC0CL                   EQU     00E9H
TC0CH                   EQU     00EAH
T1CR                    EQU     00ECH
TC1CL                   EQU     00EDH
TC1CH                   EQU     00EEH

TKCTR                   EQU     00F8H 
TKCTR0                  EQU     00F8H 
                        
R                       EQU     0001H
A                       EQU     0000H
;----- INTCR0 Bits -------------------------------------------------------
TKIE                    EQU     0007H   
TC1IE                   EQU     0001H     
TC0IE                   EQU     0000H       
;----- INTF0 Bits -------------------------------------------------------
TKIF                    EQU     0007H   
TC1IF                   EQU     0001H     
TC0IF                   EQU     0000H    
;----- INTCR1 Bits -------------------------------------------------------
;INT1IE                  EQU     0003H     
;INT0IE                  EQU     0002H       
IOCHIE                  EQU     0000H       
;----- INTF1 Bits -------------------------------------------------------
;INT1IF                  EQU     0003H        
;INT0IF                  EQU     0002H       
IOCHIF                  EQU     0000H      
                                          
;----- PFLAG/STATUS Bits --------------------------------------------------------
Z                       EQU     0002H
DC                      EQU     0001H
C                       EQU     0000H
;----- OSCM Bits --------------------------------------------------------
STOP                    EQU     0004H
;CLKM                    EQU     0003H
STPH                    EQU     0002H 
;LPSPD                   EQU     0001H
STPL                    EQU     0000H 
;----- Option Bits --------------------------------------------------------
GIE                     EQU       07H
TO                      EQU       05H
PD                      EQU       04H
;MINT11                  EQU       03H
;MINT10                  EQU       02H
;MINT01                  EQU       01H
;MINT00                  EQU       00H

;==========================================================================
;
; File End
;
;==========================================================================
       LIST
