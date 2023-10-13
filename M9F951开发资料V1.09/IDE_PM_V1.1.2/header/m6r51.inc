        NOLIST                                                                  
; M6R51.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                       
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M6R51 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M6R51                                
;       2. LIST directive in the source file                                  
;               LIST   P=M6R51                                             
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
                                                                              
IFNDEF __m6r51                                                        
;    MESSG "Processor-header file mismatch.  Verify selected processor."  
     Error "Processor-header file mismatch.  Verify selected processor."
ENDIF                                                                 
                                                                              
;==========================================================================   
;                                                                             
;       Register Definitions                                                  
;                                                                             
;==========================================================================   

W			EQU     H'0000'
F     EQU     H'0001'
A			EQU     H'0000'
R     EQU     H'0001'

;----- Register Files------------------------------------------------------
;BANK0
INDF                    EQU     H'0000'
T0                      EQU     H'0001'
PCL                     EQU     H'0002'
STATUS                  EQU     H'0003'
FSR                     EQU     H'0004'
IOA                     EQU     H'0005'
IOB                     EQU     H'0006'
PCON                    EQU     H'0008'
IOCB                    EQU     H'0009'
PCLATH                  EQU     H'000A'
PDCON                   EQU     H'000B'
ODCON 	                EQU     H'000C'
PHCON 	                EQU     H'000D'
INTECON	                EQU     H'000E'
INTFLAG	                EQU     H'000F'
OPTION	                EQU     H'0041'
TRISA			  		        EQU     H'0045'
TRISB										EQU     H'0046'

;----- STATUS Bits --------------------------------------------------------
RST											EQU     H'0007'
TO                      EQU     H'0004'
PD                      EQU     H'0003'
Z                       EQU     H'0002'
DC                      EQU     H'0001'
C                       EQU     H'0000'

;----- PCON Bits --------------------------------------------------------
WDTEN										EQU     H'0007'
EIS                     EQU     H'0006'

;----- INTECON Bits --------------------------------------------------------
GIE                     EQU     H'0007'

INTE                   	EQU     H'0002'
RBIE                    EQU     H'0001'
T0IE                    EQU     H'0000'


;----- INTFLAG Bits --------------------------------------------------------
INTF                   	EQU     H'0002'
RBIF                    EQU     H'0001'
T0IF                    EQU     H'0000'

;----- OPTION Bits --------------------------------------------------------

INTEDG                  EQU     H'0006'
T0CS                    EQU     H'0005'
T0SE                    EQU     H'0004'
PSA                     EQU     H'0003'
PS2                     EQU     H'0002'
PS1                     EQU     H'0001'
PS0                     EQU     H'0000'
;==========================================================================
;
; File End
;
;==========================================================================
        LIST
        