#ifndef __M8P840_H__
#define __M8P840_H__

//
// Register addresses.
//
#define LCDCR0_ADDR         0x01A0
#define LCDCR1_ADDR         0x01A1
#define LCDCR2_ADDR         0x01A2
#define LCDCR3_ADDR         0x01A3

#define SEGIOSH_ADDR        0x01AA
#define SEGIOSG_ADDR        0x01AB
#define SEGIOSF_ADDR        0x01AC
#define SEGIOSE_ADDR        0x01AD
#define SEGIOSD_ADDR        0x01AE
#define SEGIOSC_ADDR        0x01AF

#define INDF0_ADDR          0x01B0
#define FSR0_ADDR           0x01B1
#define TXCR_ADDR         	0x01B2
#define TXREG_ADDR          0x01B3
#define RXCR_ADDR        	  0x01B4
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
#define RFCCR_ADDR      	  0x01BF

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
#define IOF_ADDR            0x01D2
#define OEF_ADDR            0x01D3
#define IOG_ADDR            0x01D4
#define OEG_ADDR            0x01D5
#define IOH_ADDR            0x01D6
#define OEH_ADDR            0x01D7

#define PWM0CR_ADDR         0x01D8
#define PWM0D_ADDR          0x01D9 
#define PWM1CR_ADDR         0x01DA
#define PWM1D_ADDR          0x01DB 
#define PWM2CR_ADDR         0x01DC
#define PWM2D_ADDR          0x01DD 
#define T2CR_ADDR           0x01DE
#define T2GCR_ADDR          0x01DF

#define PUA_ADDR            0x01E0
#define PUB_ADDR            0x01E1
#define PUC_ADDR            0x01E2
#define IOBICR_ADDR         0x01E3
#define IOCICR_ADDR         0x01E4
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
#define EECON1_ADDR					0x01F3
#define EECON2_ADDR					0x01F4
#define CMPC0_ADDR          0x01F5
#define CMPC1_ADDR          0x01F6
#define CMPC2_ADDR          0x01F7

#define IRCCAL_ADDR         0x01FC
#define VREFCAL_ADDR        0x01FA

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
#define LCDDS37_ADDR         0x0195
#define LCDDS38_ADDR         0x0196
#define LCDDS39_ADDR         0x0197
#define LCDDS40_ADDR         0x0198
#define LCDDS41_ADDR         0x0199
#define LCDDS42_ADDR         0x019A
#define LCDDS43_ADDR         0x019B
#define LCDDS44_ADDR         0x019C
#define LCDDS45_ADDR         0x019D
#define LCDDS46_ADDR         0x019E
#define LCDDS47_ADDR         0x019F



//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (LCDCR0_ADDR)        LCDCR0;
extern __sfr __at (LCDCR1_ADDR)        LCDCR1;
extern __sfr __at (LCDCR2_ADDR)        LCDCR2;
extern __sfr __at (LCDCR3_ADDR)        LCDCR3;

extern __sfr __at (SEGIOSH_ADDR)        SEGIOSH;
extern __sfr __at (SEGIOSG_ADDR)        SEGIOSG;
extern __sfr __at (SEGIOSF_ADDR)        SEGIOSF;
extern __sfr __at (SEGIOSE_ADDR)        SEGIOSE;
extern __sfr __at (SEGIOSD_ADDR)        SEGIOSD;
extern __sfr __at (SEGIOSC_ADDR)        SEGIOSC;

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
extern __sfr __at (RFCCR_ADDR)      	 RFCCR;

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
extern __sfr __at (IOF_ADDR)           IOF;
extern __sfr __at (OEF_ADDR)           OEF;
extern __sfr __at (IOG_ADDR)           IOG;
extern __sfr __at (OEG_ADDR)           OEG;
extern __sfr __at (IOH_ADDR)           IOH;
extern __sfr __at (OEH_ADDR)           OEH;

extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0D_ADDR)         PWM0D; 
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1D_ADDR)         PWM1D; 
extern __sfr __at (PWM2CR_ADDR)        PWM2CR;
extern __sfr __at (PWM2D_ADDR)         PWM2D;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (T2GCR_ADDR)         T2GCR;

extern __sfr __at (PUA_ADDR)           PUA;
extern __sfr __at (PUB_ADDR)           PUB;
extern __sfr __at (PUC_ADDR)           PUC;
extern __sfr __at (IOBICR_ADDR)        IOBICR;
extern __sfr __at (IOCICR_ADDR)        IOCICR;
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
extern __sfr __at (CMPC0_ADDR)         CMPC0;
extern __sfr __at (CMPC1_ADDR)         CMPC1;
extern __sfr __at (CMPC2_ADDR)         CMPC2;

extern __sfr __at (IRCCAL_ADDR)        IRCCAL;
extern __sfr __at (VREFCAL_ADDR)       VREFCAL;

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
extern __sfr __at (LCDDS37_ADDR)        LCDDS37;
extern __sfr __at (LCDDS38_ADDR)        LCDDS38;
extern __sfr __at (LCDDS39_ADDR)        LCDDS39;
extern __sfr __at (LCDDS40_ADDR)        LCDDS40;
extern __sfr __at (LCDDS41_ADDR)        LCDDS41;
extern __sfr __at (LCDDS42_ADDR)        LCDDS42;
extern __sfr __at (LCDDS43_ADDR)        LCDDS43;
extern __sfr __at (LCDDS44_ADDR)        LCDDS44;
extern __sfr __at (LCDDS45_ADDR)        LCDDS45;
extern __sfr __at (LCDDS46_ADDR)        LCDDS46;
extern __sfr __at (LCDDS47_ADDR)        LCDDS47;
//==========================================================================
//
//	Configuration Bits
//
//==========================================================================

// ----- LCDCR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLCD1S0 : 1;
		unsigned char VLCD1S1 : 1;
		unsigned char VLCD2S : 1;
		unsigned char VLCD3S : 1;
		unsigned char BIAS : 1;
		unsigned char LCDVM : 1;
		unsigned char LCDM : 1;
		unsigned char LCDEN : 1;
	};
} __LCDCR0bits_t;
extern volatile __LCDCR0bits_t __at(LCDCR0_ADDR) LCDCR0bits;

#define VLCD1S0               LCDCR0bits.VLCD1S0              /* bit 0 */
#define VLCD1S1               LCDCR0bits.VLCD1S1              /* bit 1 */
#define VLCD2S                LCDCR0bits.VLCD2S             /* bit 2 */
#define VLCD3S                LCDCR0bits.VLCD3S               /* bit 3 */
#define BIAS                  LCDCR0bits.BIAS              /* bit 4 */
#define LCDVM                 LCDCR0bits.LCDVM              /* bit 5 */
#define LCDM                  LCDCR0bits.LCDM              /* bit 6 */
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
		unsigned char VLDOS3 : 1;
		unsigned char LDOEN : 1;
		unsigned char lcdrs : 1;
		unsigned char spden : 1;
		unsigned char ovlapen : 1;
	};
} __LCDCR2bits_t;
extern volatile __LCDCR2bits_t __at(LCDCR2_ADDR) LCDCR2bits;

#define VLDOS0               LCDCR2bits.VLDOS0              /* bit 0 */
#define VLDOS1               LCDCR2bits.VLDOS1              /* bit 1 */
#define VLDOS2               LCDCR2bits.VLDOS2              /* bit 2 */
#define VLDOS3               LCDCR2bits.VLDOS3              /* bit 3 */
#define LDOEN                LCDCR2bits.LDOEN              /* bit 4 */
#define lcdrs                LCDCR2bits.lcdrs              /* bit 5 */
#define spden                LCDCR2bits.spden              /* bit 6 */
#define ovlapen              LCDCR2bits.ovlapen              /* bit 7 */

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
#define BRIGHT4                LCDCR3bits.BRIGHT4              /* bit 4 */
#define LEDPOL                LCDCR3bits.LEDPOL              /* bit 6 */
#define LEDEN              LCDCR3bits.LEDEN              /* bit 7 */

// ----- SEGIOSH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSH0 : 1;
		unsigned char SEGIOSH1 : 1;
		unsigned char SEGIOSH2 : 1;
		unsigned char SEGIOSH3 : 1;
		unsigned char SEGIOSH4 : 1;
		unsigned char SEGIOSH5 : 1;
		unsigned char SEGIOSH6 : 1;
		unsigned char SEGIOSH7 : 1;
	};
} __SEGIOSHbits_t;
extern volatile __SEGIOSHbits_t __at(SEGIOSH_ADDR) SEGIOSHbits;

#define SEGIOSH0               SEGIOSHbits.SEGIOSH0              /* bit 0 */
#define SEGIOSH1               SEGIOSHbits.SEGIOSH1              /* bit 1 */
#define SEGIOSH2               SEGIOSHbits.SEGIOSH2              /* bit 2 */
#define SEGIOSH3               SEGIOSHbits.SEGIOSH3              /* bit 3 */
#define SEGIOSH4               SEGIOSHbits.SEGIOSH4              /* bit 4 */
#define SEGIOSH5               SEGIOSHbits.SEGIOSH5              /* bit 5 */
#define SEGIOSH6               SEGIOSHbits.SEGIOSH6              /* bit 6 */
#define SEGIOSH7               SEGIOSHbits.SEGIOSH7              /* bit 7 */

// ----- SEGIOSG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSG0 : 1;
		unsigned char SEGIOSG1 : 1;
		unsigned char SEGIOSG2 : 1;
		unsigned char SEGIOSG3 : 1;
		unsigned char SEGIOSG4 : 1;
		unsigned char SEGIOSG5 : 1;
		unsigned char SEGIOSG6 : 1;
		unsigned char SEGIOSG7 : 1;
	};
} __SEGIOSGbits_t;
extern volatile __SEGIOSGbits_t __at(SEGIOSG_ADDR) SEGIOSGbits;

#define SEGIOSG0               SEGIOSGbits.SEGIOSG0              /* bit 0 */
#define SEGIOSG1               SEGIOSGbits.SEGIOSG1              /* bit 1 */
#define SEGIOSG2               SEGIOSGbits.SEGIOSG2              /* bit 2 */
#define SEGIOSG3               SEGIOSGbits.SEGIOSG3              /* bit 3 */
#define SEGIOSG4               SEGIOSGbits.SEGIOSG4              /* bit 4 */
#define SEGIOSG5               SEGIOSGbits.SEGIOSG5              /* bit 5 */
#define SEGIOSG6               SEGIOSGbits.SEGIOSG6              /* bit 6 */
#define SEGIOSG7               SEGIOSGbits.SEGIOSG7              /* bit 7 */

// ----- SEGIOSF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSF0 : 1;
		unsigned char SEGIOSF1 : 1;
		unsigned char SEGIOSF2 : 1;
		unsigned char SEGIOSF3 : 1;
		unsigned char SEGIOSF4 : 1;
		unsigned char SEGIOSF5 : 1;
		unsigned char SEGIOSF6 : 1;
		unsigned char SEGIOSF7 : 1;
	};
} __SEGIOSFbits_t;
extern volatile __SEGIOSFbits_t __at(SEGIOSF_ADDR) SEGIOSFbits;

#define SEGIOSF0               SEGIOSFbits.SEGIOSF0              /* bit 0 */
#define SEGIOSF1               SEGIOSFbits.SEGIOSF1              /* bit 1 */
#define SEGIOSF2               SEGIOSFbits.SEGIOSF2              /* bit 2 */
#define SEGIOSF3               SEGIOSFbits.SEGIOSF3              /* bit 3 */
#define SEGIOSF4               SEGIOSFbits.SEGIOSF4              /* bit 4 */
#define SEGIOSF5               SEGIOSFbits.SEGIOSF5              /* bit 5 */
#define SEGIOSF6               SEGIOSFbits.SEGIOSF6              /* bit 6 */
#define SEGIOSF7               SEGIOSFbits.SEGIOSF7              /* bit 7 */

// ----- SEGIOSE Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSE0 : 1;
		unsigned char SEGIOSE1 : 1;
		unsigned char SEGIOSE2 : 1;
		unsigned char SEGIOSE3 : 1;
		unsigned char SEGIOSE4 : 1;
		unsigned char SEGIOSE5 : 1;
		unsigned char SEGIOSE6 : 1;
		unsigned char SEGIOSE7 : 1;
	};
} __SEGIOSEbits_t;
extern volatile __SEGIOSEbits_t __at(SEGIOSE_ADDR) SEGIOSEbits;

#define SEGIOSE0               SEGIOSEbits.SEGIOSE0              /* bit 0 */
#define SEGIOSE1               SEGIOSEbits.SEGIOSE1              /* bit 1 */
#define SEGIOSE2               SEGIOSEbits.SEGIOSE2              /* bit 2 */
#define SEGIOSE3               SEGIOSEbits.SEGIOSE3              /* bit 3 */
#define SEGIOSE4               SEGIOSEbits.SEGIOSE4              /* bit 4 */
#define SEGIOSE5               SEGIOSEbits.SEGIOSE5              /* bit 5 */
#define SEGIOSE6               SEGIOSEbits.SEGIOSE6              /* bit 6 */
#define SEGIOSE7               SEGIOSEbits.SEGIOSE7              /* bit 7 */

// ----- SEGIOSD Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSD0 : 1;
		unsigned char SEGIOSD1 : 1;
		unsigned char SEGIOSD2 : 1;
		unsigned char SEGIOSD3 : 1;
		unsigned char SEGIOSD4 : 1;
		unsigned char SEGIOSD5 : 1;
		unsigned char SEGIOSD6 : 1;
		unsigned char SEGIOSD7 : 1;
	};
} __SEGIOSDbits_t;
extern volatile __SEGIOSDbits_t __at(SEGIOSD_ADDR) SEGIOSDbits;

#define SEGIOSD0               SEGIOSDbits.SEGIOSD0              /* bit 0 */
#define SEGIOSD1               SEGIOSDbits.SEGIOSD1              /* bit 1 */
#define SEGIOSD2               SEGIOSDbits.SEGIOSD2              /* bit 2 */
#define SEGIOSD3               SEGIOSDbits.SEGIOSD3              /* bit 3 */
#define SEGIOSD4               SEGIOSDbits.SEGIOSD4              /* bit 4 */
#define SEGIOSD5               SEGIOSDbits.SEGIOSD5              /* bit 5 */
#define SEGIOSD6               SEGIOSDbits.SEGIOSD6              /* bit 6 */
#define SEGIOSD7               SEGIOSDbits.SEGIOSD7              /* bit 7 */

// ----- SEGIOSC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SEGIOSC0 : 1;
		unsigned char SEGIOSC1 : 1;
		unsigned char SEGIOSC2 : 1;
		unsigned char SEGIOSC3 : 1;
		unsigned char SEGIOSC4 : 1;
		unsigned char SEGIOSC5 : 1;
		unsigned char SEGIOSC6 : 1;
		unsigned char SEGIOSC7 : 1;
	};
} __SEGIOSCbits_t;
extern volatile __SEGIOSCbits_t __at(SEGIOSC_ADDR) SEGIOSCbits;

#define SEGIOSC0               SEGIOSCbits.SEGIOSC0              /* bit 0 */
#define SEGIOSC1               SEGIOSCbits.SEGIOSC1              /* bit 1 */
#define SEGIOSC2               SEGIOSCbits.SEGIOSC2              /* bit 2 */
#define SEGIOSC3               SEGIOSCbits.SEGIOSC3              /* bit 3 */
#define SEGIOSC4               SEGIOSCbits.SEGIOSC4              /* bit 4 */
#define SEGIOSC5               SEGIOSCbits.SEGIOSC5              /* bit 5 */
#define SEGIOSC6               SEGIOSCbits.SEGIOSC6              /* bit 6 */
#define SEGIOSC7               SEGIOSCbits.SEGIOSC7              /* bit 7 */

// ----- INDF0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF00 : 1;
		unsigned char INDF01 : 1;
		unsigned char INDF02 : 1;
		unsigned char INDF03 : 1;
		unsigned char INDF04 : 1;
		unsigned char INDF05 : 1;
		unsigned char INDF06 : 1;
		unsigned char INDF07 : 1;
	};
} __INDF0bits_t;
extern volatile __INDF0bits_t __at(INDF0_ADDR) INDF0bits;

#define INDF00               INDF0bits.INDF00              /* bit 0 */
#define INDF01               INDF0bits.INDF01              /* bit 1 */
#define INDF02               INDF0bits.INDF02              /* bit 2 */
#define INDF03               INDF0bits.INDF03              /* bit 3 */
#define INDF04               INDF0bits.INDF04              /* bit 4 */
#define INDF05               INDF0bits.INDF05              /* bit 5 */
#define INDF06               INDF0bits.INDF06              /* bit 6 */
#define INDF07               INDF0bits.INDF07              /* bit 7 */

// ----- FSR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FSR00 : 1;
		unsigned char FSR01 : 1;
		unsigned char FSR02 : 1;
		unsigned char FSR03 : 1;
		unsigned char FSR04 : 1;
		unsigned char FSR05 : 1;
		unsigned char FSR06 : 1;
		unsigned char FSR07 : 1;
	};
} __FSR0bits_t;
extern volatile __FSR0bits_t __at(FSR0_ADDR) FSR0bits;

#define FSR00               FSR0bits.FSR00              /* bit 0 */
#define FSR01               FSR0bits.FSR01              /* bit 1 */
#define FSR02               FSR0bits.FSR02              /* bit 2 */
#define FSR03               FSR0bits.FSR03              /* bit 3 */
#define FSR04               FSR0bits.FSR04              /* bit 4 */
#define FSR05               FSR0bits.FSR05              /* bit 5 */
#define FSR06               FSR0bits.FSR06              /* bit 6 */
#define FSR07               FSR0bits.FSR07              /* bit 7 */

// ----- TXCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TXD9 : 1;
		unsigned char SPD0 : 1;
		unsigned char SPD1 : 1;
		unsigned char SLAVE : 1;
		unsigned char TX9 : 1;
		unsigned char SYNC : 1;
		unsigned char TMCLR : 1;
		unsigned char TXEN : 1;
	};
} __TXCRbits_t;
extern volatile __TXCRbits_t __at(TXCR_ADDR) TXCRbits;

#define TXD9               TXCRbits.TXD9              /* bit 0 */
#define SPD0               TXCRbits.SPD0              /* bit 1 */
#define SPD1               TXCRbits.SPD1              /* bit 2 */
#define SLAVE              TXCRbits.SLAVE             /* bit 3 */
#define TX9                TXCRbits.TX9               /* bit 4 */
#define SYNC               TXCRbits.SYNC              /* bit 5 */
#define TMCLR              TXCRbits.TMCLR             /* bit 6 */
#define TXEN               TXCRbits.TXEN              /* bit 7 */

// ----- TXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TXD0 : 1;
		unsigned char TXD1 : 1;
		unsigned char TXD2 : 1;
		unsigned char TXD3 : 1;
		unsigned char TXD4 : 1;
		unsigned char TXD5 : 1;
		unsigned char TXD6 : 1;
		unsigned char TXD7 : 1;
	};
} __TXREGbits_t;
extern volatile __TXREGbits_t __at(TXREG_ADDR) TXREGbits;

#define TXD0               TXREGbits.TXD0              /* bit 0 */
#define TXD1               TXREGbits.TXD1              /* bit 1 */
#define TXD2               TXREGbits.TXD2              /* bit 2 */
#define TXD3               TXREGbits.TXD3              /* bit 3 */
#define TXD4               TXREGbits.TXD4              /* bit 4 */
#define TXD5               TXREGbits.TXD5              /* bit 5 */
#define TXD6               TXREGbits.TXD6              /* bit 6 */
#define TXD7               TXREGbits.TXD7              /* bit 7 */

// ----- RXCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RXD9 : 1;
		unsigned char FRER : 1;
		unsigned char RXOVF : 1;
		unsigned char SREN : 1;
		unsigned char RX9 : 1;
		unsigned char : 1;
		unsigned char CKPS : 1;
		unsigned char RXEN : 1;
	};
} __RXCRbits_t;
extern volatile __RXCRbits_t __at(RXCR_ADDR) RXCRbits;

#define RXD9               RXCRbits.RXD9              /* bit 0 */
#define FRER               RXCRbits.FRER              /* bit 1 */
#define RXOVF              RXCRbits.RXOVF             /* bit 2 */
#define SREN               RXCRbits.SREN              /* bit 3 */
#define RX9                RXCRbits.RX9               /* bit 4 */
#define CKPS               RXCRbits.CKPS              /* bit 6 */
#define RXEN               RXCRbits.RXEN              /* bit 7 */

// ----- RXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RXD0 : 1;
		unsigned char RXD1 : 1;
		unsigned char RXD2 : 1;
		unsigned char RXD3 : 1;
		unsigned char RXD4 : 1;
		unsigned char RXD5 : 1;
		unsigned char RXD6 : 1;
		unsigned char RXD7 : 1;
	};
} __RXREGbits_t;
extern volatile __RXREGbits_t __at(RXREG_ADDR) RXREGbits;

#define RXD0               RXREGbits.RXD0              /* bit 0 */
#define RXD1               RXREGbits.RXD1              /* bit 1 */
#define RXD2               RXREGbits.RXD2              /* bit 2 */
#define RXD3               RXREGbits.RXD3              /* bit 3 */
#define RXD4               RXREGbits.RXD4              /* bit 4 */
#define RXD5               RXREGbits.RXD5              /* bit 5 */
#define RXD6               RXREGbits.RXD6              /* bit 6 */
#define RXD7               RXREGbits.RXD7              /* bit 7 */

// ----- BRGDH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRGD8 : 1;
		unsigned char BRGD9 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char SBYTE : 1;
	};
} __BRGDHbits_t;
extern volatile __BRGDHbits_t __at(BRGDH_ADDR) BRGDHbits;

#define BRGD8               BRGDHbits.BRGD8              /* bit 0 */
#define BRGD9               BRGDHbits.BRGD9              /* bit 1 */
#define SBYTE               BRGDHbits.SBYTE              /* bit 7 */

// ----- BRGDL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRGD0 : 1;
		unsigned char BRGD1 : 1;
		unsigned char BRGD2 : 1;
		unsigned char BRGD3 : 1;
		unsigned char BRGD4 : 1;
		unsigned char BRGD5 : 1;
		unsigned char BRGD6 : 1;
		unsigned char BRGD7 : 1;
	};
} __BRGDLbits_t;
extern volatile __BRGDLbits_t __at(BRGDL_ADDR) BRGDLbits;

#define BRGD0               BRGDLbits.BRGD0              /* bit 0 */
#define BRGD1               BRGDLbits.BRGD1              /* bit 1 */
#define BRGD2               BRGDLbits.BRGD2              /* bit 2 */
#define BRGD3               BRGDLbits.BRGD3              /* bit 3 */
#define BRGD4               BRGDLbits.BRGD4              /* bit 4 */
#define BRGD5               BRGDLbits.BRGD5              /* bit 5 */
#define BRGD6               BRGDLbits.BRGD6              /* bit 6 */
#define BRGD7               BRGDLbits.BRGD7              /* bit 7 */

// ----- INDF1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF10 : 1;
		unsigned char INDF11 : 1;
		unsigned char INDF12 : 1;
		unsigned char INDF13 : 1;
		unsigned char INDF14 : 1;
		unsigned char INDF15 : 1;
		unsigned char INDF16 : 1;
		unsigned char INDF17 : 1;
	};
} __INDF1bits_t;
extern volatile __INDF1bits_t __at(INDF1_ADDR) INDF1bits;

#define INDF10               INDF1bits.INDF10              /* bit 0 */
#define INDF11               INDF1bits.INDF11              /* bit 1 */
#define INDF12               INDF1bits.INDF12              /* bit 2 */
#define INDF13               INDF1bits.INDF13              /* bit 3 */
#define INDF14               INDF1bits.INDF14              /* bit 4 */
#define INDF15               INDF1bits.INDF15              /* bit 5 */
#define INDF16               INDF1bits.INDF16              /* bit 6 */
#define INDF17               INDF1bits.INDF17              /* bit 7 */

// ----- FSR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FSR10 : 1;
		unsigned char FSR11 : 1;
		unsigned char FSR12 : 1;
		unsigned char FSR13 : 1;
		unsigned char FSR14 : 1;
		unsigned char FSR15 : 1;
		unsigned char FSR16 : 1;
		unsigned char FSR17 : 1;
	};
} __FSR1bits_t;
extern volatile __FSR1bits_t __at(FSR1_ADDR) FSR1bits;

#define FSR10               FSR1bits.FSR10              /* bit 0 */
#define FSR11               FSR1bits.FSR11              /* bit 1 */
#define FSR12               FSR1bits.FSR12              /* bit 2 */
#define FSR13               FSR1bits.FSR13              /* bit 3 */
#define FSR14               FSR1bits.FSR14              /* bit 4 */
#define FSR15               FSR1bits.FSR15              /* bit 5 */
#define FSR16               FSR1bits.FSR16              /* bit 6 */
#define FSR17               FSR1bits.FSR17              /* bit 7 */

// ----- PCL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PCL0 : 1;
		unsigned char PCL1 : 1;
		unsigned char PCL2 : 1;
		unsigned char PCL3 : 1;
		unsigned char PCL4 : 1;
		unsigned char PCL5 : 1;
		unsigned char PCL6 : 1;
		unsigned char PCL7 : 1;
	};
} __PCLbits_t;
extern volatile __PCLbits_t __at(PCL_ADDR) PCLbits;

#define PCL0               PCLbits.PCL0              /* bit 0 */
#define PCL1               PCLbits.PCL1              /* bit 1 */
#define PCL2               PCLbits.PCL2              /* bit 2 */
#define PCL3               PCLbits.PCL3              /* bit 3 */
#define PCL4               PCLbits.PCL4              /* bit 4 */
#define PCL5               PCLbits.PCL5              /* bit 5 */
#define PCL6               PCLbits.PCL6              /* bit 6 */
#define PCL7               PCLbits.PCL7              /* bit 7 */

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
		unsigned char MINT00 :1;
		unsigned char MINT01 :1;
		unsigned char MINT10 :1;
		unsigned char MINT11 :1;	
		unsigned char PD:1;
		unsigned char TO:1;
		unsigned char :1;
		unsigned char GIE:1;
	};
} __OPTIONbits_t;
extern volatile __OPTIONbits_t __at(OPTION_ADDR) OPTIONbits;

#define MINT00              OPTIONbits.MINT00        	   /* bit 0 */
#define MINT01              OPTIONbits.MINT01        	   /* bit 1 */
#define MINT10              OPTIONbits.MINT10        	   /* bit 2 */
#define MINT11              OPTIONbits.MINT11        	   /* bit 3 */
#define PD              OPTIONbits.PD        	   /* bit 4 */
#define TO              OPTIONbits.TO              /* bit 5 */
#define GIE             OPTIONbits.GIE        	   /* bit 7 */

// ----- OSCM Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char STPL:1;
		unsigned char LIRC500K :1;
		unsigned char STPH:1;
		unsigned char CLKM:1;
		unsigned char STOP:1;
		unsigned char HSPDX2:1;	
		unsigned char STBL:1;
		unsigned char STBH:1;	
	};
} __OSCMbits_t;
extern volatile __OSCMbits_t __at(OSCM_ADDR) OSCMbits;

#define STPL            OSCMbits.STPL        	    /* bit 0 */
#define LIRC500K        OSCMbits.LIRC500K        	/* bit 1 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define CLKM            OSCMbits.CLKM               /* bit 3 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */
#define HSPDX2            OSCMbits.HSPDX2        	    /* bit 5 */
#define STBL            OSCMbits.STBL               /* bit 6 */
#define STBH            OSCMbits.STBH        	    /* bit 7 */

// ----- WDTC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char  WDTC0 : 1;
		unsigned char  WDTC1 : 1;
		unsigned char  WDTC2 : 1;
		unsigned char  WDTC3 : 1;
		unsigned char  WDTC4 : 1;
		unsigned char  WDTC5 : 1;
		unsigned char  WDTC6 : 1;
		unsigned char  WDTC7 : 1;
	};
} __WDTCbits_t;
extern volatile __WDTCbits_t __at(WDTC_ADDR) WDTCbits;

#define WDTC0               WDTCbits.WDTC0              /* bit 0 */
#define WDTC1               WDTCbits.WDTC1              /* bit 1 */
#define WDTC2               WDTCbits.WDTC2              /* bit 2 */
#define WDTC3               WDTCbits.WDTC3              /* bit 3 */
#define WDTC4               WDTCbits.WDTC4              /* bit 4 */
#define WDTC5               WDTCbits.WDTC5              /* bit 5 */
#define WDTC6               WDTCbits.WDTC6              /* bit 6 */
#define WDTC7               WDTCbits.WDTC7              /* bit 7 */

// ----- RFCCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RFCH0 : 1;
		unsigned char RFCH1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char RFCH0E : 1;
		unsigned char RFCH1E : 1;
		unsigned char RFCH2E : 1;
		unsigned char : 1;
	};
} __RFCCRbits_t;
extern volatile __RFCCRbits_t __at(RFCCR_ADDR) RFCCRbits;

#define RFCH0                RFCCRbits.RFCH0               /* bit 0 */
#define RFCH1                RFCCRbits.RFCH1               /* bit 1 */
#define RFCH0E               RFCCRbits.RFCH0E              /* bit 4 */
#define RFCH1E               RFCCRbits.RFCH1E              /* bit 5 */
#define RFCH2E               RFCCRbits.RFCH2E              /* bit 6 */

// ----- INDF2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char INDF20 : 1;
		unsigned char INDF21 : 1;
		unsigned char INDF22 : 1;
		unsigned char INDF23 : 1;
		unsigned char INDF24 : 1;
		unsigned char INDF25 : 1;
		unsigned char INDF26 : 1;
		unsigned char INDF27 : 1;
	};
} __INDF2bits_t;
extern volatile __INDF2bits_t __at(INDF2_ADDR) INDF2bits;

#define INDF20               INDF2bits.INDF20              /* bit 0 */
#define INDF21               INDF2bits.INDF21              /* bit 1 */
#define INDF22               INDF2bits.INDF22              /* bit 2 */
#define INDF23               INDF2bits.INDF23              /* bit 3 */
#define INDF24               INDF2bits.INDF24              /* bit 4 */
#define INDF25               INDF2bits.INDF25              /* bit 5 */
#define INDF26               INDF2bits.INDF26              /* bit 6 */
#define INDF27               INDF2bits.INDF27              /* bit 7 */

// ----- HBUF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char HBUF0 : 1;
		unsigned char HBUF1 : 1;
		unsigned char HBUF2 : 1;
		unsigned char HBUF3 : 1;
		unsigned char HBUF4 : 1;
		unsigned char HBUF5 : 1;
		unsigned char HBUF6 : 1;
		unsigned char HBUF7 : 1;
	};
} __HBUFbits_t;
extern volatile __HBUFbits_t __at(HBUF_ADDR) HBUFbits;

#define HBUF0               HBUFbits.HBUF0              /* bit 0 */
#define HBUF1               HBUFbits.HBUF1              /* bit 1 */
#define HBUF2               HBUFbits.HBUF2              /* bit 2 */
#define HBUF3               HBUFbits.HBUF3              /* bit 3 */
#define HBUF4               HBUFbits.HBUF4              /* bit 4 */
#define HBUF5               HBUFbits.HBUF5              /* bit 5 */
#define HBUF6               HBUFbits.HBUF6              /* bit 6 */
#define HBUF7               HBUFbits.HBUF7              /* bit 7 */

// ----- INTCR2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TXIE:1;
		unsigned char RXIE:1;
		unsigned char :1;
		unsigned char  :1;
		unsigned char I2CIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char CMPIE:1;
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define TXIE            INTCR2bits.TXIE       	  /* bit 0 */
#define RXIE            INTCR2bits.RXIE       	  /* bit 1 */
#define I2CIE            INTCR2bits.I2CIE       	  /* bit 4 */
#define CMPIE            INTCR2bits.CMPIE       	  /* bit 7 */

// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char :1;
		unsigned char  :1;
		unsigned char I2CIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char CMPIF:1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define TXIF            INTF2bits.TXIF       	  /* bit 0 */
#define RXIF            INTF2bits.RXIF       	  /* bit 1 */
#define I2CIF            INTF2bits.I2CIF       	  /* bit 4 */
#define CMPIF            INTF2bits.CMPIF       	  /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char TC2IE:1;
		unsigned char TC2GIE :1;
		unsigned char :1;
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

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF        	  /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBCHIE:1;
		unsigned char IOCCHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOBCHIE         INTCR1bits.IOBCHIE     	  /* bit 0 */
#define IOCCHIE         INTCR1bits.IOCCHIE     	  /* bit 1 */
#define INT0IE           INTCR1bits.INT0IE          /* bit 6 */
#define INT1IE           INTCR1bits.INT1IE          /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBCHIF:1;
		unsigned char IOCCHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOBCHIF         INTF1bits.IOBCHIF         /* bit 0 */
#define IOCCHIF         INTF1bits.IOCCHIF         /* bit 1 */
#define INT0IF           INTF1bits.INT0IF           /* bit 6 */
#define INT1IF           INTF1bits.INT1IF           /* bit 7 */

// ----- IOA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOA0 : 1;
		unsigned char IOA1 : 1;
		unsigned char IOA2 : 1;
		unsigned char IOA3 : 1;
		unsigned char IOA4 : 1;
		unsigned char IOA5 : 1;
		unsigned char IOA6 : 1;
		unsigned char IOA7 : 1;
	};
} __IOAbits_t;
extern volatile __IOAbits_t __at(IOA_ADDR) IOAbits;

#define IOA0               IOAbits.IOA0              /* bit 0 */
#define IOA1               IOAbits.IOA1              /* bit 1 */
#define IOA2               IOAbits.IOA2              /* bit 2 */
#define IOA3               IOAbits.IOA3              /* bit 3 */
#define IOA4               IOAbits.IOA4              /* bit 4 */
#define IOA5               IOAbits.IOA5              /* bit 5 */
#define IOA6               IOAbits.IOA6              /* bit 6 */
#define IOA7               IOAbits.IOA7              /* bit 7 */

// ----- OEA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEA0 : 1;
		unsigned char OEA1 : 1;
		unsigned char OEA2 : 1;
		unsigned char OEA3 : 1;
		unsigned char OEA4 : 1;
		unsigned char OEA5 : 1;
		unsigned char OEA6 : 1;
		unsigned char OEA7 : 1;
	};
} __OEAbits_t;
extern volatile __OEAbits_t __at(OEA_ADDR) OEAbits;

#define OEA0               OEAbits.OEA0              /* bit 0 */
#define OEA1               OEAbits.OEA1              /* bit 1 */
#define OEA2               OEAbits.OEA2              /* bit 2 */
#define OEA3               OEAbits.OEA3              /* bit 3 */
#define OEA4               OEAbits.OEA4              /* bit 4 */
#define OEA5               OEAbits.OEA5              /* bit 5 */
#define OEA6               OEAbits.OEA6              /* bit 6 */
#define OEA7               OEAbits.OEA7              /* bit 7 */

// ----- IOB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOB0 : 1;
		unsigned char IOB1 : 1;
		unsigned char IOB2 : 1;
		unsigned char IOB3 : 1;
		unsigned char IOB4 : 1;
		unsigned char IOB5 : 1;
		unsigned char IOB6 : 1;
		unsigned char IOB7 : 1;
	};
} __IOBbits_t;
extern volatile __IOBbits_t __at(IOB_ADDR) IOBbits;

#define IOB0               IOBbits.IOB0              /* bit 0 */
#define IOB1               IOBbits.IOB1              /* bit 1 */
#define IOB2               IOBbits.IOB2              /* bit 2 */
#define IOB3               IOBbits.IOB3              /* bit 3 */
#define IOB4               IOBbits.IOB4              /* bit 4 */
#define IOB5               IOBbits.IOB5              /* bit 5 */
#define IOB6               IOBbits.IOB6              /* bit 6 */
#define IOB7               IOBbits.IOB7              /* bit 7 */

// ----- OEB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEB0 : 1;
		unsigned char OEB1 : 1;
		unsigned char OEB2 : 1;
		unsigned char OEB3 : 1;
		unsigned char OEB4 : 1;
		unsigned char OEB5 : 1;
		unsigned char OEB6 : 1;
		unsigned char OEB7 : 1;
	};
} __OEBbits_t;
extern volatile __OEBbits_t __at(OEB_ADDR) OEBbits;

#define OEB0               OEBbits.OEB0              /* bit 0 */
#define OEB1               OEBbits.OEB1              /* bit 1 */
#define OEB2               OEBbits.OEB2              /* bit 2 */
#define OEB3               OEBbits.OEB3              /* bit 3 */
#define OEB4               OEBbits.OEB4              /* bit 4 */
#define OEB5               OEBbits.OEB5              /* bit 5 */
#define OEB6               OEBbits.OEB6              /* bit 6 */
#define OEB7               OEBbits.OEB7              /* bit 7 */

// ----- IOC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0 : 1;
		unsigned char IOC1 : 1;
		unsigned char IOC2 : 1;
		unsigned char IOC3 : 1;
		unsigned char IOC4 : 1;
		unsigned char IOC5 : 1;
		unsigned char IOC6 : 1;
		unsigned char IOC7 : 1;
	};
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

#define IOC0               IOCbits.IOC0              /* bit 0 */
#define IOC1               IOCbits.IOC1              /* bit 1 */
#define IOC2               IOCbits.IOC2              /* bit 2 */
#define IOC3               IOCbits.IOC3              /* bit 3 */
#define IOC4               IOCbits.IOC4              /* bit 4 */
#define IOC5               IOCbits.IOC5              /* bit 5 */
#define IOC6               IOCbits.IOC6              /* bit 6 */
#define IOC7               IOCbits.IOC7              /* bit 7 */

// ----- OEC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEC0 : 1;
		unsigned char OEC1 : 1;
		unsigned char OEC2 : 1;
		unsigned char OEC3 : 1;
		unsigned char OEC4 : 1;
		unsigned char OEC5 : 1;
		unsigned char OEC6 : 1;
		unsigned char OEC7 : 1;
	};
} __OECbits_t;
extern volatile __OECbits_t __at(OEC_ADDR) OECbits;

#define OEC0               OECbits.OEC0              /* bit 0 */
#define OEC1               OECbits.OEC1              /* bit 1 */
#define OEC2               OECbits.OEC2              /* bit 2 */
#define OEC3               OECbits.OEC3              /* bit 3 */
#define OEC4               OECbits.OEC4              /* bit 4 */
#define OEC5               OECbits.OEC5              /* bit 5 */
#define OEC6               OECbits.OEC6              /* bit 6 */
#define OEC7               OECbits.OEC7              /* bit 7 */

// ----- IOD Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOD0 : 1;
		unsigned char IOD1 : 1;
		unsigned char IOD2 : 1;
		unsigned char IOD3 : 1;
		unsigned char IOD4 : 1;
		unsigned char IOD5 : 1;
		unsigned char IOD6 : 1;
		unsigned char IOD7 : 1;
	};
} __IODbits_t;
extern volatile __IODbits_t __at(IOD_ADDR) IODbits;

#define IOD0               IODbits.IOD0              /* bit 0 */
#define IOD1               IODbits.IOD1              /* bit 1 */
#define IOD2               IODbits.IOD2              /* bit 2 */
#define IOD3               IODbits.IOD3              /* bit 3 */
#define IOD4               IODbits.IOD4              /* bit 4 */
#define IOD5               IODbits.IOD5              /* bit 5 */
#define IOD6               IODbits.IOD6              /* bit 6 */
#define IOD7               IODbits.IOD7              /* bit 7 */

// ----- OED Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OED0 : 1;
		unsigned char OED1 : 1;
		unsigned char OED2 : 1;
		unsigned char OED3 : 1;
		unsigned char OED4 : 1;
		unsigned char OED5 : 1;
		unsigned char OED6 : 1;
		unsigned char OED7 : 1;
	};
} __OEDbits_t;
extern volatile __OEDbits_t __at(OED_ADDR) OEDbits;

#define OED0               OEDbits.OED0              /* bit 0 */
#define OED1               OEDbits.OED1              /* bit 1 */
#define OED2               OEDbits.OED2              /* bit 2 */
#define OED3               OEDbits.OED3              /* bit 3 */
#define OED4               OEDbits.OED4              /* bit 4 */
#define OED5               OEDbits.OED5              /* bit 5 */
#define OED6               OEDbits.OED6              /* bit 6 */
#define OED7               OEDbits.OED7              /* bit 7 */

// ----- IOE Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOE0 : 1;
		unsigned char IOE1 : 1;
		unsigned char IOE2 : 1;
		unsigned char IOE3 : 1;
		unsigned char IOE4 : 1;
		unsigned char IOE5 : 1;
		unsigned char IOE6 : 1;
		unsigned char IOE7 : 1;
	};
} __IOEbits_t;
extern volatile __IOEbits_t __at(IOE_ADDR) IOEbits;

#define IOE0               IOEbits.IOE0              /* bit 0 */
#define IOE1               IOEbits.IOE1              /* bit 1 */
#define IOE2               IOEbits.IOE2              /* bit 2 */
#define IOE3               IOEbits.IOE3              /* bit 3 */
#define IOE4               IOEbits.IOE4              /* bit 4 */
#define IOE5               IOEbits.IOE5              /* bit 5 */
#define IOE6               IOEbits.IOE6              /* bit 6 */
#define IOE7               IOEbits.IOE7              /* bit 7 */

// ----- OEE Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEE0 : 1;
		unsigned char OEE1 : 1;
		unsigned char OEE2 : 1;
		unsigned char OEE3 : 1;
		unsigned char OEE4 : 1;
		unsigned char OEE5 : 1;
		unsigned char OEE6 : 1;
		unsigned char OEE7 : 1;
	};
} __OEEbits_t;
extern volatile __OEEbits_t __at(OEE_ADDR) OEEbits;

#define OEE0               OEEbits.OEE0              /* bit 0 */
#define OEE1               OEEbits.OEE1              /* bit 1 */
#define OEE2               OEEbits.OEE2              /* bit 2 */
#define OEE3               OEEbits.OEE3              /* bit 3 */
#define OEE4               OEEbits.OEE4              /* bit 4 */
#define OEE5               OEEbits.OEE5              /* bit 5 */
#define OEE6               OEEbits.OEE6              /* bit 6 */
#define OEE7               OEEbits.OEE7              /* bit 7 */

// ----- IOF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOF0 : 1;
		unsigned char IOF1 : 1;
		unsigned char IOF2 : 1;
		unsigned char IOF3 : 1;
		unsigned char IOF4 : 1;
		unsigned char IOF5 : 1;
		unsigned char IOF6 : 1;
		unsigned char IOF7 : 1;
	};
} __IOFbits_t;
extern volatile __IOFbits_t __at(IOF_ADDR) IOFbits;

#define IOF0               IOFbits.IOF0              /* bit 0 */
#define IOF1               IOFbits.IOF1              /* bit 1 */
#define IOF2               IOFbits.IOF2              /* bit 2 */
#define IOF3               IOFbits.IOF3              /* bit 3 */
#define IOF4               IOFbits.IOF4              /* bit 4 */
#define IOF5               IOFbits.IOF5              /* bit 5 */
#define IOF6               IOFbits.IOF6              /* bit 6 */
#define IOF7               IOFbits.IOF7              /* bit 7 */

// ----- OEF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEF0 : 1;
		unsigned char OEF1 : 1;
		unsigned char OEF2 : 1;
		unsigned char OEF3 : 1;
		unsigned char OEF4 : 1;
		unsigned char OEF5 : 1;
		unsigned char OEF6 : 1;
		unsigned char OEF7 : 1;
	};
} __OEFbits_t;
extern volatile __OEFbits_t __at(OEF_ADDR) OEFbits;

#define OEF0               OEFbits.OEF0              /* bit 0 */
#define OEF1               OEFbits.OEF1              /* bit 1 */
#define OEF2               OEFbits.OEF2              /* bit 2 */
#define OEF3               OEFbits.OEF3              /* bit 3 */
#define OEF4               OEFbits.OEF4              /* bit 4 */
#define OEF5               OEFbits.OEF5              /* bit 5 */
#define OEF6               OEFbits.OEF6              /* bit 6 */
#define OEF7               OEFbits.OEF7              /* bit 7 */

// ----- IOG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOG0 : 1;
		unsigned char IOG1 : 1;
		unsigned char IOG2 : 1;
		unsigned char IOG3 : 1;
		unsigned char IOG4 : 1;
		unsigned char IOG5 : 1;
		unsigned char IOG6 : 1;
		unsigned char IOG7 : 1;
	};
} __IOGbits_t;
extern volatile __IOGbits_t __at(IOG_ADDR) IOGbits;

#define IOG0               IOGbits.IOG0              /* bit 0 */
#define IOG1               IOGbits.IOG1              /* bit 1 */
#define IOG2               IOGbits.IOG2              /* bit 2 */
#define IOG3               IOGbits.IOG3              /* bit 3 */
#define IOG4               IOGbits.IOG4              /* bit 4 */
#define IOG5               IOGbits.IOG5              /* bit 5 */
#define IOG6               IOGbits.IOG6              /* bit 6 */
#define IOG7               IOGbits.IOG7              /* bit 7 */

// ----- OEG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEG0 : 1;
		unsigned char OEG1 : 1;
		unsigned char OEG2 : 1;
		unsigned char OEG3 : 1;
		unsigned char OEG4 : 1;
		unsigned char OEG5 : 1;
		unsigned char OEG6 : 1;
		unsigned char OEG7 : 1;
	};
} __OEGbits_t;
extern volatile __OEGbits_t __at(OEG_ADDR) OEGbits;

#define OEG0               OEGbits.OEG0              /* bit 0 */
#define OEG1               OEGbits.OEG1              /* bit 1 */
#define OEG2               OEGbits.OEG2              /* bit 2 */
#define OEG3               OEGbits.OEG3              /* bit 3 */
#define OEG4               OEGbits.OEG4              /* bit 4 */
#define OEG5               OEGbits.OEG5              /* bit 5 */
#define OEG6               OEGbits.OEG6              /* bit 6 */
#define OEG7               OEGbits.OEG7              /* bit 7 */

// ----- IOH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOH0 : 1;
		unsigned char IOH1 : 1;
		unsigned char IOH2 : 1;
		unsigned char IOH3 : 1;
		unsigned char IOH4 : 1;
		unsigned char IOH5 : 1;
		unsigned char IOH6 : 1;
		unsigned char IOH7 : 1;
	};
} __IOHbits_t;
extern volatile __IOHbits_t __at(IOH_ADDR) IOHbits;

#define IOH0               IOHbits.IOH0              /* bit 0 */
#define IOH1               IOHbits.IOH1              /* bit 1 */
#define IOH2               IOHbits.IOH2              /* bit 2 */
#define IOH3               IOHbits.IOH3              /* bit 3 */
#define IOH4               IOHbits.IOH4              /* bit 4 */
#define IOH5               IOHbits.IOH5              /* bit 5 */
#define IOH6               IOHbits.IOH6              /* bit 6 */
#define IOH7               IOHbits.IOH7              /* bit 7 */

// ----- OEH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEH0 : 1;
		unsigned char OEH1 : 1;
		unsigned char OEH2 : 1;
		unsigned char OEH3 : 1;
		unsigned char OEH4 : 1;
		unsigned char OEH5 : 1;
		unsigned char OEH6 : 1;
		unsigned char OEH7 : 1;
	};
} __OEHbits_t;
extern volatile __OEHbits_t __at(OEH_ADDR) OEHbits;

#define OEH0               OEHbits.OEH0              /* bit 0 */
#define OEH1               OEHbits.OEH1              /* bit 1 */
#define OEH2               OEHbits.OEH2              /* bit 2 */
#define OEH3               OEHbits.OEH3              /* bit 3 */
#define OEH4               OEHbits.OEH4              /* bit 4 */
#define OEH5               OEHbits.OEH5              /* bit 5 */
#define OEH6               OEHbits.OEH6              /* bit 6 */
#define OEH7               OEHbits.OEH7              /* bit 7 */

// ----- PWM0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0S : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char PWM0OE : 1;
		unsigned char PWM0EN : 1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0S              PWM0CRbits.PWM0S             /* bit 0 */
#define PWM0OE               PWM0CRbits.PWM0OE              /* bit 6 */
#define PWM0EN                PWM0CRbits.PWM0EN               /* bit 7 */

// ----- PWM0D Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0H0 : 1;
		unsigned char PWM0H1 : 1;
		unsigned char PWM0H2 : 1;
		unsigned char PWM0H3 : 1;
		unsigned char PWM0H4 : 1;
		unsigned char PWM0H5 : 1;
		unsigned char PWM0H6 : 1;
		unsigned char PWM0H7 : 1;
	};
} __PWM0Dbits_t;
extern volatile __PWM0Dbits_t __at(PWM0D_ADDR) PWM0Dbits;

#define PWM0H0               PWM0Dbits.PWM0H0              /* bit 0 */
#define PWM0H1               PWM0Dbits.PWM0H1              /* bit 1 */
#define PWM0H2               PWM0Dbits.PWM0H2              /* bit 2 */
#define PWM0H3               PWM0Dbits.PWM0H3              /* bit 3 */
#define PWM0H4               PWM0Dbits.PWM0H4              /* bit 4 */
#define PWM0H5               PWM0Dbits.PWM0H5              /* bit 5 */
#define PWM0H6               PWM0Dbits.PWM0H6              /* bit 6 */
#define PWM0H7               PWM0Dbits.PWM0H7              /* bit 7 */

// ----- PWM1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1S : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char PWM1OE : 1;
		unsigned char PWM1EN : 1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1S              PWM1CRbits.PWM1S             /* bit 0 */
#define PWM1OE               PWM1CRbits.PWM1OE              /* bit 6 */
#define PWM1EN                PWM1CRbits.PWM1EN               /* bit 7 */

// ----- PWM1D Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1H0 : 1;
		unsigned char PWM1H1 : 1;
		unsigned char PWM1H2 : 1;
		unsigned char PWM1H3 : 1;
		unsigned char PWM1H4 : 1;
		unsigned char PWM1H5 : 1;
		unsigned char PWM1H6 : 1;
		unsigned char PWM1H7 : 1;
	};
} __PWM1Dbits_t;
extern volatile __PWM1Dbits_t __at(PWM1D_ADDR) PWM1Dbits;

#define PWM1H0               PWM1Dbits.PWM1H0              /* bit 0 */
#define PWM1H1               PWM1Dbits.PWM1H1              /* bit 1 */
#define PWM1H2               PWM1Dbits.PWM1H2              /* bit 2 */
#define PWM1H3               PWM1Dbits.PWM1H3              /* bit 3 */
#define PWM1H4               PWM1Dbits.PWM1H4              /* bit 4 */
#define PWM1H5               PWM1Dbits.PWM1H5              /* bit 5 */
#define PWM1H6               PWM1Dbits.PWM1H6              /* bit 6 */
#define PWM1H7               PWM1Dbits.PWM1H7              /* bit 7 */

// ----- PWM2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2S : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char PWM2OE : 1;
		unsigned char PWM2EN : 1;
	};
} __PWM2CRbits_t;
extern volatile __PWM2CRbits_t __at(PWM2CR_ADDR) PWM2CRbits;

#define PWM2S                PWM2CRbits.PWM2S             /* bit 0 */
#define PWM2OE               PWM2CRbits.PWM2OE              /* bit 6 */
#define PWM2EN               PWM2CRbits.PWM2EN               /* bit 7 */

// ----- PWM2D Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2H0 : 1;
		unsigned char PWM2H1 : 1;
		unsigned char PWM2H2 : 1;
		unsigned char PWM2H3 : 1;
		unsigned char PWM2H4 : 1;
		unsigned char PWM2H5 : 1;
		unsigned char PWM2H6 : 1;
		unsigned char PWM2H7 : 1;
	};
} __PWM2Dbits_t;
extern volatile __PWM2Dbits_t __at(PWM2D_ADDR) PWM2Dbits;

#define PWM2H0               PWM2Dbits.PWM2H0              /* bit 0 */
#define PWM2H1               PWM2Dbits.PWM2H1              /* bit 1 */
#define PWM2H2               PWM2Dbits.PWM2H2              /* bit 2 */
#define PWM2H3               PWM2Dbits.PWM2H3              /* bit 3 */
#define PWM2H4               PWM2Dbits.PWM2H4              /* bit 4 */
#define PWM2H5               PWM2Dbits.PWM2H5              /* bit 5 */
#define PWM2H6               PWM2Dbits.PWM2H6              /* bit 6 */
#define PWM2H7               PWM2Dbits.PWM2H7              /* bit 7 */

// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0 : 1;
		unsigned char TC2CKPS1 : 1;
		unsigned char TC2CKPS2 : 1;
		unsigned char TC2CKS0 : 1;
		unsigned char TC2CKS1 : 1;
		unsigned char : 1;
		unsigned char TC2M : 1;
		unsigned char TC2EN : 1;
	};
} __T2CRbits_t;
extern volatile __T2CRbits_t __at(T2CR_ADDR) T2CRbits;

#define TC2CKPS0               T2CRbits.TC2CKPS0             /* bit 0 */
#define TC2CKPS1               T2CRbits.TC2CKPS1             /* bit 1 */
#define TC2CKPS2               T2CRbits.TC2CKPS2             /* bit 2 */
#define TC2CKS0                T2CRbits.TC2CKS0              /* bit 3 */
#define TC2CKS1                T2CRbits.TC2CKS1              /* bit 4 */
#define TC2M                 T2CRbits.TC2M               /* bit 6 */
#define TC2EN                  T2CRbits.TC2EN                /* bit 7 */

// ----- T2GCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2GM0 : 1;
		unsigned char TC2GM1 : 1;
		unsigned char TC2GS0 : 1;
		unsigned char TC2GS1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char TC2GO : 1;
		unsigned char TC2GEN : 1;
	};
} __T2GCRbits_t;
extern volatile __T2GCRbits_t __at(T2GCR_ADDR) T2GCRbits;

#define TC2GM0               T2GCRbits.TC2GM0              /* bit 0 */
#define TC2GM1               T2GCRbits.TC2GM1              /* bit 1 */
#define TC2GS0               T2GCRbits.TC2GS0              /* bit 2 */
#define TC2GS1               T2GCRbits.TC2GS1              /* bit 3 */
#define TC2GO                T2GCRbits.TC2GO               /* bit 6 */
#define TC2GEN               T2GCRbits.TC2GEN              /* bit 7 */

// ----- PUA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUA0 : 1;
		unsigned char PUA1 : 1;
		unsigned char PUA2 : 1;
		unsigned char PUA3 : 1;
		unsigned char PUA4 : 1;
		unsigned char PUA5 : 1;
		unsigned char PUA6 : 1;
		unsigned char PUA7 : 1;
	};
} __PUAbits_t;
extern volatile __PUAbits_t __at(PUA_ADDR) PUAbits;

#define PUA0               PUAbits.PUA0              /* bit 0 */
#define PUA1               PUAbits.PUA1              /* bit 1 */
#define PUA2               PUAbits.PUA2              /* bit 2 */
#define PUA3               PUAbits.PUA3              /* bit 3 */
#define PUA4               PUAbits.PUA4              /* bit 4 */
#define PUA5               PUAbits.PUA5              /* bit 5 */
#define PUA6               PUAbits.PUA6              /* bit 6 */
#define PUA7               PUAbits.PUA7              /* bit 7 */

// ----- PUB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUB0 : 1;
		unsigned char PUB1 : 1;
		unsigned char PUB2 : 1;
		unsigned char PUB3 : 1;
		unsigned char PUB4 : 1;
		unsigned char PUB5 : 1;
		unsigned char PUB6 : 1;
		unsigned char PUB7 : 1;
	};
} __PUBbits_t;
extern volatile __PUBbits_t __at(PUB_ADDR) PUBbits;

#define PUB0               PUBbits.PUB0              /* bit 0 */
#define PUB1               PUBbits.PUB1              /* bit 1 */
#define PUB2               PUBbits.PUB2              /* bit 2 */
#define PUB3               PUBbits.PUB3              /* bit 3 */
#define PUB4               PUBbits.PUB4              /* bit 4 */
#define PUB5               PUBbits.PUB5              /* bit 5 */
#define PUB6               PUBbits.PUB6              /* bit 6 */
#define PUB7               PUBbits.PUB7              /* bit 7 */

// ----- PUC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUC0 : 1;
		unsigned char PUC1 : 1;
		unsigned char PUC2 : 1;
		unsigned char PUC3 : 1;
		unsigned char PUC4 : 1;
		unsigned char PUC5 : 1;
		unsigned char PUC6 : 1;
		unsigned char PUC7 : 1;
	};
} __PUCbits_t;
extern volatile __PUCbits_t __at(PUC_ADDR) PUCbits;

#define PUC0               PUCbits.PUC0              /* bit 0 */
#define PUC1               PUCbits.PUC1              /* bit 1 */
#define PUC2               PUCbits.PUC2              /* bit 2 */
#define PUC3               PUCbits.PUC3              /* bit 3 */
#define PUC4               PUCbits.PUC4              /* bit 4 */
#define PUC5               PUCbits.PUC5              /* bit 5 */
#define PUC6               PUCbits.PUC6              /* bit 6 */
#define PUC7               PUCbits.PUC7              /* bit 7 */

// ----- IOBICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBICR0 : 1;
		unsigned char IOBICR1 : 1;
		unsigned char IOBICR2 : 1;
		unsigned char IOBICR3 : 1;
		unsigned char IOBICR4 : 1;
		unsigned char IOBICR5 : 1;
		unsigned char IOBICR6 : 1;
		unsigned char IOBICR7 : 1;
	};
} __IOBICRbits_t;
extern volatile __IOBICRbits_t __at(IOBICR_ADDR) IOBICRbits;

#define IOBICR0               IOBICRbits.IOBICR0              /* bit 0 */
#define IOBICR1               IOBICRbits.IOBICR1              /* bit 1 */
#define IOBICR2               IOBICRbits.IOBICR2              /* bit 2 */
#define IOBICR3               IOBICRbits.IOBICR3              /* bit 3 */
#define IOBICR4               IOBICRbits.IOBICR4              /* bit 4 */
#define IOBICR5               IOBICRbits.IOBICR5              /* bit 5 */
#define IOBICR6               IOBICRbits.IOBICR6              /* bit 6 */
#define IOBICR7               IOBICRbits.IOBICR7              /* bit 7 */

// ----- IOCICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCICR0 : 1;
		unsigned char IOCICR1 : 1;
		unsigned char IOCICR2 : 1;
		unsigned char IOCICR3 : 1;
		unsigned char IOCICR4 : 1;
		unsigned char IOCICR5 : 1;
		unsigned char IOCICR6 : 1;
		unsigned char IOCICR7 : 1;
	};
} __IOCICRbits_t;
extern volatile __IOCICRbits_t __at(IOCICR_ADDR) IOCICRbits;

#define IOCICR0               IOCICRbits.IOCICR0              /* bit 0 */
#define IOCICR1               IOCICRbits.IOCICR1              /* bit 1 */
#define IOCICR2               IOCICRbits.IOCICR2              /* bit 2 */
#define IOCICR3               IOCICRbits.IOCICR3              /* bit 3 */
#define IOCICR4               IOCICRbits.IOCICR4              /* bit 4 */
#define IOCICR5               IOCICRbits.IOCICR5              /* bit 5 */
#define IOCICR6               IOCICRbits.IOCICR6              /* bit 6 */
#define IOCICR7               IOCICRbits.IOCICR7              /* bit 7 */

// ----- IODSCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IODDS : 1;
		unsigned char IOBDS : 1;
		unsigned char IOFDS : 1;
		unsigned char IOGDS : 1;
		unsigned char IOHDS : 1;
		unsigned char IOBLDS : 1;
		unsigned char IOBHDS : 1;
		unsigned char IOADS : 1;
	};
} __IODSCR0bits_t;
extern volatile __IODSCR0bits_t __at(IODSCR0_ADDR) IODSCR0bits;

#define IODDS           IODSCR0bits.IODDS           /* bit 0 */
#define IOBDS           IODSCR0bits.IOBDS           /* bit 1 */
#define IOFDS          IODSCR0bits.IOFDS          /* bit 2 */
#define IOGDS          IODSCR0bits.IOGDS          /* bit 3 */
#define IOHDS           IODSCR0bits.IOHDS           /* bit 4 */
#define IOBLDS           IODSCR0bits.IOBLDS           /* bit 5 */
#define IOBHDS           IODSCR0bits.IOBHDS           /* bit 6 */
#define IOADS           IODSCR0bits.IOADS           /* bit 7 */

// ----- IODSCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0DS : 1;
		unsigned char IOC1DS : 1;
		unsigned char IOC2DS : 1;
		unsigned char IOC3DS : 1;
		unsigned char IOC4DS : 1;
		unsigned char IOC5DS : 1;
		unsigned char IOC6DS : 1;
		unsigned char IOC7DS : 1;
	};
} __IODSCR1bits_t;
extern volatile __IODSCR1bits_t __at(IODSCR1_ADDR) IODSCR1bits;

#define IOC0DS           IODSCR1bits.IOC0DS           /* bit 0 */
#define IOC1DS           IODSCR1bits.IOC1DS           /* bit 1 */
#define IOC2DS           IODSCR1bits.IOC2DS          /* bit 2 */
#define IOC3DS           IODSCR1bits.IOC3DS          /* bit 3 */
#define IOC4DS           IODSCR1bits.IOC4DS           /* bit 4 */
#define IOC5DS           IODSCR1bits.IOC5DS           /* bit 5 */
#define IOC6DS           IODSCR1bits.IOC6DS           /* bit 6 */
#define IOC7DS           IODSCR1bits.IOC7DS           /* bit 7 */

// ----- IOICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOALIS : 1;
		unsigned char IOAHIS : 1;
		unsigned char IOBLIS : 1;
		unsigned char IOBHIS : 1;
		unsigned char IOCLIS : 1;
		unsigned char IOCHIS : 1;
		unsigned char  : 1;
		unsigned char  : 1;
	};
} __IOICRbits_t;
extern volatile __IOICRbits_t __at(IOICR_ADDR) IOICRbits;

#define IOALIS           IOICRbits.IOALIS           /* bit 0 */
#define IOAHIS           IOICRbits.IOAHIS           /* bit 1 */
#define IOBLIS           IOICRbits.IOBLIS          /* bit 2 */
#define IOBHIS           IOICRbits.IOBHIS          /* bit 3 */
#define IOCLIS           IOICRbits.IOCLIS           /* bit 4 */
#define IOCHIS           IOICRbits.IOCHIS           /* bit 5 */

// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0 : 1;
		unsigned char TC0CKPS1 : 1;
		unsigned char TC0CKPS2 : 1;
		unsigned char TC0CKS0 : 1;
		unsigned char TC0CKS1 : 1;
		unsigned char : 1;
		unsigned char TC0MOD : 1;
		unsigned char TC0EN : 1;
	};
} __T0CRbits_t;
extern volatile __T0CRbits_t __at(T0CR_ADDR) T0CRbits;

#define TC0CKPS0               T0CRbits.TC0CKPS0             /* bit 0 */
#define TC0CKPS1               T0CRbits.TC0CKPS1             /* bit 1 */
#define TC0CKPS2               T0CRbits.TC0CKPS2             /* bit 2 */
#define TC0CKS0                T0CRbits.TC0CKS0              /* bit 3 */
#define TC0CKS1                T0CRbits.TC0CKS1              /* bit 4 */
#define TC0MOD                 T0CRbits.TC0MOD               /* bit 6 */
#define TC0EN                  T0CRbits.TC0EN                /* bit 7 */

// ----- TC0CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CL0 : 1;
		unsigned char TC0CL1 : 1;
		unsigned char TC0CL2 : 1;
		unsigned char TC0CL3 : 1;
		unsigned char TC0CL4 : 1;
		unsigned char TC0CL5 : 1;
		unsigned char TC0CL6 : 1;
		unsigned char TC0CL7 : 1;
	};
} __TC0CLbits_t;
extern volatile __TC0CLbits_t __at(TC0CL_ADDR) TC0CLbits;

#define TC0CL0               TC0CLbits.TC0CL0              /* bit 0 */
#define TC0CL1               TC0CLbits.TC0CL1              /* bit 1 */
#define TC0CL2               TC0CLbits.TC0CL2              /* bit 2 */
#define TC0CL3               TC0CLbits.TC0CL3              /* bit 3 */
#define TC0CL4               TC0CLbits.TC0CL4              /* bit 4 */
#define TC0CL5               TC0CLbits.TC0CL5              /* bit 5 */
#define TC0CL6               TC0CLbits.TC0CL6              /* bit 6 */
#define TC0CL7               TC0CLbits.TC0CL7              /* bit 7 */

// ----- TC0CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CH0 : 1;
		unsigned char TC0CH1 : 1;
		unsigned char TC0CH2 : 1;
		unsigned char TC0CH3 : 1;
		unsigned char TC0CH4 : 1;
		unsigned char TC0CH5 : 1;
		unsigned char TC0CH6 : 1;
		unsigned char TC0CH7 : 1;
	};
} __TC0CHbits_t;
extern volatile __TC0CHbits_t __at(TC0CH_ADDR) TC0CHbits;

#define TC0CH0               TC0CHbits.TC0CH0              /* bit 0 */
#define TC0CH1               TC0CHbits.TC0CH1              /* bit 1 */
#define TC0CH2               TC0CHbits.TC0CH2              /* bit 2 */
#define TC0CH3               TC0CHbits.TC0CH3              /* bit 3 */
#define TC0CH4               TC0CHbits.TC0CH4              /* bit 4 */
#define TC0CH5               TC0CHbits.TC0CH5              /* bit 5 */
#define TC0CH6               TC0CHbits.TC0CH6              /* bit 6 */
#define TC0CH7               TC0CHbits.TC0CH7              /* bit 7 */

// ----- T1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CKPS0 : 1;
		unsigned char TC1CKPS1 : 1;
		unsigned char TC1CKPS2 : 1;
		unsigned char TC1CKS0 : 1;
		unsigned char TC1CKS1 : 1;
		unsigned char : 1;
		unsigned char TC1MOD : 1;
		unsigned char TC1EN : 1;
	};
} __T1CRbits_t;
extern volatile __T1CRbits_t __at(T1CR_ADDR) T1CRbits;

#define TC1CKPS0               T1CRbits.TC1CKPS0             /* bit 0 */
#define TC1CKPS1               T1CRbits.TC1CKPS1             /* bit 1 */
#define TC1CKPS2               T1CRbits.TC1CKPS2             /* bit 2 */
#define TC1CKS0                T1CRbits.TC1CKS0              /* bit 3 */
#define TC1CKS1                T1CRbits.TC1CKS1              /* bit 4 */
#define TC1MOD                 T1CRbits.TC1MOD               /* bit 6 */
#define TC1EN                  T1CRbits.TC1EN                /* bit 7 */

// ----- TC1CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CL0 : 1;
		unsigned char TC1CL1 : 1;
		unsigned char TC1CL2 : 1;
		unsigned char TC1CL3 : 1;
		unsigned char TC1CL4 : 1;
		unsigned char TC1CL5 : 1;
		unsigned char TC1CL6 : 1;
		unsigned char TC1CL7 : 1;
	};
} __TC1CLbits_t;
extern volatile __TC1CLbits_t __at(TC1CL_ADDR) TC1CLbits;

#define TC1CL0               TC1CLbits.TC1CL0              /* bit 0 */
#define TC1CL1               TC1CLbits.TC1CL1              /* bit 1 */
#define TC1CL2               TC1CLbits.TC1CL2              /* bit 2 */
#define TC1CL3               TC1CLbits.TC1CL3              /* bit 3 */
#define TC1CL4               TC1CLbits.TC1CL4              /* bit 4 */
#define TC1CL5               TC1CLbits.TC1CL5              /* bit 5 */
#define TC1CL6               TC1CLbits.TC1CL6              /* bit 6 */
#define TC1CL7               TC1CLbits.TC1CL7              /* bit 7 */

// ----- TC1CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CH0 : 1;
		unsigned char TC1CH1 : 1;
		unsigned char TC1CH2 : 1;
		unsigned char TC1CH3 : 1;
		unsigned char TC1CH4 : 1;
		unsigned char TC1CH5 : 1;
		unsigned char TC1CH6 : 1;
		unsigned char TC1CH7 : 1;
	};
} __TC1CHbits_t;
extern volatile __TC1CHbits_t __at(TC1CH_ADDR) TC1CHbits;

#define TC1CH0               TC1CHbits.TC1CH0              /* bit 0 */
#define TC1CH1               TC1CHbits.TC1CH1              /* bit 1 */
#define TC1CH2               TC1CHbits.TC1CH2              /* bit 2 */
#define TC1CH3               TC1CHbits.TC1CH3              /* bit 3 */
#define TC1CH4               TC1CHbits.TC1CH4              /* bit 4 */
#define TC1CH5               TC1CHbits.TC1CH5              /* bit 5 */
#define TC1CH6               TC1CHbits.TC1CH6              /* bit 6 */
#define TC1CH7               TC1CHbits.TC1CH7              /* bit 7 */

// ----- TC2CL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CL0 : 1;
		unsigned char TC2CL1 : 1;
		unsigned char TC2CL2 : 1;
		unsigned char TC2CL3 : 1;
		unsigned char TC2CL4 : 1;
		unsigned char TC2CL5 : 1;
		unsigned char TC2CL6 : 1;
		unsigned char TC2CL7 : 1;
	};
} __TC2CLbits_t;
extern volatile __TC2CLbits_t __at(TC2CL_ADDR) TC2CLbits;

#define TC2CL0               TC2CLbits.TC2CL0              /* bit 0 */
#define TC2CL1               TC2CLbits.TC2CL1              /* bit 1 */
#define TC2CL2               TC2CLbits.TC2CL2              /* bit 2 */
#define TC2CL3               TC2CLbits.TC2CL3              /* bit 3 */
#define TC2CL4               TC2CLbits.TC2CL4              /* bit 4 */
#define TC2CL5               TC2CLbits.TC2CL5              /* bit 5 */
#define TC2CL6               TC2CLbits.TC2CL6              /* bit 6 */
#define TC2CL7               TC2CLbits.TC2CL7              /* bit 7 */

// ----- TC2CH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CH0 : 1;
		unsigned char TC2CH1 : 1;
		unsigned char TC2CH2 : 1;
		unsigned char TC2CH3 : 1;
		unsigned char TC2CH4 : 1;
		unsigned char TC2CH5 : 1;
		unsigned char TC2CH6 : 1;
		unsigned char TC2CH7 : 1;
	};
} __TC2CHbits_t;
extern volatile __TC2CHbits_t __at(TC2CH_ADDR) TC2CHbits;

#define TC2CH0               TC2CHbits.TC2CH0              /* bit 0 */
#define TC2CH1               TC2CHbits.TC2CH1              /* bit 1 */
#define TC2CH2               TC2CHbits.TC2CH2              /* bit 2 */
#define TC2CH3               TC2CHbits.TC2CH3              /* bit 3 */
#define TC2CH4               TC2CHbits.TC2CH4              /* bit 4 */
#define TC2CH5               TC2CHbits.TC2CH5              /* bit 5 */
#define TC2CH6               TC2CHbits.TC2CH6              /* bit 6 */
#define TC2CH7               TC2CHbits.TC2CH7              /* bit 7 */

// ----- I2CADDR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char  : 1;
		unsigned char I2CADR1 : 1;
		unsigned char I2CADR2 : 1;
		unsigned char I2CADR3 : 1;
		unsigned char I2CADR4 : 1;
		unsigned char I2CADR5 : 1;
		unsigned char I2CADR6 : 1;
		unsigned char I2CADR7 : 1;
	};
} __I2CADDRbits_t;
extern volatile __I2CADDRbits_t __at(I2CADDR_ADDR) I2CADDRbits;

#define I2CADR1               I2CADDRbits.I2CADR1              /* bit 1 */
#define I2CADR2               I2CADDRbits.I2CADR2              /* bit 2 */
#define I2CADR3               I2CADDRbits.I2CADR3              /* bit 3 */
#define I2CADR4               I2CADDRbits.I2CADR4              /* bit 4 */
#define I2CADR5               I2CADDRbits.I2CADR5              /* bit 5 */
#define I2CADR6               I2CADDRbits.I2CADR6              /* bit 6 */
#define I2CADR7               I2CADDRbits.I2CADR7              /* bit 7 */

// ----- I2CCON Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A0 : 1;
		unsigned char A1 : 1;
		unsigned char A2 : 1;
		unsigned char NACK : 1;
		unsigned char BF : 1;
		unsigned char D_A : 1;
		unsigned char R_W : 1;
		unsigned char I2CEN : 1;
	};
} __I2CCONbits_t;
extern volatile __I2CCONbits_t __at(I2CCON_ADDR) I2CCONbits;

#define A0               I2CCONbits.A0              /* bit 0 */
#define A1               I2CCONbits.A1              /* bit 1 */
#define A2               I2CCONbits.A2              /* bit 2 */
#define NACK             I2CCONbits.NACK              /* bit 3 */
#define BF               I2CCONbits.BF              /* bit 4 */
#define D_A              I2CCONbits.D_A              /* bit 5 */
#define R_W              I2CCONbits.R_W              /* bit 6 */
#define I2CEN            I2CCONbits.I2CEN              /* bit 7 */

// ----- I2CBUF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char I2CBUF0 : 1;
		unsigned char I2CBUF1 : 1;
		unsigned char I2CBUF2 : 1;
		unsigned char I2CBUF3 : 1;
		unsigned char I2CBUF4 : 1;
		unsigned char I2CBUF5 : 1;
		unsigned char I2CBUF6 : 1;
		unsigned char I2CBUF7 : 1;
	};
} __I2CBUFbits_t;
extern volatile __I2CBUFbits_t __at(I2CBUF_ADDR) I2CBUFbits;

#define I2CBUF0               I2CBUFbits.I2CBUF0              /* bit 0 */
#define I2CBUF1               I2CBUFbits.I2CBUF1              /* bit 1 */
#define I2CBUF2               I2CBUFbits.I2CBUF2              /* bit 2 */
#define I2CBUF3               I2CBUFbits.I2CBUF3              /* bit 3 */
#define I2CBUF4               I2CBUFbits.I2CBUF4              /* bit 4 */
#define I2CBUF5               I2CBUFbits.I2CBUF5              /* bit 5 */
#define I2CBUF6               I2CBUFbits.I2CBUF6              /* bit 6 */
#define I2CBUF7               I2CBUFbits.I2CBUF7              /* bit 7 */

// ----- EECON1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char EEWEN : 1;
		unsigned char WERR : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char EEMOD : 1;
	};
} __EECON1bits_t;
extern volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;

#define EEWEN               EECON1bits.EEWEN              /* bit 0 */
#define WERR               EECON1bits.WERR              /* bit 1 */
#define EEMOD               EECON1bits.EEMOD              /* bit 7 */

// ----- EECON2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char EEWE : 1;
		unsigned char EELOCK1 : 1;
		unsigned char EELOCK2 : 1;
		unsigned char EELOCK3 : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
	};
} __EECON2bits_t;
extern volatile __EECON2bits_t __at(EECON2_ADDR) EECON2bits;

#define EEWE                  EECON2bits.EEWE              /* bit 0 */
#define EELOCK1               EECON2bits.EELOCK1              /* bit 1 */
#define EELOCK2               EECON2bits.EELOCK2              /* bit 2 */
#define EELOCK3               EECON2bits.EELOCK3              /* bit 3 */

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
#define CINTS0                CMPC0bits.CINTS0               /* bit 4 */
#define CINTS1               CMPC0bits.CINTS1              /* bit 3 */
#define CMPOUT                CMPC0bits.CMPOUT               /* bit 4 */
#define CMPEN               CMPC0bits.CMPEN              /* bit 7 */

// ----- CMPC1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPOF0 : 1;
		unsigned char CMPOF1 : 1;
		unsigned char CMPOF2 : 1;
		unsigned char CMPOF3 : 1;
		unsigned char CMPOFM : 1;
		unsigned char  : 1;
		unsigned char CPVRC : 1;
		unsigned char  : 1;
	};
} __CMPC1bits_t;
extern volatile __CMPC1bits_t __at(CMPC1_ADDR) CMPC1bits;

#define CMPOF0               CMPC1bits.CMPOF0              /* bit 0 */
#define CMPOF1               CMPC1bits.CMPOF1              /* bit 1 */
#define CMPOF2               CMPC1bits.CMPOF2              /* bit 2 */
#define CMPOF3               CMPC1bits.CMPOF3              /* bit 3 */
#define CMPOFM               CMPC1bits.CMPOFM               /* bit 4 */
#define CPVRC               CMPC1bits.CPVRC               /* bit 6 */

// ----- CMPC2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVDS0 : 1;
		unsigned char VLVDS1 : 1;
		unsigned char VLVDS2 : 1;
		unsigned char VLVDS3 : 1;
		unsigned char VLVDS4 : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
	};
} __CMPC2bits_t;
extern volatile __CMPC2bits_t __at(CMPC2_ADDR) CMPC2bits;

#define VLVDS0               CMPC2bits.VLVDS0              /* bit 0 */
#define VLVDS1               CMPC2bits.VLVDS1              /* bit 1 */
#define VLVDS2               CMPC2bits.VLVDS2              /* bit 2 */
#define VLVDS3               CMPC2bits.VLVDS3              /* bit 3 */
#define VLVDS4               CMPC2bits.VLVDS4               /* bit 4 */




#endif