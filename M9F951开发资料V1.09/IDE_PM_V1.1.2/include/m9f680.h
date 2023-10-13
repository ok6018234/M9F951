#ifndef	_ZCHC_H_
#warning Header file m9f680.h included directly. Use #include <zc.h> instead.
#endif


#ifndef _M9F680_H_
#define _M9F680_H_


/*
 * Register Definitions
 */
		   volatile unsigned char           INTPTC1             @ 0x000;
           volatile unsigned char           FLASHLOCK           @ 0x001;
extern	   volatile unsigned char           LEDDS00             @ 0x200;
extern	   volatile unsigned char           LEDDS01             @ 0x201;
extern	   volatile unsigned char           LEDDS02             @ 0x202;
extern	   volatile unsigned char           LEDDS03             @ 0x203;
extern	   volatile unsigned char           LEDDS04             @ 0x204;
extern	   volatile unsigned char           LEDDS05             @ 0x205;
extern	   volatile unsigned char           LEDDS06             @ 0x206;
extern	   volatile unsigned char           LEDDS07             @ 0x207;
extern	   volatile unsigned char           LEDDS08             @ 0x208;
extern	   volatile unsigned char           LEDDS09             @ 0x209;
extern	   volatile unsigned char           LEDDS10             @ 0x20A;
extern	   volatile unsigned char           LEDDS11             @ 0x20B;
extern	   volatile unsigned char           LEDDS12             @ 0x20C;
extern	   volatile unsigned char           LEDDS13             @ 0x20D;
extern	   volatile unsigned char           LEDDS14             @ 0x20E;
extern	   volatile unsigned char           LEDDS15             @ 0x20F;
extern	   volatile unsigned char           LEDDS16             @ 0x210;
extern	   volatile unsigned char           LEDDS17             @ 0x211;
extern	   volatile unsigned char           LEDDS18             @ 0x212;
extern	   volatile unsigned char           LEDDS19             @ 0x213;	   
extern	   volatile unsigned char           LEDDS20             @ 0x214;
extern	   volatile unsigned char           LEDDS21             @ 0x215;
extern	   volatile unsigned char           LEDDS22             @ 0x216;
extern	   volatile unsigned char           LEDDS23             @ 0x217;
extern	   volatile unsigned char           LEDDS24             @ 0x218;
extern	   volatile unsigned char           LEDDS25             @ 0x219;
extern	   volatile unsigned char           LEDDS26             @ 0x21A;
extern	   volatile unsigned char           LEDDS27             @ 0x21B;
extern	   volatile unsigned char           LEDDS28             @ 0x21C;
extern	   volatile unsigned char           LEDDS29             @ 0x21D;
	   	   
extern volatile unsigned char           CALLOCK             @ 0xEF9;
extern volatile unsigned char           IRCCAH              @ 0xEFE;
extern volatile unsigned char           IRCCAL              @ 0xEFF;

extern volatile unsigned char           SEGIOSA             @ 0xF18;
extern volatile unsigned char           SEGIOSB             @ 0xF19;
extern volatile unsigned char           SEGIOSC             @ 0xF1A;
extern volatile unsigned char           SEGIOSD             @ 0xF1B;
extern volatile unsigned char           MPCOM               @ 0xF1C;
extern volatile unsigned char           COMIOS              @ 0xF1D;
extern volatile unsigned char           LEDCR0              @ 0xF1E;
extern volatile unsigned char           LEDCR1              @ 0xF1F;

extern volatile unsigned char           MPPWM11             @ 0xF59;
extern volatile unsigned char           MPPWM10             @ 0xF5A;
extern volatile unsigned char           MPPWM0              @ 0xF5B;
extern volatile unsigned char           MPSCL               @ 0xF5C;
extern volatile unsigned char           MPSDA               @ 0xF5D;
extern volatile unsigned char           MPRX                @ 0xF5E;
extern volatile unsigned char           MPTX                @ 0xF5F;

extern volatile unsigned char           INTP2               @ 0xF60;
extern volatile unsigned char           INTF2               @ 0xF61;
extern volatile unsigned char           INTCR2              @ 0xF62;
extern volatile unsigned char           FLIPCR              @ 0xF63;

extern volatile unsigned char           TC2CL               @ 0xF64;
extern volatile unsigned char           TC2CH               @ 0xF65;
extern volatile unsigned char           TC2PRL              @ 0xF66;
extern volatile unsigned char           TC2PRH              @ 0xF67;
extern volatile unsigned char           TC2GCR              @ 0xF68;
extern volatile unsigned char           T2CR                @ 0xF69;
extern volatile unsigned char           TKCCTR              @ 0xF6A;
extern volatile unsigned char           TKRCTR              @ 0xF6B;
extern volatile unsigned char           TKCNTL              @ 0xF6C;
extern volatile unsigned char           TKCNTH              @ 0xF6D;
extern volatile unsigned char           TKCHS0              @ 0xF6E;
extern volatile unsigned char           TKCHS1              @ 0xF6F;
extern volatile unsigned char           TKCHS2              @ 0xF70;
extern volatile unsigned char           TKCHS3              @ 0xF71;
extern volatile unsigned char           TKCTR0              @ 0xF72;
extern volatile unsigned char           TKCTR1              @ 0xF73;
extern volatile unsigned char           TKCTR2              @ 0xF74;
extern volatile unsigned char           TKCTR3              @ 0xF75;
extern volatile unsigned char           TKCTR4              @ 0xF76;
extern volatile unsigned char           TKCTR5              @ 0xF77;
extern volatile unsigned char           SPIDATA             @ 0xF79;
extern volatile unsigned char           SPISTA              @ 0xF7A;
extern volatile unsigned char           SPICR             	@ 0xF7B;
extern volatile unsigned char           I2CADR              @ 0xF7C;
extern volatile unsigned char           I2CDATA             @ 0xF7D;
extern volatile unsigned char           I2CSTA             	@ 0xF7E;
extern volatile unsigned char           I2CCR              	@ 0xF7F;
extern volatile unsigned char           PCON                @ 0xF80;
extern volatile unsigned char           IOAIPS              @ 0xF81;
extern volatile unsigned char           IOBIPS              @ 0xF82;
extern volatile unsigned char           IOCIPS              @ 0xF83;
extern volatile unsigned char           IODIPS              @ 0xF84;
extern volatile unsigned char           CMPC0               @ 0xF85;
extern volatile unsigned char           CMPC1               @ 0xF86;
extern volatile unsigned char           CMPC2               @ 0xF87;
extern volatile unsigned char           PWM11DL             @ 0xF88;
extern volatile unsigned char           PWM11DH             @ 0xF89;
extern volatile unsigned char           PWM10DL             @ 0xF8A;
extern volatile unsigned char           PWM10DH             @ 0xF8B;
extern volatile unsigned char           PWM1CR              @ 0xF8C;
extern volatile unsigned char           TC1CL               @ 0xF8D;
extern volatile unsigned char           TC1CH               @ 0xF8E;
extern volatile unsigned char           TC1PRL              @ 0xF8F;
extern volatile unsigned char           TC1PRH              @ 0xF90;
extern volatile unsigned char           T1CR                @ 0xF91;
extern volatile unsigned char           PWM03D              @ 0xF92;
extern volatile unsigned char           PWM03CR             @ 0xF93;
extern volatile unsigned char           PWM02D              @ 0xF94;
extern volatile unsigned char           PWM02CR             @ 0xF95;
extern volatile unsigned char           PWM01D              @ 0xF96;
extern volatile unsigned char           PWM01CR             @ 0xF97;
extern volatile unsigned char           PWM00D              @ 0xF98;
extern volatile unsigned char           PWM00CR             @ 0xF99;
extern volatile unsigned char           TC0CL               @ 0xF9A;
extern volatile unsigned char           TC0CH               @ 0xF9B;
extern volatile unsigned char           T0CR                @ 0xF9C;
extern volatile unsigned char           T0CR2               @ 0xF9D;
extern volatile unsigned char           OSCM                @ 0xFA0;
extern volatile unsigned char           ADL                 @ 0xFA2;
extern volatile unsigned char           ADH                 @ 0xFA3;
extern volatile unsigned char           ADCON0              @ 0xFA4;
extern volatile unsigned char           ADCON1              @ 0xFA5;
extern volatile unsigned char           ADCON2              @ 0xFA6;
extern volatile unsigned char           ADCON3              @ 0xFA7;

extern volatile unsigned char           IOAODS0             @ 0xFA8;
extern volatile unsigned char           IOAODS1             @ 0xFA9;
extern volatile unsigned char           IOBODS0             @ 0xFAA;
extern volatile unsigned char           IOBODS1             @ 0xFAB;
extern volatile unsigned char           IOCODS0             @ 0xFAC;
extern volatile unsigned char           IOCODS1             @ 0xFAD;
extern volatile unsigned char           IODODS0             @ 0xFAE;
extern volatile unsigned char           IODODS1             @ 0xFAF;

extern volatile unsigned char           IOAICR              @ 0xFB0;
extern volatile unsigned char           IOBICR              @ 0xFB1;
extern volatile unsigned char           IOCICR              @ 0xFB2;
extern volatile unsigned char           IODICR              @ 0xFB3;
extern volatile unsigned char           PDA                 @ 0xFB4;
extern volatile unsigned char           PDB                 @ 0xFB5;
extern volatile unsigned char           PDC                 @ 0xFB6;
extern volatile unsigned char           PDD                 @ 0xFB7;
extern volatile unsigned char           PUA                 @ 0xFB8;
extern volatile unsigned char           PUB                 @ 0xFB9;
extern volatile unsigned char           PUC                 @ 0xFBA;
extern volatile unsigned char           PUD                 @ 0xFBB;
extern volatile unsigned char           ANSA                @ 0xFBC;
extern volatile unsigned char           ANSB                @ 0xFBD;
extern volatile unsigned char           ANSC                @ 0xFBE;
extern volatile unsigned char           ANSD                @ 0xFBF;
extern volatile unsigned char           IOAOR               @ 0xFC0;
extern volatile unsigned char           IOBOR               @ 0xFC1;
extern volatile unsigned char           IOCOR               @ 0xFC2;
extern volatile unsigned char           IODOR               @ 0xFC3;
extern volatile unsigned char           OEA                 @ 0xFC4;
extern volatile unsigned char           OEB                 @ 0xFC5;
extern volatile unsigned char           OEC                 @ 0xFC6;
extern volatile unsigned char           OED                 @ 0xFC7;
extern volatile unsigned char           IOA                 @ 0xFC8;
extern volatile unsigned char           IOB                 @ 0xFC9;
extern volatile unsigned char           IOC                 @ 0xFCA;
extern volatile unsigned char           IOD                 @ 0xFCB;
extern volatile unsigned char           RX0REG              @ 0xFCC;
extern volatile unsigned char           TX0REG              @ 0xFCD;
extern volatile unsigned char           BRGD0L              @ 0xFCE;
extern volatile unsigned char           BRGD0H              @ 0xFCF;
extern volatile unsigned char           RX0CR               @ 0xFD0;
extern volatile unsigned char           TX0CR               @ 0xFD1;
extern volatile unsigned char           INTP0               @ 0xFD2;
extern volatile unsigned char           INTP1               @ 0xFD3;
extern volatile unsigned char           INTF0               @ 0xFD4;
extern volatile unsigned char           INTF1               @ 0xFD5;
extern volatile unsigned char           INTCR0              @ 0xFD6;
extern volatile unsigned char           INTCR1              @ 0xFD7;
extern volatile unsigned char           STATUS              @ 0xFD8;
extern volatile unsigned char           FSR2L               @ 0xFD9;
extern volatile unsigned char           FSR2H               @ 0xFDA;
extern volatile unsigned char           PLUSW2              @ 0xFDB;
extern volatile unsigned char           PREINC2             @ 0xFDC;
extern volatile unsigned char           POSTDEC2            @ 0xFDD;
extern volatile unsigned char           POSTINC2            @ 0xFDE;
extern volatile unsigned char           INDF2               @ 0xFDF;
extern volatile unsigned char           BSR                 @ 0xFE0;
extern volatile unsigned char           FSR1L               @ 0xFE1;
extern volatile unsigned char           FSR1H               @ 0xFE2;
extern volatile unsigned char           PLUSW1              @ 0xFE3;
extern volatile unsigned char           PREINC1             @ 0xFE4;
extern volatile unsigned char           POSTDEC1            @ 0xFE5;
extern volatile unsigned char           POSTINC1            @ 0xFE6;
extern volatile unsigned char           INDF1               @ 0xFE7;
extern volatile unsigned char           AREG                @ 0xFE8;
extern volatile unsigned char           FSR0L               @ 0xFE9;
extern volatile unsigned char           FSR0H               @ 0xFEA;
extern volatile unsigned char           PLUSW0              @ 0xFEB;
extern volatile unsigned char           PREINC0             @ 0xFEC;
extern volatile unsigned char           POSTDEC0            @ 0xFED;
extern volatile unsigned char           POSTINC0            @ 0xFEE;
extern volatile unsigned char           INDF0               @ 0xFEF;
extern volatile unsigned char           EECON2              @ 0xFF0;
extern volatile unsigned char           EECON1              @ 0xFF1;
extern volatile unsigned char           OPTION              @ 0xFF2;
extern volatile unsigned char           PRODL               @ 0xFF3;
extern volatile unsigned char           PRODH               @ 0xFF4;
extern volatile unsigned char           TABLAT              @ 0xFF5;
extern volatile unsigned char           TBLPTRL             @ 0xFF6;
extern volatile unsigned char           TBLPTRH             @ 0xFF7;
extern volatile unsigned char           TBLPTRU             @ 0xFF8;
extern volatile unsigned char           PCL                 @ 0xFF9;
extern volatile unsigned char           PCLATH              @ 0xFFA;
extern volatile unsigned char           PCLATU              @ 0xFFB;
extern volatile unsigned char           STKPTR              @ 0xFFC;
extern volatile unsigned char           TOSL                @ 0xFFD;
extern volatile unsigned char           TOSH                @ 0xFFE;
extern volatile unsigned char           TOSU                @ 0xFFF;
/*
 * DefinitionS
 */
extern volatile unsigned       int      TC2C                @ ((unsigned)&TC2CL)   ;
extern volatile unsigned       int      TC2PR               @ ((unsigned)&TC2PRL)  ;
extern volatile unsigned       int      TKCNT               @ ((unsigned)&TKCNTL)  ;
extern volatile unsigned       long     TKCHS               @ ((unsigned)&TKCHS0)  ;
extern volatile unsigned       int      TC1C                @ ((unsigned)&TC1CL)   ;
extern volatile unsigned       int      TC1PR               @ ((unsigned)&TC1PRL)  ;
extern volatile unsigned       int      TC0C                @ ((unsigned)&TC0CL)   ;
extern volatile unsigned       int      PWM11D              @ ((unsigned)&PWM11DL) ;
extern volatile unsigned       int      PWM10D              @ ((unsigned)&PWM10DL) ;
extern volatile unsigned       int      AD                  @ ((unsigned)&ADL)     ;
extern volatile unsigned       int      FSR2                @ ((unsigned)&FSR2L)   ;
extern volatile unsigned       int      FSR1                @ ((unsigned)&FSR1L)   ;
extern volatile unsigned       int      FSR0                @ ((unsigned)&FSR0L)   ;
extern volatile unsigned       int      PROD                @ ((unsigned)&PRODL)   ;
extern volatile unsigned       int      TBLPTR              @ ((unsigned)&TBLPTRL) ;
extern volatile unsigned       int      TOS                 @ ((unsigned)&TOSL)     ;
/*
 * Bit Definitions
 */

extern volatile __bit     IRCCAH0        @ (((unsigned) & IRCCAH  )*8) + 0;  
extern volatile __bit     IRCCAH1        @ (((unsigned) & IRCCAH  )*8) + 1;
extern volatile __bit     IRCCAH2        @ (((unsigned) & IRCCAH  )*8) + 2;
extern volatile __bit     IRCCAH3        @ (((unsigned) & IRCCAH  )*8) + 3;
extern volatile __bit     IRCCAH4        @ (((unsigned) & IRCCAH  )*8) + 4;
extern volatile __bit     IRCCAH5        @ (((unsigned) & IRCCAH  )*8) + 5;
extern volatile __bit     IRCCAH6        @ (((unsigned) & IRCCAH  )*8) + 6;

extern volatile __bit     IRCCAL0        @ (((unsigned) & IRCCAL  )*8) + 0;  
extern volatile __bit     IRCCAL1        @ (((unsigned) & IRCCAL  )*8) + 1;
extern volatile __bit     IRCCAL2        @ (((unsigned) & IRCCAL  )*8) + 2;
extern volatile __bit     IRCCAL3        @ (((unsigned) & IRCCAL  )*8) + 3;
extern volatile __bit     IRCCAL4        @ (((unsigned) & IRCCAL  )*8) + 4;
extern volatile __bit     IRCCAL5        @ (((unsigned) & IRCCAL  )*8) + 5;
extern volatile __bit     IRCCAL6        @ (((unsigned) & IRCCAL  )*8) + 6;

extern volatile __bit     SEGIOSD0        @ (((unsigned) & SEGIOSD  )*8) + 0;  
extern volatile __bit     SEGIOSD1        @ (((unsigned) & SEGIOSD  )*8) + 1;
extern volatile __bit     SEGIOSD2        @ (((unsigned) & SEGIOSD  )*8) + 2;
extern volatile __bit     SEGIOSD3        @ (((unsigned) & SEGIOSD  )*8) + 3;
extern volatile __bit     SEGIOSD4        @ (((unsigned) & SEGIOSD  )*8) + 4;
extern volatile __bit     SEGIOSD5        @ (((unsigned) & SEGIOSD  )*8) + 5;
extern volatile __bit     SEGIOSD6        @ (((unsigned) & SEGIOSD  )*8) + 6;
extern volatile __bit     SEGIOSD7        @ (((unsigned) & SEGIOSD  )*8) + 7; 

extern volatile __bit     SEGIOSC0        @ (((unsigned) & SEGIOSC  )*8) + 0;  
extern volatile __bit     SEGIOSC1        @ (((unsigned) & SEGIOSC  )*8) + 1;
extern volatile __bit     SEGIOSC2        @ (((unsigned) & SEGIOSC  )*8) + 2;
extern volatile __bit     SEGIOSC3        @ (((unsigned) & SEGIOSC  )*8) + 3;
extern volatile __bit     SEGIOSC4        @ (((unsigned) & SEGIOSC  )*8) + 4;
extern volatile __bit     SEGIOSC5        @ (((unsigned) & SEGIOSC  )*8) + 5;
extern volatile __bit     SEGIOSC6        @ (((unsigned) & SEGIOSC  )*8) + 6;
extern volatile __bit     SEGIOSC7        @ (((unsigned) & SEGIOSC  )*8) + 7; 

extern volatile __bit     SEGIOSB0        @ (((unsigned) & SEGIOSB  )*8) + 0;  
extern volatile __bit     SEGIOSB1        @ (((unsigned) & SEGIOSB  )*8) + 1;
extern volatile __bit     SEGIOSB2        @ (((unsigned) & SEGIOSB  )*8) + 2;
extern volatile __bit     SEGIOSB3        @ (((unsigned) & SEGIOSB  )*8) + 3;
extern volatile __bit     SEGIOSB4        @ (((unsigned) & SEGIOSB  )*8) + 4;
extern volatile __bit     SEGIOSB5        @ (((unsigned) & SEGIOSB  )*8) + 5;
extern volatile __bit     SEGIOSB6        @ (((unsigned) & SEGIOSB  )*8) + 6;
extern volatile __bit     SEGIOSB7        @ (((unsigned) & SEGIOSB  )*8) + 7; 

extern volatile __bit     SEGIOSA0        @ (((unsigned) & SEGIOSA  )*8) + 0;  
extern volatile __bit     SEGIOSA1        @ (((unsigned) & SEGIOSA  )*8) + 1;
extern volatile __bit     SEGIOSA2        @ (((unsigned) & SEGIOSA  )*8) + 2;
extern volatile __bit     SEGIOSA3        @ (((unsigned) & SEGIOSA  )*8) + 3;
extern volatile __bit     SEGIOSA4        @ (((unsigned) & SEGIOSA  )*8) + 4;
extern volatile __bit     SEGIOSA5        @ (((unsigned) & SEGIOSA  )*8) + 5;
extern volatile __bit     SEGIOSA6        @ (((unsigned) & SEGIOSA  )*8) + 6;
extern volatile __bit     SEGIOSA7        @ (((unsigned) & SEGIOSA  )*8) + 7; 


extern volatile __bit     MPCOM0        @ (((unsigned) & MPCOM  )*8) + 0;  
extern volatile __bit     MPCOM1        @ (((unsigned) & MPCOM  )*8) + 1;
extern volatile __bit     MPCOM2        @ (((unsigned) & MPCOM  )*8) + 2;
extern volatile __bit     MPCOM3        @ (((unsigned) & MPCOM  )*8) + 3;
extern volatile __bit     MPCOM4        @ (((unsigned) & MPCOM  )*8) + 4;
extern volatile __bit     MPCOM5        @ (((unsigned) & MPCOM  )*8) + 5;
extern volatile __bit     MPCOM6        @ (((unsigned) & MPCOM  )*8) + 6;
extern volatile __bit     MPCOM7        @ (((unsigned) & MPCOM  )*8) + 7;   

extern volatile __bit     COMIOS0        @ (((unsigned) & COMIOS  )*8) + 0;  
extern volatile __bit     COMIOS1        @ (((unsigned) & COMIOS  )*8) + 1;
extern volatile __bit     COMIOS2        @ (((unsigned) & COMIOS  )*8) + 2;
extern volatile __bit     COMIOS3        @ (((unsigned) & COMIOS  )*8) + 3;
extern volatile __bit     COMIOS4        @ (((unsigned) & COMIOS  )*8) + 4;
extern volatile __bit     COMIOS5        @ (((unsigned) & COMIOS  )*8) + 5;
extern volatile __bit     COMIOS6        @ (((unsigned) & COMIOS  )*8) + 6;
extern volatile __bit     COMIOS7        @ (((unsigned) & COMIOS  )*8) + 7; 


extern volatile __bit     BRIGHR0        @ (((unsigned) & LEDCR1  )*8) + 0;  
extern volatile __bit     BRIGHR1        @ (((unsigned) & LEDCR1  )*8) + 1;
extern volatile __bit     BRIGHR2        @ (((unsigned) & LEDCR1  )*8) + 2;
extern volatile __bit     BRIGHR3        @ (((unsigned) & LEDCR1  )*8) + 3;
extern volatile __bit     BRIGHR4        @ (((unsigned) & LEDCR1  )*8) + 4;
extern volatile __bit     BRIGHT0        @ (((unsigned) & LEDCR1  )*8) + 0;  
extern volatile __bit     BRIGHT1        @ (((unsigned) & LEDCR1  )*8) + 1;
extern volatile __bit     BRIGHT2        @ (((unsigned) & LEDCR1  )*8) + 2;
extern volatile __bit     BRIGHT3        @ (((unsigned) & LEDCR1  )*8) + 3;
extern volatile __bit     BRIGHT4        @ (((unsigned) & LEDCR1  )*8) + 4;
extern volatile __bit     OVLAP0         @ (((unsigned) & LEDCR1  )*8) + 5;
extern volatile __bit     OVLAP1         @ (((unsigned) & LEDCR1  )*8) + 6;
extern volatile __bit     OVLAP2         @ (((unsigned) & LEDCR1  )*8) + 7; 

extern volatile __bit      LEDFR0       @ (((unsigned) & LEDCR0  )*8) + 0;  
extern volatile __bit      LEDFR1       @ (((unsigned) & LEDCR0  )*8) + 1;
extern volatile __bit      LEDFR2       @ (((unsigned) & LEDCR0  )*8) + 2;
extern volatile __bit      LEDFR3       @ (((unsigned) & LEDCR0  )*8) + 3;
extern volatile __bit      LEDCKS       @ (((unsigned) & LEDCR0  )*8) + 4;
extern volatile __bit      LEDPOL       @ (((unsigned) & LEDCR0  )*8) + 5;
extern volatile __bit      LEDEN        @ (((unsigned) & LEDCR0  )*8) + 6;
//extern volatile __bit      LEDEN        @ (((unsigned) & LEDCR0  )*8) + 7; 


extern volatile __bit    MPPWM110        @ (((unsigned) & MPPWM11  )*8) + 0;
extern volatile __bit    MPPWM111        @ (((unsigned) & MPPWM11  )*8) + 1;
extern volatile __bit    MPPWM112        @ (((unsigned) & MPPWM11  )*8) + 2;
extern volatile __bit    MPPWM113        @ (((unsigned) & MPPWM11  )*8) + 3;
extern volatile __bit    MPPWM114        @ (((unsigned) & MPPWM11  )*8) + 4;
extern volatile __bit    MPPWM115        @ (((unsigned) & MPPWM11  )*8) + 5;
extern volatile __bit    MPPWM116        @ (((unsigned) & MPPWM11  )*8) + 6;
extern volatile __bit    MPPWM117        @ (((unsigned) & MPPWM11  )*8) + 7; 

extern volatile __bit    MPPWM100        @ (((unsigned) &  MPPWM10 )*8) + 0;
extern volatile __bit    MPPWM101        @ (((unsigned) &  MPPWM10 )*8) + 1;
extern volatile __bit    MPPWM102        @ (((unsigned) &  MPPWM10 )*8) + 2;
extern volatile __bit    MPPWM103        @ (((unsigned) &  MPPWM10 )*8) + 3;
extern volatile __bit    MPPWM104        @ (((unsigned) &  MPPWM10 )*8) + 4;
extern volatile __bit    MPPWM105        @ (((unsigned) &  MPPWM10 )*8) + 5;
extern volatile __bit    MPPWM106        @ (((unsigned) &  MPPWM10 )*8) + 6;
extern volatile __bit    MPPWM107        @ (((unsigned) &  MPPWM10 )*8) + 7; 

extern volatile __bit   MPPWM00        @ (((unsigned) & MPPWM0 )*8) + 0; 
extern volatile __bit   MPPWM01        @ (((unsigned) & MPPWM0 )*8) + 1;  
extern volatile __bit   MPPWM02        @ (((unsigned) & MPPWM0 )*8) + 2;  
extern volatile __bit   MPPWM03        @ (((unsigned) & MPPWM0 )*8) + 3;   
extern volatile __bit   MPPWM04        @ (((unsigned) & MPPWM0 )*8) + 4;   
extern volatile __bit   MPPWM05        @ (((unsigned) & MPPWM0 )*8) + 5;
extern volatile __bit   MPPWM06        @ (((unsigned) & MPPWM0 )*8) + 6;
extern volatile __bit   MPPWM07        @ (((unsigned) & MPPWM0 )*8) + 7; 


extern volatile __bit     MPSCL0        @ (((unsigned) &   MPSCL)*8) + 0;
extern volatile __bit     MPSCL1        @ (((unsigned) &   MPSCL)*8) + 1;
extern volatile __bit     MPSCL2        @ (((unsigned) &   MPSCL)*8) + 2;
extern volatile __bit     MPSCL3        @ (((unsigned) &   MPSCL)*8) + 3;
extern volatile __bit     MPSCL4        @ (((unsigned) &   MPSCL)*8) + 4;
extern volatile __bit     MPSCL5        @ (((unsigned) &   MPSCL)*8) + 5;
extern volatile __bit     MPSCL6        @ (((unsigned) &   MPSCL)*8) + 6;
extern volatile __bit     MPSCL7        @ (((unsigned) &   MPSCL)*8) + 7;

extern volatile __bit     MPSDA0        @ (((unsigned) &   MPSDA)*8) + 0;
extern volatile __bit     MPSDA1        @ (((unsigned) &   MPSDA)*8) + 1;
extern volatile __bit     MPSDA2        @ (((unsigned) &   MPSDA)*8) + 2;
extern volatile __bit     MPSDA3        @ (((unsigned) &   MPSDA)*8) + 3;
extern volatile __bit     MPSDA4        @ (((unsigned) &   MPSDA)*8) + 4;
extern volatile __bit     MPSDA5        @ (((unsigned) &   MPSDA)*8) + 5;
extern volatile __bit     MPSDA6        @ (((unsigned) &   MPSDA)*8) + 6;
extern volatile __bit     MPSDA7        @ (((unsigned) &   MPSDA)*8) + 7;


extern volatile __bit     MPRX0        @ (((unsigned) &   MPRX)*8) + 0;
extern volatile __bit     MPRX1        @ (((unsigned) &   MPRX)*8) + 1;
extern volatile __bit     MPRX2        @ (((unsigned) &   MPRX)*8) + 2;
extern volatile __bit     MPRX3        @ (((unsigned) &   MPRX)*8) + 3;
extern volatile __bit     MPRX4        @ (((unsigned) &   MPRX)*8) + 4;
extern volatile __bit     MPRX5        @ (((unsigned) &   MPRX)*8) + 5;
extern volatile __bit     MPRX6        @ (((unsigned) &   MPRX)*8) + 6;
extern volatile __bit     MPRX7        @ (((unsigned) &   MPRX)*8) + 7; 

extern volatile __bit     MPTX0        @ (((unsigned) & MPTX )*8) + 0;
extern volatile __bit     MPTX1        @ (((unsigned) & MPTX )*8) + 1;
extern volatile __bit     MPTX2        @ (((unsigned) & MPTX )*8) + 2;
extern volatile __bit     MPTX3        @ (((unsigned) & MPTX )*8) + 3;
extern volatile __bit     MPTX4        @ (((unsigned) & MPTX )*8) + 4;
extern volatile __bit     MPTX5        @ (((unsigned) & MPTX )*8) + 5;
extern volatile __bit     MPTX6        @ (((unsigned) & MPTX )*8) + 6;
extern volatile __bit     MPTX7        @ (((unsigned) & MPTX )*8) + 7; 

extern volatile __bit     SPIP         @ (((unsigned) & INTP2  )*8) + 0;

extern volatile __bit     SPIF2        @ (((unsigned) & INTF2  )*8) + 0;

extern volatile __bit     SPIIE        @ (((unsigned) & INTCR2  )*8) + 0;

extern volatile __bit    FLIPCR0       @ (((unsigned) & FLIPCR  )*8) + 0;

extern volatile __bit    TC2CL0       @ (((unsigned) & TC2CL  )*8) + 0;
extern volatile __bit    TC2CL1       @ (((unsigned) & TC2CL  )*8) + 1;
extern volatile __bit    TC2CL2       @ (((unsigned) & TC2CL  )*8) + 2;
extern volatile __bit    TC2CL3       @ (((unsigned) & TC2CL  )*8) + 3;
extern volatile __bit    TC2CL4       @ (((unsigned) & TC2CL  )*8) + 4;
extern volatile __bit    TC2CL5       @ (((unsigned) & TC2CL  )*8) + 5;
extern volatile __bit    TC2CL6       @ (((unsigned) & TC2CL  )*8) + 6;
extern volatile __bit    TC2CL7       @ (((unsigned) & TC2CL  )*8) + 7;

extern volatile __bit    TC2CH0       @ (((unsigned) & TC2CH  )*8) + 0;
extern volatile __bit    TC2CH1       @ (((unsigned) & TC2CH  )*8) + 1;
extern volatile __bit    TC2CH2       @ (((unsigned) & TC2CH  )*8) + 2;
extern volatile __bit    TC2CH3       @ (((unsigned) & TC2CH  )*8) + 3;
extern volatile __bit    TC2CH4       @ (((unsigned) & TC2CH  )*8) + 4;
extern volatile __bit    TC2CH5       @ (((unsigned) & TC2CH  )*8) + 5;
extern volatile __bit    TC2CH6       @ (((unsigned) & TC2CH  )*8) + 6;
extern volatile __bit    TC2CH7       @ (((unsigned) & TC2CH  )*8) + 7;


extern volatile __bit    TC2PRL0      @ (((unsigned) & TC2PRL )*8) + 0;
extern volatile __bit    TC2PRL1      @ (((unsigned) & TC2PRL )*8) + 1;                                                                        
extern volatile __bit    TC2PRL2      @ (((unsigned) & TC2PRL )*8) + 2;                                                                        
extern volatile __bit    TC2PRL3      @ (((unsigned) & TC2PRL )*8) + 3;                                                                        
extern volatile __bit    TC2PRL4      @ (((unsigned) & TC2PRL )*8) + 4;                                                                        
extern volatile __bit    TC2PRL5      @ (((unsigned) & TC2PRL )*8) + 5;                                                                        
extern volatile __bit    TC2PRL6      @ (((unsigned) & TC2PRL )*8) + 6;                                                                        
extern volatile __bit    TC2PRL7      @ (((unsigned) & TC2PRL )*8) + 7;                                                                        

extern volatile __bit    TC2PRH0      @ (((unsigned) & TC2PRH )*8) + 0;
extern volatile __bit    TC2PRH1      @ (((unsigned) & TC2PRH )*8) + 1;                                                                        
extern volatile __bit    TC2PRH2      @ (((unsigned) & TC2PRH )*8) + 2;                                                                        
extern volatile __bit    TC2PRH3      @ (((unsigned) & TC2PRH )*8) + 3;                                                                        
extern volatile __bit    TC2PRH4      @ (((unsigned) & TC2PRH )*8) + 4;                                                                        
extern volatile __bit    TC2PRH5      @ (((unsigned) & TC2PRH )*8) + 5;                                                                        
extern volatile __bit    TC2PRH6      @ (((unsigned) & TC2PRH )*8) + 6;                                                                        
extern volatile __bit    TC2PRH7      @ (((unsigned) & TC2PRH )*8) + 7; 
                                                                       
extern volatile __bit    TC2GM0       @ (((unsigned) & TC2GCR )*8) + 0;
extern volatile __bit    TC2GM1       @ (((unsigned) & TC2GCR )*8) + 1;                                                                        
extern volatile __bit    TC2GS0       @ (((unsigned) & TC2GCR )*8) + 2;                                                                        
extern volatile __bit    TC2GS1       @ (((unsigned) & TC2GCR )*8) + 3;                                                                                                                                              
extern volatile __bit    TC2GO        @ (((unsigned) & TC2GCR )*8) + 6;                                                                        
extern volatile __bit    TC2GEN       @ (((unsigned) & TC2GCR )*8) + 7;

extern volatile __bit    TC2CKPS0     @ (((unsigned) & T2CR   )*8) + 0;
extern volatile __bit    TC2CKPS1     @ (((unsigned) & T2CR   )*8) + 1;                                                                        
extern volatile __bit    TC2CKPS2     @ (((unsigned) & T2CR   )*8) + 2;                                                                        
extern volatile __bit    TC2CKS0      @ (((unsigned) & T2CR   )*8) + 3;                                                                        
extern volatile __bit    TC2CKS1      @ (((unsigned) & T2CR   )*8) + 4;                                                                                                                                                
extern volatile __bit    TC2EN        @ (((unsigned) & T2CR   )*8) + 7;

extern volatile __bit    TKRCTR0      @ (((unsigned) & TKRCTR )*8) + 0;
extern volatile __bit    TKRCTR1      @ (((unsigned) & TKRCTR )*8) + 1;                                                                        
extern volatile __bit    TKRCTR2      @ (((unsigned) & TKRCTR )*8) + 2;                                                                        
extern volatile __bit    TKRCTR3      @ (((unsigned) & TKRCTR )*8) + 3;                                                                        
extern volatile __bit    TKRCTR4      @ (((unsigned) & TKRCTR )*8) + 4;                                                                        
extern volatile __bit    TKRCTR5      @ (((unsigned) & TKRCTR )*8) + 5;                                                                        
extern volatile __bit    TKRCTR6      @ (((unsigned) & TKRCTR )*8) + 6;                                                                        
extern volatile __bit    TKRCTR7      @ (((unsigned) & TKRCTR )*8) + 7;

extern volatile __bit    TKCCTR0      @ (((unsigned) &  TKCCTR)*8) + 0;
extern volatile __bit    TKCCTR1      @ (((unsigned) &  TKCCTR)*8) + 1;                                                                        
extern volatile __bit    TKCCTR2      @ (((unsigned) &  TKCCTR)*8) + 2;                                                                        
extern volatile __bit    TKCCTR3      @ (((unsigned) &  TKCCTR)*8) + 3;                                                                        
extern volatile __bit    TKCCTR4      @ (((unsigned) &  TKCCTR)*8) + 4;                                                                        
extern volatile __bit    TKCCTR5      @ (((unsigned) &  TKCCTR)*8) + 5;                                                                        
extern volatile __bit    TKCCTR6      @ (((unsigned) &  TKCCTR)*8) + 6;                                                                        
extern volatile __bit    TKCCTR7      @ (((unsigned) &  TKCCTR)*8) + 7;

extern volatile __bit    TKCNTL0      @ (((unsigned) &  TKCNTL)*8) + 0;
extern volatile __bit    TKCNTL1      @ (((unsigned) &  TKCNTL)*8) + 1;                                                                        
extern volatile __bit    TKCNTL2      @ (((unsigned) &  TKCNTL)*8) + 2;                                                                        
extern volatile __bit    TKCNTL3      @ (((unsigned) &  TKCNTL)*8) + 3;                                                                        
extern volatile __bit    TKCNTL4      @ (((unsigned) &  TKCNTL)*8) + 4;                                                                        
extern volatile __bit    TKCNTL5      @ (((unsigned) &  TKCNTL)*8) + 5;                                                                        
extern volatile __bit    TKCNTL6      @ (((unsigned) &  TKCNTL)*8) + 6;                                                                        
extern volatile __bit    TKCNTL7      @ (((unsigned) &  TKCNTL)*8) + 7;

extern volatile __bit    TKCNTH0      @ (((unsigned) &  TKCNTH)*8) + 0;
extern volatile __bit    TKCNTH1      @ (((unsigned) &  TKCNTH)*8) + 1;                                                                        
extern volatile __bit    TKCNTH2      @ (((unsigned) &  TKCNTH)*8) + 2;                                                                        
extern volatile __bit    TKCNTH3      @ (((unsigned) &  TKCNTH)*8) + 3;                                                                        
extern volatile __bit    TKCNTH4      @ (((unsigned) &  TKCNTH)*8) + 4;                                                                        
extern volatile __bit    TKCNTH5      @ (((unsigned) &  TKCNTH)*8) + 5;                                                                        
extern volatile __bit    TKCNTH6      @ (((unsigned) &  TKCNTH)*8) + 6;                                                                        
extern volatile __bit    TKCNTH7      @ (((unsigned) &  TKCNTH)*8) + 7;

extern volatile __bit    TKCHS00      @ (((unsigned) & TKCHS0 )*8) + 0;
extern volatile __bit    TKCHS01      @ (((unsigned) & TKCHS0 )*8) + 1;                                                                        
extern volatile __bit    TKCHS02      @ (((unsigned) & TKCHS0 )*8) + 2;                                                                        
extern volatile __bit    TKCHS03      @ (((unsigned) & TKCHS0 )*8) + 3;                                                                        
extern volatile __bit    TKCHS04      @ (((unsigned) & TKCHS0 )*8) + 4;                                                                        
extern volatile __bit    TKCHS05      @ (((unsigned) & TKCHS0 )*8) + 5;                                                                        
extern volatile __bit    TKCHS06      @ (((unsigned) & TKCHS0 )*8) + 6;                                                                        
extern volatile __bit    TKCHS07      @ (((unsigned) & TKCHS0 )*8) + 7;

extern volatile __bit    TKCHS10     @ (((unsigned) & TKCHS1  )*8) + 0;
extern volatile __bit    TKCHS11     @ (((unsigned) & TKCHS1  )*8) + 1;                                                                        
extern volatile __bit    TKCHS12     @ (((unsigned) & TKCHS1  )*8) + 2;                                                                        
extern volatile __bit    TKCHS13     @ (((unsigned) & TKCHS1  )*8) + 3;                                                                        
extern volatile __bit    TKCHS14     @ (((unsigned) & TKCHS1  )*8) + 4;                                                                        
extern volatile __bit    TKCHS15     @ (((unsigned) & TKCHS1  )*8) + 5;                                                                        
extern volatile __bit    TKCHS16     @ (((unsigned) & TKCHS1  )*8) + 6;                                                                        
extern volatile __bit    TKCHS17     @ (((unsigned) & TKCHS1  )*8) + 7;

extern volatile __bit    TKCHS20     @ (((unsigned) & TKCHS2  )*8) + 0;
extern volatile __bit    TKCHS21     @ (((unsigned) & TKCHS2  )*8) + 1;                                                                        
extern volatile __bit    TKCHS22     @ (((unsigned) & TKCHS2  )*8) + 2;                                                                        
extern volatile __bit    TKCHS23     @ (((unsigned) & TKCHS2  )*8) + 3;                                                                        
extern volatile __bit    TKCHS24     @ (((unsigned) & TKCHS2  )*8) + 4;                                                                        
extern volatile __bit    TKCHS25     @ (((unsigned) & TKCHS2  )*8) + 5;                                                                        
extern volatile __bit    TKCHS26     @ (((unsigned) & TKCHS2  )*8) + 6;                                                                        
extern volatile __bit    TKCHS27     @ (((unsigned) & TKCHS2  )*8) + 7;
            
extern volatile __bit    TKCHS30     @ (((unsigned) & TKCHS3  )*8) + 0;
extern volatile __bit    TKCHS31     @ (((unsigned) & TKCHS3  )*8) + 1;                                                                        
extern volatile __bit    TKCHS32     @ (((unsigned) & TKCHS3  )*8) + 2;                                                                        
extern volatile __bit    TKCHS33     @ (((unsigned) & TKCHS3  )*8) + 3;                                                                        
extern volatile __bit    TKCHS34     @ (((unsigned) & TKCHS3  )*8) + 4;                                                                        
extern volatile __bit    TKCHS35     @ (((unsigned) & TKCHS3  )*8) + 5;                                                                        
extern volatile __bit    TKCHS36     @ (((unsigned) & TKCHS3  )*8) + 6;                                                                        
extern volatile __bit    TKCHS37     @ (((unsigned) & TKCHS3  )*8) + 7;

extern volatile __bit    CNOEN       @ (((unsigned) & TKCTR5  )*8) + 1;                                                                        
extern volatile __bit    IBS0        @ (((unsigned) & TKCTR5  )*8) + 2;                                                                        
extern volatile __bit    IBS1        @ (((unsigned) & TKCTR5  )*8) + 3;                                                                        
extern volatile __bit    IBS2        @ (((unsigned) & TKCTR5  )*8) + 4;                                                                        
extern volatile __bit    IBS3        @ (((unsigned) & TKCTR5  )*8) + 5;                                                                        
extern volatile __bit    LDOENH0     @ (((unsigned) & TKCTR5  )*8) + 6;                                                                        
extern volatile __bit    LDOENH1     @ (((unsigned) & TKCTR5  )*8) + 7;

extern volatile __bit    TKSW        @ (((unsigned) & TKCTR4  )*8) + 0;
extern volatile __bit    CMOD0       @ (((unsigned) & TKCTR4  )*8) + 1;                                                                        
extern volatile __bit    CMOD1       @ (((unsigned) & TKCTR4  )*8) + 2;                                                                        
extern volatile __bit    CMOD2       @ (((unsigned) & TKCTR4  )*8) + 3;                                                                        
extern volatile __bit    CMOD3       @ (((unsigned) & TKCTR4  )*8) + 4;                                                                        
extern volatile __bit    CMOD4       @ (((unsigned) & TKCTR4  )*8) + 5;                                                                        
extern volatile __bit    REN         @ (((unsigned) & TKCTR4  )*8) + 6;                                                                        
extern volatile __bit    CEN         @ (((unsigned) & TKCTR4  )*8) + 7;

extern volatile __bit    RCH0        @ (((unsigned) & TKCTR3  )*8) + 0;
extern volatile __bit    RCH1        @ (((unsigned) & TKCTR3  )*8) + 1;                                                                        
extern volatile __bit    PCEN        @ (((unsigned) & TKCTR3  )*8) + 2;                                                                        
extern volatile __bit    CIENH       @ (((unsigned) & TKCTR3  )*8) + 3;                                                                        
extern volatile __bit    LCKS0       @ (((unsigned) & TKCTR3  )*8) + 4;                                                                        
extern volatile __bit    LCKS1       @ (((unsigned) & TKCTR3  )*8) + 5;                                                                        
extern volatile __bit    LTS0        @ (((unsigned) & TKCTR3  )*8) + 6;                                                                        
extern volatile __bit    LTS1        @ (((unsigned) & TKCTR3  )*8) + 7;


extern volatile __bit    TKCKS0      @ (((unsigned) & TKCTR2  )*8) + 0;
extern volatile __bit    TKCKS1      @ (((unsigned) & TKCTR2  )*8) + 1;                                                                        
extern volatile __bit    TKCKS2      @ (((unsigned) & TKCTR2  )*8) + 2;                                                                        
extern volatile __bit    TKCKS3      @ (((unsigned) & TKCTR2  )*8) + 3;                                                                        
extern volatile __bit    TKCKS4      @ (((unsigned) & TKCTR2  )*8) + 4;                                                                        
extern volatile __bit    TKCKS5      @ (((unsigned) & TKCTR2  )*8) + 5;                                                                        
extern volatile __bit    TKCKS6      @ (((unsigned) & TKCTR2  )*8) + 6;                                                                        
extern volatile __bit    LDOCR       @ (((unsigned) & TKCTR2  )*8) + 7;

extern volatile __bit    TIM0        @ (((unsigned) & TKCTR1  )*8) + 0;
extern volatile __bit    TIM1        @ (((unsigned) & TKCTR1  )*8) + 1;                                                                        
extern volatile __bit    TIM2        @ (((unsigned) & TKCTR1  )*8) + 2;                                                                        
extern volatile __bit    PRSEN       @ (((unsigned) & TKCTR1  )*8) + 3;                                                                        
extern volatile __bit    VLS0        @ (((unsigned) & TKCTR1  )*8) + 4;                                                                        
extern volatile __bit    VLS1        @ (((unsigned) & TKCTR1  )*8) + 5;                                                                        
extern volatile __bit    VCS0        @ (((unsigned) & TKCTR1  )*8) + 6;                                                                        
extern volatile __bit    VCS1        @ (((unsigned) & TKCTR1  )*8) + 7;
                                                                       
extern volatile __bit    TKMOD       @ (((unsigned) & TKCTR0  )*8) + 2;                                                                        
extern volatile __bit    TKOSCS      @ (((unsigned) & TKCTR0  )*8) + 3;                                                                        
extern volatile __bit    CCP0        @ (((unsigned) & TKCTR0  )*8) + 4;                                                                        
extern volatile __bit    CCP1        @ (((unsigned) & TKCTR0  )*8) + 5;                                                                        
extern volatile __bit    TKSTART     @ (((unsigned) & TKCTR0  )*8) + 6;                                                                        
extern volatile __bit    TKEN        @ (((unsigned) & TKCTR0  )*8) + 7;



extern volatile __bit    SPIDATA0    @ (((unsigned) & SPIDATA  )*8) + 0;
extern volatile __bit    SPIDATA1    @ (((unsigned) & SPIDATA  )*8) + 1;
extern volatile __bit    SPIDATA2    @ (((unsigned) & SPIDATA  )*8) + 2;                                                                        
extern volatile __bit    SPIDATA3    @ (((unsigned) & SPIDATA  )*8) + 3;                                                                        
extern volatile __bit    SPIDATA4    @ (((unsigned) & SPIDATA  )*8) + 4;                                                                        
extern volatile __bit    SPIDATA5    @ (((unsigned) & SPIDATA  )*8) + 5;                                                                        
extern volatile __bit    SPIDATA6    @ (((unsigned) & SPIDATA  )*8) + 6;                                                                        
extern volatile __bit    SPIDATA7    @ (((unsigned) & SPIDATA  )*8) + 7;
                                                                        
extern volatile __bit    MODF    	   @ (((unsigned) & SPISTA  )*8) + 4;                                                                        
extern volatile __bit    SSERR       @ (((unsigned) & SPISTA  )*8) + 5;                                                                        
extern volatile __bit    WCOL    		 @ (((unsigned) & SPISTA  )*8) + 6;                                                                        
extern volatile __bit    SPIF        @ (((unsigned) & SPISTA  )*8) + 7;

extern volatile __bit    SPCR0    	 @ (((unsigned) & SPICR  )*8) + 0;
extern volatile __bit    SPCR1    	 @ (((unsigned) & SPICR  )*8) + 1;
extern volatile __bit    CPHA        @ (((unsigned) & SPICR  )*8) + 2;                                                                        
extern volatile __bit    CPOL        @ (((unsigned) & SPICR  )*8) + 3;                                                                        
extern volatile __bit    MSTR        @ (((unsigned) & SPICR  )*8) + 4;                                                                        
extern volatile __bit    SSOE        @ (((unsigned) & SPICR  )*8) + 5;                                                                        
extern volatile __bit    SPIEN       @ (((unsigned) & SPICR  )*8) + 6;                                                                        
extern volatile __bit    SPCR2       @ (((unsigned) & SPICR  )*8) + 7;

extern volatile __bit    GC    		 	 @ (((unsigned) & I2CADR  )*8) + 0;
extern volatile __bit    I2CADR1     @ (((unsigned) & I2CADR  )*8) + 1;
extern volatile __bit    I2CADR2     @ (((unsigned) & I2CADR  )*8) + 2;                                                                        
extern volatile __bit    I2CADR3     @ (((unsigned) & I2CADR  )*8) + 3;                                                                        
extern volatile __bit    I2CADR4     @ (((unsigned) & I2CADR  )*8) + 4;                                                                        
extern volatile __bit    I2CADR5     @ (((unsigned) & I2CADR  )*8) + 5;                                                                        
extern volatile __bit    I2CADR6     @ (((unsigned) & I2CADR  )*8) + 6;                                                                        
extern volatile __bit    I2CADR7     @ (((unsigned) & I2CADR  )*8) + 7;

extern volatile __bit    I2CDATA0    @ (((unsigned) & I2CDATA  )*8) + 0;
extern volatile __bit    I2CDATA1    @ (((unsigned) & I2CDATA  )*8) + 1;
extern volatile __bit    I2CDATA2    @ (((unsigned) & I2CDATA  )*8) + 2;                                                                        
extern volatile __bit    I2CDATA3    @ (((unsigned) & I2CDATA  )*8) + 3;                                                                        
extern volatile __bit    I2CDATA4    @ (((unsigned) & I2CDATA  )*8) + 4;                                                                        
extern volatile __bit    I2CDATA5    @ (((unsigned) & I2CDATA  )*8) + 5;                                                                        
extern volatile __bit    I2CDATA6    @ (((unsigned) & I2CDATA  )*8) + 6;                                                                        
extern volatile __bit    I2CDATA7    @ (((unsigned) & I2CDATA  )*8) + 7;

extern volatile __bit    I2CSTA3     @ (((unsigned) & I2CSTA  )*8) + 3; 
extern volatile __bit    I2CSTA4     @ (((unsigned) & I2CSTA  )*8) + 4;                                                                        
extern volatile __bit    I2CSTA5     @ (((unsigned) & I2CSTA  )*8) + 5;                                                                        
extern volatile __bit    I2CSTA6     @ (((unsigned) & I2CSTA  )*8) + 6;                                                                        
extern volatile __bit    I2CSTA7     @ (((unsigned) & I2CSTA  )*8) + 7;

extern volatile __bit    CR0    		 @ (((unsigned) & I2CCR  )*8) + 0;
extern volatile __bit    CR1    		 @ (((unsigned) & I2CCR  )*8) + 1;
extern volatile __bit    AA          @ (((unsigned) & I2CCR  )*8) + 2;                                                                        
extern volatile __bit    SI          @ (((unsigned) & I2CCR  )*8) + 3;                                                                        
extern volatile __bit    STO         @ (((unsigned) & I2CCR  )*8) + 4;                                                                        
extern volatile __bit    ST          @ (((unsigned) & I2CCR  )*8) + 5;                                                                        
extern volatile __bit    I2CEN       @ (((unsigned) & I2CCR  )*8) + 6;                                                                        
extern volatile __bit    CR2         @ (((unsigned) & I2CCR  )*8) + 7;



extern volatile __bit    BOR         @ (((unsigned) & PCON   )*8) + 0;
extern volatile __bit    POR         @ (((unsigned) & PCON   )*8) + 1;                                                                        
extern volatile __bit    MCLR        @ (((unsigned) & PCON   )*8) + 2;                                                                                                                                              
extern volatile __bit    PD          @ (((unsigned) & PCON   )*8) + 4;                                                                        
extern volatile __bit    TO          @ (((unsigned) & PCON   )*8) + 5;                                                                        
extern volatile __bit    SOFTRST     @ (((unsigned) & PCON   )*8) + 6;                                                                        

extern volatile __bit    IODIPS0    @ (((unsigned) & IODIPS )*8) + 0;
extern volatile __bit    IODIPS1    @ (((unsigned) & IODIPS )*8) + 1;                                                                        
extern volatile __bit    IODIPS2    @ (((unsigned) & IODIPS )*8) + 2;                                                                        
extern volatile __bit    IODIPS3    @ (((unsigned) & IODIPS )*8) + 3;                                                                        
extern volatile __bit    IODIPS4    @ (((unsigned) & IODIPS )*8) + 4;                                                                        
extern volatile __bit    IODIPS5    @ (((unsigned) & IODIPS )*8) + 5;                                                                        
extern volatile __bit    IODIPS6    @ (((unsigned) & IODIPS )*8) + 6;                                                                        
extern volatile __bit    IODIPS7    @ (((unsigned) & IODIPS )*8) + 7;

extern volatile __bit    IOCIPS0    @ (((unsigned) & IOCIPS )*8) + 0;
extern volatile __bit    IOCIPS1    @ (((unsigned) & IOCIPS )*8) + 1;                                                                        
extern volatile __bit    IOCIPS2    @ (((unsigned) & IOCIPS )*8) + 2;                                                                        
extern volatile __bit    IOCIPS3    @ (((unsigned) & IOCIPS )*8) + 3;                                                                        
extern volatile __bit    IOCIPS4    @ (((unsigned) & IOCIPS )*8) + 4;                                                                        
extern volatile __bit    IOCIPS5    @ (((unsigned) & IOCIPS )*8) + 5;                                                                        
extern volatile __bit    IOCIPS6    @ (((unsigned) & IOCIPS )*8) + 6;                                                                        
extern volatile __bit    IOCIPS7    @ (((unsigned) & IOCIPS )*8) + 7;

extern volatile __bit    IOBIPS0    @ (((unsigned) & IOBIPS )*8) + 0;
extern volatile __bit    IOBIPS1    @ (((unsigned) & IOBIPS )*8) + 1;                                                                        
extern volatile __bit    IOBIPS2    @ (((unsigned) & IOBIPS )*8) + 2;                                                                        
extern volatile __bit    IOBIPS3    @ (((unsigned) & IOBIPS )*8) + 3;                                                                        
extern volatile __bit    IOBIPS4    @ (((unsigned) & IOBIPS )*8) + 4;                                                                        
extern volatile __bit    IOBIPS5    @ (((unsigned) & IOBIPS )*8) + 5;                                                                        
extern volatile __bit    IOBIPS6    @ (((unsigned) & IOBIPS )*8) + 6;                                                                        
extern volatile __bit    IOBIPS7    @ (((unsigned) & IOBIPS )*8) + 7;

extern volatile __bit    IOAIPS0    @ (((unsigned) & IOAIPS  )*8) + 0;
extern volatile __bit    IOAIPS1    @ (((unsigned) & IOAIPS  )*8) + 1;                                                                        
extern volatile __bit    IOAIPS2    @ (((unsigned) & IOAIPS  )*8) + 2;                                                                        
extern volatile __bit    IOAIPS3    @ (((unsigned) & IOAIPS  )*8) + 3;                                                                        
extern volatile __bit    IOAIPS4    @ (((unsigned) & IOAIPS  )*8) + 4;                                                                        
extern volatile __bit    IOAIPS5    @ (((unsigned) & IOAIPS  )*8) + 5;                                                                        
extern volatile __bit    IOAIPS6    @ (((unsigned) & IOAIPS  )*8) + 6;                                                                        
extern volatile __bit    IOAIPS7    @ (((unsigned) & IOAIPS  )*8) + 7;

extern volatile __bit    DEB0        @ (((unsigned) & CMPC2  )*8) + 0;
extern volatile __bit    DEB1        @ (((unsigned) & CMPC2  )*8) + 1;                                                                        
extern volatile __bit    DEB2        @ (((unsigned) & CMPC2  )*8) + 2;                                                                                                                                                
extern volatile __bit    CINTS0      @ (((unsigned) & CMPC2  )*8) + 6;                                                                        
extern volatile __bit    CINTS1      @ (((unsigned) & CMPC2  )*8) + 7;

extern volatile __bit    CMPVLD0      @ (((unsigned) & CMPC1   )*8) + 0;
extern volatile __bit    CMPVLD1      @ (((unsigned) & CMPC1   )*8) + 1;                                                                        
extern volatile __bit    CMPVLD2      @ (((unsigned) & CMPC1   )*8) + 2;                                                                        
extern volatile __bit    CMPVLD3      @ (((unsigned) & CMPC1   )*8) + 3;                                                                        
extern volatile __bit    CMPVLD4      @ (((unsigned) & CMPC1   )*8) + 4; 
extern volatile __bit    CMPOFM      @ (((unsigned) & CMPC1   )*8) + 4;                                                                       
//extern volatile __bit    CMPHIEN     @ (((unsigned) & CMPC1   )*8) + 6;   
extern volatile __bit    C0PVRC     @ (((unsigned) & CMPC1   )*8) + 6;                                                                                                                                            
extern volatile __bit    CMPOEN      @ (((unsigned) & CMPC1   )*8) + 7;

extern volatile __bit    CMPPS0      @ (((unsigned) & CMPC0   )*8) + 0;
extern volatile __bit    CMPPS1      @ (((unsigned) & CMPC0   )*8) + 1;                                                                        
extern volatile __bit    CMPPS2      @ (((unsigned) & CMPC0   )*8) + 2;                                                                        
extern volatile __bit    CMPNS0      @ (((unsigned) & CMPC0   )*8) + 3;                                                                        
extern volatile __bit    CMPNS1      @ (((unsigned) & CMPC0   )*8) + 4;                                                                        
extern volatile __bit    CMPNS2      @ (((unsigned) & CMPC0   )*8) + 5;                                                                        
extern volatile __bit    CMPOUT      @ (((unsigned) & CMPC0   )*8) + 6;                                                                        
extern volatile __bit    CMPEN       @ (((unsigned) & CMPC0   )*8) + 7;

extern volatile __bit    PWM11DL0    @ (((unsigned) & PWM11DL  )*8) + 0;
extern volatile __bit    PWM11DL1    @ (((unsigned) & PWM11DL  )*8) + 1;                                                                        
extern volatile __bit    PWM11DL2    @ (((unsigned) & PWM11DL  )*8) + 2;                                                                        
extern volatile __bit    PWM11DL3    @ (((unsigned) & PWM11DL  )*8) + 3;                                                                        
extern volatile __bit    PWM11DL4    @ (((unsigned) & PWM11DL  )*8) + 4;                                                                        
extern volatile __bit    PWM11DL5    @ (((unsigned) & PWM11DL  )*8) + 5;                                                                        
extern volatile __bit    PWM11DL6    @ (((unsigned) & PWM11DL  )*8) + 6;                                                                        
extern volatile __bit    PWM11DL7    @ (((unsigned) & PWM11DL  )*8) + 7;
;
extern volatile __bit    PWM11DH0    @ (((unsigned) & PWM11DH )*8) + 0;
extern volatile __bit    PWM11DH1    @ (((unsigned) & PWM11DH )*8) + 1;                                                                        
extern volatile __bit    PWM11DH2    @ (((unsigned) & PWM11DH )*8) + 2;                                                                        
extern volatile __bit    PWM11DH3    @ (((unsigned) & PWM11DH )*8) + 3;                                                                        
extern volatile __bit    PWM11DH4    @ (((unsigned) & PWM11DH )*8) + 4;                                                                        
extern volatile __bit    PWM11DH5    @ (((unsigned) & PWM11DH )*8) + 5;                                                                        
extern volatile __bit    PWM11DH6    @ (((unsigned) & PWM11DH )*8) + 6;                                                                        
extern volatile __bit    PWM11DH7    @ (((unsigned) & PWM11DH )*8) + 7;

extern volatile __bit    PWM10DL0    @ (((unsigned) & PWM10DL )*8) + 0;
extern volatile __bit    PWM10DL1    @ (((unsigned) & PWM10DL )*8) + 1;                                                                        
extern volatile __bit    PWM10DL2    @ (((unsigned) & PWM10DL )*8) + 2;                                                                        
extern volatile __bit    PWM10DL3    @ (((unsigned) & PWM10DL )*8) + 3;                                                                        
extern volatile __bit    PWM10DL4    @ (((unsigned) & PWM10DL )*8) + 4;                                                                        
extern volatile __bit    PWM10DL5    @ (((unsigned) & PWM10DL )*8) + 5;                                                                        
extern volatile __bit    PWM10DL6    @ (((unsigned) & PWM10DL )*8) + 6;                                                                        
extern volatile __bit    PWM10DL7    @ (((unsigned) & PWM10DL )*8) + 7;

extern volatile __bit    PWM10DH0    @ (((unsigned) & PWM10DH )*8) + 0;
extern volatile __bit    PWM10DH1    @ (((unsigned) & PWM10DH )*8) + 1;                                                                        
extern volatile __bit    PWM10DH2    @ (((unsigned) & PWM10DH )*8) + 2;                                                                        
extern volatile __bit    PWM10DH3    @ (((unsigned) & PWM10DH )*8) + 3;                                                                        
extern volatile __bit    PWM10DH4    @ (((unsigned) & PWM10DH )*8) + 4;                                                                        
extern volatile __bit    PWM10DH5    @ (((unsigned) & PWM10DH )*8) + 5;                                                                        
extern volatile __bit    PWM10DH6    @ (((unsigned) & PWM10DH )*8) + 6;                                                                        
extern volatile __bit    PWM10DH7    @ (((unsigned) & PWM10DH )*8) + 7;

extern volatile __bit    PWM1S       @ (((unsigned) &  PWM1CR )*8) + 1;                                                                        
extern volatile __bit    PWM11M      @ (((unsigned) &  PWM1CR )*8) + 2;                                                                        
extern volatile __bit    PWM11OE     @ (((unsigned) &  PWM1CR )*8) + 3;                                                                        
extern volatile __bit    PWM11EN     @ (((unsigned) &  PWM1CR )*8) + 4;                                                                        
extern volatile __bit    PWM10M      @ (((unsigned) &  PWM1CR )*8) + 5;                                                                        
extern volatile __bit    PWM10OE     @ (((unsigned) &  PWM1CR )*8) + 6;                                                                        
extern volatile __bit    PWM10EN     @ (((unsigned) &  PWM1CR )*8) + 7;

extern volatile __bit    TC1CL0      @ (((unsigned) & TC1CL   )*8) + 0;
extern volatile __bit    TC1CL1      @ (((unsigned) & TC1CL   )*8) + 1;                                                                        
extern volatile __bit    TC1CL2      @ (((unsigned) & TC1CL   )*8) + 2;                                                                        
extern volatile __bit    TC1CL3      @ (((unsigned) & TC1CL   )*8) + 3;                                                                        
extern volatile __bit    TC1CL4      @ (((unsigned) & TC1CL   )*8) + 4;                                                                        
extern volatile __bit    TC1CL5      @ (((unsigned) & TC1CL   )*8) + 5;                                                                        
extern volatile __bit    TC1CL6      @ (((unsigned) & TC1CL   )*8) + 6;                                                                        
extern volatile __bit    TC1CL7      @ (((unsigned) & TC1CL   )*8) + 7;

extern volatile __bit    TC1CH0      @ (((unsigned) &  TC1CH  )*8) + 0;
extern volatile __bit    TC1CH1      @ (((unsigned) &  TC1CH  )*8) + 1;                                                                        
extern volatile __bit    TC1CH2      @ (((unsigned) &  TC1CH  )*8) + 2;                                                                        
extern volatile __bit    TC1CH3      @ (((unsigned) &  TC1CH  )*8) + 3;                                                                        
extern volatile __bit    TC1CH4      @ (((unsigned) &  TC1CH  )*8) + 4;                                                                        
extern volatile __bit    TC1CH5      @ (((unsigned) &  TC1CH  )*8) + 5;                                                                        
extern volatile __bit    TC1CH6      @ (((unsigned) &  TC1CH  )*8) + 6;                                                                        
extern volatile __bit    TC1CH7      @ (((unsigned) &  TC1CH  )*8) + 7;

extern volatile __bit    TC1PRL0     @ (((unsigned) & TC1PRL )*8) + 0;
extern volatile __bit    TC1PRL1     @ (((unsigned) & TC1PRL )*8) + 1;                                                                        
extern volatile __bit    TC1PRL2     @ (((unsigned) & TC1PRL )*8) + 2;                                                                        
extern volatile __bit    TC1PRL3     @ (((unsigned) & TC1PRL )*8) + 3;                                                                        
extern volatile __bit    TC1PRL4     @ (((unsigned) & TC1PRL )*8) + 4;                                                                        
extern volatile __bit    TC1PRL5     @ (((unsigned) & TC1PRL )*8) + 5;                                                                        
extern volatile __bit    TC1PRL6     @ (((unsigned) & TC1PRL )*8) + 6;                                                                        
extern volatile __bit    TC1PRL7     @ (((unsigned) & TC1PRL )*8) + 7;

extern volatile __bit    TC1PRH0     @ (((unsigned) & TC1PRH  )*8) + 0;
extern volatile __bit    TC1PRH1     @ (((unsigned) & TC1PRH  )*8) + 1;                                                                        
extern volatile __bit    TC1PRH2     @ (((unsigned) & TC1PRH  )*8) + 2;                                                                        
extern volatile __bit    TC1PRH3     @ (((unsigned) & TC1PRH  )*8) + 3;                                                                        
extern volatile __bit    TC1PRH4     @ (((unsigned) & TC1PRH  )*8) + 4;                                                                        
extern volatile __bit    TC1PRH5     @ (((unsigned) & TC1PRH  )*8) + 5;                                                                        
extern volatile __bit    TC1PRH6     @ (((unsigned) & TC1PRH  )*8) + 6;                                                                        
extern volatile __bit    TC1PRH7     @ (((unsigned) & TC1PRH  )*8) + 7;
                                     
extern volatile __bit    TC1CKPS0    @ (((unsigned) & T1CR    )*8) + 0;
extern volatile __bit    TC1CKPS1    @ (((unsigned) & T1CR    )*8) + 1;                                                                        
extern volatile __bit    TC1CKPS2    @ (((unsigned) & T1CR    )*8) + 2;                                                                        
extern volatile __bit    TC1CKS0     @ (((unsigned) & T1CR    )*8) + 3;                                                                        
extern volatile __bit    TC1CKS1     @ (((unsigned) & T1CR    )*8) + 4;                                                                        
extern volatile __bit    TC1MOD0     @ (((unsigned) & T1CR    )*8) + 5;                                                                        
extern volatile __bit    TC1MOD1     @ (((unsigned) & T1CR    )*8) + 6;                                                                        
extern volatile __bit    TC1EN       @ (((unsigned) & T1CR    )*8) + 7;

extern volatile __bit    PWM03D0     @ (((unsigned) &  PWM03D  )*8) + 0;
extern volatile __bit    PWM03D1     @ (((unsigned) &  PWM03D  )*8) + 1;                                                                        
extern volatile __bit    PWM03D2     @ (((unsigned) &  PWM03D  )*8) + 2;                                                                        
extern volatile __bit    PWM03D3     @ (((unsigned) &  PWM03D  )*8) + 3;                                                                        
extern volatile __bit    PWM03D4     @ (((unsigned) &  PWM03D  )*8) + 4;                                                                        
extern volatile __bit    PWM03D5     @ (((unsigned) &  PWM03D  )*8) + 5;                                                                        
extern volatile __bit    PWM03D6     @ (((unsigned) &  PWM03D  )*8) + 6;                                                                        
extern volatile __bit    PWM03D7     @ (((unsigned) &  PWM03D  )*8) + 7;

extern volatile __bit    PWM03P0     @ (((unsigned) & PWM03CR   )*8) + 0;
extern volatile __bit    PWM03P1     @ (((unsigned) & PWM03CR   )*8) + 1;                                                                        
extern volatile __bit    PWM03P2     @ (((unsigned) & PWM03CR   )*8) + 2;                                                                        
extern volatile __bit    PWM03P3     @ (((unsigned) & PWM03CR   )*8) + 3;                                                                        
extern volatile __bit    FLT03EN     @ (((unsigned) & PWM03CR   )*8) + 4;                                                                        
extern volatile __bit    PWM03M      @ (((unsigned) & PWM03CR   )*8) + 5;                                                                        
extern volatile __bit    PWM03OE     @ (((unsigned) & PWM03CR   )*8) + 6;                                                                        
extern volatile __bit    PWM03EN     @ (((unsigned) & PWM03CR   )*8) + 7;

extern volatile __bit    PWM02D0     @ (((unsigned) & PWM02D  )*8) + 0;
extern volatile __bit    PWM02D1     @ (((unsigned) & PWM02D  )*8) + 1;                                                                        
extern volatile __bit    PWM02D2     @ (((unsigned) & PWM02D  )*8) + 2;                                                                        
extern volatile __bit    PWM02D3     @ (((unsigned) & PWM02D  )*8) + 3;                                                                        
extern volatile __bit    PWM02D4     @ (((unsigned) & PWM02D  )*8) + 4;                                                                        
extern volatile __bit    PWM02D5     @ (((unsigned) & PWM02D  )*8) + 5;                                                                        
extern volatile __bit    PWM02D6     @ (((unsigned) & PWM02D  )*8) + 6;                                                                        
extern volatile __bit    PWM02D7     @ (((unsigned) & PWM02D  )*8) + 7;

extern volatile __bit    PWM02P0     @ (((unsigned) &  PWM02CR   )*8) + 0;
extern volatile __bit    PWM02P1     @ (((unsigned) &  PWM02CR   )*8) + 1;                                                                        
extern volatile __bit    PWM02P2     @ (((unsigned) &  PWM02CR   )*8) + 2;                                                                        
extern volatile __bit    PWM02P3     @ (((unsigned) &  PWM02CR   )*8) + 3;                                                                        
extern volatile __bit    FLT02EN     @ (((unsigned) &  PWM02CR   )*8) + 4;                                                                        
extern volatile __bit    PWM02M      @ (((unsigned) &  PWM02CR   )*8) + 5;                                                                        
extern volatile __bit    PWM02OE     @ (((unsigned) &  PWM02CR   )*8) + 6;                                                                        
extern volatile __bit    PWM02EN     @ (((unsigned) &  PWM02CR   )*8) + 7;

extern volatile __bit    PWM01D0     @ (((unsigned) & PWM01D  )*8) + 0;
extern volatile __bit    PWM01D1     @ (((unsigned) & PWM01D  )*8) + 1;                                                                        
extern volatile __bit    PWM01D2     @ (((unsigned) & PWM01D  )*8) + 2;                                                                        
extern volatile __bit    PWM01D3     @ (((unsigned) & PWM01D  )*8) + 3;                                                                        
extern volatile __bit    PWM01D4     @ (((unsigned) & PWM01D  )*8) + 4;                                                                        
extern volatile __bit    PWM01D5     @ (((unsigned) & PWM01D  )*8) + 5;                                                                        
extern volatile __bit    PWM01D6     @ (((unsigned) & PWM01D  )*8) + 6;                                                                        
extern volatile __bit    PWM01D7     @ (((unsigned) & PWM01D  )*8) + 7;

extern volatile __bit    PWM01P0     @ (((unsigned) & PWM01CR )*8) + 0;
extern volatile __bit    PWM01P1     @ (((unsigned) & PWM01CR )*8) + 1;                                                                        
extern volatile __bit    PWM01P2     @ (((unsigned) & PWM01CR )*8) + 2;                                                                        
extern volatile __bit    PWM01P3     @ (((unsigned) & PWM01CR )*8) + 3;                                                                        
extern volatile __bit    FLT01EN     @ (((unsigned) & PWM01CR )*8) + 4;                                                                        
extern volatile __bit    PWM01M      @ (((unsigned) & PWM01CR )*8) + 5;                                                                        
extern volatile __bit    PWM01OE     @ (((unsigned) & PWM01CR )*8) + 6;                                                                        
extern volatile __bit    PWM01EN     @ (((unsigned) & PWM01CR )*8) + 7;

extern volatile __bit    PWM00D0     @ (((unsigned) & PWM00D  )*8) + 0;
extern volatile __bit    PWM00D1     @ (((unsigned) & PWM00D  )*8) + 1;                                                                        
extern volatile __bit    PWM00D2     @ (((unsigned) & PWM00D  )*8) + 2;                                                                        
extern volatile __bit    PWM00D3     @ (((unsigned) & PWM00D  )*8) + 3;                                                                        
extern volatile __bit    PWM00D4     @ (((unsigned) & PWM00D  )*8) + 4;                                                                        
extern volatile __bit    PWM00D5     @ (((unsigned) & PWM00D  )*8) + 5;                                                                        
extern volatile __bit    PWM00D6     @ (((unsigned) & PWM00D  )*8) + 6;                                                                        
extern volatile __bit    PWM00D7     @ (((unsigned) & PWM00D  )*8) + 7;

extern volatile __bit    PWM00P0     @ (((unsigned) & PWM00CR )*8) + 0;
extern volatile __bit    PWM00P1     @ (((unsigned) & PWM00CR )*8) + 1;                                                                        
extern volatile __bit    PWM00P2     @ (((unsigned) & PWM00CR )*8) + 2;                                                                        
extern volatile __bit    PWM00P3     @ (((unsigned) & PWM00CR )*8) + 3;                                                                        
extern volatile __bit    FLT00EN     @ (((unsigned) & PWM00CR )*8) + 4;                                                                        
extern volatile __bit    PWM00M      @ (((unsigned) & PWM00CR )*8) + 5;                                                                        
extern volatile __bit    PWM00OE     @ (((unsigned) & PWM00CR )*8) + 6;                                                                        
extern volatile __bit    PWM00EN     @ (((unsigned) & PWM00CR )*8) + 7;

extern volatile __bit    TC0CL0     @ (((unsigned) &  TC0CL   )*8) + 0;
extern volatile __bit    TC0CL1     @ (((unsigned) &  TC0CL   )*8) + 1;                                                                        
extern volatile __bit    TC0CL2     @ (((unsigned) &  TC0CL   )*8) + 2;                                                                        
extern volatile __bit    TC0CL3     @ (((unsigned) &  TC0CL   )*8) + 3;                                                                        
extern volatile __bit    TC0CL4     @ (((unsigned) &  TC0CL   )*8) + 4;                                                                        
extern volatile __bit    TC0CL5     @ (((unsigned) &  TC0CL   )*8) + 5;                                                                        
extern volatile __bit    TC0CL6     @ (((unsigned) &  TC0CL   )*8) + 6;                                                                        
extern volatile __bit    TC0CL7     @ (((unsigned) &  TC0CL   )*8) + 7;

extern volatile __bit    TC0CH0     @ (((unsigned) &  TC0CH  )*8) + 0;
extern volatile __bit    TC0CH1     @ (((unsigned) &  TC0CH  )*8) + 1;                                                                        
extern volatile __bit    TC0CH2     @ (((unsigned) &  TC0CH  )*8) + 2;                                                                        
extern volatile __bit    TC0CH3     @ (((unsigned) &  TC0CH  )*8) + 3;                                                                        
extern volatile __bit    TC0CH4     @ (((unsigned) &  TC0CH  )*8) + 4;                                                                        
extern volatile __bit    TC0CH5     @ (((unsigned) &  TC0CH  )*8) + 5;                                                                        
extern volatile __bit    TC0CH6     @ (((unsigned) &  TC0CH  )*8) + 6;                                                                        
extern volatile __bit    TC0CH7     @ (((unsigned) &  TC0CH  )*8) + 7;

extern volatile __bit    TC0CKPO0   @ (((unsigned) & T0CR2     )*8) + 0;
extern volatile __bit    TC0CKPO1   @ (((unsigned) & T0CR2     )*8) + 1;                                                                        
extern volatile __bit    TC0CKPO2   @ (((unsigned) & T0CR2     )*8) + 2;                                                                        
extern volatile __bit    PWM0S0     @ (((unsigned) &  T0CR2   )*8) + 3;                                                                        
extern volatile __bit    PWM0S1     @ (((unsigned) &  T0CR2   )*8) + 4;                                                                        
extern volatile __bit    PWM0S2     @ (((unsigned) &  T0CR2   )*8) + 5;                                                                        

extern volatile __bit    TC0CKPS0   @ (((unsigned) & T0CR    )*8) + 0;
extern volatile __bit    TC0CKPS1   @ (((unsigned) & T0CR    )*8) + 1;                                                                        
extern volatile __bit    TC0CKPS2   @ (((unsigned) & T0CR    )*8) + 2;                                                                        
extern volatile __bit    TC0CKS0    @ (((unsigned) & T0CR    )*8) + 3;                                                                        
extern volatile __bit    TC0CKS1    @ (((unsigned) & T0CR    )*8) + 4;                                                                        
extern volatile __bit    TC0OSCS    @ (((unsigned) & T0CR    )*8) + 5;                                                                        
extern volatile __bit    TC0MOD     @ (((unsigned) & T0CR    )*8) + 6;                                                                        
extern volatile __bit    TC0EN      @ (((unsigned) & T0CR    )*8) + 7;

extern volatile __bit    STPL       @ (((unsigned) & OSCM    )*8) + 0;
extern volatile __bit    LIRC500K   @ (((unsigned) & OSCM    )*8) + 1;                                                                        
extern volatile __bit    STPH       @ (((unsigned) & OSCM    )*8) + 2;                                                                        
extern volatile __bit    CLKM       @ (((unsigned) & OSCM    )*8) + 3;                                                                        
extern volatile __bit    STOP       @ (((unsigned) & OSCM    )*8) + 4;                                                                                                                                               
extern volatile __bit    STBL       @ (((unsigned) & OSCM    )*8) + 6;                                                                        
extern volatile __bit    STBH       @ (((unsigned) & OSCM    )*8) + 7;



extern volatile __bit    ADL0       @ (((unsigned) & ADL    )*8) + 0;
extern volatile __bit    ADL1       @ (((unsigned) & ADL    )*8) + 1;                                                                        
extern volatile __bit    ADL2       @ (((unsigned) & ADL    )*8) + 2;                                                                        
extern volatile __bit    ADL3       @ (((unsigned) & ADL    )*8) + 3;                                                                        
extern volatile __bit    ADL4       @ (((unsigned) & ADL    )*8) + 4;                                                                        
extern volatile __bit    ADL5       @ (((unsigned) & ADL    )*8) + 5;                                                                        
extern volatile __bit    ADL6       @ (((unsigned) & ADL    )*8) + 6;                                                                        
extern volatile __bit    ADL7       @ (((unsigned) & ADL    )*8) + 7;

extern volatile __bit    ADH0       @ (((unsigned) & ADH    )*8) + 0;
extern volatile __bit    ADH1       @ (((unsigned) & ADH    )*8) + 1;                                                                        
extern volatile __bit    ADH2       @ (((unsigned) & ADH    )*8) + 2;                                                                        
extern volatile __bit    ADH3       @ (((unsigned) & ADH    )*8) + 3;                                                                        
extern volatile __bit    ADH4       @ (((unsigned) & ADH    )*8) + 4;                                                                        
extern volatile __bit    ADH5       @ (((unsigned) & ADH    )*8) + 5;                                                                        
extern volatile __bit    ADH6       @ (((unsigned) & ADH    )*8) + 6;                                                                        
extern volatile __bit    ADH7       @ (((unsigned) & ADH    )*8) + 7;

extern volatile __bit    VREVL0     @ (((unsigned) & ADCON3  )*8) + 0;
extern volatile __bit    VREVL1     @ (((unsigned) & ADCON3  )*8) + 1;                                                                        
extern volatile __bit    VREVL2     @ (((unsigned) & ADCON3  )*8) + 2;                                                                        
extern volatile __bit    VREVL3     @ (((unsigned) & ADCON3  )*8) + 3;                                                                        
extern volatile __bit    VREVH0     @ (((unsigned) & ADCON3  )*8) + 4;                                                                        
extern volatile __bit    VREVH1     @ (((unsigned) & ADCON3  )*8) + 5;                                                                        
extern volatile __bit    VREVH2     @ (((unsigned) & ADCON3  )*8) + 6;                                                                        
extern volatile __bit    VREVH3     @ (((unsigned) & ADCON3  )*8) + 7;

extern volatile __bit    ADVOS0     @ (((unsigned) & ADCON2  )*8) + 0;
extern volatile __bit    ADVOS1     @ (((unsigned) & ADCON2  )*8) + 1;                                                                        
extern volatile __bit    ADVOS2     @ (((unsigned) & ADCON2  )*8) + 2;                                                                        
extern volatile __bit    ADVOS3     @ (((unsigned) & ADCON2  )*8) + 3;                                                                        
extern volatile __bit    CMPHDEN    @ (((unsigned) & ADCON2  )*8) + 4;                                                                        
extern volatile __bit    VRGEN      @ (((unsigned) & ADCON2  )*8) + 5;
extern volatile __bit    VREFO      @ (((unsigned) & ADCON2  )*8) + 5;                                                                        
extern volatile __bit    TRGEN      @ (((unsigned) & ADCON2  )*8) + 6;                                                                        

extern volatile __bit    VHS0       @ (((unsigned) & ADCON1  )*8) + 0;
extern volatile __bit    VHS1       @ (((unsigned) & ADCON1  )*8) + 1;                                                                        
extern volatile __bit    VREMS0     @ (((unsigned) & ADCON1  )*8) + 2;                                                                        
extern volatile __bit    VREMS1     @ (((unsigned) & ADCON1  )*8) + 3;                                                                        
extern volatile __bit    ADCKS0     @ (((unsigned) & ADCON1  )*8) + 4;                                                                        
extern volatile __bit    ADCKS1     @ (((unsigned) & ADCON1  )*8) + 5;                                                                        
extern volatile __bit    ADCKS2     @ (((unsigned) & ADCON1  )*8) + 6;                                                                        
extern volatile __bit    VHS2       @ (((unsigned) & ADCON1  )*8) + 7;

extern volatile __bit    CHS0       @ (((unsigned) & ADCON0  )*8) + 0;
extern volatile __bit    CHS1       @ (((unsigned) & ADCON0  )*8) + 1;                                                                        
extern volatile __bit    CHS2       @ (((unsigned) & ADCON0  )*8) + 2;                                                                        
extern volatile __bit    CHS3       @ (((unsigned) & ADCON0  )*8) + 3;                                                                        
extern volatile __bit    CHS4       @ (((unsigned) & ADCON0  )*8) + 4;                                                                        
extern volatile __bit    ADFM       @ (((unsigned) & ADCON0  )*8) + 5;                                                                        
extern volatile __bit    ADS        @ (((unsigned) & ADCON0  )*8) + 6;                                                                        
extern volatile __bit    ADEN       @ (((unsigned) & ADCON0  )*8) + 7;

extern volatile __bit    IODODS10   @ (((unsigned) & IODODS1  )*8) + 0;
extern volatile __bit    IODODS11   @ (((unsigned) & IODODS1  )*8) + 1;                                                                        
extern volatile __bit    IODODS12   @ (((unsigned) & IODODS1  )*8) + 2;                                                                        
extern volatile __bit    IODODS13   @ (((unsigned) & IODODS1  )*8) + 3;                                                                        
extern volatile __bit    IODODS14   @ (((unsigned) & IODODS1  )*8) + 4;                                                                        
extern volatile __bit    IODODS15   @ (((unsigned) & IODODS1  )*8) + 5;                                                                        
extern volatile __bit    IODODS16   @ (((unsigned) & IODODS1  )*8) + 6;                                                                        
extern volatile __bit    IODODS17   @ (((unsigned) & IODODS1  )*8) + 7;

extern volatile __bit    IOCODS10   @ (((unsigned) & IOCODS1 )*8) + 0;
extern volatile __bit    IOCODS11   @ (((unsigned) & IOCODS1 )*8) + 1;                                                                        
extern volatile __bit    IOCODS12   @ (((unsigned) & IOCODS1 )*8) + 2;                                                                        
extern volatile __bit    IOCODS13   @ (((unsigned) & IOCODS1 )*8) + 3;                                                                        
extern volatile __bit    IOCODS14   @ (((unsigned) & IOCODS1 )*8) + 4;                                                                        
extern volatile __bit    IOCODS15   @ (((unsigned) & IOCODS1 )*8) + 5;                                                                        
extern volatile __bit    IOCODS16   @ (((unsigned) & IOCODS1 )*8) + 6;                                                                        
extern volatile __bit    IOCODS17   @ (((unsigned) & IOCODS1 )*8) + 7;

extern volatile __bit    IOBODS10   @ (((unsigned) & IOBODS1  )*8) + 0;
extern volatile __bit    IOBODS11   @ (((unsigned) & IOBODS1  )*8) + 1;                                                                        
extern volatile __bit    IOBODS12   @ (((unsigned) & IOBODS1  )*8) + 2;                                                                        
extern volatile __bit    IOBODS13   @ (((unsigned) & IOBODS1  )*8) + 3;                                                                        
extern volatile __bit    IOBODS14   @ (((unsigned) & IOBODS1  )*8) + 4;                                                                        
extern volatile __bit    IOBODS15   @ (((unsigned) & IOBODS1  )*8) + 5;                                                                        
extern volatile __bit    IOBODS16   @ (((unsigned) & IOBODS1  )*8) + 6;                                                                        
extern volatile __bit    IOBODS17   @ (((unsigned) & IOBODS1  )*8) + 7;

extern volatile __bit    IOAODS10   @ (((unsigned) & IOAODS1 )*8) + 0;
extern volatile __bit    IOAODS11   @ (((unsigned) & IOAODS1 )*8) + 1;                                                                        
extern volatile __bit    IOAODS12   @ (((unsigned) & IOAODS1 )*8) + 2;                                                                        
extern volatile __bit    IOAODS13   @ (((unsigned) & IOAODS1 )*8) + 3;                                                                        
extern volatile __bit    IOAODS14   @ (((unsigned) & IOAODS1 )*8) + 4;                                                                        
extern volatile __bit    IOAODS15   @ (((unsigned) & IOAODS1 )*8) + 5;                                                                        
extern volatile __bit    IOAODS16   @ (((unsigned) & IOAODS1 )*8) + 6;                                                                        
extern volatile __bit    IOAODS17   @ (((unsigned) & IOAODS1 )*8) + 7;

extern volatile __bit    IODODS00   @ (((unsigned) & IODODS0 )*8) + 0;
extern volatile __bit    IODODS01   @ (((unsigned) & IODODS0 )*8) + 1;                                                                        
extern volatile __bit    IODODS02   @ (((unsigned) & IODODS0 )*8) + 2;                                                                        
extern volatile __bit    IODODS03   @ (((unsigned) & IODODS0 )*8) + 3;                                                                        
extern volatile __bit    IODODS04   @ (((unsigned) & IODODS0 )*8) + 4;                                                                        
extern volatile __bit    IODODS05   @ (((unsigned) & IODODS0 )*8) + 5;                                                                        
extern volatile __bit    IODODS06   @ (((unsigned) & IODODS0 )*8) + 6;                                                                        
extern volatile __bit    IODODS07   @ (((unsigned) & IODODS0 )*8) + 7;

extern volatile __bit    IOCODS00   @ (((unsigned) & IOCODS0  )*8) + 0;
extern volatile __bit    IOCODS01   @ (((unsigned) & IOCODS0  )*8) + 1;                                                                        
extern volatile __bit    IOCODS02   @ (((unsigned) & IOCODS0  )*8) + 2;                                                                        
extern volatile __bit    IOCODS03   @ (((unsigned) & IOCODS0  )*8) + 3;                                                                        
extern volatile __bit    IOCODS04   @ (((unsigned) & IOCODS0  )*8) + 4;                                                                        
extern volatile __bit    IOCODS05   @ (((unsigned) & IOCODS0  )*8) + 5;                                                                        
extern volatile __bit    IOCODS06   @ (((unsigned) & IOCODS0  )*8) + 6;                                                                        
extern volatile __bit    IOCODS07   @ (((unsigned) & IOCODS0  )*8) + 7;

extern volatile __bit    IOBODS00   @ (((unsigned) & IOBODS0 )*8) + 0;
extern volatile __bit    IOBODS01   @ (((unsigned) & IOBODS0 )*8) + 1;                                                                        
extern volatile __bit    IOBODS02   @ (((unsigned) & IOBODS0 )*8) + 2;                                                                        
extern volatile __bit    IOBODS03   @ (((unsigned) & IOBODS0 )*8) + 3;                                                                        
extern volatile __bit    IOBODS04   @ (((unsigned) & IOBODS0 )*8) + 4;                                                                        
extern volatile __bit    IOBODS05   @ (((unsigned) & IOBODS0 )*8) + 5;                                                                        
extern volatile __bit    IOBODS06   @ (((unsigned) & IOBODS0 )*8) + 6;                                                                        
extern volatile __bit    IOBODS07   @ (((unsigned) & IOBODS0 )*8) + 7;

extern volatile __bit    IOAODS00   @ (((unsigned) & IOAODS0  )*8) + 0;
extern volatile __bit    IOAODS01   @ (((unsigned) & IOAODS0  )*8) + 1;                                                                        
extern volatile __bit    IOAODS02   @ (((unsigned) & IOAODS0  )*8) + 2;                                                                        
extern volatile __bit    IOAODS03   @ (((unsigned) & IOAODS0  )*8) + 3;                                                                        
extern volatile __bit    IOAODS04   @ (((unsigned) & IOAODS0  )*8) + 4;                                                                        
extern volatile __bit    IOAODS05   @ (((unsigned) & IOAODS0  )*8) + 5;                                                                        
extern volatile __bit    IOAODS06   @ (((unsigned) & IOAODS0  )*8) + 6;                                                                        
extern volatile __bit    IOAODS07   @ (((unsigned) & IOAODS0  )*8) + 7;

extern volatile __bit    IODICR0   @ (((unsigned) & IODICR )*8) + 0;
extern volatile __bit    IODICR1   @ (((unsigned) & IODICR )*8) + 1;                                                                        
extern volatile __bit    IODICR2   @ (((unsigned) & IODICR )*8) + 2;                                                                        
extern volatile __bit    IODICR3   @ (((unsigned) & IODICR )*8) + 3;                                                                        
extern volatile __bit    IODICR4   @ (((unsigned) & IODICR )*8) + 4;                                                                        
extern volatile __bit    IODICR5   @ (((unsigned) & IODICR )*8) + 5;                                                                        
extern volatile __bit    IODICR6   @ (((unsigned) & IODICR )*8) + 6;                                                                        
extern volatile __bit    IODICR7   @ (((unsigned) & IODICR )*8) + 7;

extern volatile __bit    IOCICR0   @ (((unsigned) & IOCICR )*8) + 0;
extern volatile __bit    IOCICR1   @ (((unsigned) & IOCICR )*8) + 1;                                                                        
extern volatile __bit    IOCICR2   @ (((unsigned) & IOCICR )*8) + 2;                                                                        
extern volatile __bit    IOCICR3   @ (((unsigned) & IOCICR )*8) + 3;                                                                        
extern volatile __bit    IOCICR4   @ (((unsigned) & IOCICR )*8) + 4;                                                                        
extern volatile __bit    IOCICR5   @ (((unsigned) & IOCICR )*8) + 5;                                                                        
extern volatile __bit    IOCICR6   @ (((unsigned) & IOCICR )*8) + 6;                                                                        
extern volatile __bit    IOCICR7   @ (((unsigned) & IOCICR )*8) + 7;
                       
extern volatile __bit   IOBICR0   @ (((unsigned) & IOBICR  )*8) + 0;
extern volatile __bit   IOBICR1   @ (((unsigned) & IOBICR  )*8) + 1;                                                                        
extern volatile __bit   IOBICR2   @ (((unsigned) & IOBICR  )*8) + 2;                                                                        
extern volatile __bit   IOBICR3   @ (((unsigned) & IOBICR  )*8) + 3;                                                                        
extern volatile __bit   IOBICR4   @ (((unsigned) & IOBICR  )*8) + 4;                                                                        
extern volatile __bit   IOBICR5   @ (((unsigned) & IOBICR  )*8) + 5;                                                                        
extern volatile __bit   IOBICR6   @ (((unsigned) & IOBICR  )*8) + 6;                                                                        
extern volatile __bit   IOBICR7   @ (((unsigned) & IOBICR  )*8) + 7;

extern volatile __bit   IOAICR0   @ (((unsigned) & IOAICR  )*8) + 0;
extern volatile __bit   IOAICR1   @ (((unsigned) & IOAICR  )*8) + 1;                                                                        
extern volatile __bit   IOAICR2   @ (((unsigned) & IOAICR  )*8) + 2;                                                                        
extern volatile __bit   IOAICR3   @ (((unsigned) & IOAICR  )*8) + 3;                                                                        
extern volatile __bit   IOAICR4   @ (((unsigned) & IOAICR  )*8) + 4;                                                                        
extern volatile __bit   IOAICR5   @ (((unsigned) & IOAICR  )*8) + 5;                                                                        
extern volatile __bit   IOAICR6   @ (((unsigned) & IOAICR  )*8) + 6;                                                                        
extern volatile __bit   IOAICR7   @ (((unsigned) & IOAICR  )*8) + 7;

extern volatile __bit   PDD0      @ (((unsigned) & PDD     )*8) + 0;
extern volatile __bit   PDD1      @ (((unsigned) & PDD     )*8) + 1;                                                                        
extern volatile __bit   PDD2      @ (((unsigned) & PDD     )*8) + 2;                                                                        
extern volatile __bit   PDD3      @ (((unsigned) & PDD     )*8) + 3;                                                                        
extern volatile __bit   PDD4      @ (((unsigned) & PDD     )*8) + 4;                                                                        
extern volatile __bit   PDD5      @ (((unsigned) & PDD     )*8) + 5;                                                                        
extern volatile __bit   PDD6      @ (((unsigned) & PDD     )*8) + 6;                                                                        
extern volatile __bit   PDD7      @ (((unsigned) & PDD     )*8) + 7;

extern volatile __bit   PDC0      @ (((unsigned) & PDC     )*8) + 0;
extern volatile __bit   PDC1      @ (((unsigned) & PDC     )*8) + 1;                                                                        
extern volatile __bit   PDC2      @ (((unsigned) & PDC     )*8) + 2;                                                                        
extern volatile __bit   PDC3      @ (((unsigned) & PDC     )*8) + 3;                                                                        
extern volatile __bit   PDC4      @ (((unsigned) & PDC     )*8) + 4;                                                                        
extern volatile __bit   PDC5      @ (((unsigned) & PDC     )*8) + 5;                                                                        
extern volatile __bit   PDC6      @ (((unsigned) & PDC     )*8) + 6;                                                                        
extern volatile __bit   PDC7      @ (((unsigned) & PDC     )*8) + 7;

extern volatile __bit   PDB0      @ (((unsigned) & PDB     )*8) + 0;
extern volatile __bit   PDB1      @ (((unsigned) & PDB     )*8) + 1;                                                                        
extern volatile __bit   PDB2      @ (((unsigned) & PDB     )*8) + 2;                                                                        
extern volatile __bit   PDB3      @ (((unsigned) & PDB     )*8) + 3;                                                                        
extern volatile __bit   PDB4      @ (((unsigned) & PDB     )*8) + 4;                                                                        
extern volatile __bit   PDB5      @ (((unsigned) & PDB     )*8) + 5;                                                                        
extern volatile __bit   PDB6      @ (((unsigned) & PDB     )*8) + 6;                                                                        
extern volatile __bit   PDB7      @ (((unsigned) & PDB     )*8) + 7;

extern volatile __bit   PDA0      @ (((unsigned) & PDA     )*8) + 0;
extern volatile __bit   PDA1      @ (((unsigned) & PDA     )*8) + 1;                                                                        
extern volatile __bit   PDA2      @ (((unsigned) & PDA     )*8) + 2;                                                                        
extern volatile __bit   PDA3      @ (((unsigned) & PDA     )*8) + 3;                                                                        
extern volatile __bit   PDA4      @ (((unsigned) & PDA     )*8) + 4;                                                                        
extern volatile __bit   PDA5      @ (((unsigned) & PDA     )*8) + 5;                                                                        
extern volatile __bit   PDA6      @ (((unsigned) & PDA     )*8) + 6;                                                                        
extern volatile __bit   PDA7      @ (((unsigned) & PDA     )*8) + 7;

extern volatile __bit   PUD0      @ (((unsigned) & PUD     )*8) + 0;
extern volatile __bit   PUD1      @ (((unsigned) & PUD     )*8) + 1;                                                                        
extern volatile __bit   PUD2      @ (((unsigned) & PUD     )*8) + 2;                                                                        
extern volatile __bit   PUD3      @ (((unsigned) & PUD     )*8) + 3;                                                                        
extern volatile __bit   PUD4      @ (((unsigned) & PUD     )*8) + 4;                                                                        
extern volatile __bit   PUD5      @ (((unsigned) & PUD     )*8) + 5;                                                                        
extern volatile __bit   PUD6      @ (((unsigned) & PUD     )*8) + 6;                                                                        
extern volatile __bit   PUD7      @ (((unsigned) & PUD     )*8) + 7;

extern volatile __bit   PUC0      @ (((unsigned) & PUC     )*8) + 0;
extern volatile __bit   PUC1      @ (((unsigned) & PUC     )*8) + 1;                                                                        
extern volatile __bit   PUC2      @ (((unsigned) & PUC     )*8) + 2;                                                                        
extern volatile __bit   PUC3      @ (((unsigned) & PUC     )*8) + 3;                                                                        
extern volatile __bit   PUC4      @ (((unsigned) & PUC     )*8) + 4;                                                                        
extern volatile __bit   PUC5      @ (((unsigned) & PUC     )*8) + 5;                                                                        
extern volatile __bit   PUC6      @ (((unsigned) & PUC     )*8) + 6;                                                                        
extern volatile __bit   PUC7      @ (((unsigned) & PUC     )*8) + 7;

extern volatile __bit   PUB0      @ (((unsigned) & PUB    )*8) + 0;
extern volatile __bit   PUB1      @ (((unsigned) & PUB    )*8) + 1;                                                                        
extern volatile __bit   PUB2      @ (((unsigned) & PUB    )*8) + 2;                                                                        
extern volatile __bit   PUB3      @ (((unsigned) & PUB    )*8) + 3;                                                                        
extern volatile __bit   PUB4      @ (((unsigned) & PUB    )*8) + 4;                                                                        
extern volatile __bit   PUB5      @ (((unsigned) & PUB    )*8) + 5;                                                                        
extern volatile __bit   PUB6      @ (((unsigned) & PUB    )*8) + 6;                                                                        
extern volatile __bit   PUB7      @ (((unsigned) & PUB    )*8) + 7;

extern volatile __bit   PUA0      @ (((unsigned) & PUA    )*8) + 0;
extern volatile __bit   PUA1      @ (((unsigned) & PUA    )*8) + 1;                                                                        
extern volatile __bit   PUA2      @ (((unsigned) & PUA    )*8) + 2;                                                                        
extern volatile __bit   PUA3      @ (((unsigned) & PUA    )*8) + 3;                                                                        
extern volatile __bit   PUA4      @ (((unsigned) & PUA    )*8) + 4;                                                                        
extern volatile __bit   PUA5      @ (((unsigned) & PUA    )*8) + 5;                                                                        
extern volatile __bit   PUA6      @ (((unsigned) & PUA    )*8) + 6;                                                                        
extern volatile __bit   PUA7      @ (((unsigned) & PUA    )*8) + 7;

extern volatile __bit   ANSD0     @ (((unsigned) & ANSD   )*8) + 0;
extern volatile __bit   ANSD1     @ (((unsigned) & ANSD   )*8) + 1;                                                                        
extern volatile __bit   ANSD2     @ (((unsigned) & ANSD   )*8) + 2;                                                                        
extern volatile __bit   ANSD3     @ (((unsigned) & ANSD   )*8) + 3;                                                                        
extern volatile __bit   ANSD4     @ (((unsigned) & ANSD   )*8) + 4;                                                                        
extern volatile __bit   ANSD5     @ (((unsigned) & ANSD   )*8) + 5;                                                                        
extern volatile __bit   ANSD6     @ (((unsigned) & ANSD   )*8) + 6;                                                                        
extern volatile __bit   ANSD7     @ (((unsigned) & ANSD   )*8) + 7;

extern volatile __bit   ANSC0     @ (((unsigned) & ANSC    )*8) + 0;
extern volatile __bit   ANSC1     @ (((unsigned) & ANSC    )*8) + 1;                                                                        
extern volatile __bit   ANSC2     @ (((unsigned) & ANSC    )*8) + 2;                                                                        
extern volatile __bit   ANSC3     @ (((unsigned) & ANSC    )*8) + 3;                                                                        
extern volatile __bit   ANSC4     @ (((unsigned) & ANSC    )*8) + 4;                                                                        
extern volatile __bit   ANSC5     @ (((unsigned) & ANSC    )*8) + 5;                                                                        
extern volatile __bit   ANSC6     @ (((unsigned) & ANSC    )*8) + 6;                                                                        
extern volatile __bit   ANSC7     @ (((unsigned) & ANSC    )*8) + 7;

extern volatile __bit   ANSB0     @ (((unsigned) & ANSB    )*8) + 0;
extern volatile __bit   ANSB1     @ (((unsigned) & ANSB    )*8) + 1;                                                                        
extern volatile __bit   ANSB2     @ (((unsigned) & ANSB    )*8) + 2;                                                                        
extern volatile __bit   ANSB3     @ (((unsigned) & ANSB    )*8) + 3;                                                                        
extern volatile __bit   ANSB4     @ (((unsigned) & ANSB    )*8) + 4;                                                                        
extern volatile __bit   ANSB5     @ (((unsigned) & ANSB    )*8) + 5;                                                                        
extern volatile __bit   ANSB6     @ (((unsigned) & ANSB    )*8) + 6;                                                                        
extern volatile __bit   ANSB7     @ (((unsigned) & ANSB    )*8) + 7;
                                  
extern volatile __bit   ANSA0     @ (((unsigned) & ANSA    )*8) + 0;
extern volatile __bit   ANSA1     @ (((unsigned) & ANSA    )*8) + 1;                                                                        
extern volatile __bit   ANSA2     @ (((unsigned) & ANSA    )*8) + 2;                                                                        
extern volatile __bit   ANSA3     @ (((unsigned) & ANSA    )*8) + 3;                                                                        
extern volatile __bit   ANSA4     @ (((unsigned) & ANSA    )*8) + 4;                                                                        
extern volatile __bit   ANSA5     @ (((unsigned) & ANSA    )*8) + 5;                                                                        
extern volatile __bit   ANSA6     @ (((unsigned) & ANSA    )*8) + 6;                                                                        
extern volatile __bit   ANSA7     @ (((unsigned) & ANSA    )*8) + 7;

extern volatile __bit   IODOR0    @ (((unsigned) &  IODOR  )*8) + 0;
extern volatile __bit   IODOR1    @ (((unsigned) &  IODOR  )*8) + 1;                                                                        
extern volatile __bit   IODOR2    @ (((unsigned) &  IODOR  )*8) + 2;                                                                        
extern volatile __bit   IODOR3    @ (((unsigned) &  IODOR  )*8) + 3;                                                                        
extern volatile __bit   IODOR4    @ (((unsigned) &  IODOR  )*8) + 4;                                                                        
extern volatile __bit   IODOR5    @ (((unsigned) &  IODOR  )*8) + 5;                                                                        
extern volatile __bit   IODOR6    @ (((unsigned) &  IODOR  )*8) + 6;                                                                        
extern volatile __bit   IODOR7    @ (((unsigned) &  IODOR  )*8) + 7;
                                  
extern volatile __bit   IOCOR0    @ (((unsigned) & IOCOR  )*8) + 0;
extern volatile __bit   IOCOR1    @ (((unsigned) & IOCOR  )*8) + 1;                                                                        
extern volatile __bit   IOCOR2    @ (((unsigned) & IOCOR  )*8) + 2;                                                                        
extern volatile __bit   IOCOR3    @ (((unsigned) & IOCOR  )*8) + 3;                                                                        
extern volatile __bit   IOCOR4    @ (((unsigned) & IOCOR  )*8) + 4;                                                                        
extern volatile __bit   IOCOR5    @ (((unsigned) & IOCOR  )*8) + 5;                                                                        
extern volatile __bit   IOCOR6    @ (((unsigned) & IOCOR  )*8) + 6;                                                                        
extern volatile __bit   IOCOR7    @ (((unsigned) & IOCOR  )*8) + 7;
                                  
extern volatile __bit   IOBOR0    @ (((unsigned) & IOBOR   )*8) + 0;
extern volatile __bit   IOBOR1    @ (((unsigned) & IOBOR   )*8) + 1;                                                                        
extern volatile __bit   IOBOR2    @ (((unsigned) & IOBOR   )*8) + 2;                                                                        
extern volatile __bit   IOBOR3    @ (((unsigned) & IOBOR   )*8) + 3;                                                                        
extern volatile __bit   IOBOR4    @ (((unsigned) & IOBOR   )*8) + 4;                                                                        
extern volatile __bit   IOBOR5    @ (((unsigned) & IOBOR   )*8) + 5;                                                                        
extern volatile __bit   IOBOR6    @ (((unsigned) & IOBOR   )*8) + 6;                                                                        
extern volatile __bit   IOBOR7    @ (((unsigned) & IOBOR   )*8) + 7;

extern volatile __bit   IOAOR0    @ (((unsigned) & IOAOR   )*8) + 0;
extern volatile __bit   IOAOR1    @ (((unsigned) & IOAOR   )*8) + 1;                                                                        
extern volatile __bit   IOAOR2    @ (((unsigned) & IOAOR   )*8) + 2;                                                                        
extern volatile __bit   IOAOR3    @ (((unsigned) & IOAOR   )*8) + 3;                                                                        
extern volatile __bit   IOAOR4    @ (((unsigned) & IOAOR   )*8) + 4;                                                                        
extern volatile __bit   IOAOR5    @ (((unsigned) & IOAOR   )*8) + 5;                                                                        
extern volatile __bit   IOAOR6    @ (((unsigned) & IOAOR   )*8) + 6;                                                                        
extern volatile __bit   IOAOR7    @ (((unsigned) & IOAOR   )*8) + 7;

extern volatile __bit   OED0      @ (((unsigned) & OED     )*8) + 0;
extern volatile __bit   OED1      @ (((unsigned) & OED     )*8) + 1;                                                                        
extern volatile __bit   OED2      @ (((unsigned) & OED     )*8) + 2;                                                                        
extern volatile __bit   OED3      @ (((unsigned) & OED     )*8) + 3;                                                                        
extern volatile __bit   OED4      @ (((unsigned) & OED     )*8) + 4;                                                                        
extern volatile __bit   OED5      @ (((unsigned) & OED     )*8) + 5;                                                                        
extern volatile __bit   OED6      @ (((unsigned) & OED     )*8) + 6;                                                                        
extern volatile __bit   OED7      @ (((unsigned) & OED     )*8) + 7;
                                 
extern volatile __bit   OEC0      @ (((unsigned) & OEC      )*8) + 0;
extern volatile __bit   OEC1      @ (((unsigned) & OEC      )*8) + 1;                                                                        
extern volatile __bit   OEC2      @ (((unsigned) & OEC      )*8) + 2;                                                                        
extern volatile __bit   OEC3      @ (((unsigned) & OEC      )*8) + 3;                                                                        
extern volatile __bit   OEC4      @ (((unsigned) & OEC      )*8) + 4;                                                                        
extern volatile __bit   OEC5      @ (((unsigned) & OEC      )*8) + 5;                                                                        
extern volatile __bit   OEC6      @ (((unsigned) & OEC      )*8) + 6;                                                                        
extern volatile __bit   OEC7      @ (((unsigned) & OEC      )*8) + 7;
                                 
extern volatile __bit   OEB0      @ (((unsigned) & OEB      )*8) + 0;
extern volatile __bit   OEB1      @ (((unsigned) & OEB      )*8) + 1;                                                                        
extern volatile __bit   OEB2      @ (((unsigned) & OEB      )*8) + 2;                                                                        
extern volatile __bit   OEB3      @ (((unsigned) & OEB      )*8) + 3;                                                                        
extern volatile __bit   OEB4      @ (((unsigned) & OEB      )*8) + 4;                                                                        
extern volatile __bit   OEB5      @ (((unsigned) & OEB      )*8) + 5;                                                                        
extern volatile __bit   OEB6      @ (((unsigned) & OEB      )*8) + 6;                                                                        
extern volatile __bit   OEB7      @ (((unsigned) & OEB      )*8) + 7;

extern volatile __bit   OEA0      @ (((unsigned) & OEA     )*8) + 0;
extern volatile __bit   OEA1      @ (((unsigned) & OEA     )*8) + 1;                                                                        
extern volatile __bit   OEA2      @ (((unsigned) & OEA     )*8) + 2;                                                                        
extern volatile __bit   OEA3      @ (((unsigned) & OEA     )*8) + 3;                                                                        
extern volatile __bit   OEA4      @ (((unsigned) & OEA     )*8) + 4;                                                                        
extern volatile __bit   OEA5      @ (((unsigned) & OEA     )*8) + 5;                                                                        
extern volatile __bit   OEA6      @ (((unsigned) & OEA     )*8) + 6;                                                                        
extern volatile __bit   OEA7      @ (((unsigned) & OEA     )*8) + 7;

extern volatile __bit   IOD0      @ (((unsigned) & IOD     )*8) + 0;
extern volatile __bit   IOD1      @ (((unsigned) & IOD     )*8) + 1;                                                                        
extern volatile __bit   IOD2      @ (((unsigned) & IOD     )*8) + 2;                                                                        
extern volatile __bit   IOD3      @ (((unsigned) & IOD     )*8) + 3;                                                                        
extern volatile __bit   IOD4      @ (((unsigned) & IOD     )*8) + 4;                                                                        
extern volatile __bit   IOD5      @ (((unsigned) & IOD     )*8) + 5;                                                                        
extern volatile __bit   IOD6      @ (((unsigned) & IOD     )*8) + 6;                                                                        
extern volatile __bit   IOD7      @ (((unsigned) & IOD     )*8) + 7;
                                  
extern volatile __bit   IOC0      @ (((unsigned) &  IOC    )*8) + 0;
extern volatile __bit   IOC1      @ (((unsigned) &  IOC    )*8) + 1;                                                                        
extern volatile __bit   IOC2      @ (((unsigned) &  IOC    )*8) + 2;                                                                        
extern volatile __bit   IOC3      @ (((unsigned) &  IOC    )*8) + 3;                                                                        
extern volatile __bit   IOC4      @ (((unsigned) &  IOC    )*8) + 4;                                                                        
extern volatile __bit   IOC5      @ (((unsigned) &  IOC    )*8) + 5;                                                                        
extern volatile __bit   IOC6      @ (((unsigned) &  IOC    )*8) + 6;                                                                        
extern volatile __bit   IOC7      @ (((unsigned) &  IOC    )*8) + 7;

extern volatile __bit   IOB0      @ (((unsigned) &  IOB   )*8) + 0;
extern volatile __bit   IOB1      @ (((unsigned) &  IOB   )*8) + 1;                                                                        
extern volatile __bit   IOB2      @ (((unsigned) &  IOB   )*8) + 2;                                                                        
extern volatile __bit   IOB3      @ (((unsigned) &  IOB   )*8) + 3;                                                                        
extern volatile __bit   IOB4      @ (((unsigned) &  IOB   )*8) + 4;                                                                        
extern volatile __bit   IOB5      @ (((unsigned) &  IOB   )*8) + 5;                                                                        
extern volatile __bit   IOB6      @ (((unsigned) &  IOB   )*8) + 6;                                                                        
extern volatile __bit   IOB7      @ (((unsigned) &  IOB   )*8) + 7;

extern volatile __bit   IOA0      @ (((unsigned) & IOA    )*8) + 0;
extern volatile __bit   IOA1      @ (((unsigned) & IOA    )*8) + 1;                                                                        
extern volatile __bit   IOA2      @ (((unsigned) & IOA    )*8) + 2;                                                                        
extern volatile __bit   IOA3      @ (((unsigned) & IOA    )*8) + 3;                                                                        
extern volatile __bit   IOA4      @ (((unsigned) & IOA    )*8) + 4;                                                                        
extern volatile __bit   IOA5      @ (((unsigned) & IOA    )*8) + 5;                                                                        
extern volatile __bit   IOA6      @ (((unsigned) & IOA    )*8) + 6;                                                                        
extern volatile __bit   IOA7      @ (((unsigned) & IOA    )*8) + 7;

extern volatile __bit   RX0REG0   @ (((unsigned) & RX0REG )*8) + 0;
extern volatile __bit   RX0REG1   @ (((unsigned) & RX0REG )*8) + 1;                                                                        
extern volatile __bit   RX0REG2   @ (((unsigned) & RX0REG )*8) + 2;                                                                        
extern volatile __bit   RX0REG3   @ (((unsigned) & RX0REG )*8) + 3;                                                                        
extern volatile __bit   RX0REG4   @ (((unsigned) & RX0REG )*8) + 4;                                                                        
extern volatile __bit   RX0REG5   @ (((unsigned) & RX0REG )*8) + 5;                                                                        
extern volatile __bit   RX0REG6   @ (((unsigned) & RX0REG )*8) + 6;                                                                        
extern volatile __bit   RX0REG7   @ (((unsigned) & RX0REG )*8) + 7;

extern volatile __bit   TX0REG0   @ (((unsigned) & TX0REG  )*8) + 0;
extern volatile __bit   TX0REG1   @ (((unsigned) & TX0REG  )*8) + 1;                                                                        
extern volatile __bit   TX0REG2   @ (((unsigned) & TX0REG  )*8) + 2;                                                                        
extern volatile __bit   TX0REG3   @ (((unsigned) & TX0REG  )*8) + 3;                                                                        
extern volatile __bit   TX0REG4   @ (((unsigned) & TX0REG  )*8) + 4;                                                                        
extern volatile __bit   TX0REG5   @ (((unsigned) & TX0REG  )*8) + 5;                                                                        
extern volatile __bit   TX0REG6   @ (((unsigned) & TX0REG  )*8) + 6;                                                                        
extern volatile __bit   TX0REG7   @ (((unsigned) & TX0REG  )*8) + 7;

extern volatile __bit   BRGD0L0   @ (((unsigned) & BRGD0L  )*8) + 0;
extern volatile __bit   BRGD0L1   @ (((unsigned) & BRGD0L  )*8) + 1;                                                                        
extern volatile __bit   BRGD0L2   @ (((unsigned) & BRGD0L  )*8) + 2;                                                                        
extern volatile __bit   BRGD0L3   @ (((unsigned) & BRGD0L  )*8) + 3;                                                                        
extern volatile __bit   BRGD0L4   @ (((unsigned) & BRGD0L  )*8) + 4;                                                                        
extern volatile __bit   BRGD0L5   @ (((unsigned) & BRGD0L  )*8) + 5;                                                                        
extern volatile __bit   BRGD0L6   @ (((unsigned) & BRGD0L  )*8) + 6;                                                                        
extern volatile __bit   BRGD0L7   @ (((unsigned) & BRGD0L  )*8) + 7;

extern volatile __bit   BRGD0H0   @ (((unsigned) &  BRGD0H  )*8) + 0;
extern volatile __bit   BRGD0H1   @ (((unsigned) &  BRGD0H  )*8) + 1;                                                                        
extern volatile __bit   BRGD0H2   @ (((unsigned) &  BRGD0H  )*8) + 2;                                                                        
extern volatile __bit   BRGD0H3   @ (((unsigned) &  BRGD0H  )*8) + 3;                                                                        
extern volatile __bit   BRGD0H4   @ (((unsigned) &  BRGD0H  )*8) + 4;                                                                        
extern volatile __bit   BRGD0H5   @ (((unsigned) &  BRGD0H  )*8) + 5;                                                                        
extern volatile __bit   BRGD0H6   @ (((unsigned) &  BRGD0H  )*8) + 6;  
extern volatile __bit   ODEN      @ (((unsigned) &  BRGD0H  )*8) + 6;                                                                     
extern volatile __bit   SBYTE     @ (((unsigned) &  BRGD0H  )*8) + 7;

extern volatile __bit   RXD9      @ (((unsigned) & RX0CR   )*8) + 0;
extern volatile __bit   FRER      @ (((unsigned) & RX0CR   )*8) + 1;                                                                        
extern volatile __bit   RXOVF     @ (((unsigned) & RX0CR   )*8) + 2;                                                                        
extern volatile __bit   SREN      @ (((unsigned) & RX0CR   )*8) + 3;                                                                        
extern volatile __bit   RX9       @ (((unsigned) & RX0CR   )*8) + 4;                                                                                                                                              
extern volatile __bit   CKPS      @ (((unsigned) & RX0CR   )*8) + 6;                                                                        
extern volatile __bit   RXEN      @ (((unsigned) & RX0CR   )*8) + 7;

extern volatile __bit   TXD9      @ (((unsigned) & TX0CR  )*8) + 0;
extern volatile __bit   SPD0      @ (((unsigned) & TX0CR  )*8) + 1;                                                                        
extern volatile __bit   SPD1      @ (((unsigned) & TX0CR  )*8) + 2;                                                                        
extern volatile __bit   SLAVE     @ (((unsigned) & TX0CR  )*8) + 3;                                                                        
extern volatile __bit   TX9       @ (((unsigned) & TX0CR  )*8) + 4;                                                                        
extern volatile __bit   SYNC      @ (((unsigned) & TX0CR  )*8) + 5;                                                                        
extern volatile __bit   TMCLR     @ (((unsigned) & TX0CR  )*8) + 6;                                                                        
extern volatile __bit   TXEN      @ (((unsigned) & TX0CR  )*8) + 7;

extern volatile __bit   IOACHIP   @ (((unsigned) &  INTP1   )*8) + 0;
extern volatile __bit   IOBCHIP   @ (((unsigned) &  INTP1   )*8) + 1;                                                                        
extern volatile __bit   IOCCHIP   @ (((unsigned) &  INTP1   )*8) + 2;                                                                        
extern volatile __bit   IODCHIP   @ (((unsigned) &  INTP1   )*8) + 3;                                                                        
extern volatile __bit   ADIP      @ (((unsigned) &  INTP1   )*8) + 4;                                                                        
extern volatile __bit   TKIP      @ (((unsigned) &  INTP1   )*8) + 5;                                                                        
extern volatile __bit   INT0IP    @ (((unsigned) &  INTP1   )*8) + 6;                                                                        
extern volatile __bit   INT1IP    @ (((unsigned) &  INTP1   )*8) + 7;

extern volatile __bit   TC0IP     @ (((unsigned) &  INTP0  )*8) + 0;
extern volatile __bit   TC1IP     @ (((unsigned) &  INTP0  )*8) + 1;                                                                        
extern volatile __bit   TC2IP     @ (((unsigned) &  INTP0  )*8) + 2;                                                                        
extern volatile __bit   TC2GIP    @ (((unsigned) &  INTP0  )*8) + 3;                                                                        
extern volatile __bit   CMP0IP    @ (((unsigned) &  INTP0  )*8) + 4;                                                                        
extern volatile __bit   I2CIP     @ (((unsigned) &  INTP0  )*8) + 5;                                                                       
extern volatile __bit   TX0IP     @ (((unsigned) &  INTP0  )*8) + 6;                                                                        
extern volatile __bit   RX0IP     @ (((unsigned) &  INTP0  )*8) + 7;

extern volatile __bit   IOACHIF   @ (((unsigned) & INTF1    )*8) + 0;
extern volatile __bit   IOBCHIF   @ (((unsigned) & INTF1    )*8) + 1;                                                                        
extern volatile __bit   IOCCHIF   @ (((unsigned) & INTF1    )*8) + 2;                                                                        
extern volatile __bit   IODCHIF   @ (((unsigned) & INTF1    )*8) + 3;                                                                        
extern volatile __bit   ADIF      @ (((unsigned) & INTF1    )*8) + 4;                                                                        
extern volatile __bit   TKIF      @ (((unsigned) & INTF1    )*8) + 5;                                                                        
extern volatile __bit   INT0IF    @ (((unsigned) & INTF1    )*8) + 6;                                                                        
extern volatile __bit   INT1IF    @ (((unsigned) & INTF1    )*8) + 7;

extern volatile __bit   TC0IF     @ (((unsigned) & INTF0    )*8) + 0;
extern volatile __bit   TC1IF     @ (((unsigned) & INTF0    )*8) + 1;                                                                        
extern volatile __bit   TC2IF     @ (((unsigned) & INTF0    )*8) + 2;                                                                        
extern volatile __bit   TC2GIF    @ (((unsigned) & INTF0    )*8) + 3;                                                                        
extern volatile __bit   CMP0IF    @ (((unsigned) & INTF0    )*8) + 4;                                                                        
extern volatile __bit   I2CIF     @ (((unsigned) & INTF0    )*8) + 5;                                                                      
extern volatile __bit   TX0IF     @ (((unsigned) & INTF0    )*8) + 6;                                                                        
extern volatile __bit   RX0IF     @ (((unsigned) & INTF0    )*8) + 7;

extern volatile __bit   IOACHIE   @ (((unsigned) & INTCR1   )*8) + 0;
extern volatile __bit   IOBCHIE   @ (((unsigned) & INTCR1   )*8) + 1;                                                                        
extern volatile __bit   IOCCHIE   @ (((unsigned) & INTCR1   )*8) + 2;                                                                        
extern volatile __bit   IODCHIE   @ (((unsigned) & INTCR1   )*8) + 3;                                                                        
extern volatile __bit   ADIE      @ (((unsigned) & INTCR1   )*8) + 4;                                                                        
extern volatile __bit   TKIE      @ (((unsigned) & INTCR1   )*8) + 5;                                                                        
extern volatile __bit   INT0IE    @ (((unsigned) & INTCR1   )*8) + 6;                                                                        
extern volatile __bit   INT1IE    @ (((unsigned) & INTCR1   )*8) + 7;

extern volatile __bit   TC0IE     @ (((unsigned) &  INTCR0  )*8) + 0;
extern volatile __bit   TC1IE     @ (((unsigned) &  INTCR0  )*8) + 1;                                                                        
extern volatile __bit   TC2IE     @ (((unsigned) &  INTCR0  )*8) + 2;                                                                        
extern volatile __bit   TC2GIE    @ (((unsigned) &  INTCR0  )*8) + 3;                                                                        
extern volatile __bit   CMP0IE    @ (((unsigned) &  INTCR0  )*8) + 4;                                                                        
extern volatile __bit   I2CIE     @ (((unsigned) &  INTCR0  )*8) + 5;                                                                        
extern volatile __bit   TX0IE     @ (((unsigned) &  INTCR0  )*8) + 6;                                                                        
extern volatile __bit   RX0IE     @ (((unsigned) &  INTCR0  )*8) + 7;

extern volatile __bit   C         @ (((unsigned) & STATUS   )*8) + 0;
extern volatile __bit   DC        @ (((unsigned) & STATUS   )*8) + 1;                                                                        
extern volatile __bit   Z         @ (((unsigned) & STATUS   )*8) + 2;                                                                        
extern volatile __bit   OV        @ (((unsigned) & STATUS   )*8) + 3;                                                                        
extern volatile __bit   N         @ (((unsigned) & STATUS   )*8) + 4;                                                                        

extern volatile __bit   FSR2L0    @ (((unsigned) & FSR2L   )*8) + 0;
extern volatile __bit   FSR2L1    @ (((unsigned) & FSR2L   )*8) + 1;                                                                        
extern volatile __bit   FSR2L2    @ (((unsigned) & FSR2L   )*8) + 2;                                                                        
extern volatile __bit   FSR2L3    @ (((unsigned) & FSR2L   )*8) + 3;                                                                        
extern volatile __bit   FSR2L4    @ (((unsigned) & FSR2L   )*8) + 4;                                                                        
extern volatile __bit   FSR2L5    @ (((unsigned) & FSR2L   )*8) + 5;                                                                        
extern volatile __bit   FSR2L6    @ (((unsigned) & FSR2L   )*8) + 6;                                                                        
extern volatile __bit   FSR2L7    @ (((unsigned) & FSR2L   )*8) + 7;
                                 
extern volatile __bit   FSR2H0    @ (((unsigned) & FSR2H  )*8) + 0;
extern volatile __bit   FSR2H1    @ (((unsigned) & FSR2H  )*8) + 1;                                                                        
extern volatile __bit   FSR2H2    @ (((unsigned) & FSR2H  )*8) + 2;                                                                        
extern volatile __bit   FSR2H3    @ (((unsigned) & FSR2H  )*8) + 3;                                                                        
extern volatile __bit   FSR2H4    @ (((unsigned) & FSR2H  )*8) + 4;                                                                        
extern volatile __bit   FSR2H5    @ (((unsigned) & FSR2H  )*8) + 5;                                                                        
extern volatile __bit   FSR2H6    @ (((unsigned) & FSR2H  )*8) + 6;                                                                        
extern volatile __bit   FSR2H7    @ (((unsigned) & FSR2H  )*8) + 7;

extern volatile __bit   PLUSW20   @ (((unsigned) & PLUSW2  )*8) + 0;
extern volatile __bit   PLUSW21   @ (((unsigned) & PLUSW2  )*8) + 1;                                                                        
extern volatile __bit   PLUSW22   @ (((unsigned) & PLUSW2  )*8) + 2;                                                                        
extern volatile __bit   PLUSW23   @ (((unsigned) & PLUSW2  )*8) + 3;                                                                        
extern volatile __bit   PLUSW24   @ (((unsigned) & PLUSW2  )*8) + 4;                                                                        
extern volatile __bit   PLUSW25   @ (((unsigned) & PLUSW2  )*8) + 5;                                                                        
extern volatile __bit   PLUSW26   @ (((unsigned) & PLUSW2  )*8) + 6;                                                                        
extern volatile __bit   PLUSW27   @ (((unsigned) & PLUSW2  )*8) + 7;

extern volatile __bit   PREINC20  @ (((unsigned) & PREINC2 )*8) + 0;
extern volatile __bit   PREINC21  @ (((unsigned) & PREINC2 )*8) + 1;                                                                        
extern volatile __bit   PREINC22  @ (((unsigned) & PREINC2 )*8) + 2;                                                                        
extern volatile __bit   PREINC23  @ (((unsigned) & PREINC2 )*8) + 3;                                                                        
extern volatile __bit   PREINC24  @ (((unsigned) & PREINC2 )*8) + 4;                                                                        
extern volatile __bit   PREINC25  @ (((unsigned) & PREINC2 )*8) + 5;                                                                        
extern volatile __bit   PREINC26  @ (((unsigned) & PREINC2 )*8) + 6;                                                                        
extern volatile __bit   PREINC27  @ (((unsigned) & PREINC2 )*8) + 7;

extern volatile __bit   POSTDEC20 @ (((unsigned) & POSTDEC2 )*8) + 0;
extern volatile __bit   POSTDEC21 @ (((unsigned) & POSTDEC2 )*8) + 1;                                                                        
extern volatile __bit   POSTDEC22 @ (((unsigned) & POSTDEC2 )*8) + 2;                                                                        
extern volatile __bit   POSTDEC23 @ (((unsigned) & POSTDEC2 )*8) + 3;                                                                        
extern volatile __bit   POSTDEC24 @ (((unsigned) & POSTDEC2 )*8) + 4;                                                                        
extern volatile __bit   POSTDEC25 @ (((unsigned) & POSTDEC2 )*8) + 5;                                                                        
extern volatile __bit   POSTDEC26 @ (((unsigned) & POSTDEC2 )*8) + 6;                                                                        
extern volatile __bit   POSTDEC27 @ (((unsigned) & POSTDEC2 )*8) + 7;

extern volatile __bit   POSTINC20 @ (((unsigned) & POSTINC2 )*8) + 0;
extern volatile __bit   POSTINC21 @ (((unsigned) & POSTINC2 )*8) + 1;                                                                        
extern volatile __bit   POSTINC22 @ (((unsigned) & POSTINC2 )*8) + 2;                                                                        
extern volatile __bit   POSTINC23 @ (((unsigned) & POSTINC2 )*8) + 3;                                                                        
extern volatile __bit   POSTINC24 @ (((unsigned) & POSTINC2 )*8) + 4;                                                                        
extern volatile __bit   POSTINC25 @ (((unsigned) & POSTINC2 )*8) + 5;                                                                        
extern volatile __bit   POSTINC26 @ (((unsigned) & POSTINC2 )*8) + 6;                                                                        
extern volatile __bit   POSTINC27 @ (((unsigned) & POSTINC2 )*8) + 7;

extern volatile __bit   INDF20    @ (((unsigned) &  INDF2 )*8) + 0;
extern volatile __bit   INDF21    @ (((unsigned) &  INDF2 )*8) + 1;                                                                        
extern volatile __bit   INDF22    @ (((unsigned) &  INDF2 )*8) + 2;                                                                        
extern volatile __bit   INDF23    @ (((unsigned) &  INDF2 )*8) + 3;                                                                        
extern volatile __bit   INDF24    @ (((unsigned) &  INDF2 )*8) + 4;                                                                        
extern volatile __bit   INDF25    @ (((unsigned) &  INDF2 )*8) + 5;                                                                        
extern volatile __bit   INDF26    @ (((unsigned) &  INDF2 )*8) + 6;                                                                        
extern volatile __bit   INDF27    @ (((unsigned) &  INDF2 )*8) + 7;

extern volatile __bit   BSR0     @ (((unsigned) &  BSR  )*8) + 0;
extern volatile __bit   BSR1     @ (((unsigned) &  BSR  )*8) + 1;                                                                        
extern volatile __bit   BSR2     @ (((unsigned) &  BSR  )*8) + 2;                                                                        
extern volatile __bit   BSR3     @ (((unsigned) &  BSR  )*8) + 3;                                                                        
extern volatile __bit   BSR4     @ (((unsigned) &  BSR  )*8) + 4;                                                                        
extern volatile __bit   BSR5     @ (((unsigned) &  BSR  )*8) + 5;                                                                        
extern volatile __bit   BSR6     @ (((unsigned) &  BSR  )*8) + 6;                                                                        
extern volatile __bit   BSR7     @ (((unsigned) &  BSR  )*8) + 7;

extern volatile __bit   FSR1L0   @ (((unsigned) &  FSR1L   )*8) + 0;
extern volatile __bit   FSR1L1   @ (((unsigned) &  FSR1L   )*8) + 1;                                                                        
extern volatile __bit   FSR1L2   @ (((unsigned) &  FSR1L   )*8) + 2;                                                                        
extern volatile __bit   FSR1L3   @ (((unsigned) &  FSR1L   )*8) + 3;                                                                        
extern volatile __bit   FSR1L4   @ (((unsigned) &  FSR1L   )*8) + 4;                                                                        
extern volatile __bit   FSR1L5   @ (((unsigned) &  FSR1L   )*8) + 5;                                                                        
extern volatile __bit   FSR1L6   @ (((unsigned) &  FSR1L   )*8) + 6;                                                                        
extern volatile __bit   FSR1L7   @ (((unsigned) &  FSR1L   )*8) + 7;
                        
extern volatile __bit   FSR1H0   @ (((unsigned) &  FSR1H  )*8) + 0;
extern volatile __bit   FSR1H1   @ (((unsigned) &  FSR1H  )*8) + 1;                                                                        
extern volatile __bit   FSR1H2   @ (((unsigned) &  FSR1H  )*8) + 2;                                                                        
extern volatile __bit   FSR1H3   @ (((unsigned) &  FSR1H  )*8) + 3;                                                                        
extern volatile __bit   FSR1H4   @ (((unsigned) &  FSR1H  )*8) + 4;                                                                        
extern volatile __bit   FSR1H5   @ (((unsigned) &  FSR1H  )*8) + 5;                                                                        
extern volatile __bit   FSR1H6   @ (((unsigned) &  FSR1H  )*8) + 6;                                                                        
extern volatile __bit   FSR1H7   @ (((unsigned) &  FSR1H  )*8) + 7;
                        
extern volatile __bit   PLUSW10  @ (((unsigned) & PLUSW1  )*8) + 0;
extern volatile __bit   PLUSW11  @ (((unsigned) & PLUSW1  )*8) + 1;                                                                        
extern volatile __bit   PLUSW12  @ (((unsigned) & PLUSW1  )*8) + 2;                                                                        
extern volatile __bit   PLUSW13  @ (((unsigned) & PLUSW1  )*8) + 3;                                                                        
extern volatile __bit   PLUSW14  @ (((unsigned) & PLUSW1  )*8) + 4;                                                                        
extern volatile __bit   PLUSW15  @ (((unsigned) & PLUSW1  )*8) + 5;                                                                        
extern volatile __bit   PLUSW16  @ (((unsigned) & PLUSW1  )*8) + 6;                                                                        
extern volatile __bit   PLUSW17  @ (((unsigned) & PLUSW1  )*8) + 7;

extern volatile __bit   PREINC10 @ (((unsigned) & PREINC1)*8) + 0;
extern volatile __bit   PREINC11 @ (((unsigned) & PREINC1)*8) + 1;                                                                        
extern volatile __bit   PREINC12 @ (((unsigned) & PREINC1)*8) + 2;                                                                        
extern volatile __bit   PREINC13 @ (((unsigned) & PREINC1)*8) + 3;                                                                        
extern volatile __bit   PREINC14 @ (((unsigned) & PREINC1)*8) + 4;                                                                        
extern volatile __bit   PREINC15 @ (((unsigned) & PREINC1)*8) + 5;                                                                        
extern volatile __bit   PREINC16 @ (((unsigned) & PREINC1)*8) + 6;                                                                        
extern volatile __bit   PREINC17 @ (((unsigned) & PREINC1)*8) + 7;

extern volatile __bit   POSTDEC10 @ (((unsigned) & POSTDEC1)*8) + 0;
extern volatile __bit   POSTDEC11 @ (((unsigned) & POSTDEC1)*8) + 1;                                                                        
extern volatile __bit   POSTDEC12 @ (((unsigned) & POSTDEC1)*8) + 2;                                                                        
extern volatile __bit   POSTDEC13 @ (((unsigned) & POSTDEC1)*8) + 3;                                                                        
extern volatile __bit   POSTDEC14 @ (((unsigned) & POSTDEC1)*8) + 4;                                                                        
extern volatile __bit   POSTDEC15 @ (((unsigned) & POSTDEC1)*8) + 5;                                                                        
extern volatile __bit   POSTDEC16 @ (((unsigned) & POSTDEC1)*8) + 6;                                                                        
extern volatile __bit   POSTDEC17 @ (((unsigned) & POSTDEC1)*8) + 7;

extern volatile __bit   POSTINC10 @ (((unsigned) & POSTINC1 )*8) + 0;
extern volatile __bit   POSTINC11 @ (((unsigned) & POSTINC1 )*8) + 1;                                                                        
extern volatile __bit   POSTINC12 @ (((unsigned) & POSTINC1 )*8) + 2;                                                                        
extern volatile __bit   POSTINC13 @ (((unsigned) & POSTINC1 )*8) + 3;                                                                        
extern volatile __bit   POSTINC14 @ (((unsigned) & POSTINC1 )*8) + 4;                                                                        
extern volatile __bit   POSTINC15 @ (((unsigned) & POSTINC1 )*8) + 5;                                                                        
extern volatile __bit   POSTINC16 @ (((unsigned) & POSTINC1 )*8) + 6;                                                                        
extern volatile __bit   POSTINC17 @ (((unsigned) & POSTINC1 )*8) + 7;

extern volatile __bit   INDF10    @ (((unsigned) & INDF1   )*8) + 0;
extern volatile __bit   INDF11    @ (((unsigned) & INDF1   )*8) + 1;                                                                        
extern volatile __bit   INDF12    @ (((unsigned) & INDF1   )*8) + 2;                                                                        
extern volatile __bit   INDF13    @ (((unsigned) & INDF1   )*8) + 3;                                                                        
extern volatile __bit   INDF14    @ (((unsigned) & INDF1   )*8) + 4;                                                                        
extern volatile __bit   INDF15    @ (((unsigned) & INDF1   )*8) + 5;                                                                        
extern volatile __bit   INDF16    @ (((unsigned) & INDF1   )*8) + 6;                                                                        
extern volatile __bit   INDF17    @ (((unsigned) & INDF1   )*8) + 7;

extern volatile __bit   AREG0     @ (((unsigned) & AREG   )*8) + 0;
extern volatile __bit   AREG1     @ (((unsigned) & AREG   )*8) + 1;                                                                        
extern volatile __bit   AREG2     @ (((unsigned) & AREG   )*8) + 2;                                                                        
extern volatile __bit   AREG3     @ (((unsigned) & AREG   )*8) + 3;                                                                        
extern volatile __bit   AREG4     @ (((unsigned) & AREG   )*8) + 4;                                                                        
extern volatile __bit   AREG5     @ (((unsigned) & AREG   )*8) + 5;                                                                        
extern volatile __bit   AREG6     @ (((unsigned) & AREG   )*8) + 6;                                                                        
extern volatile __bit   AREG7     @ (((unsigned) & AREG   )*8) + 7;

extern volatile __bit   FSR0L0    @ (((unsigned) & FSR0L   )*8) + 0;
extern volatile __bit   FSR0L1    @ (((unsigned) & FSR0L   )*8) + 1;                                                                        
extern volatile __bit   FSR0L2    @ (((unsigned) & FSR0L   )*8) + 2;                                                                        
extern volatile __bit   FSR0L3    @ (((unsigned) & FSR0L   )*8) + 3;                                                                        
extern volatile __bit   FSR0L4    @ (((unsigned) & FSR0L   )*8) + 4;                                                                        
extern volatile __bit   FSR0L5    @ (((unsigned) & FSR0L   )*8) + 5;                                                                        
extern volatile __bit   FSR0L6    @ (((unsigned) & FSR0L   )*8) + 6;                                                                        
extern volatile __bit   FSR0L7    @ (((unsigned) & FSR0L   )*8) + 7;
                                 
extern volatile __bit   FSR0H0    @ (((unsigned) & FSR0H )*8) + 0;
extern volatile __bit   FSR0H1    @ (((unsigned) & FSR0H )*8) + 1;                                                                        
extern volatile __bit   FSR0H2    @ (((unsigned) & FSR0H )*8) + 2;                                                                        
extern volatile __bit   FSR0H3    @ (((unsigned) & FSR0H )*8) + 3;                                                                        
extern volatile __bit   FSR0H4    @ (((unsigned) & FSR0H )*8) + 4;                                                                        
extern volatile __bit   FSR0H5    @ (((unsigned) & FSR0H )*8) + 5;                                                                        
extern volatile __bit   FSR0H6    @ (((unsigned) & FSR0H )*8) + 6;                                                                        
extern volatile __bit   FSR0H7    @ (((unsigned) & FSR0H )*8) + 7;

extern volatile __bit   PLUSW00   @ (((unsigned) & PLUSW0  )*8) + 0;
extern volatile __bit   PLUSW01   @ (((unsigned) & PLUSW0  )*8) + 1;                                                                        
extern volatile __bit   PLUSW02   @ (((unsigned) & PLUSW0  )*8) + 2;                                                                        
extern volatile __bit   PLUSW03   @ (((unsigned) & PLUSW0  )*8) + 3;                                                                        
extern volatile __bit   PLUSW04   @ (((unsigned) & PLUSW0  )*8) + 4;                                                                        
extern volatile __bit   PLUSW05   @ (((unsigned) & PLUSW0  )*8) + 5;                                                                        
extern volatile __bit   PLUSW06   @ (((unsigned) & PLUSW0  )*8) + 6;                                                                        
extern volatile __bit   PLUSW07   @ (((unsigned) & PLUSW0  )*8) + 7;

extern volatile __bit   PREINC00  @ (((unsigned) & PREINC0  )*8) + 0;
extern volatile __bit   PREINC01  @ (((unsigned) & PREINC0  )*8) + 1;                                                                        
extern volatile __bit   PREINC02  @ (((unsigned) & PREINC0  )*8) + 2;                                                                        
extern volatile __bit   PREINC03  @ (((unsigned) & PREINC0  )*8) + 3;                                                                        
extern volatile __bit   PREINC04  @ (((unsigned) & PREINC0  )*8) + 4;                                                                        
extern volatile __bit   PREINC05  @ (((unsigned) & PREINC0  )*8) + 5;                                                                        
extern volatile __bit   PREINC06  @ (((unsigned) & PREINC0  )*8) + 6;                                                                        
extern volatile __bit   PREINC07  @ (((unsigned) & PREINC0  )*8) + 7;

extern volatile __bit   POSTDEC00  @ (((unsigned) & POSTDEC0 )*8) + 0;
extern volatile __bit   POSTDEC01  @ (((unsigned) & POSTDEC0 )*8) + 1;                                                                        
extern volatile __bit   POSTDEC02  @ (((unsigned) & POSTDEC0 )*8) + 2;                                                                        
extern volatile __bit   POSTDEC03  @ (((unsigned) & POSTDEC0 )*8) + 3;                                                                        
extern volatile __bit   POSTDEC04  @ (((unsigned) & POSTDEC0 )*8) + 4;                                                                        
extern volatile __bit   POSTDEC05  @ (((unsigned) & POSTDEC0 )*8) + 5;                                                                        
extern volatile __bit   POSTDEC06  @ (((unsigned) & POSTDEC0 )*8) + 6;                                                                        
extern volatile __bit   POSTDEC07  @ (((unsigned) & POSTDEC0 )*8) + 7;

extern volatile __bit   POSTINC00  @ (((unsigned) & POSTINC0 )*8) + 0;
extern volatile __bit   POSTINC01  @ (((unsigned) & POSTINC0 )*8) + 1;                                                                        
extern volatile __bit   POSTINC02  @ (((unsigned) & POSTINC0 )*8) + 2;                                                                        
extern volatile __bit   POSTINC03  @ (((unsigned) & POSTINC0 )*8) + 3;                                                                        
extern volatile __bit   POSTINC04  @ (((unsigned) & POSTINC0 )*8) + 4;                                                                        
extern volatile __bit   POSTINC05  @ (((unsigned) & POSTINC0 )*8) + 5;                                                                        
extern volatile __bit   POSTINC06  @ (((unsigned) & POSTINC0 )*8) + 6;                                                                        
extern volatile __bit   POSTINC07  @ (((unsigned) & POSTINC0 )*8) + 7;

extern volatile __bit   INDF00     @ (((unsigned) & INDF0  )*8) + 0;
extern volatile __bit   INDF01     @ (((unsigned) & INDF0  )*8) + 1;                                                                        
extern volatile __bit   INDF02     @ (((unsigned) & INDF0  )*8) + 2;                                                                        
extern volatile __bit   INDF03     @ (((unsigned) & INDF0  )*8) + 3;                                                                        
extern volatile __bit   INDF04     @ (((unsigned) & INDF0  )*8) + 4;                                                                        
extern volatile __bit   INDF05     @ (((unsigned) & INDF0  )*8) + 5;                                                                        
extern volatile __bit   INDF06     @ (((unsigned) & INDF0  )*8) + 6;                                                                        
extern volatile __bit   INDF07     @ (((unsigned) & INDF0  )*8) + 7;

extern volatile __bit   EEWE       @ (((unsigned) & EECON2  )*8) + 0;
extern volatile __bit   EELOCK1    @ (((unsigned) & EECON2  )*8) + 1;                                                                        
extern volatile __bit   EELOCK2    @ (((unsigned) & EECON2  )*8) + 2;                                                                        
extern volatile __bit   EELOCK3    @ (((unsigned) & EECON2  )*8) + 3;                                                                                                                                               
extern volatile __bit   WERR       @ (((unsigned) & EECON2  )*8) + 7;

extern volatile __bit   WRITE      @ (((unsigned) &  EECON1  )*8) + 0;
extern volatile __bit   ERASE      @ (((unsigned) &  EECON1  )*8) + 1;                                                                        
extern volatile __bit   CLRPL      @ (((unsigned) &  EECON1  )*8) + 2;                                                                        
extern volatile __bit   PRGT0      @ (((unsigned) &  EECON1  )*8) + 3;                                                                        
extern volatile __bit   PRGT1      @ (((unsigned) &  EECON1  )*8) + 4;                                                                        
extern volatile __bit   PRGT2      @ (((unsigned) &  EECON1  )*8) + 5;                                                                        
extern volatile __bit   PRGT3      @ (((unsigned) &  EECON1  )*8) + 6;                                                                        
extern volatile __bit   PRGT4      @ (((unsigned) &  EECON1  )*8) + 7;

extern volatile __bit   MINT00     @ (((unsigned) & OPTION  )*8) + 0;
extern volatile __bit   MINT01     @ (((unsigned) & OPTION  )*8) + 1;                                                                        
extern volatile __bit   MINT10     @ (((unsigned) & OPTION  )*8) + 2;                                                                        
extern volatile __bit   MINT11     @ (((unsigned) & OPTION  )*8) + 3;                                                                                                                                              
extern volatile __bit   GIEL       @ (((unsigned) & OPTION  )*8) + 6;                                                                        
extern volatile __bit   GIEH       @ (((unsigned) & OPTION  )*8) + 7;

extern volatile __bit   PRODL0     @ (((unsigned) & PRODL  )*8) + 0;
extern volatile __bit   PRODL1     @ (((unsigned) & PRODL  )*8) + 1;                                                                        
extern volatile __bit   PRODL2     @ (((unsigned) & PRODL  )*8) + 2;                                                                        
extern volatile __bit   PRODL3     @ (((unsigned) & PRODL  )*8) + 3;                                                                        
extern volatile __bit   PRODL4     @ (((unsigned) & PRODL  )*8) + 4;                                                                        
extern volatile __bit   PRODL5     @ (((unsigned) & PRODL  )*8) + 5;                                                                        
extern volatile __bit   PRODL6     @ (((unsigned) & PRODL  )*8) + 6;                                                                        
extern volatile __bit   PRODL7     @ (((unsigned) & PRODL  )*8) + 7;

extern volatile __bit   PRODH0     @ (((unsigned) &  PRODH )*8) + 0;
extern volatile __bit   PRODH1     @ (((unsigned) &  PRODH )*8) + 1;                                                                        
extern volatile __bit   PRODH2     @ (((unsigned) &  PRODH )*8) + 2;                                                                        
extern volatile __bit   PRODH3     @ (((unsigned) &  PRODH )*8) + 3;                                                                        
extern volatile __bit   PRODH4     @ (((unsigned) &  PRODH )*8) + 4;                                                                        
extern volatile __bit   PRODH5     @ (((unsigned) &  PRODH )*8) + 5;                                                                        
extern volatile __bit   PRODH6     @ (((unsigned) &  PRODH )*8) + 6;                                                                        
extern volatile __bit   PRODH7     @ (((unsigned) &  PRODH )*8) + 7;

extern volatile __bit   TABLAT0    @ (((unsigned) & TABLAT )*8) + 0;
extern volatile __bit   TABLAT1    @ (((unsigned) & TABLAT )*8) + 1;                                                                        
extern volatile __bit   TABLAT2    @ (((unsigned) & TABLAT )*8) + 2;                                                                        
extern volatile __bit   TABLAT3    @ (((unsigned) & TABLAT )*8) + 3;                                                                        
extern volatile __bit   TABLAT4    @ (((unsigned) & TABLAT )*8) + 4;                                                                        
extern volatile __bit   TABLAT5    @ (((unsigned) & TABLAT )*8) + 5;                                                                        
extern volatile __bit   TABLAT6    @ (((unsigned) & TABLAT )*8) + 6;                                                                        
extern volatile __bit   TABLAT7    @ (((unsigned) & TABLAT )*8) + 7;

extern volatile __bit   TBLPTRL0   @ (((unsigned) & TBLPTRL  )*8) + 0;
extern volatile __bit   TBLPTRL1   @ (((unsigned) & TBLPTRL  )*8) + 1;                                                                        
extern volatile __bit   TBLPTRL2   @ (((unsigned) & TBLPTRL  )*8) + 2;                                                                        
extern volatile __bit   TBLPTRL3   @ (((unsigned) & TBLPTRL  )*8) + 3;                                                                        
extern volatile __bit   TBLPTRL4   @ (((unsigned) & TBLPTRL  )*8) + 4;                                                                        
extern volatile __bit   TBLPTRL5   @ (((unsigned) & TBLPTRL  )*8) + 5;                                                                        
extern volatile __bit   TBLPTRL6   @ (((unsigned) & TBLPTRL  )*8) + 6;                                                                        
extern volatile __bit   TBLPTRL7   @ (((unsigned) & TBLPTRL  )*8) + 7;

extern volatile __bit   TBLPTRH0   @ (((unsigned) &  TBLPTRH )*8) + 0;
extern volatile __bit   TBLPTRH1   @ (((unsigned) &  TBLPTRH )*8) + 1;                                                                        
extern volatile __bit   TBLPTRH2   @ (((unsigned) &  TBLPTRH )*8) + 2;                                                                        
extern volatile __bit   TBLPTRH3   @ (((unsigned) &  TBLPTRH )*8) + 3;                                                                        
extern volatile __bit   TBLPTRH4   @ (((unsigned) &  TBLPTRH )*8) + 4;                                                                        
extern volatile __bit   TBLPTRH5   @ (((unsigned) &  TBLPTRH )*8) + 5;                                                                        
extern volatile __bit   TBLPTRH6   @ (((unsigned) &  TBLPTRH )*8) + 6;                                                                        
extern volatile __bit   TBLPTRH7   @ (((unsigned) &  TBLPTRH )*8) + 7;

extern volatile __bit   TBLPTRU0   @ (((unsigned) &  TBLPTRU  )*8) + 0;
extern volatile __bit   TBLPTRU1   @ (((unsigned) &  TBLPTRU  )*8) + 1;                                                                        
extern volatile __bit   TBLPTRU2   @ (((unsigned) &  TBLPTRU  )*8) + 2;                                                                        
extern volatile __bit   TBLPTRU3   @ (((unsigned) &  TBLPTRU  )*8) + 3;                                                                        
extern volatile __bit   TBLPTRU4   @ (((unsigned) &  TBLPTRU  )*8) + 4;                                                                        
extern volatile __bit   TBLPTRU5   @ (((unsigned) &  TBLPTRU  )*8) + 5;                                                                        
extern volatile __bit   TBLPTRU6   @ (((unsigned) &  TBLPTRU  )*8) + 6;                                                                        
extern volatile __bit   TBLPTRU7   @ (((unsigned) &  TBLPTRU  )*8) + 7;

extern volatile __bit   PCL0       @ (((unsigned) & PCL    )*8) + 0;
extern volatile __bit   PCL1       @ (((unsigned) & PCL    )*8) + 1;                                                                        
extern volatile __bit   PCL2       @ (((unsigned) & PCL    )*8) + 2;                                                                        
extern volatile __bit   PCL3       @ (((unsigned) & PCL    )*8) + 3;                                                                        
extern volatile __bit   PCL4       @ (((unsigned) & PCL    )*8) + 4;                                                                        
extern volatile __bit   PCL5       @ (((unsigned) & PCL    )*8) + 5;                                                                        
extern volatile __bit   PCL6       @ (((unsigned) & PCL    )*8) + 6;                                                                        
extern volatile __bit   PCL7       @ (((unsigned) & PCL    )*8) + 7;

extern volatile __bit   PCLATH0    @ (((unsigned) & PCLATH   )*8) + 0;
extern volatile __bit   PCLATH1    @ (((unsigned) & PCLATH   )*8) + 1;                                                                        
extern volatile __bit   PCLATH2    @ (((unsigned) & PCLATH   )*8) + 2;                                                                        
extern volatile __bit   PCLATH3    @ (((unsigned) & PCLATH   )*8) + 3;                                                                        
extern volatile __bit   PCLATH4    @ (((unsigned) & PCLATH   )*8) + 4;                                                                        
extern volatile __bit   PCLATH5    @ (((unsigned) & PCLATH   )*8) + 5;                                                                        
extern volatile __bit   PCLATH6    @ (((unsigned) & PCLATH   )*8) + 6;                                                                        
extern volatile __bit   PCLATH7    @ (((unsigned) & PCLATH   )*8) + 7;

extern volatile __bit   PCLATU0    @ (((unsigned) & PCLATU  )*8) + 0;
extern volatile __bit   PCLATU1    @ (((unsigned) & PCLATU  )*8) + 1;                                                                        
extern volatile __bit   PCLATU2    @ (((unsigned) & PCLATU  )*8) + 2;                                                                        
extern volatile __bit   PCLATU3    @ (((unsigned) & PCLATU  )*8) + 3;                                                                        
extern volatile __bit   PCLATU4    @ (((unsigned) & PCLATU  )*8) + 4;                                                                        
extern volatile __bit   PCLATU5    @ (((unsigned) & PCLATU  )*8) + 5;                                                                        
extern volatile __bit   PCLATU6    @ (((unsigned) & PCLATU  )*8) + 6;                                                                        
extern volatile __bit   PCLATU7    @ (((unsigned) & PCLATU  )*8) + 7;

extern volatile __bit   STKPTR0    @ (((unsigned) &  STKPTR  )*8) + 0;
extern volatile __bit   STKPTR1    @ (((unsigned) &  STKPTR  )*8) + 1;                                                                        
extern volatile __bit   STKPTR2    @ (((unsigned) &  STKPTR  )*8) + 2;                                                                        
extern volatile __bit   STKPTR3    @ (((unsigned) &  STKPTR  )*8) + 3;                                                                        
extern volatile __bit   STKPTR4    @ (((unsigned) &  STKPTR  )*8) + 4;                                                                                                              
extern volatile __bit   STKDOV     @ (((unsigned) &  STKPTR  )*8) + 6;                                                                        
extern volatile __bit   STKUOV     @ (((unsigned) &  STKPTR  )*8) + 7;

extern volatile __bit   TOSL0      @ (((unsigned) & TOSL   )*8) + 0;
extern volatile __bit   TOSL1      @ (((unsigned) & TOSL   )*8) + 1;                                                                        
extern volatile __bit   TOSL2      @ (((unsigned) & TOSL   )*8) + 2;                                                                        
extern volatile __bit   TOSL3      @ (((unsigned) & TOSL   )*8) + 3;                                                                        
extern volatile __bit   TOSL4      @ (((unsigned) & TOSL   )*8) + 4;                                                                        
extern volatile __bit   TOSL5      @ (((unsigned) & TOSL   )*8) + 5;                                                                        
extern volatile __bit   TOSL6      @ (((unsigned) & TOSL   )*8) + 6;                                                                        
extern volatile __bit   TOSL7      @ (((unsigned) & TOSL   )*8) + 7;

extern volatile __bit   TOSH0      @ (((unsigned) & TOSH    )*8) + 0;
extern volatile __bit   TOSH1      @ (((unsigned) & TOSH    )*8) + 1;                                                                        
extern volatile __bit   TOSH2      @ (((unsigned) & TOSH    )*8) + 2;                                                                        
extern volatile __bit   TOSH3      @ (((unsigned) & TOSH    )*8) + 3;                                                                        
extern volatile __bit   TOSH4      @ (((unsigned) & TOSH    )*8) + 4;                                                                        
extern volatile __bit   TOSH5      @ (((unsigned) & TOSH    )*8) + 5;                                                                        
extern volatile __bit   TOSH6      @ (((unsigned) & TOSH    )*8) + 6;                                                                        
extern volatile __bit   TOSH7      @ (((unsigned) & TOSH    )*8) + 7;

extern volatile __bit  TOSU0       @ (((unsigned) &  TOSU   )*8) + 0;
extern volatile __bit  TOSU1       @ (((unsigned) &  TOSU   )*8) + 1;                                                                        
extern volatile __bit  TOSU2       @ (((unsigned) &  TOSU   )*8) + 2;                                                                        
extern volatile __bit  TOSU3       @ (((unsigned) &  TOSU   )*8) + 3;                                                                        
extern volatile __bit  TOSU4       @ (((unsigned) &  TOSU   )*8) + 4;                                                                        
extern volatile __bit  TOSU5       @ (((unsigned) &  TOSU   )*8) + 5;                                                                        
extern volatile __bit  TOSU6       @ (((unsigned) &  TOSU   )*8) + 6;                                                                        
extern volatile __bit  TOSU7       @ (((unsigned) &  TOSU   )*8) + 7;

#endif 
