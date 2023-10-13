       NOLIST                                                                  
; M8R622.INC  Standard Header File, Version 1.00    ShangHai Masses Electronic Co.,Ltd.
                                                                
                                                                              
; This header file defines configurations, registers, and other useful bits of
; information for the M8R622 microcontroller.  These names are taken to matc
; the data sheets as closely as possible.                                     
                                                                              
; Note that the processor must be selected before this file is                
; included.  The processor may be selected the following ways:                
                                                                              
;       1. Command line switch:                                               
;               ZCASM MYFILE.ASM -p M8R622                                
;       2. LIST directive in the source file                                  
;               LIST   P=M8R622                                             
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
                                                                              
IFNDEF __m8r622                                                        
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
COPA0C                  EQU     00B2H
COPA1C                  EQU     00B3H
COPA2C                  EQU     00B4H
OPA0OC                  EQU     00B6H
OPA1OC                  EQU     00B7H
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
INTCR2                  EQU     00C2H
INTF2                   EQU     00C3H
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
IOC                     EQU     00D0H
OEC                     EQU     00D1H
PUC                     EQU     00D2H
ANSC                    EQU     00D3H
IOD                     EQU     00D4H
OED                     EQU     00D5H
PUD                     EQU     00D6H
ANSD                    EQU     00D7H
PWM0CR                  EQU     00D8H
PWM0DH                  EQU     00D9H    
PWM0DL                  EQU     00DAH
DTGCR                   EQU     00DBH
PWM1CR                  EQU     00DCH
PWM1DH                  EQU     00DDH    
PWM1DL                  EQU     00DEH
PWMOC                   EQU     00DFH
PWM2CR                  EQU     00E0H
PWM2DH                  EQU     00E1H    
PWM2DL                  EQU     00E2H
PWMOV                   EQU     00E3H
CMP0C                   EQU     00E4H       
CMP1C                   EQU     00E5H
TKCTR0                  EQU     00E6H
TKCTR1                  EQU     00E7H
T0CR                    EQU     00E8H
TC0CL                   EQU     00E9H
TC0CH                   EQU     00EAH
PWMECR                  EQU     00EBH
T1CR                    EQU     00ECH
TC1CL                   EQU     00EDH
TC1CH                   EQU     00EEH
CMP2C                   EQU     00EFH
T2CR                    EQU     00F0H
TC2CL                   EQU     00F1H
TC2CH                   EQU     00F2H
T2GCR                   EQU     00F3H
ADCON0                  EQU     00F4H
ADCON1                  EQU     00F5H
ADH                     EQU     00F6H
ADL                     EQU     00F7H
LVDCR                   EQU     00F8H     
COMC                    EQU     00F9H
                        
R                       EQU     0001H
A                       EQU     0000H
;----- INTF0 Bits -------------------------------------------------------
ADIE                    EQU     0006H        
TKIE                    EQU     0004H  
TC2GIE                  EQU     0003H     
TC2IE                   EQU     0002H    
TC1IE                   EQU     0001H     
TC0IE                   EQU     0000H       
;----- INTF0 Bits -------------------------------------------------------
ADIF                    EQU     0006H    
TKIF                    EQU     0004H  
TC2GIF                  EQU     0003H     
TC2IF                   EQU     0002H    
TC1IF                   EQU     0001H     
TC0IF                   EQU     0000H    
;----- INTCR1 Bits -------------------------------------------------------
CMPIE                   EQU     0007H
CMIE                    EQU     0007H  
OPA1IE                  EQU     0006H
OPA0IE                  EQU     0005H
LVDIE                   EQU     0004H
INT1IE                  EQU     0003H     
INT0IE                  EQU     0002H    
;KEYIE                   EQU     0001H     
IOBIE                   EQU     0000H 
IOCHIE                  EQU     0000H       
;----- INTF1 Bits -------------------------------------------------------
CMIF                    EQU     0007H 
OPA1IF                  EQU     0006H
OPA0IF                  EQU     0005H
LVDIF                   EQU     0004H
INT1IF                  EQU     0003H     
INT0IF                  EQU     0002H    
;KEYIF                   EQU     0001H     
IOBIF                   EQU     0000H   
IOCHIF                  EQU     0000H    
;----- INTCR2 Bits -------------------------------------------------------
FLTIE                   EQU     0003H     
PWM2IE                  EQU     0002H    
PWM1IE                  EQU     0001H     
PWM0IE                  EQU     0000H       
;----- INTF2 Bits -------------------------------------------------------
FLTIF                   EQU     0003H     
PWM2IF                  EQU     0002H    
PWM1IF                  EQU     0001H     
PWM0IF                  EQU     0000H                                            
;----- PFLAG Bits --------------------------------------------------------
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
MINT11                  EQU       03H
MINT10                  EQU       02H
MINT01                  EQU       01H
MINT00                  EQU       00H
;----- ADCON0 Bits --------------------------------------------------------
ADENB                   EQU     0007H
ADEN                    EQU     0007H
ADS                     EQU     0006H
EOC                     EQU     0005H
ADEOC                   EQU     0005H
ADFM                    EQU     0004H
CHS3                    EQU     0003H
CHS2                    EQU     0002H
CHS1                    EQU     0001H
CHS0                    EQU     0000H
ADCHS3                  EQU     0003H
ADCHS2                  EQU     0002H
ADCHS1                  EQU     0001H
ADCHS0                  EQU     0000H
;----- ADCON1 Bits --------------------------------------------------------
EVHENB                  EQU     0007H
ADCKS2                  EQU     0004H
ADCKS1                  EQU     0003H
ADCKS0                  EQU     0002H
VHS1                    EQU     0001H
VHS0                    EQU     0000H
 
;==========================================================================
;
; File End
;
;==========================================================================
       LIST
