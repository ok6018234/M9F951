#ifndef __M8P8801_H__
#define __M8P8801_H__

//
// Register addresses.
//
#define LCDCR0_ADDR         0x0198
#define LCDCR1_ADDR         0x0199
#define LCDCR2_ADDR         0x019A
#define LCDCR3_ADDR         0x019B
#define PUA_ADDR            0x019C
#define PUB_ADDR            0x019D
#define PUC_ADDR            0x019E
#define PUE_ADDR            0x019F
#define CMPC0_ADDR          0x01A0
#define CMPC1_ADDR          0x01A1
#define CMPC2_ADDR          0x01A2
#define WAVEDS_ADDR         0x01A3
#define SEGIOS2_ADDR        0x01A5
#define SEGIOS1_ADDR        0x01A6
#define SEGIOS0_ADDR        0x01A7
#define OPA0C0_ADDR         0x01A8
#define OPA0C1_ADDR         0x01A9
#define OPA0C2_ADDR         0x01AA
#define OPA0C3_ADDR         0x01AB
#define OPA1C0_ADDR         0x01AC
#define OPA1C1_ADDR         0x01AD
#define OPA1C2_ADDR         0x01AE
#define OPA1C3_ADDR         0x01AF
#define INDF0_ADDR          0x01B0
#define FSR0_ADDR           0x01B1
#define TXCR_ADDR         	0x01B2
#define TXREG_ADDR          0x01B3
#define RXCR_ADDR        	0x01B4
#define RXREG_ADDR          0x01B5
#define BRGDH_ADDR          0x01B6
#define BRGDL_ADDR          0x01B7
#define INDF1_ADDR          0x01B8
#define FSR1_ADDR           0x01B9
#define PCL_ADDR            0x01BA
#define STATUS_ADDR         0x01BB
#define OPTION_ADDR         0x01BC
#define OSCM_ADDR           0x01BD
#define WDTC_ADDR      	    0x01BE
#define RFCCR_ADDR      	0x01BF
#define INDF2_ADDR          0x01C0
#define HBUF_ADDR           0x01C1
#define INTCR2_ADDR         0x01C2
#define INTF2_ADDR          0x01C3
#define INTCR0_ADDR         0x01C4
#define INTF0_ADDR          0x01C5
#define INTCR1_ADDR         0x01C6
#define INTF1_ADDR          0x01C7
#define IOA_ADDR            0x01C8
#define OEA_ADDR            0x01C9
#define IOB_ADDR            0x01CA
#define OEB_ADDR            0x01CB
#define IOC_ADDR            0x01CC
#define OEC_ADDR            0x01CD
#define IOD_ADDR            0x01CE
#define OED_ADDR            0x01CF
#define IOE_ADDR            0x01D0
#define OEE_ADDR            0x01D1
#define PWM3D_ADDR          0x01D2
#define LWPR_ADDR           0x01D3
#define HWPR_ADDR           0x01D4
#define TC3C_ADDR           0x01D5
#define T3CR_ADDR           0x01D6
#define TC3PR_ADDR          0x01D7
#define PWM0CR_ADDR         0x01D8
#define PWM0D_ADDR          0x01D9 
#define PWM1CR_ADDR         0x01DA
#define PWM1D_ADDR          0x01DB 
#define PWM2CR_ADDR         0x01DC
#define PWM2D_ADDR          0x01DD 
#define T2CR_ADDR           0x01DE
#define T2GCR_ADDR          0x01DF
#define ANSCR_ADDR          0x01E0
#define IOAICR_ADDR         0x01E1
#define IOBICR_ADDR         0x01E2
#define IOCICR_ADDR         0x01E3
#define IOEICR_ADDR         0x01E4
#define IODSCR0_ADDR        0x01E5
#define IODSCR1_ADDR        0x01E6
#define IOICR_ADDR          0x01E7
#define T0CR_ADDR           0x01E8
#define TC0CL_ADDR          0x01E9
#define TC0CH_ADDR          0x01EA
#define T1CR_ADDR           0x01EB
#define TC1CL_ADDR          0x01EC
#define TC1CH_ADDR          0x01ED
#define TC2CL_ADDR          0x01EE
#define TC2CH_ADDR          0x01EF
#define I2CADDR_ADDR        0x01F0
#define I2CCON_ADDR         0x01F1
#define I2CBUF_ADDR         0x01F2
#define EECON1_ADDR			0x01F3
#define EECON2_ADDR			0x01F4
#define IRCCAL_ADDR         0x01F8
#define CALLOCK_ADDR        0x01F9


#define LCDDS00_ADDR         0x0170
#define LCDDS01_ADDR         0x0171
#define LCDDS02_ADDR         0x0172
#define LCDDS03_ADDR         0x0173
#define LCDDS04_ADDR         0x0174
#define LCDDS05_ADDR         0x0175
#define LCDDS06_ADDR         0x0176
#define LCDDS07_ADDR         0x0177
#define LCDDS08_ADDR         0x0178
#define LCDDS09_ADDR         0x0179
#define LCDDS10_ADDR         0x017A
#define LCDDS11_ADDR         0x017B
#define LCDDS12_ADDR         0x017C
#define LCDDS13_ADDR         0x017D
#define LCDDS14_ADDR         0x017E
#define LCDDS15_ADDR         0x017F
#define LCDDS16_ADDR         0x0180
#define LCDDS17_ADDR         0x0181
#define LCDDS18_ADDR         0x0182
#define LCDDS19_ADDR         0x0183
#define LCDDS20_ADDR         0x0184
#define LCDDS21_ADDR         0x0185
#define LCDDS22_ADDR         0x0186
#define LCDDS23_ADDR         0x0187
#define LCDDS24_ADDR         0x0188
#define LCDDS25_ADDR         0x0189
#define LCDDS26_ADDR         0x018A
#define LCDDS27_ADDR         0x018B
#define LCDDS28_ADDR         0x018C
#define LCDDS29_ADDR         0x018D
#define LCDDS30_ADDR         0x018E
#define LCDDS31_ADDR         0x018F
#define LCDDS32_ADDR         0x0190
#define LCDDS33_ADDR         0x0191
#define LCDDS34_ADDR         0x0192
#define LCDDS35_ADDR         0x0193
#define LCDDS36_ADDR         0x0194





//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (LCDCR0_ADDR)        LCDCR0;
extern __sfr __at (LCDCR1_ADDR)        LCDCR1;
extern __sfr __at (LCDCR2_ADDR)        LCDCR2;
extern __sfr __at (LCDCR3_ADDR)        LCDCR3;
extern __sfr __at (PUA_ADDR)           PUA;
extern __sfr __at (PUB_ADDR)           PUB;
extern __sfr __at (PUC_ADDR)           PUC;
extern __sfr __at (PUE_ADDR)           PUE;
extern __sfr __at (CMPC0_ADDR)         CMPC0;
extern __sfr __at (CMPC1_ADDR)         CMPC1;
extern __sfr __at (CMPC2_ADDR)         CMPC2;
extern __sfr __at (WAVEDS_ADDR)        WAVEDS;
extern __sfr __at (SEGIOS2_ADDR)       SEGIOS2;
extern __sfr __at (SEGIOS1_ADDR)       SEGIOS1;
extern __sfr __at (SEGIOS0_ADDR)       SEGIOS0;
extern __sfr __at (OPA0C0_ADDR)        OPA0C0;
extern __sfr __at (OPA0C1_ADDR)        OPA0C1;
extern __sfr __at (OPA0C2_ADDR)        OPA0C2;
extern __sfr __at (OPA0C3_ADDR)        OPA0C3;
extern __sfr __at (OPA1C0_ADDR)        OPA1C0;
extern __sfr __at (OPA1C1_ADDR)        OPA1C1;
extern __sfr __at (OPA1C2_ADDR)        OPA1C2;
extern __sfr __at (OPA1C3_ADDR)        OPA1C3;
extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (TXCR_ADDR)          TXCR;
extern __sfr __at (TXREG_ADDR)         TXREG;
extern __sfr __at (RXCR_ADDR)          RXCR;
extern __sfr __at (RXREG_ADDR)         RXREG;
extern __sfr __at (BRGDH_ADDR)         BRGDH;
extern __sfr __at (BRGDL_ADDR)         BRGDL;
extern __sfr __at (INDF1_ADDR)         INDF1;
extern __sfr __at (FSR1_ADDR)          FSR1;
extern __sfr __at (PCL_ADDR)           PCL;
extern __sfr __at (STATUS_ADDR)        STATUS;
extern __sfr __at (OPTION_ADDR)        OPTION;
extern __sfr __at (OSCM_ADDR)          OSCM;
extern __sfr __at (WDTC_ADDR)      	   WDTC;
extern __sfr __at (RFCCR_ADDR)         RFCCR;
extern __sfr __at (INDF2_ADDR)         INDF2;
extern __sfr __at (HBUF_ADDR)          HBUF;
extern __sfr __at (INTCR2_ADDR)        INTCR2;
extern __sfr __at (INTF2_ADDR)         INTF2;
extern __sfr __at (INTCR0_ADDR)        INTCR0;
extern __sfr __at (INTF0_ADDR)         INTF0;
extern __sfr __at (INTCR1_ADDR)        INTCR1;
extern __sfr __at (INTF1_ADDR)         INTF1;
extern __sfr __at (IOA_ADDR)           IOA;
extern __sfr __at (OEA_ADDR)           OEA;
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (IOC_ADDR)           IOC;
extern __sfr __at (OEC_ADDR)           OEC;
extern __sfr __at (IOD_ADDR)           IOD;
extern __sfr __at (OED_ADDR)           OED;
extern __sfr __at (IOE_ADDR)           IOE;
extern __sfr __at (OEE_ADDR)           OEE;
extern __sfr __at (PWM3D_ADDR)         PWM3D;
extern __sfr __at (LWPR_ADDR)          LWPR;
extern __sfr __at (HWPR_ADDR)          HWPR;
extern __sfr __at (TC3C_ADDR)          TC3C;
extern __sfr __at (T3CR_ADDR)          T3CR;
extern __sfr __at (TC3PR_ADDR)         TC3PR;
extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0D_ADDR)         PWM0D; 
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1D_ADDR)         PWM1D; 
extern __sfr __at (PWM2CR_ADDR)        PWM2CR;
extern __sfr __at (PWM2D_ADDR)         PWM2D;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (T2GCR_ADDR)         T2GCR;
extern __sfr __at (ANSCR_ADDR)         ANSCR;
extern __sfr __at (IOAICR_ADDR)        IOAICR;
extern __sfr __at (IOBICR_ADDR)        IOBICR;
extern __sfr __at (IOCICR_ADDR)        IOCICR;
extern __sfr __at (IOEICR_ADDR)        IOEICR;
extern __sfr __at (IODSCR0_ADDR)       IODSCR0;
extern __sfr __at (IODSCR1_ADDR)       IODSCR1;
extern __sfr __at (IOICR_ADDR)         IOICR;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (TC2CL_ADDR)         TC2CL;
extern __sfr __at (TC2CH_ADDR)         TC2CH;
extern __sfr __at (I2CADDR_ADDR)       I2CADDR;
extern __sfr __at (I2CCON_ADDR)        I2CCON;
extern __sfr __at (I2CBUF_ADDR)        I2CBUF;
extern __sfr __at (EECON1_ADDR)        EECON1;
extern __sfr __at (EECON2_ADDR)        EECON2;
extern __sfr __at (IRCCAL_ADDR)        IRCCAL;
extern __sfr __at (CALLOCK_ADDR)       CALLOCK;


extern __sfr __at (LCDDS00_ADDR)        LCDDS00;
extern __sfr __at (LCDDS01_ADDR)        LCDDS01;
extern __sfr __at (LCDDS02_ADDR)        LCDDS02;
extern __sfr __at (LCDDS03_ADDR)        LCDDS03;
extern __sfr __at (LCDDS04_ADDR)        LCDDS04;
extern __sfr __at (LCDDS05_ADDR)        LCDDS05;
extern __sfr __at (LCDDS06_ADDR)        LCDDS06;
extern __sfr __at (LCDDS07_ADDR)        LCDDS07;
extern __sfr __at (LCDDS08_ADDR)        LCDDS08;
extern __sfr __at (LCDDS09_ADDR)        LCDDS09;
extern __sfr __at (LCDDS10_ADDR)        LCDDS10;
extern __sfr __at (LCDDS11_ADDR)        LCDDS11;
extern __sfr __at (LCDDS12_ADDR)        LCDDS12;
extern __sfr __at (LCDDS13_ADDR)        LCDDS13;
extern __sfr __at (LCDDS14_ADDR)        LCDDS14;
extern __sfr __at (LCDDS15_ADDR)        LCDDS15;
extern __sfr __at (LCDDS16_ADDR)        LCDDS16;
extern __sfr __at (LCDDS17_ADDR)        LCDDS17;
extern __sfr __at (LCDDS18_ADDR)        LCDDS18;
extern __sfr __at (LCDDS19_ADDR)        LCDDS19;
extern __sfr __at (LCDDS20_ADDR)        LCDDS20;
extern __sfr __at (LCDDS21_ADDR)        LCDDS21;
extern __sfr __at (LCDDS22_ADDR)        LCDDS22;
extern __sfr __at (LCDDS23_ADDR)        LCDDS23;
extern __sfr __at (LCDDS24_ADDR)        LCDDS24;
extern __sfr __at (LCDDS25_ADDR)        LCDDS25;
extern __sfr __at (LCDDS26_ADDR)        LCDDS26;
extern __sfr __at (LCDDS27_ADDR)        LCDDS27;
extern __sfr __at (LCDDS28_ADDR)        LCDDS28;
extern __sfr __at (LCDDS29_ADDR)        LCDDS29;
extern __sfr __at (LCDDS30_ADDR)        LCDDS30;
extern __sfr __at (LCDDS31_ADDR)        LCDDS31;
extern __sfr __at (LCDDS32_ADDR)        LCDDS32;
extern __sfr __at (LCDDS33_ADDR)        LCDDS33;
extern __sfr __at (LCDDS34_ADDR)        LCDDS34;
extern __sfr __at (LCDDS35_ADDR)        LCDDS35;
extern __sfr __at (LCDDS36_ADDR)        LCDDS36;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================

// ----- LCDCR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char BIAS0 : 1;
		unsigned char BIAS1 : 1;
		unsigned char LCDM : 1;
		unsigned char LCDEN : 1;
	};
} __LCDCR0bits_t;
extern volatile __LCDCR0bits_t __at(LCDCR0_ADDR) LCDCR0bits;

#define BIAS0                 LCDCR0bits.BIAS0              /* bit 4 */
#define BIAS1                 LCDCR0bits.BIAS1              /* bit 5 */
#define LCDM                  LCDCR0bits.LCDM               /* bit 6 */
#define LCDEN                 LCDCR0bits.LCDEN              /* bit 7 */

// ----- LCDCR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CIOS0 : 1;
		unsigned char CIOS1 : 1;
		unsigned char CIOS2 : 1;
		unsigned char LCDCKS : 1;
		unsigned char LCDFR0 : 1;
		unsigned char LCDFR1 : 1;
		unsigned char LCDFR2 : 1;
		unsigned char LCDFR3 : 1;
	};
} __LCDCR1bits_t;
extern volatile __LCDCR1bits_t __at(LCDCR1_ADDR) LCDCR1bits;

#define CIOS0                LCDCR1bits.CIOS0              /* bit 0 */
#define CIOS1                LCDCR1bits.CIOS1              /* bit 1 */
#define CIOS2                LCDCR1bits.CIOS2              /* bit 2 */
#define LCDCKS               LCDCR1bits.LCDCKS              /* bit 3 */
#define LCDFR0               LCDCR1bits.LCDFR0              /* bit 4 */
#define LCDFR1               LCDCR1bits.LCDFR1              /* bit 5 */
#define LCDFR2               LCDCR1bits.LCDFR2              /* bit 5 */
#define LCDFR3               LCDCR1bits.LCDFR3              /* bit 5 */

// ----- LCDCR2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLDOS0 : 1;
		unsigned char VLDOS1 : 1;
		unsigned char VLDOS2 : 1;
		unsigned char : 1;
		unsigned char LDOEN : 1;
		unsigned char VLCDS : 1;
		unsigned char PUMPEN : 1;
		unsigned char OVLAPEN : 1;
	};
} __LCDCR2bits_t;
extern volatile __LCDCR2bits_t __at(LCDCR2_ADDR) LCDCR2bits;

#define VLDOS0               LCDCR2bits.VLDOS0              /* bit 0 */
#define VLDOS1               LCDCR2bits.VLDOS1              /* bit 1 */
#define VLDOS2               LCDCR2bits.VLDOS2              /* bit 2 */
#define LDOEN                LCDCR2bits.LDOEN               /* bit 4 */
#define VLCDS                LCDCR2bits.VLCDS               /* bit 5 */
#define PUMPEN               LCDCR2bits.PUMPEN              /* bit 6 */
#define OVLAPEN              LCDCR2bits.OVLAPEN             /* bit 7 */

// ----- LCDCR3 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRIGHT0 : 1;
		unsigned char BRIGHT1 : 1;
		unsigned char BRIGHT2 : 1;
		unsigned char BRIGHT3 : 1;
		unsigned char BRIGHT4 : 1;
		unsigned char : 1;
		unsigned char LEDPOL : 1;
		unsigned char LEDEN : 1;
	};
} __LCDCR3bits_t;
extern volatile __LCDCR3bits_t __at(LCDCR3_ADDR) LCDCR3bits;

#define BRIGHT0               LCDCR3bits.BRIGHT0              /* bit 0 */
#define BRIGHT1               LCDCR3bits.BRIGHT1              /* bit 1 */
#define BRIGHT2               LCDCR3bits.BRIGHT2              /* bit 2 */
#define BRIGHT3               LCDCR3bits.BRIGHT3              /* bit 3 */
#define BRIGHT4               LCDCR3bits.BRIGHT4              /* bit 4 */
#define LEDPOL                LCDCR3bits.LEDPOL               /* bit 6 */
#define LEDEN                 LCDCR3bits.LEDEN                /* bit 7 */

// ----- PUA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUA0:1;
		unsigned char PUA1:1;
		unsigned char PUA2:1;
		unsigned char PUA3:1;
		unsigned char PUA4:1;
		unsigned char PUA5:1;
		unsigned char PUA6:1;
		unsigned char :1;
	};
} __PUAbits_t;
extern volatile __PUAbits_t __at(PUA_ADDR) PUAbits;

#define PUA0            PUAbits.PUA0              /* bit 0 */
#define PUA1            PUAbits.PUA1              /* bit 1 */
#define PUA2            PUAbits.PUA2              /* bit 2 */
#define PUA3            PUAbits.PUA3              /* bit 3 */
#define PUA4            PUAbits.PUA4              /* bit 4 */
#define PUA5            PUAbits.PUA5              /* bit 5 */
#define PUA6            PUAbits.PUA6              /* bit 6 */
//#define PUA7            PUAbits.PUA7      	      /* bit 7 */

// ----- PUB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PUB4:1;
		unsigned char PUB5:1;
		unsigned char PUB6:1;
		unsigned char PUB7:1;
	};
} __PUBbits_t;
extern volatile __PUBbits_t __at(PUB_ADDR) PUBbits;

#define PUB4            PUBbits.PUB4              /* bit 4 */
#define PUB5            PUBbits.PUB5              /* bit 5 */
#define PUB6            PUBbits.PUB6              /* bit 6 */
#define PUB7            PUBbits.PUB7      	      /* bit 7 */

// ----- PUC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUC0:1;
		unsigned char PUC1:1;
		unsigned char PUC2:1;
		unsigned char PUC3:1;
		unsigned char PUC4:1;
		unsigned char PUC5:1;
		unsigned char PUC6:1;
		unsigned char PUC7:1;
	};
} __PUCbits_t;
extern volatile __PUCbits_t __at(PUC_ADDR) PUCbits;

#define PUC0            PUCbits.PUC0              /* bit 0 */
#define PUC1            PUCbits.PUC1              /* bit 1 */
#define PUC2            PUCbits.PUC2              /* bit 2 */
#define PUC3            PUCbits.PUC3              /* bit 3 */
#define PUC4            PUCbits.PUC4              /* bit 4 */
#define PUC5            PUCbits.PUC5              /* bit 5 */
#define PUC6            PUCbits.PUC6              /* bit 6 */
#define PUC7            PUCbits.PUC7      	      /* bit 7 */

// ----- PUE Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUE0:1;
		unsigned char PUE1:1;
		unsigned char PUE2:1;
		unsigned char PUE3:1;
		unsigned char PUE4:1;
		unsigned char :1;
		unsigned char PUCR0:1;
		unsigned char PUCR1:1;
	};
} __PUEbits_t;
extern volatile __PUEbits_t __at(PUE_ADDR) PUEbits;

#define PUE0            PUEbits.PUE0              /* bit 0 */
#define PUE1            PUEbits.PUE1              /* bit 1 */
#define PUE2            PUEbits.PUE2              /* bit 2 */
#define PUE3            PUEbits.PUE3              /* bit 3 */
#define PUE4            PUEbits.PUE4              /* bit 4 */
#define PUCR0           PUEbits.PUCR0              /* bit 6 */
#define PUCR1           PUEbits.PUCR1      	      /* bit 7 */

// ----- CMPC0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPPS0 : 1;
		unsigned char CMPPS1 : 1;
		unsigned char CMPNS0 : 1;
		unsigned char CMPNS1 : 1;
		unsigned char CINTS0 : 1;
		unsigned char CINTS1 : 1;
		unsigned char CMPOUT : 1;
		unsigned char CMPEN : 1;
	};
} __CMPC0bits_t;
extern volatile __CMPC0bits_t __at(CMPC0_ADDR) CMPC0bits;

#define CMPPS0               CMPC0bits.CMPPS0              /* bit 0 */
#define CMPPS1               CMPC0bits.CMPPS1              /* bit 1 */
#define CMPNS0               CMPC0bits.CMPNS0              /* bit 2 */
#define CMPNS1               CMPC0bits.CMPNS1              /* bit 3 */
#define CINTS0               CMPC0bits.CINTS0              /* bit 4 */
#define CINTS1               CMPC0bits.CINTS1              /* bit 3 */
#define CMPOUT               CMPC0bits.CMPOUT              /* bit 4 */
#define CMPEN                CMPC0bits.CMPEN               /* bit 7 */

// ----- CMPC1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPVLD0 : 1;
		unsigned char CMPVLD1 : 1;
		unsigned char CMPVLD2 : 1;
		unsigned char CMPVLD3 : 1;
		unsigned char CMPVLD4 : 1;
		unsigned char  : 1;
		unsigned char CMPVRC : 1;
		unsigned char  : 1;
	};
} __CMPC1bits_t;
extern volatile __CMPC1bits_t __at(CMPC1_ADDR) CMPC1bits;

#define CMPOF0               CMPC1bits.CMPOF0              /* bit 0 */
#define CMPOF1               CMPC1bits.CMPOF1              /* bit 1 */
#define CMPOF2               CMPC1bits.CMPOF2              /* bit 2 */
#define CMPOF3               CMPC1bits.CMPOF3              /* bit 3 */
#define CMPVLD4              CMPC1bits.CMPVLD4             /* bit 4 */
#define CPVRC                CMPC1bits.CPVRC               /* bit 6 */

// ----- CMPC2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char DEB0 : 1;
		unsigned char DEB1 : 1;
		unsigned char DEB2 : 1;
		unsigned char VMIDIS0 : 1;
		unsigned char VMIDIS1 : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
	};
} __CMPC2bits_t;
extern volatile __CMPC2bits_t __at(CMPC2_ADDR) CMPC2bits;

#define DEB0                  CMPC2bits.DEB0              /* bit 0 */
#define DEB1                  CMPC2bits.DEB1              /* bit 1 */
#define DEB2                  CMPC2bits.DEB2              /* bit 2 */
#define VMIDIS0               CMPC2bits.VMIDIS0           /* bit 3 */
#define VMIDIS1               CMPC2bits.VMIDIS1           /* bit 4 */
//#define VMIDFEN               CMPC2bits.VMIDFEN           /* bit 5 */

// ----- WAVEDS Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char LWDS0:1;
		unsigned char LWDS1:1;
		unsigned char LWDS2:1;	
		unsigned char LWDS3:1;	
		unsigned char HWDS0:1;
		unsigned char HWDS1:1;
		unsigned char HWDS2:1;
		unsigned char HWDS3:1;	
	};
} __WAVEDSbits_t;
extern volatile __WAVEDSbits_t __at(WAVEDS_ADDR) WAVEDSbits;

#define LWDS0          WAVEDSbits.LWDS0            /* bit 0 */
#define LWDS1          WAVEDSbits.LWDS1            /* bit 1 */
#define LWDS2          WAVEDSbits.LWDS2            /* bit 2 */
#define LWDS3          WAVEDSbits.LWDS3            /* bit 3 */
#define HWDS0          WAVEDSbits.HWDS0            /* bit 4 */
#define HWDS1          WAVEDSbits.HWDS1            /* bit 5 */
#define HWDS2          WAVEDSbits.HWDS2            /* bit 6 */
#define HWDS3          WAVEDSbits.HWDS3            /* bit 7 */

// ----- SEGIOS0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOS00:1;
		unsigned char SEGIOS01:1;
		unsigned char SEGIOS02:1;	
		unsigned char SEGIOS03:1;	
		unsigned char SEGIOS04:1;
		unsigned char SEGIOS05:1;
		unsigned char SEGIOS06:1;
		unsigned char SEGIOS07:1;	
	};
} __SEGIOS0bits_t;
extern volatile __SEGIOS0bits_t __at(SEGIOS0_ADDR) SEGIOS0bits;

#define SEGIOS00          SEGIOS0bits.SEGIOS00            /* bit 0 */
#define SEGIOS01          SEGIOS0bits.SEGIOS01            /* bit 1 */
#define SEGIOS02          SEGIOS0bits.SEGIOS02            /* bit 2 */
#define SEGIOS03          SEGIOS0bits.SEGIOS03            /* bit 3 */
#define SEGIOS04          SEGIOS0bits.SEGIOS04            /* bit 4 */
#define SEGIOS05          SEGIOS0bits.SEGIOS05            /* bit 5 */
#define SEGIOS06          SEGIOS0bits.SEGIOS06            /* bit 6 */
#define SEGIOS07          SEGIOS0bits.SEGIOS07            /* bit 7 */


// ----- SEGIOS1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOS08:1;
		unsigned char SEGIOS09:1;
		unsigned char SEGIOS10:1;	
		unsigned char SEGIOS11:1;	
		unsigned char SEGIOS12:1;
		unsigned char SEGIOS13:1;
		unsigned char SEGIOS14:1;
		unsigned char SEGIOS15:1;	
	};
} __SEGIOS1bits_t;
extern volatile __SEGIOS1bits_t __at(SEGIOS1_ADDR) SEGIOS1bits;

#define SEGIOS08          SEGIOS1bits.SEGIOS08            /* bit 0 */
#define SEGIOS09          SEGIOS1bits.SEGIOS09            /* bit 1 */
#define SEGIOS10          SEGIOS1bits.SEGIOS10           /* bit 2 */
#define SEGIOS11          SEGIOS1bits.SEGIOS11            /* bit 3 */
#define SEGIOS12          SEGIOS1bits.SEGIOS12            /* bit 4 */
#define SEGIOS13          SEGIOS1bits.SEGIOS13           /* bit 5 */
#define SEGIOS14          SEGIOS1bits.SEGIOS14           /* bit 6 */
#define SEGIOS15          SEGIOS1bits.SEGIOS15           /* bit 7 */

// ----- SEGIOS2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOS16:1;
		unsigned char SEGIOS17:1;
		unsigned char SEGIOS18:1;	
		unsigned char SEGIOS19:1;	
		unsigned char SEGIOS20:1;
		unsigned char SEGIOS21:1;
        unsigned char :1;
		unsigned char :1;	
	};
} __SEGIOS2bits_t;
extern volatile __SEGIOS2bits_t __at(SEGIOS2_ADDR) SEGIOS2bits;

#define SEGIOS16          SEGIOS2bits.SEGIOS16            /* bit 0 */
#define SEGIOS17          SEGIOS2bits.SEGIOS17            /* bit 1 */
#define SEGIOS18          SEGIOS2bits.SEGIOS18            /* bit 2 */
#define SEGIOS19          SEGIOS2bits.SEGIOS19            /* bit 3 */
#define SEGIOS20          SEGIOS2bits.SEGIOS20            /* bit 4 */
#define SEGIOS21          SEGIOS2bits.SEGIOS21            /* bit 5 */


// ----- OPA0C0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA0PS0:1;
		unsigned char OPA0PS1:1;	
		unsigned char OPA0PS2:1;	
		unsigned char OPA0NS0:1;
		unsigned char OPA0NS1:1;	
		unsigned char OPA0NS2:1;	
		unsigned char OPA0O:1;
		unsigned char OPA0EN:1;	
	};
} __OPA0C0bits_t;
extern volatile __OPA0C0bits_t __at(OPA0C0_ADDR) OPA0C0bits;

#define OPA0PS0         OPA0C0bits.OPA0PS0   	      /* bit 0 */
#define OPA0PS1         OPA0C0bits.OPA0PS1   	      /* bit 1 */
#define OPA0PS2         OPA0C0bits.OPA0PS2   	      /* bit 2 */
#define OPA0NS0         OPA0C0bits.OPA0NS0     	      /* bit 3 */
#define OPA0NS1         OPA0C0bits.OPA0NS1     	      /* bit 4 */
#define OPA0NS2         OPA0C0bits.OPA0NS2     	      /* bit 5 */
#define OPA0O           OPA0C0bits.OPA0O              /* bit 6 */
#define OPA0EN          OPA0C0bits.OPA0EN             /* bit 7 */

// ----- OPA0C1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA0OF0:1;
		unsigned char OPA0OF1:1;	
		unsigned char OPA0OF2:1;	
		unsigned char OPA0OF3:1;
		unsigned char OPA0OF4:1;	
		unsigned char OPA0OFM:1;	
		unsigned char OPA0VRC:1;
		unsigned char A0ENLO:1;	
	};
} __OPA0C1bits_t;
extern volatile __OPA0C1bits_t __at(OPA0C1_ADDR) OPA0C1bits;

#define OPA0OF0         OPA0C1bits.OPA0OF0   	      /* bit 0 */
#define OPA0OF1         OPA0C1bits.OPA0OF1   	      /* bit 1 */
#define OPA0OF2         OPA0C1bits.OPA0OF2   	      /* bit 2 */
#define OPA0OF3         OPA0C1bits.OPA0OF3     	      /* bit 3 */
#define OPA0OF4         OPA0C1bits.OPA0OF4     	      /* bit 4 */
#define OPA0OFM         OPA0C1bits.OPA0OFM     	      /* bit 5 */
#define OPA0VRC         OPA0C1bits.OPA0VRC            /* bit 6 */
#define A0ENLO          OPA0C1bits.A0ENLO             /* bit 7 */

// ----- OPA0C2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA0R2S0:1;
		unsigned char OPA0R2S1:1;	
		unsigned char OPA0R1S:1;	
		unsigned char :1;
		unsigned char OPA0IS0:1;	
		unsigned char OPA0IS1:1;	
		unsigned char :1;
		unsigned char :1;	
	};
} __OPA0C2bits_t;
extern volatile __OPA0C2bits_t __at(OPA0C2_ADDR) OPA0C2bits;

#define OPA0R2S0         OPA0C2bits.OPA0R2S0   	          /* bit 0 */
#define OPA0R2S1         OPA0C2bits.OPA0R2S1   	          /* bit 1 */
#define OPA0R1S          OPA0C2bits.OPA0R1S   	          /* bit 2 */
#define OPA0IS0          OPA0C2bits.OPA0IS0     	      /* bit 4 */
#define OPA0IS1          OPA0C2bits.OPA0IS1     	      /* bit 5 */

// ----- OPA0C3 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A0SW0:1;
		unsigned char A0SW1:1;	
		unsigned char A0SW2:1;	
		unsigned char A0SW3:1;
		unsigned char A0SW4:1;	
		unsigned char A0SW5:1;	
		unsigned char A0SW6:1;
		unsigned char :1;	
	};
} __OPA0C3bits_t;
extern volatile __OPA0C3bits_t __at(OPA0C3_ADDR) OPA0C3bits;

#define A0SW0         OPA0C3bits.A0SW0   	      /* bit 0 */
#define A0SW1         OPA0C3bits.A0SW1   	      /* bit 1 */
#define A0SW2         OPA0C3bits.A0SW2   	      /* bit 2 */
#define A0SW3         OPA0C3bits.A0SW3     	      /* bit 3 */
#define A0SW4         OPA0C3bits.A0SW4     	      /* bit 4 */
#define A0SW5         OPA0C3bits.A0SW5     	      /* bit 5 */
#define A0SW6         OPA0C3bits.A0SW6            /* bit 6 */

// ----- OPA1C0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA1PS0:1;
		unsigned char OPA1PS1:1;	
		unsigned char OPA1PS2:1;	
		unsigned char OPA1NS0:1;
		unsigned char OPA1NS1:1;	
		unsigned char OPA1NS2:1;	
		unsigned char OPA1O:1;
		unsigned char OPA1EN:1;	
	};
} __OPA1C0bits_t;
extern volatile __OPA1C0bits_t __at(OPA1C0_ADDR) OPA1C0bits;

#define OPA1PS0         OPA1C0bits.OPA1PS0   	      /* bit 0 */
#define OPA1PS1         OPA1C0bits.OPA1PS1   	      /* bit 1 */
#define OPA1PS2         OPA1C0bits.OPA1PS2   	      /* bit 2 */
#define OPA1NS0         OPA1C0bits.OPA1NS0     	      /* bit 3 */
#define OPA1NS1         OPA1C0bits.OPA1NS1     	      /* bit 4 */
#define OPA1NS2         OPA1C0bits.OPA1NS2     	      /* bit 5 */
#define OPA1O           OPA1C0bits.OPA1O              /* bit 6 */
#define OPA1EN          OPA1C0bits.OPA1EN             /* bit 7 */

// ----- OPA1C1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA1OF0:1;
		unsigned char OPA1OF1:1;	
		unsigned char OPA1OF2:1;	
		unsigned char OPA1OF3:1;
		unsigned char OPA1OF4:1;	
		unsigned char OPA1OFM:1;	
		unsigned char OPA1VRC:1;
		unsigned char A1ENLO:1;	
	};
} __OPA1C1bits_t;
extern volatile __OPA1C1bits_t __at(OPA1C1_ADDR) OPA1C1bits;

#define OPA1OF0         OPA1C1bits.OPA1OF0   	      /* bit 0 */
#define OPA1OF1         OPA1C1bits.OPA1OF1   	      /* bit 1 */
#define OPA1OF2         OPA1C1bits.OPA1OF2   	      /* bit 2 */
#define OPA1OF3         OPA1C1bits.OPA1OF3     	      /* bit 3 */
#define OPA1OF4         OPA1C1bits.OPA1OF4     	      /* bit 4 */
#define OPA1OFM         OPA1C1bits.OPA1OFM     	      /* bit 5 */
#define OPA1VRC         OPA1C1bits.OPA1VRC            /* bit 6 */
#define A1ENLO          OPA1C1bits.A1ENLO             /* bit 7 */

// ----- OPA1C2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA1R2S0:1;
		unsigned char OPA1R2S1:1;	
		unsigned char OPA1R1S:1;	
		unsigned char :1;
		unsigned char OPA1IS0:1;	
		unsigned char OPA1IS1:1;	
		unsigned char :1;
		unsigned char :1;	
	};
} __OPA1C2bits_t;
extern volatile __OPA1C2bits_t __at(OPA1C2_ADDR) OPA1C2bits;

#define OPA1R2S0         OPA1C2bits.OPA1R2S0   	          /* bit 0 */
#define OPA1R2S1         OPA1C2bits.OPA1R2S1   	          /* bit 1 */
#define OPA1R1S          OPA1C2bits.OPA1R1S   	          /* bit 2 */
#define OPA1IS0          OPA1C2bits.OPA1IS0     	      /* bit 4 */
#define OPA1IS1          OPA1C2bits.OPA1IS1     	      /* bit 5 */

// ----- OPA1C3 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A1SW0:1;
		unsigned char A1SW1:1;	
		unsigned char A1SW2:1;	
		unsigned char A1SW3:1;
		unsigned char A1SW4:1;	
		unsigned char A1SW5:1;	
		unsigned char A1SW6:1;
		unsigned char :1;	
	};
} __OPA1C3bits_t;
extern volatile __OPA1C3bits_t __at(OPA1C3_ADDR) OPA1C3bits;

#define A1SW0         OPA1C3bits.A1SW0   	      /* bit 0 */
#define A1SW1         OPA1C3bits.A1SW1   	      /* bit 1 */
#define A1SW2         OPA1C3bits.A1SW2   	      /* bit 2 */
#define A1SW3         OPA1C3bits.A1SW3     	      /* bit 3 */
#define A1SW4         OPA1C3bits.A1SW4     	      /* bit 4 */
#define A1SW5         OPA1C3bits.A1SW5     	      /* bit 5 */
#define A1SW6         OPA1C3bits.A1SW6            /* bit 6 */

// ----- INDF0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF00:1;
		unsigned char INDF01:1;
		unsigned char INDF02:1;	
		unsigned char INDF03:1;	
		unsigned char INDF04:1;
		unsigned char INDF05:1;
		unsigned char INDF06:1;
		unsigned char INDF07:1;	
	};
} __INDF0bits_t;
extern volatile __INDF0bits_t __at(INDF0_ADDR) INDF0bits;

#define INDF00          INDF0bits.INDF00            /* bit 0 */
#define INDF01          INDF0bits.INDF01            /* bit 1 */
#define INDF02          INDF0bits.INDF02            /* bit 2 */
#define INDF03          INDF0bits.INDF03            /* bit 3 */
#define INDF04          INDF0bits.INDF04            /* bit 4 */
#define INDF05          INDF0bits.INDF05            /* bit 5 */
#define INDF06          INDF0bits.INDF06            /* bit 6 */
#define INDF07          INDF0bits.INDF07            /* bit 7 */

// ----- FSR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FSR00:1;
		unsigned char FSR01:1;
		unsigned char FSR02:1;	
		unsigned char FSR03:1;	
		unsigned char FSR04:1;
		unsigned char FSR05:1;
		unsigned char FSR06:1;
		unsigned char FSR07:1;	
	};
} __FSR0bits_t;
extern volatile __FSR0bits_t __at(FSR0_ADDR) FSR0bits;

#define FSR00           FSR0bits.FSR00              /* bit 0 */
#define FSR01           FSR0bits.FSR01              /* bit 1 */
#define FSR02           FSR0bits.FSR02              /* bit 2 */
#define FSR03           FSR0bits.FSR03              /* bit 3 */
#define FSR04           FSR0bits.FSR04              /* bit 4 */
#define FSR05           FSR0bits.FSR05              /* bit 5 */
#define FSR06           FSR0bits.FSR06              /* bit 6 */
#define FSR07           FSR0bits.FSR07              /* bit 7 */

// ----- TXCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TXD9:1;
		unsigned char SPD0:1;
		unsigned char SPD1:1;	
		unsigned char SLAVE:1;	
		unsigned char TX9:1;
		unsigned char SYNC:1;
		unsigned char TMCLR:1;
		unsigned char TXEN:1;	
	};
} __TXCRbits_t;
extern volatile __TXCRbits_t __at(TXCR_ADDR) TXCRbits;

#define TXD9            TXCRbits.TXD9              /* bit 0 */
#define SPD0            TXCRbits.SPD0              /* bit 1 */
#define SPD1            TXCRbits.SPD1              /* bit 2 */
#define SLAVE           TXCRbits.SLAVE             /* bit 3 */
#define TX9             TXCRbits.TX9               /* bit 4 */
#define SYNC            TXCRbits.SYNC              /* bit 5 */
#define TMCLR           TXCRbits.TMCLR             /* bit 6 */
#define TXEN            TXCRbits.TXEN              /* bit 7 */

// ----- TXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TXD0:1;
		unsigned char TXD1:1;	
		unsigned char TXD2:1;
		unsigned char TXD3:1;	
		unsigned char TXD4:1;
		unsigned char TXD5:1;	
		unsigned char TXD6:1;
		unsigned char TXD7:1;		
	};
} __TXREGbits_t;
extern volatile __TXREGbits_t __at(TXREG_ADDR) TXREGbits;

#define TXD0           TXREGbits.TXD0            /* bit 0 */
#define TXD1           TXREGbits.TXD1            /* bit 1 */
#define TXD2           TXREGbits.TXD2            /* bit 2 */
#define TXD3           TXREGbits.TXD3            /* bit 3 */
#define TXD4           TXREGbits.TXD4            /* bit 4 */
#define TXD5           TXREGbits.TXD5            /* bit 5 */
#define TXD6           TXREGbits.TXD6            /* bit 6 */
#define TXD7           TXREGbits.TXD7            /* bit 7 */

// ----- RXCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RXD9:1;
		unsigned char FRER:1;
		unsigned char RXOVF:1;	
		unsigned char SREN:1;
		unsigned char RX9:1;
		unsigned char :1;
		unsigned char CKPS:1;
		unsigned char RXEN:1;	
	};
} __RXCRbits_t;
extern volatile __RXCRbits_t __at(RXCR_ADDR) RXCRbits;

#define RXD9            RXCRbits.RXD9              /* bit 0 */
#define FRER            RXCRbits.FRER              /* bit 1 */
#define RXOVF           RXCRbits.RXOVF             /* bit 2 */
#define SREN            RXCRbits.SREN              /* bit 3 */
#define RX9             RXCRbits.RX9               /* bit 4 */
#define CKPS            RXCRbits.CKPS              /* bit 6 */
#define RXEN            RXCRbits.RXEN              /* bit 7 */

// ----- RXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RXD0:1;
		unsigned char RXD1:1;	
		unsigned char RXD2:1;
		unsigned char RXD3:1;	
		unsigned char RXD4:1;
		unsigned char RXD5:1;	
		unsigned char RXD6:1;
		unsigned char RXD7:1;		
	};
} __RXREGbits_t;
extern volatile __RXREGbits_t __at(RXREG_ADDR) RXREGbits;

#define RXD0           RXREGbits.RXD0            /* bit 0 */
#define RXD1           RXREGbits.RXD1            /* bit 1 */
#define RXD2           RXREGbits.RXD2            /* bit 2 */
#define RXD3           RXREGbits.RXD3            /* bit 3 */
#define RXD4           RXREGbits.RXD4            /* bit 4 */
#define RXD5           RXREGbits.RXD5            /* bit 5 */
#define RXD6           RXREGbits.RXD6            /* bit 6 */
#define RXD7           RXREGbits.RXD7            /* bit 7 */

// ----- BRGDH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRGD8:1;
		unsigned char BRGD9:1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char SBYTE:1;	
	};
} __BRGDHbits_t;
extern volatile __BRGDHbits_t __at(BRGDH_ADDR) BRGDHbits;

#define BRGD8           BRGDHbits.BRGD8             /* bit 0 */
#define BRGD9           BRGDHbits.BRGD9             /* bit 1 */
#define SBYTE           BRGDHbits.SBYTE             /* bit 7 */

// ----- BRGDL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRGD0:1;
		unsigned char BRGD1:1;
		unsigned char BRGD2:1;	
		unsigned char BRGD3:1;
		unsigned char BRGD4:1;
		unsigned char BRGD5:1;	
		unsigned char BRGD6:1;
		unsigned char BRGD7:1;	
	};
} __BRGDLbits_t;
extern volatile __BRGDLbits_t __at(BRGDL_ADDR) BRGDLbits;

#define BRGD0           BRGDLbits.BRGD0             /* bit 0 */
#define BRGD1           BRGDLbits.BRGD1             /* bit 1 */
#define BRGD2           BRGDLbits.BRGD2             /* bit 2 */
#define BRGD3           BRGDLbits.BRGD3             /* bit 3 */
#define BRGD4           BRGDLbits.BRGD4             /* bit 4 */
#define BRGD5           BRGDLbits.BRGD5             /* bit 5 */
#define BRGD6           BRGDLbits.BRGD6             /* bit 6 */
#define BRGD7           BRGDLbits.BRGD7             /* bit 7 */

// ----- INDF1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF10:1;
		unsigned char INDF11:1;
		unsigned char INDF12:1;	
		unsigned char INDF13:1;	
		unsigned char INDF14:1;
		unsigned char INDF15:1;
		unsigned char INDF16:1;
		unsigned char INDF17:1;	
	};
} __INDF1bits_t;
extern volatile __INDF1bits_t __at(INDF1_ADDR) INDF1bits;

#define INDF10          INDF1bits.INDF10            /* bit 0 */
#define INDF11          INDF1bits.INDF11            /* bit 1 */
#define INDF12          INDF1bits.INDF12            /* bit 2 */
#define INDF13          INDF1bits.INDF13            /* bit 3 */
#define INDF14          INDF1bits.INDF14            /* bit 4 */
#define INDF15          INDF1bits.INDF15            /* bit 5 */
#define INDF16          INDF1bits.INDF16            /* bit 6 */
#define INDF17          INDF1bits.INDF17            /* bit 7 */

// ----- FSR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FSR10:1;
		unsigned char FSR11:1;
		unsigned char FSR12:1;	
		unsigned char FSR13:1;	
		unsigned char FSR14:1;
		unsigned char FSR15:1;
		unsigned char FSR16:1;
		unsigned char FSR17:1;	
	};
} __FSR1bits_t;
extern volatile __FSR1bits_t __at(FSR1_ADDR) FSR1bits;

#define FSR10           FSR1bits.FSR10              /* bit 0 */
#define FSR11           FSR1bits.FSR11              /* bit 1 */
#define FSR12           FSR1bits.FSR12              /* bit 2 */
#define FSR13           FSR1bits.FSR13              /* bit 3 */
#define FSR14           FSR1bits.FSR14              /* bit 4 */
#define FSR15           FSR1bits.FSR15              /* bit 5 */
#define FSR16           FSR1bits.FSR16              /* bit 6 */
#define FSR17           FSR1bits.FSR17              /* bit 7 */

// ----- PCL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PCL0:1;
		unsigned char PCL1:1;
		unsigned char PCL2:1;	
		unsigned char PCL3:1;	
		unsigned char PCL4:1;
		unsigned char PCL5:1;
		unsigned char PCL6:1;
		unsigned char PCL7:1;	
	};
} __PCLbits_t;
extern volatile __PCLbits_t __at(PCL_ADDR) PCLbits;

#define PCL0            PCLbits.PCL0                /* bit 0 */
#define PCL1            PCLbits.PCL1                /* bit 1 */
#define PCL2            PCLbits.PCL2                /* bit 2 */
#define PCL3            PCLbits.PCL3                /* bit 3 */
#define PCL4            PCLbits.PCL4                /* bit 4 */
#define PCL5            PCLbits.PCL5                /* bit 5 */
#define PCL6            PCLbits.PCL6                /* bit 6 */
#define PCL7            PCLbits.PCL7                /* bit 7 */

// ----- STATUS Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char C:1;
		unsigned char DC:1;
		unsigned char Z:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

#define C               STATUSbits.C                /* bit 0 */
#define DC              STATUSbits.DC               /* bit 1 */
#define Z               STATUSbits.Z                /* bit 2 */

// ----- OPTION Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char MINT00:1;
		unsigned char MINT01:1;	
		unsigned char MINT10:1;
		unsigned char MINT11:1;	
		unsigned char PD:1;
		unsigned char TO:1;
		unsigned char :1;
		unsigned char GIE:1;
	};
} __OPTIONbits_t;
extern volatile __OPTIONbits_t __at(OPTION_ADDR) OPTIONbits;

#define MINT00          OPTIONbits.MINT00        	/* bit 0 */
#define MINT01          OPTIONbits.MINT01        	/* bit 1 */
#define MINT10          OPTIONbits.MINT10        	/* bit 2 */
#define MINT11          OPTIONbits.MINT11        	/* bit 3 */
#define PD              OPTIONbits.PD        	    /* bit 4 */
#define TO              OPTIONbits.TO               /* bit 5 */
#define GIE             OPTIONbits.GIE        	    /* bit 7 */

// ----- OSCM Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char STPL:1;
		unsigned char :1;
		unsigned char STPH:1;
		unsigned char CLKM:1;
		unsigned char STOP:1;
		unsigned char :1;	
		unsigned char STBL:1;
		unsigned char STBH:1;	
	};
} __OSCMbits_t;
extern volatile __OSCMbits_t __at(OSCM_ADDR) OSCMbits;

#define STPL            OSCMbits.STPL        	    /* bit 0 */
//#define LPSPD	        OSCMbits.LPSPD      	  /* bit 1 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define CLKM            OSCMbits.CLKM             /* bit 3 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */
//#define HSPDX2          OSCMbits.HSPDX2      	    /* bit 5 */
#define STBL            OSCMbits.STBL             /* bit 6 */
#define STBH            OSCMbits.STBH        	    /* bit 7 */

// ----- WDTC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char WDTC0:1;
		unsigned char WDTC1:1;
		unsigned char WDTC2:1;	
		unsigned char WDTC3:1;
		unsigned char WDTC4:1;
		unsigned char WDTC5:1;	
		unsigned char WDTC6:1;
		unsigned char WDTC7:1;	
	};
} __WDTCbits_t;
extern volatile __WDTCbits_t __at(WDTC_ADDR) WDTCbits;

#define WDTC0           WDTCbits.WDTC0              /* bit 0 */
#define WDTC1           WDTCbits.WDTC1              /* bit 1 */
#define WDTC2           WDTCbits.WDTC2              /* bit 2 */
#define WDTC3           WDTCbits.WDTC3              /* bit 3 */
#define WDTC4           WDTCbits.WDTC4              /* bit 4 */
#define WDTC5           WDTCbits.WDTC5              /* bit 5 */
#define WDTC6           WDTCbits.WDTC6              /* bit 6 */
#define WDTC7           WDTCbits.WDTC7              /* bit 7 */

// ----- RFCCR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char RFCH0:1;
		unsigned char RFCH1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char RFCH0E:1;
		unsigned char RFCH1E:1;
		unsigned char RFCH2E:1;
		unsigned char :1;
	};
} __RFCCRbits_t;
extern volatile __RFCCRbits_t __at(RFCCR_ADDR) RFCCRbits;

#define RFCH0           RFCCRbits.RFCH0          /* bit 0 */
#define RFCH1           RFCCRbits.RFCH1          /* bit 1 */
#define RFCH0E          RFCCRbits.RFCH0E         /* bit 4 */
#define RFCH1E          RFCCRbits.RFCH1E         /* bit 5 */
#define RFCH2E          RFCCRbits.RFCH2E         /* bit 6 */

// ----- INDF2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF20:1;
		unsigned char INDF21:1;
		unsigned char INDF22:1;	
		unsigned char INDF23:1;	
		unsigned char INDF24:1;
		unsigned char INDF25:1;
		unsigned char INDF26:1;
		unsigned char INDF27:1;	
	};
} __INDF2bits_t;
extern volatile __INDF2bits_t __at(INDF2_ADDR) INDF2bits;

#define INDF20          INDF2bits.INDF20            /* bit 0 */
#define INDF21          INDF2bits.INDF21            /* bit 1 */
#define INDF22          INDF2bits.INDF22            /* bit 2 */
#define INDF23          INDF2bits.INDF23            /* bit 3 */
#define INDF24          INDF2bits.INDF24            /* bit 4 */
#define INDF25          INDF2bits.INDF25            /* bit 5 */
#define INDF26          INDF2bits.INDF26            /* bit 6 */
#define INDF27          INDF2bits.INDF27            /* bit 7 */

// ----- HBUF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char HBUF0:1;
		unsigned char HBUF1:1;
		unsigned char HBUF2:1;	
		unsigned char HBUF3:1;	
		unsigned char HBUF4:1;
		unsigned char HBUF5:1;
		unsigned char HBUF6:1;
		unsigned char HBUF7:1;	
	};
} __HBUFbits_t;
extern volatile __HBUFbits_t __at(HBUF_ADDR) HBUFbits;

#define HBUF0           HBUFbits.HBUF0              /* bit 0 */
#define HBUF1           HBUFbits.HBUF1              /* bit 1 */
#define HBUF2           HBUFbits.HBUF2              /* bit 2 */
#define HBUF3           HBUFbits.HBUF3              /* bit 3 */
#define HBUF4           HBUFbits.HBUF4              /* bit 4 */
#define HBUF5           HBUFbits.HBUF5              /* bit 5 */
#define HBUF6           HBUFbits.HBUF6              /* bit 6 */
#define HBUF7           HBUFbits.HBUF7              /* bit 7 */

// ----- INTCR2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TXIE:1;
		unsigned char RXIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char I2CIE:1;
		unsigned char OPA0IE:1;
		unsigned char OPA1IE:1;
		unsigned char CMPIE:1;
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define TXIE            INTCR2bits.TXIE       	  /* bit 0 */
#define RXIE            INTCR2bits.RXIE           /* bit 1 */
#define I2CIE           INTCR2bits.I2CIE       	  /* bit 4 */
#define OPA0IE          INTCR2bits.OPA0IE         /* bit 5 */
#define OPA1IE          INTCR2bits.OPA1IE         /* bit 6 */
#define CMPIE           INTCR2bits.CMPIE          /* bit 7 */

// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char I2CIF:1;
		unsigned char OPA0IF:1;
		unsigned char OPA1IF:1;
		unsigned char CMPIF:1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define TXIF            INTF2bits.TXIF       	  /* bit 0 */
#define RXIF            INTF2bits.RXIF            /* bit 1 */
#define I2CIF           INTF2bits.I2CIF       	  /* bit 4 */
#define OPA0IF          INTF2bits.OPA0IF           /* bit 5 */
#define OPA1IF          INTF2bits.OPA1IF           /* bit 6 */
#define CMPIF           INTF2bits.CMPIF           /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char TC2IE:1;
		unsigned char TC2GIE:1;
		unsigned char DTMFIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TC2IE           INTCR0bits.TC2IE          /* bit 2 */
#define TC2GIE          INTCR0bits.TC2GIE         /* bit 3 */
#define DTMFIE          INTCR0bits.DTMFIE         /* bit 4 */

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char DTMFIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF           /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */
#define DTMFIF          INTF0bits.DTMFIF          /* bit 4 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIE:1;
		unsigned char IOBCHIE:1;
		unsigned char IOCCHIE:1;
		unsigned char IOECHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOACHIE         INTCR1bits.IOACHIE     	  /* bit 0 */
#define IOBCHIE         INTCR1bits.IOBCHIE     	  /* bit 1 */
#define IOCCHIE         INTCR1bits.IOCCHIE     	  /* bit 2 */
#define IOECHIE         INTCR1bits.IOECHIE     	  /* bit 3 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 6 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIF:1;
		unsigned char IOBCHIF:1;
		unsigned char IOCCHIF:1;
		unsigned char IOECHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOACHIF         INTF1bits.IOACHIF         /* bit 0 */
#define IOBCHIF         INTF1bits.IOBCHIF         /* bit 1 */
#define IOCCHIF         INTF1bits.IOCCHIF         /* bit 2 */
#define IOECHIF         INTF1bits.IOECHIF         /* bit 3 */
#define INT0IF          INTF1bits.INT0IF          /* bit 6 */
#define INT1IF          INTF1bits.INT1IF          /* bit 7 */

// ----- IOA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOA0:1;
		unsigned char IOA1:1;
		unsigned char IOA2:1;
		unsigned char IOA3:1;
		unsigned char IOA4:1;
		unsigned char IOA5:1;
		unsigned char IOA6:1;
		unsigned char IOA7:1;
	};
} __IOAbits_t;
extern volatile __IOAbits_t __at(IOA_ADDR) IOAbits;

#define IOA0            IOAbits.IOA0              /* bit 0 */
#define IOA1            IOAbits.IOA1              /* bit 1 */
#define IOA2            IOAbits.IOA2              /* bit 2 */
#define IOA3            IOAbits.IOA3              /* bit 3 */
#define IOA4            IOAbits.IOA4              /* bit 4 */
#define IOA5            IOAbits.IOA5              /* bit 5 */
#define IOA6            IOAbits.IOA6              /* bit 6 */
#define IOA7            IOAbits.IOA7      	      /* bit 7 */

// ----- OEA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEA0:1;
		unsigned char OEA1:1;
		unsigned char OEA2:1;
		unsigned char OEA3:1;
		unsigned char OEA4:1;
		unsigned char OEA5:1;
		unsigned char OEA6:1;
		unsigned char OEA7:1;
	};
} __OEAbits_t;
extern volatile __OEAbits_t __at(OEA_ADDR) OEAbits;

#define OEA0            OEAbits.OEA0              /* bit 0 */
#define OEA1            OEAbits.OEA1              /* bit 1 */
#define OEA2            OEAbits.OEA2              /* bit 2 */
#define OEA3            OEAbits.OEA3              /* bit 3 */
#define OEA4            OEAbits.OEA4              /* bit 4 */
#define OEA5            OEAbits.OEA5              /* bit 5 */
#define OEA6            OEAbits.OEA6              /* bit 6 */
#define OEA7            OEAbits.OEA7      	      /* bit 7 */

// ----- IOB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOB0:1;
		unsigned char IOB1:1;
		unsigned char IOB2:1;
		unsigned char IOB3:1;
		unsigned char IOB4:1;
		unsigned char IOB5:1;
		unsigned char IOB6:1;
		unsigned char IOB7:1;
	};
} __IOBbits_t;
extern volatile __IOBbits_t __at(IOB_ADDR) IOBbits;

#define IOB0            IOBbits.IOB0              /* bit 0 */
#define IOB1            IOBbits.IOB1              /* bit 1 */
#define IOB2            IOBbits.IOB2              /* bit 2 */
#define IOB3            IOBbits.IOB3              /* bit 3 */
#define IOB4            IOBbits.IOB4              /* bit 4 */
#define IOB5            IOBbits.IOB5              /* bit 5 */
#define IOB6            IOBbits.IOB6              /* bit 6 */
#define IOB7            IOBbits.IOB7      	      /* bit 7 */

// ----- OEB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEB0:1;
		unsigned char OEB1:1;
		unsigned char OEB2:1;
		unsigned char OEB3:1;
		unsigned char OEB4:1;
		unsigned char OEB5:1;
		unsigned char OEB6:1;
		unsigned char OEB7:1;
	};
} __OEBbits_t;
extern volatile __OEBbits_t __at(OEB_ADDR) OEBbits;

#define OEB0            OEBbits.OEB0              /* bit 0 */
#define OEB1            OEBbits.OEB1              /* bit 1 */
#define OEB2            OEBbits.OEB2              /* bit 2 */
#define OEB3            OEBbits.OEB3              /* bit 3 */
#define OEB4            OEBbits.OEB4              /* bit 4 */
#define OEB5            OEBbits.OEB5              /* bit 5 */
#define OEB6            OEBbits.OEB6              /* bit 6 */
#define OEB7            OEBbits.OEB7      	      /* bit 7 */

// ----- IOC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0:1;
		unsigned char IOC1:1;
		unsigned char IOC2:1;
		unsigned char IOC3:1;
		unsigned char IOC4:1;
		unsigned char IOC5:1;
		unsigned char IOC6:1;
		unsigned char IOC7:1;
	};
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

#define IOC0            IOCbits.IOC0              /* bit 0 */
#define IOC1            IOCbits.IOC1              /* bit 1 */
#define IOC2            IOCbits.IOC2              /* bit 2 */
#define IOC3            IOCbits.IOC3              /* bit 3 */
#define IOC4            IOCbits.IOC4              /* bit 4 */
#define IOC5            IOCbits.IOC5              /* bit 5 */
#define IOC6            IOCbits.IOC6              /* bit 6 */
#define IOC7            IOCbits.IOC7      	      /* bit 7 */

// ----- OEC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEC0:1;
		unsigned char OEC1:1;
		unsigned char OEC2:1;
		unsigned char OEC3:1;
		unsigned char OEC4:1;
		unsigned char OEC5:1;
		unsigned char OEC6:1;
		unsigned char OEC7:1;
	};
} __OECbits_t;
extern volatile __OECbits_t __at(OEC_ADDR) OECbits;

#define OEC0            OECbits.OEC0              /* bit 0 */
#define OEC1            OECbits.OEC1              /* bit 1 */
#define OEC2            OECbits.OEC2              /* bit 2 */
#define OEC3            OECbits.OEC3              /* bit 3 */
#define OEC4            OECbits.OEC4              /* bit 4 */
#define OEC5            OECbits.OEC5              /* bit 5 */
#define OEC6            OECbits.OEC6              /* bit 6 */
#define OEC7            OECbits.OEC7      	      /* bit 7 */

// ----- IOD Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOD0:1;
		unsigned char IOD1:1;
		unsigned char IOD2:1;
		unsigned char IOD3:1;
		unsigned char IOD4:1;
		unsigned char IOD5:1;
		unsigned char IOD6:1;
		unsigned char IOD7:1;
	};
} __IODbits_t;
extern volatile __IODbits_t __at(IOD_ADDR) IODbits;

#define IOD0            IODbits.IOD0              /* bit 0 */
#define IOD1            IODbits.IOD1              /* bit 1 */
#define IOD2            IODbits.IOD2              /* bit 2 */
#define IOD3            IODbits.IOD3              /* bit 3 */
#define IOD4            IODbits.IOD4              /* bit 4 */
#define IOD5            IODbits.IOD5              /* bit 5 */
#define IOD6            IODbits.IOD6              /* bit 6 */
#define IOD7            IODbits.IOD7      	      /* bit 7 */

// ----- OED Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OED0:1;
		unsigned char OED1:1;
		unsigned char OED2:1;
		unsigned char OED3:1;
		unsigned char OED4:1;
		unsigned char OED5:1;
		unsigned char OED6:1;
		unsigned char OED7:1;
	};
} __OEDbits_t;
extern volatile __OEDbits_t __at(OED_ADDR) OEDbits;

#define OED0            OEDbits.OED0              /* bit 0 */
#define OED1            OEDbits.OED1              /* bit 1 */
#define OED2            OEDbits.OED2              /* bit 2 */
#define OED3            OEDbits.OED3              /* bit 3 */
#define OED4            OEDbits.OED4              /* bit 4 */
#define OED5            OEDbits.OED5              /* bit 5 */
#define OED6            OEDbits.OED6              /* bit 6 */
#define OED7            OEDbits.OED7      	      /* bit 7 */

// ----- IOE Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOE0:1;
		unsigned char IOE1:1;
		unsigned char IOE2:1;
		unsigned char IOE3:1;
		unsigned char IOE4:1;
		unsigned char IOE5:1;
		unsigned char IOE6:1;
		unsigned char IOE7:1;
	};
} __IOEbits_t;
extern volatile __IOEbits_t __at(IOE_ADDR) IOEbits;

#define IOE0            IOEbits.IOE0              /* bit 0 */
#define IOE1            IOEbits.IOE1              /* bit 1 */
#define IOE2            IOEbits.IOE2              /* bit 2 */
#define IOE3            IOEbits.IOE3              /* bit 3 */
#define IOE4            IOEbits.IOE4              /* bit 4 */
#define IOE5            IOEbits.IOE5              /* bit 5 */
#define IOE6            IOEbits.IOE6              /* bit 6 */
#define IOE7            IOEbits.IOE7      	      /* bit 7 */

// ----- OEE Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEE0:1;
		unsigned char OEE1:1;
		unsigned char OEE2:1;
		unsigned char OEE3:1;
		unsigned char OEE4:1;
		unsigned char OEE5:1;
		unsigned char OEE6:1;
		unsigned char OEE7:1;
	};
} __OEEbits_t;
extern volatile __OEEbits_t __at(OEE_ADDR) OEEbits;

#define OEE0            OEEbits.OEE0              /* bit 0 */
#define OEE1            OEEbits.OEE1              /* bit 1 */
#define OEE2            OEEbits.OEE2              /* bit 2 */
#define OEE3            OEEbits.OEE3              /* bit 3 */
#define OEE4            OEEbits.OEE4              /* bit 4 */
#define OEE5            OEEbits.OEE5              /* bit 5 */
#define OEE6            OEEbits.OEE6              /* bit 6 */
#define OEE7            OEEbits.OEE7      	      /* bit 7 */

// ----- PWM3D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM3D0:1;
		unsigned char PWM3D1:1;
		unsigned char PWM3D2:1;
		unsigned char PWM3D3:1;
		unsigned char PWM3D4:1;
		unsigned char PWM3D5:1;
		unsigned char PWM3D6:1;
		unsigned char PWM3D7:1;
	};
} __PWM3Dbits_t;
extern volatile __PWM3Dbits_t __at(PWM3D_ADDR) PWM3Dbits;

#define PWM3D0         PWM3Dbits.PWM3D0         /* bit 0 */
#define PWM3D1         PWM3Dbits.PWM3D1         /* bit 1 */
#define PWM3D2         PWM3Dbits.PWM3D2         /* bit 2 */
#define PWM3D3         PWM3Dbits.PWM3D3         /* bit 3 */
#define PWM3D4         PWM3Dbits.PWM3D4         /* bit 4 */
#define PWM3D5         PWM3Dbits.PWM3D5         /* bit 5 */
#define PWM3D6         PWM3Dbits.PWM3D6         /* bit 6 */
#define PWM3D7         PWM3Dbits.PWM3D7         /* bit 7 */

// ----- HWPR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char HWPR0:1;
		unsigned char HWPR1:1;
		unsigned char HWPR2:1;
		unsigned char HWPR3:1;
		unsigned char HWPR4:1;
		unsigned char HWPR5:1;
		unsigned char HWPR6:1;
		unsigned char HWPR7:1;
	};
} __HWPRbits_t;
extern volatile __HWPRbits_t __at(HWPR_ADDR) HWPRbits;

#define HWPR0         HWPRbits.HWPR0         /* bit 0 */
#define HWPR1         HWPRbits.HWPR1         /* bit 1 */
#define HWPR2         HWPRbits.HWPR2         /* bit 2 */
#define HWPR3         HWPRbits.HWPR3         /* bit 3 */
#define HWPR4         HWPRbits.HWPR4         /* bit 4 */
#define HWPR5         HWPRbits.HWPR5         /* bit 5 */
#define HWPR6         HWPRbits.HWPR6         /* bit 6 */
#define HWPR7         HWPRbits.HWPR7         /* bit 7 */

// ----- LWPR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char LWPR0:1;
		unsigned char LWPR1:1;
		unsigned char LWPR2:1;
		unsigned char LWPR3:1;
		unsigned char LWPR4:1;
		unsigned char LWPR5:1;
		unsigned char LWPR6:1;
		unsigned char LWPR7:1;
	};
} __LWPRbits_t;
extern volatile __LWPRbits_t __at(LWPR_ADDR) LWPRbits;

#define LWPR0         LWPRbits.LWPR0         /* bit 0 */
#define LWPR1         LWPRbits.LWPR1         /* bit 1 */
#define LWPR2         LWPRbits.LWPR2         /* bit 2 */
#define LWPR3         LWPRbits.LWPR3         /* bit 3 */
#define LWPR4         LWPRbits.LWPR4         /* bit 4 */
#define LWPR5         LWPRbits.LWPR5         /* bit 5 */
#define LWPR6         LWPRbits.LWPR6         /* bit 6 */
#define LWPR7         LWPRbits.LWPR7         /* bit 7 */

// ----- TC3C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC3C0:1;
		unsigned char TC3C1:1;	
		unsigned char TC3C2:1;	
		unsigned char TC3C3:1;
		unsigned char TC3C4:1;	
		unsigned char TC3C5:1;
		unsigned char TC3C6:1;	
		unsigned char TC3C7:1;
	};
} __TC3Cbits_t;
extern volatile __TC3Cbits_t __at(TC3C_ADDR) TC3Cbits;

#define TC3C0          TC3Cbits.TC3C0            /* bit 0 */
#define TC3C1          TC3Cbits.TC3C1            /* bit 1 */
#define TC3C2          TC3Cbits.TC3C2            /* bit 2 */
#define TC3C3          TC3Cbits.TC3C3            /* bit 3 */
#define TC3C4          TC3Cbits.TC3C4            /* bit 4 */
#define TC3C5          TC3Cbits.TC3C5            /* bit 5 */
#define TC3C6          TC3Cbits.TC3C6            /* bit 6 */
#define TC3C7          TC3Cbits.TC3C7            /* bit 7 */

// ----- T3CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VDDIV0:1;
		unsigned char VDDIV1:1;	
		unsigned char VDDIV2:1;	
		unsigned char :1;
		unsigned char LWEN:1;	
		unsigned char HWEN:1;
		unsigned char PWMEN:1;	
		unsigned char TC3EN:1;
	};
} __T3CRbits_t;
extern volatile __T3CRbits_t __at(T3CR_ADDR) T3CRbits;

#define VDDIV0          T3CRbits.VDDIV0           /* bit 0 */
#define VDDIV1          T3CRbits.VDDIV1           /* bit 1 */
#define VDDIV2          T3CRbits.VDDIV2           /* bit 2 */
#define LWEN            T3CRbits.LWEN            /* bit 3 */
#define HWEN            T3CRbits.HWEN            /* bit 4 */
#define PWMEN           T3CRbits.PWMEN               /* bit 6 */
#define TC3EN           T3CRbits.TC3EN              /* bit 7 */

// ----- TC3PR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC3PR0:1;
		unsigned char TC3PR1:1;	
		unsigned char TC3PR2:1;	
		unsigned char TC3PR3:1;
		unsigned char TC3PR4:1;	
		unsigned char TC3PR5:1;
		unsigned char TC3PR6:1;	
		unsigned char TC3PR7:1;
	};
} __TC3PRbits_t;
extern volatile __TC3PRbits_t __at(TC3PR_ADDR) TC3PRbits;

#define TC3PR0          TC3PRbits.TC3PR0            /* bit 0 */
#define TC3PR1          TC3PRbits.TC3PR1            /* bit 1 */
#define TC3PR2          TC3PRbits.TC3PR2            /* bit 2 */
#define TC3PR3          TC3PRbits.TC3PR3            /* bit 3 */
#define TC3PR4          TC3PRbits.TC3PR4            /* bit 4 */
#define TC3PR5          TC3PRbits.TC3PR5            /* bit 5 */
#define TC3PR6          TC3PRbits.TC3PR6            /* bit 6 */
#define TC3PR7          TC3PRbits.TC3PR7            /* bit 7 */

// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0S:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM0OE:1;
		unsigned char PWM0EN:1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0S            PWM0CRbits.PWM0S            /* bit 0 */
#define PWM0OE           PWM0CRbits.PWM0OE          /* bit 6 */
#define PWM0EN           PWM0CRbits.PWM0EN           /* bit 7 */

// ----- PWM0D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0D0:1;
		unsigned char PWM0D1:1;
		unsigned char PWM0D2:1;
		unsigned char PWM0D3:1;
		unsigned char PWM0D4:1;
		unsigned char PWM0D5:1;
		unsigned char PWM0D6:1;
		unsigned char PWM0D7:1;
	};
} __PWM0Dbits_t;
extern volatile __PWM0Dbits_t __at(PWM0D_ADDR) PWM0Dbits;

#define PWM0D0         PWM0Dbits.PWM0D0         /* bit 0 */
#define PWM0D1         PWM0Dbits.PWM0D1         /* bit 1 */
#define PWM0D2         PWM0Dbits.PWM0D2         /* bit 2 */
#define PWM0D3         PWM0Dbits.PWM0D3         /* bit 3 */
#define PWM0D4         PWM0Dbits.PWM0D4         /* bit 4 */
#define PWM0D5         PWM0Dbits.PWM0D5         /* bit 5 */
#define PWM0D6         PWM0Dbits.PWM0D6         /* bit 6 */
#define PWM0D7         PWM0Dbits.PWM0D7         /* bit 7 */

// ----- PWM1CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1S:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM1OE:1;
		unsigned char PWM1EN:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1S            PWM1CRbits.PWM1S            /* bit 0 */
#define PWM1OE           PWM1CRbits.PWM1OE          /* bit 6 */
#define PWM1EN           PWM1CRbits.PWM1EN           /* bit 7 */


// ----- PWM1D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1D0:1;
		unsigned char PWM1D1:1;
		unsigned char PWM1D2:1;
		unsigned char PWM1D3:1;
		unsigned char PWM1D4:1;
		unsigned char PWM1D5:1;
		unsigned char PWM1D6:1;
		unsigned char PWM1D7:1;
	};
} __PWM1Dbits_t;
extern volatile __PWM1Dbits_t __at(PWM1D_ADDR) PWM1Dbits;

#define PWM1D0         PWM1Dbits.PWM1D0         /* bit 0 */
#define PWM1D1         PWM1Dbits.PWM1D1         /* bit 1 */
#define PWM1D2         PWM1Dbits.PWM1D2         /* bit 2 */
#define PWM1D3         PWM1Dbits.PWM1D3         /* bit 3 */
#define PWM1D4         PWM1Dbits.PWM1D4         /* bit 4 */
#define PWM1D5         PWM1Dbits.PWM1D5         /* bit 5 */
#define PWM1D6         PWM1Dbits.PWM1D6         /* bit 6 */
#define PWM1D7         PWM1Dbits.PWM1D7         /* bit 7 */

// ----- PWM2CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2S:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM2OE:1;
		unsigned char PWM2EN:1;
	};
} __PWM2CRbits_t;
extern volatile __PWM2CRbits_t __at(PWM2CR_ADDR) PWM2CRbits;

#define PWM2S            PWM2CRbits.PWM2S            /* bit 0 */
#define PWM2OE           PWM2CRbits.PWM2OE          /* bit 6 */
#define PWM2EN           PWM2CRbits.PWM2EN            /* bit 7 */

// ----- PWM2D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2D0:1;
		unsigned char PWM2D1:1;
		unsigned char PWM2D2:1;
		unsigned char PWM2D3:1;
		unsigned char PWM2D4:1;
		unsigned char PWM2D5:1;
		unsigned char PWM2D6:1;
		unsigned char PWM2D7:1;
	};
} __PWM2Dbits_t;
extern volatile __PWM2Dbits_t __at(PWM2D_ADDR) PWM2Dbits;

#define PWM2D0         PWM2Dbits.PWM2D0         /* bit 0 */
#define PWM2D1         PWM2Dbits.PWM2D1         /* bit 1 */
#define PWM2D2         PWM2Dbits.PWM2D2         /* bit 2 */
#define PWM2D3         PWM2Dbits.PWM2D3         /* bit 3 */
#define PWM2D4         PWM2Dbits.PWM2D4         /* bit 4 */
#define PWM2D5         PWM2Dbits.PWM2D5         /* bit 5 */
#define PWM2D6         PWM2Dbits.PWM2D6         /* bit 6 */
#define PWM2D7         PWM2Dbits.PWM2D7         /* bit 7 */

// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0:1;
		unsigned char TC2CKPS1:1;	
		unsigned char TC2CKPS2:1;	
		unsigned char TC2CKS0:1;
		unsigned char TC2CKS1:1;	
		unsigned char :1;
		unsigned char TC2MOD:1;	
		unsigned char TC2EN:1;
	};
} __T2CRbits_t;
extern volatile __T2CRbits_t __at(T2CR_ADDR) T2CRbits;

#define TC2CKPS0        T2CRbits.TC2CKPS0           /* bit 0 */
#define TC2CKPS1        T2CRbits.TC2CKPS1           /* bit 1 */
#define TC2CKPS2        T2CRbits.TC2CKPS2           /* bit 2 */
#define TC2CKS0         T2CRbits.TC2CKS0            /* bit 3 */
#define TC2CKS1         T2CRbits.TC2CKS1            /* bit 4 */
#define TC2MOD          T2CRbits.TC2MOD             /* bit 6 */
#define TC2EN           T2CRbits.TC2EN              /* bit 7 */

// ----- T2GCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2GM0:1;
		unsigned char TC2GM1:1;	
		unsigned char TC2GS0:1;	
		unsigned char TC2GS1:1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char TC2GO:1;	
		unsigned char TC2GEN:1;
	};
} __T2GCRbits_t;
extern volatile __T2GCRbits_t __at(T2GCR_ADDR) T2GCRbits;

#define TC2GM0           T2GCRbits.TC2GM0           /* bit 0 */
#define TC2GM1           T2GCRbits.TC2GM1           /* bit 1 */
#define TC2GS0           T2GCRbits.TC2GS0           /* bit 2 */
#define TC2GS1           T2GCRbits.TC2GS1           /* bit 3 */
#define TC2GO            T2GCRbits.TC2GO            /* bit 6 */
#define TC2GEN           T2GCRbits.TC2GEN           /* bit 7 */

// ----- ANSCR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSA1:1;
		unsigned char ANSA2:1;
		unsigned char ANSA3:1;
		unsigned char ANSA4:1;
		unsigned char ANSA5:1;
		unsigned char ANSA6:1;
		unsigned char ANSC4:1;
		unsigned char ANSC5:1;
	};
} __ANSCRbits_t;
extern volatile __ANSCRbits_t __at(ANSCR_ADDR) ANSCRbits;

#define ANSA1            ANSCRbits.ANSA1              /* bit 0 */
#define ANSA2            ANSCRbits.ANSA2              /* bit 1 */
#define ANSA3            ANSCRbits.ANSA3            /* bit 2 */
#define ANSA4            ANSCRbits.ANSA4             /* bit 3 */
#define ANSA5            ANSCRbits.ANSA5              /* bit 4 */
#define ANSA6            ANSCRbits.ANSA6              /* bit 5 */
#define ANSC4            ANSCRbits.ANSC4             /* bit 6 */
#define ANSC5            ANSCRbits.ANSC5             /* bit 7 */

// ----- IOAICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAICR0:1;
		unsigned char IOAICR1:1;
		unsigned char IOAICR2:1;
		unsigned char IOAICR3:1;
		unsigned char IOAICR4:1;
		unsigned char IOAICR5:1;
		unsigned char IOAICR6:1;
		unsigned char :1;
	};
} __IOAICRbits_t;
extern volatile __IOAICRbits_t __at(IOAICR_ADDR) IOAICRbits;

#define IOAICR0            IOAICRbits.IOAICR0              /* bit 0 */
#define IOAICR1            IOAICRbits.IOAICR1              /* bit 1 */
#define IOAICR2            IOAICRbits.IOAICR2              /* bit 2 */
#define IOAICR3            IOAICRbits.IOAICR3              /* bit 3 */
#define IOAICR4            IOAICRbits.IOAICR4              /* bit 4 */
#define IOAICR5            IOAICRbits.IOAICR5              /* bit 5 */
#define IOAICR6            IOAICRbits.IOAICR6              /* bit 6 */

// ----- IOBICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char IOBICR4:1;
		unsigned char IOBICR5:1;
		unsigned char IOBICR6:1;
		unsigned char IOBICR7:1;
	};
} __IOBICRbits_t;
extern volatile __IOBICRbits_t __at(IOBICR_ADDR) IOBICRbits;

#define IOBICR4            IOBICRbits.IOBICR4              /* bit 4 */
#define IOBICR5            IOBICRbits.IOBICR5              /* bit 5 */
#define IOBICR6            IOBICRbits.IOBICR6              /* bit 6 */
#define IOBICR7            IOBICRbits.IOBICR7      	       /* bit 7 */

// ----- IOCICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCICR0:1;
		unsigned char IOCICR1:1;
		unsigned char IOCICR2:1;
		unsigned char IOCICR3:1;
		unsigned char IOCICR4:1;
		unsigned char IOCICR5:1;
		unsigned char IOCICR6:1;
		unsigned char IOCICR7:1;
	};
} __IOCICRbits_t;
extern volatile __IOCICRbits_t __at(IOCICR_ADDR) IOCICRbits;

#define IOCICR0            IOCICRbits.IOCICR0              /* bit 0 */
#define IOCICR1            IOCICRbits.IOCICR1              /* bit 1 */
#define IOCICR2            IOCICRbits.IOCICR2              /* bit 2 */
#define IOCICR3            IOCICRbits.IOCICR3              /* bit 3 */
#define IOCICR4            IOCICRbits.IOCICR4              /* bit 4 */
#define IOCICR5            IOCICRbits.IOCICR5              /* bit 5 */
#define IOCICR6            IOCICRbits.IOCICR6              /* bit 6 */
#define IOCICR7            IOCICRbits.IOCICR7      	       /* bit 7 */

// ----- IOEICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOEICR0:1;
		unsigned char IOEICR1:1;
		unsigned char IOEICR2:1;
		unsigned char IOEICR3:1;
		unsigned char IOEICR4:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOEICRbits_t;
extern volatile __IOEICRbits_t __at(IOEICR_ADDR) IOEICRbits;

#define IOEICR0            IOEICRbits.IOEICR0              /* bit 0 */
#define IOEICR1            IOEICRbits.IOEICR1              /* bit 1 */
#define IOEICR2            IOEICRbits.IOEICR2              /* bit 2 */
#define IOEICR3            IOEICRbits.IOEICR3              /* bit 3 */
#define IOEICR4            IOEICRbits.IOEICR4              /* bit 4 */

// ----- IODSCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IODDS:1;
		unsigned char IOEDS:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char IOBHDS:1;
		unsigned char IOADS:1;
	};
} __IODSCR0bits_t;
extern volatile __IODSCR0bits_t __at(IODSCR0_ADDR) IODSCR0bits;

#define IODDS            IODSCR0bits.IODDS              /* bit 0 */
#define IOEDS            IODSCR0bits.IOEDS              /* bit 1 */
//#define PUCR0            IODSCR0bits.PUCR0              /* bit 2 */
//#define PUCR1            IODSCR0bits.PUCR1              /* bit 3 */
#define IOBHDS           IODSCR0bits.IOBHDS             /* bit 6 */
#define IOADS            IODSCR0bits.IOADS              /* bit 7 */

// ----- IODSCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0DS:1;
		unsigned char IOC1DS:1;
		unsigned char IOC2DS:1;
		unsigned char IOC3DS:1;
		unsigned char IOC4DS:1;
		unsigned char IOC5DS:1;
		unsigned char IOC6DS:1;
		unsigned char IOC7DS:1;
	};
} __IODSCR1bits_t;
extern volatile __IODSCR1bits_t __at(IODSCR1_ADDR) IODSCR1bits;

#define IOC0DS            IODSCR1bits.IOC0DS              /* bit 0 */
#define IOC1DS            IODSCR1bits.IOC1DS              /* bit 1 */
#define IOC2DS            IODSCR1bits.IOC2DS              /* bit 2 */
#define IOC3DS            IODSCR1bits.IOC3DS              /* bit 3 */
#define IOC4DS            IODSCR1bits.IOC4DS              /* bit 4 */
#define IOC5DS            IODSCR1bits.IOC5DS              /* bit 5 */
#define IOC6DS            IODSCR1bits.IOC6DS              /* bit 6 */
#define IOC7DS            IODSCR1bits.IOC7DS              /* bit 7 */

// ----- IOICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOALIS:1;
		unsigned char IOAHIS:1;
		unsigned char :1;
		unsigned char IOBHIS:1;
		unsigned char IOCLIS:1;
		unsigned char IOCHIS:1;
		unsigned char IODIS:1;
		unsigned char IOEIS:1;
	};
} __IOICRbits_t;
extern volatile __IOICRbits_t __at(IOICR_ADDR) IOICRbits;

#define IOALIS            IOICRbits.IOALIS              /* bit 0 */
#define IOAHIS            IOICRbits.IOAHIS              /* bit 1 */
#define IOBHIS            IOICRbits.IOBHIS              /* bit 3 */
#define IOCLIS            IOICRbits.IOCLIS              /* bit 4 */
#define IOCHIS            IOICRbits.IOCHIS              /* bit 5 */
#define IODIS             IOICRbits.IODIS              /* bit 6 */
#define IOEIS             IOICRbits.IOEIS              /* bit 7 */

// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0:1;
		unsigned char TC0CKPS1:1;	
		unsigned char TC0CKPS2:1;	
		unsigned char TC0CKS0:1;
		unsigned char TC0CKS1:1;	
		unsigned char :1;
		unsigned char TC0MOD:1;	
		unsigned char TC0EN:1;
	};
} __T0CRbits_t;
extern volatile __T0CRbits_t __at(T0CR_ADDR) T0CRbits;

#define TC0CKPS0        T0CRbits.TC0CKPS0           /* bit 0 */
#define TC0CKPS1        T0CRbits.TC0CKPS1           /* bit 1 */
#define TC0CKPS2        T0CRbits.TC0CKPS2           /* bit 2 */
#define TC0CKS0         T0CRbits.TC0CKS0            /* bit 3 */
#define TC0CKS1         T0CRbits.TC0CKS1            /* bit 4 */
#define TC0MOD          T0CRbits.TC0MOD             /* bit 6 */
#define TC0EN           T0CRbits.TC0EN              /* bit 7 */

// ----- TC0CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CL0:1;
		unsigned char TC0CL1:1;	
		unsigned char TC0CL2:1;	
		unsigned char TC0CL3:1;
		unsigned char TC0CL4:1;	
		unsigned char TC0CL5:1;
		unsigned char TC0CL6:1;	
		unsigned char TC0CL7:1;
	};
} __TC0CLbits_t;
extern volatile __TC0CLbits_t __at(TC0CL_ADDR) TC0CLbits;

#define TC0CL0          TC0CLbits.TC0CL0            /* bit 0 */
#define TC0CL1          TC0CLbits.TC0CL1            /* bit 1 */
#define TC0CL2          TC0CLbits.TC0CL2            /* bit 2 */
#define TC0CL3          TC0CLbits.TC0CL3            /* bit 3 */
#define TC0CL4          TC0CLbits.TC0CL4            /* bit 4 */
#define TC0CL5          TC0CLbits.TC0CL5            /* bit 5 */
#define TC0CL6          TC0CLbits.TC0CL6            /* bit 6 */
#define TC0CL7          TC0CLbits.TC0CL7            /* bit 7 */

// ----- TC0CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CH0:1;
		unsigned char TC0CH1:1;	
		unsigned char TC0CH2:1;	
		unsigned char TC0CH3:1;
		unsigned char TC0CH4:1;	
		unsigned char TC0CH5:1;
		unsigned char TC0CH6:1;	
		unsigned char TC0CH7:1;
	};
} __TC0CHbits_t;
extern volatile __TC0CHbits_t __at(TC0CH_ADDR) TC0CHbits;

#define TC0CH0          TC0CHbits.TC0CH0            /* bit 0 */
#define TC0CH1          TC0CHbits.TC0CH1            /* bit 1 */
#define TC0CH2          TC0CHbits.TC0CH2            /* bit 2 */
#define TC0CH3          TC0CHbits.TC0CH3            /* bit 3 */
#define TC0CH4          TC0CHbits.TC0CH4            /* bit 4 */
#define TC0CH5          TC0CHbits.TC0CH5            /* bit 5 */
#define TC0CH6          TC0CHbits.TC0CH6            /* bit 6 */
#define TC0CH7          TC0CHbits.TC0CH7            /* bit 7 */

// ----- T1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CKPS0:1;
		unsigned char TC1CKPS1:1;	
		unsigned char TC1CKPS2:1;	
		unsigned char TC1CKS0:1;
		unsigned char TC1CKS1:1;	
		unsigned char :1;
		unsigned char TC1MOD:1;	
		unsigned char TC1EN:1;
	};
} __T1CRbits_t;
extern volatile __T1CRbits_t __at(T1CR_ADDR) T1CRbits;

#define TC1CKPS0        T1CRbits.TC1CKPS0           /* bit 0 */
#define TC1CKPS1        T1CRbits.TC1CKPS1           /* bit 1 */
#define TC1CKPS2        T1CRbits.TC1CKPS2           /* bit 2 */
#define TC1CKS0         T1CRbits.TC1CKS0            /* bit 3 */
#define TC1CKS1         T1CRbits.TC1CKS1            /* bit 4 */
#define TC1MOD          T1CRbits.TC1MOD             /* bit 6 */
#define TC1EN           T1CRbits.TC1EN              /* bit 7 */

// ----- TC1CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CL0:1;
		unsigned char TC1CL1:1;	
		unsigned char TC1CL2:1;	
		unsigned char TC1CL3:1;
		unsigned char TC1CL4:1;	
		unsigned char TC1CL5:1;
		unsigned char TC1CL6:1;	
		unsigned char TC1CL7:1;
	};
} __TC1CLbits_t;
extern volatile __TC1CLbits_t __at(TC1CL_ADDR) TC1CLbits;

#define TC1CL0          TC1CLbits.TC1CL0            /* bit 0 */
#define TC1CL1          TC1CLbits.TC1CL1            /* bit 1 */
#define TC1CL2          TC1CLbits.TC1CL2            /* bit 2 */
#define TC1CL3          TC1CLbits.TC1CL3            /* bit 3 */
#define TC1CL4          TC1CLbits.TC1CL4            /* bit 4 */
#define TC1CL5          TC1CLbits.TC1CL5            /* bit 5 */
#define TC1CL6          TC1CLbits.TC1CL6            /* bit 6 */
#define TC1CL7          TC1CLbits.TC1CL7            /* bit 7 */

// ----- TC1CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CH0:1;
		unsigned char TC1CH1:1;	
		unsigned char TC1CH2:1;	
		unsigned char TC1CH3:1;
		unsigned char TC1CH4:1;	
		unsigned char TC1CH5:1;
		unsigned char TC1CH6:1;	
		unsigned char TC1CH7:1;
	};
} __TC1CHbits_t;
extern volatile __TC1CHbits_t __at(TC1CH_ADDR) TC1CHbits;

#define TC1CH0          TC1CHbits.TC1CH0            /* bit 0 */
#define TC1CH1          TC1CHbits.TC1CH1            /* bit 1 */
#define TC1CH2          TC1CHbits.TC1CH2            /* bit 2 */
#define TC1CH3          TC1CHbits.TC1CH3            /* bit 3 */
#define TC1CH4          TC1CHbits.TC1CH4            /* bit 4 */
#define TC1CH5          TC1CHbits.TC1CH5            /* bit 5 */
#define TC1CH6          TC1CHbits.TC1CH6            /* bit 6 */
#define TC1CH7          TC1CHbits.TC1CH7            /* bit 7 */

// ----- TC2CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CL0:1;
		unsigned char TC2CL1:1;	
		unsigned char TC2CL2:1;	
		unsigned char TC2CL3:1;
		unsigned char TC2CL4:1;	
		unsigned char TC2CL5:1;
		unsigned char TC2CL6:1;	
		unsigned char TC2CL7:1;
	};
} __TC2CLbits_t;
extern volatile __TC2CLbits_t __at(TC2CL_ADDR) TC2CLbits;

#define TC2CL0          TC2CLbits.TC2CL0            /* bit 0 */
#define TC2CL1          TC2CLbits.TC2CL1            /* bit 1 */
#define TC2CL2          TC2CLbits.TC2CL2            /* bit 2 */
#define TC2CL3          TC2CLbits.TC2CL3            /* bit 3 */
#define TC2CL4          TC2CLbits.TC2CL4            /* bit 4 */
#define TC2CL5          TC2CLbits.TC2CL5            /* bit 5 */
#define TC2CL6          TC2CLbits.TC2CL6            /* bit 6 */
#define TC2CL7          TC2CLbits.TC2CL7            /* bit 7 */

// ----- TC2CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CH0:1;
		unsigned char TC2CH1:1;	
		unsigned char TC2CH2:1;	
		unsigned char TC2CH3:1;
		unsigned char TC2CH4:1;	
		unsigned char TC2CH5:1;
		unsigned char TC2CH6:1;	
		unsigned char TC2CH7:1;
	};
} __TC2CHbits_t;
extern volatile __TC2CHbits_t __at(TC2CH_ADDR) TC2CHbits;

#define TC2CH0          TC2CHbits.TC2CH0            /* bit 0 */
#define TC2CH1          TC2CHbits.TC2CH1            /* bit 1 */
#define TC2CH2          TC2CHbits.TC2CH2            /* bit 2 */
#define TC2CH3          TC2CHbits.TC2CH3            /* bit 3 */
#define TC2CH4          TC2CHbits.TC2CH4            /* bit 4 */
#define TC2CH5          TC2CHbits.TC2CH5            /* bit 5 */
#define TC2CH6          TC2CHbits.TC2CH6            /* bit 6 */
#define TC2CH7          TC2CHbits.TC2CH7            /* bit 7 */

// ----- I2CADDR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char I2CADDR0:1;
		unsigned char I2CADDR1:1;
		unsigned char I2CADDR2:1;	
		unsigned char I2CADDR3:1;	
		unsigned char I2CADDR4:1;
		unsigned char I2CADDR5:1;
		unsigned char I2CADDR6:1;
		unsigned char I2CADDR7:1;	
	};
} __I2CADDRbits_t;
extern volatile __I2CADDRbits_t __at(I2CADDR_ADDR) I2CADDRbits;

#define I2CADDR0          I2CADDRbits.I2CADDR0            /* bit 0 */
#define I2CADDR1          I2CADDRbits.I2CADDR1            /* bit 1 */
#define I2CADDR2          I2CADDRbits.I2CADDR2            /* bit 2 */
#define I2CADDR3          I2CADDRbits.I2CADDR3            /* bit 3 */
#define I2CADDR4          I2CADDRbits.I2CADDR4            /* bit 4 */
#define I2CADDR5          I2CADDRbits.I2CADDR5            /* bit 5 */
#define I2CADDR6          I2CADDRbits.I2CADDR6            /* bit 6 */
#define I2CADDR7          I2CADDRbits.I2CADDR7            /* bit 7 */

// ----- I2CCON Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A0:1;
		unsigned char A1:1;
        unsigned char A2:1;        
		unsigned char NACK:1;	
		unsigned char BF:1;
		unsigned char D_A:1;
		unsigned char R_W:1;
		unsigned char I2CEN:1;	
	};
} __I2CCONbits_t;
extern volatile __I2CCONbits_t __at(I2CCON_ADDR) I2CCONbits;

#define A0             I2CCONbits.A0            /* bit 0 */
#define A1             I2CCONbits.A1             /* bit 1 */
#define A2             I2CCONbits.A2             /* bit 1 */
#define NACK           I2CCONbits.NACK             /* bit 3 */
#define BF             I2CCONbits.BF               /* bit 4 */
#define D_A            I2CCONbits.D_A              /* bit 5 */
#define R_W            I2CCONbits.R_W              /* bit 6 */
#define I2CEN          I2CCONbits.I2CEN            /* bit 7 */

// ----- I2CBUF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char I2CBUF0:1;
		unsigned char I2CBUF1:1;
		unsigned char I2CBUF2:1;	
		unsigned char I2CBUF3:1;	
		unsigned char I2CBUF4:1;
		unsigned char I2CBUF5:1;
		unsigned char I2CBUF6:1;
		unsigned char I2CBUF7:1;	
	};
} __I2CBUFbits_t;
extern volatile __I2CBUFbits_t __at(I2CBUF_ADDR) I2CBUFbits;

#define I2CBUF0          I2CBUFbits.I2CBUF0            /* bit 0 */
#define I2CBUF1          I2CBUFbits.I2CBUF1            /* bit 1 */
#define I2CBUF2          I2CBUFbits.I2CBUF2            /* bit 2 */
#define I2CBUF3          I2CBUFbits.I2CBUF3            /* bit 3 */
#define I2CBUF4          I2CBUFbits.I2CBUF4            /* bit 4 */
#define I2CBUF5          I2CBUFbits.I2CBUF5            /* bit 5 */
#define I2CBUF6          I2CBUFbits.I2CBUF6            /* bit 6 */
#define I2CBUF7          I2CBUFbits.I2CBUF7            /* bit 7 */

// ----- EECON1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char EEWEN:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char EEMOD0:1;
		unsigned char EEMOD1:1;
		unsigned char EEMOD2:1;
		unsigned char EEMOD3:1;
	};
} __EECON1bits_t;
extern volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;

#define EEWEN          EECON1bits.EEWEN           /* bit 0 */
#define EEMOD0         EECON1bits.EEMOD0      	 /* bit 4 */
#define EEMOD1         EECON1bits.EEMOD1      	 /* bit 5 */
#define EEMOD2         EECON1bits.EEMOD2      	 /* bit 6 */
#define EEMOD3         EECON1bits.EEMOD3      	 /* bit 7 */

// ----- EECON2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char EEWE:1;
		unsigned char EELOCK1:1;
		unsigned char EELOCK2:1;
		unsigned char EELOCK3:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char WERR:1;
	};
} __EECON2bits_t;
extern volatile __EECON2bits_t __at(EECON2_ADDR) EECON2bits;

#define EEWE         EECON2bits.EEWE         /* bit 0 */
#define EELOCK1      EECON2bits.EELOCK1      /* bit 1 */
#define EELOCK2      EECON2bits.EELOCK2      /* bit 2 */
#define EELOCK3      EECON2bits.EELOCK3      /* bit 3 */
#define WERR         EECON2bits.WERR      /* bit 3 */

// ----- IRCCAL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRCCAL0:1;
		unsigned char IRCCAL1:1;	
		unsigned char IRCCAL2:1;	
		unsigned char IRCCAL3:1;
		unsigned char IRCCAL4:1;	
		unsigned char IRCCAL5:1;
		unsigned char IRCCAL6:1;	
		unsigned char :1;
	};
} __IRCCALbits_t;
extern volatile __IRCCALbits_t __at(IRCCAL_ADDR) IRCCALbits;

#define IRCCAL0         IRCCALbits.IRCCAL0          /* bit 0 */
#define IRCCAL1         IRCCALbits.IRCCAL1          /* bit 1 */
#define IRCCAL2         IRCCALbits.IRCCAL2          /* bit 2 */
#define IRCCAL3         IRCCALbits.IRCCAL3          /* bit 3 */
#define IRCCAL4         IRCCALbits.IRCCAL4          /* bit 4 */
#define IRCCAL5         IRCCALbits.IRCCAL5          /* bit 5 */
#define IRCCAL6         IRCCALbits.IRCCAL6          /* bit 6 */

#endif