#ifndef __M8P830_H__
#define __M8P830_H__

//
// Register addresses.
//
#define LCDCR0_ADDR         0x01A0
#define LCDCR1_ADDR         0x01A1
#define LCDCR2_ADDR         0x01A2
#define RFCCR_ADDR          0x01A8
#define PWM2CR_ADDR         0x01AC
#define PWM2DH_ADDR         0x01AD
#define PWM2DL_ADDR         0x01AE
#define INDF0_ADDR          0x01B0
#define FSR0_ADDR           0x01B1
#define TX0CR_ADDR         	0x01B2
#define TX0REG_ADDR         0x01B3
#define RX0CR_ADDR        	0x01B4
#define RX0REG_ADDR         0x01B5
#define BRGDH_ADDR          0x01B6
#define BRGDL_ADDR          0x01B7
#define INDF1_ADDR          0x01B8
#define FSR1_ADDR           0x01B9
#define PCL_ADDR            0x01BA
#define STATUS_ADDR         0x01BB
#define OPTION_ADDR         0x01BC
#define OSCM_ADDR           0x01BD
#define WDTC_ADDR      	    0x01BE
#define INDF2_ADDR          0x01C0
#define HBUF_ADDR           0x01C1
#define INTCR0_ADDR         0x01C4
#define INTF0_ADDR          0x01C5
#define INTCR1_ADDR         0x01C6
#define INTF1_ADDR          0x01C7
#define IOA_ADDR            0x01C8
#define OEA_ADDR            0x01C9
#define PUA_ADDR            0x01CA
#define IOAICR_ADDR         0x01CB
#define IOB_ADDR            0x01CC
#define OEB_ADDR            0x01CD
#define IOC_ADDR            0x01D0
#define OEC_ADDR            0x01D1
#define IOD_ADDR            0x01D4
#define OED_ADDR            0x01D5
#define IOE_ADDR            0x01D8
#define OEE_ADDR            0x01D9
#define IODS_ADDR           0x01DB
#define IOF_ADDR            0x01DC
#define OEF_ADDR            0x01DD
#define PUF_ADDR            0x01DE    
#define IOFICR_ADDR         0x01DF
#define PWM0CR_ADDR         0x01E0
#define PWM0DH_ADDR         0x01E1    
#define PWM0DL_ADDR         0x01E2
#define PWMDEADT_ADDR       0x01E3
#define PWM1CR_ADDR         0x01E4
#define PWM1DH_ADDR         0x01E5    
#define PWM1DL_ADDR         0x01E6
#define T0CR_ADDR           0x01E8
#define TC0CL_ADDR          0x01E9
#define TC0CH_ADDR          0x01EA
#define T1CR_ADDR           0x01EC
#define TC1CL_ADDR          0x01ED
#define TC1CH_ADDR          0x01EE
#define T2CR_ADDR           0x01F0
#define TC2CL_ADDR          0x01F1
#define TC2CH_ADDR          0x01F2
#define T2GCR_ADDR          0x01F3
#define LVDCON_ADDR         0x01F8
#define IRCCAL_ADDR         0x01FC
#define OSCCAL_ADDR         0x01FC

#define LCDDS0_ADDR         0x0180
#define LCDDS1_ADDR         0x0181
#define LCDDS2_ADDR         0x0182
#define LCDDS3_ADDR         0x0183
#define LCDDS4_ADDR         0x0184
#define LCDDS5_ADDR         0x0185
#define LCDDS6_ADDR         0x0186
#define LCDDS7_ADDR         0x0187
#define LCDDS8_ADDR         0x0188
#define LCDDS9_ADDR         0x0189
#define LCDDS10_ADDR         0x018A
#define LCDDS11_ADDR         0x018B
#define LCDDS12_ADDR         0x018C
#define LCDDS13_ADDR         0x018D
#define LCDDS14_ADDR         0x018E
#define LCDDS15_ADDR         0x018F
#define LCDDS16_ADDR         0x0190
#define LCDDS17_ADDR         0x0191
#define LCDDS18_ADDR         0x0192
#define LCDDS19_ADDR         0x0193
#define LCDDS20_ADDR         0x0194
#define LCDDS21_ADDR         0x0195
#define LCDDS22_ADDR         0x0196
#define LCDDS23_ADDR         0x0197
#define LCDDS24_ADDR         0x0198
#define LCDDS25_ADDR         0x0199
#define LCDDS26_ADDR         0x019A
#define LCDDS27_ADDR         0x019B
#define LCDDS28_ADDR         0x019C
#define LCDDS29_ADDR         0x019D

//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (LCDCR0_ADDR)        LCDCR0;
extern __sfr __at (LCDCR1_ADDR)        LCDCR1;
extern __sfr __at (LCDCR2_ADDR)        LCDCR2;
extern __sfr __at (RFCCR_ADDR)         RFCCR;
extern __sfr __at (PWM2CR_ADDR)        PWM2CR;
extern __sfr __at (PWM2DH_ADDR)        PWM2DH;
extern __sfr __at (PWM2DL_ADDR)        PWM2DL;
extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (TX0CR_ADDR)         TX0CR;
extern __sfr __at (TX0REG_ADDR)        TX0REG;
extern __sfr __at (RX0CR_ADDR)         RX0CR;
extern __sfr __at (RX0REG_ADDR)        RX0REG;
extern __sfr __at (BRGDH_ADDR)         BRGDH;
extern __sfr __at (BRGDL_ADDR)         BRGDL;
extern __sfr __at (INDF1_ADDR)         INDF1;
extern __sfr __at (FSR1_ADDR)          FSR1;
extern __sfr __at (PCL_ADDR)           PCL;
extern __sfr __at (STATUS_ADDR)        STATUS;
extern __sfr __at (OPTION_ADDR)        OPTION;
extern __sfr __at (OSCM_ADDR)          OSCM;
extern __sfr __at (WDTC_ADDR)      	   WDTC;
extern __sfr __at (INDF2_ADDR)         INDF2;
extern __sfr __at (HBUF_ADDR)          HBUF;
extern __sfr __at (INTCR0_ADDR)        INTCR0;
extern __sfr __at (INTF0_ADDR)         INTF0;
extern __sfr __at (INTCR1_ADDR)        INTCR1;
extern __sfr __at (INTF1_ADDR)         INTF1;
extern __sfr __at (IOA_ADDR)           IOA;
extern __sfr __at (OEA_ADDR)           OEA;
extern __sfr __at (PUA_ADDR)           PUA;
extern __sfr __at (IOAICR_ADDR)        IOAICR;
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (IOC_ADDR)           IOC;
extern __sfr __at (OEC_ADDR)           OEC;
extern __sfr __at (IOD_ADDR)           IOD;
extern __sfr __at (OED_ADDR)           OED;
extern __sfr __at (IOE_ADDR)           IOE;
extern __sfr __at (OEE_ADDR)           OEE;
extern __sfr __at (IODS_ADDR)          IODS;
extern __sfr __at (IOF_ADDR)           IOF;
extern __sfr __at (OEF_ADDR)           OEF;
extern __sfr __at (PUF_ADDR)           PUF;
extern __sfr __at (IOFICR_ADDR)        IOFICR;
extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0DH_ADDR)        PWM0DH;    
extern __sfr __at (PWM0DL_ADDR)        PWM0DL;
extern __sfr __at (PWMDEADT_ADDR)      PWMDEADT;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (TC2CL_ADDR)         TC2CL;
extern __sfr __at (TC2CH_ADDR)         TC2CH;
extern __sfr __at (T2GCR_ADDR)         T2GCR;
extern __sfr __at (LVDCON_ADDR)        LVDCON;
extern __sfr __at (IRCCAL_ADDR)        IRCCAL;
extern __sfr __at (OSCCAL_ADDR)        OSCCAL;

extern __sfr __at (LCDDS0_ADDR)        LCDDS0;
extern __sfr __at (LCDDS1_ADDR)        LCDDS1;
extern __sfr __at (LCDDS2_ADDR)        LCDDS2;
extern __sfr __at (LCDDS3_ADDR)        LCDDS3;
extern __sfr __at (LCDDS4_ADDR)        LCDDS4;
extern __sfr __at (LCDDS5_ADDR)        LCDDS5;
extern __sfr __at (LCDDS6_ADDR)        LCDDS6;
extern __sfr __at (LCDDS7_ADDR)        LCDDS7;
extern __sfr __at (LCDDS8_ADDR)        LCDDS8;
extern __sfr __at (LCDDS9_ADDR)        LCDDS9;
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

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================

// ----- LCDCR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FLCD0 : 1;
		unsigned char FLCD1 : 1;
		unsigned char LCDCKS : 1;
		unsigned char LCDM : 1;
		unsigned char BIAS0 : 1;
		unsigned char BIAS1 : 1;
		unsigned char LEDEN : 1;
		unsigned char LCDEN : 1;
	};
} __LCDCR0bits_t;
extern volatile __LCDCR0bits_t __at(LCDCR0_ADDR) LCDCR0bits;

#define FLCD0               LCDCR0bits.FLCD0              /* bit 0 */
#define FLCD1               LCDCR0bits.FLCD1              /* bit 1 */
#define LCDCKS              LCDCR0bits.LCDCKS             /* bit 2 */
#define LCDM                LCDCR0bits.LCDM               /* bit 3 */
#define BIAS0               LCDCR0bits.BIAS0              /* bit 4 */
#define BIAS1               LCDCR0bits.BIAS1              /* bit 5 */
#define LEDEN               LCDCR0bits.LEDEN              /* bit 6 */
#define LCDEN               LCDCR0bits.LCDEN              /* bit 7 */



// ----- LCDCR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SIOS0 : 1;
		unsigned char SIOS1 : 1;
		unsigned char SIOS2 : 1;
		unsigned char CIOS0 : 1;
		unsigned char CIOS1 : 1;
		unsigned char CIOS2 : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __LCDCR1bits_t;
extern volatile __LCDCR1bits_t __at(LCDCR1_ADDR) LCDCR1bits;

#define SIOS0               LCDCR1bits.SIOS0              /* bit 0 */
#define SIOS1               LCDCR1bits.SIOS1              /* bit 1 */
#define SIOS2               LCDCR1bits.SIOS2              /* bit 2 */
#define CIOS0               LCDCR1bits.CIOS0              /* bit 3 */
#define CIOS1               LCDCR1bits.CIOS1              /* bit 4 */
#define CIOS2               LCDCR1bits.CIOS2              /* bit 5 */



// ----- LCDCR2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char LCDR : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __LCDCR2bits_t;
extern volatile __LCDCR2bits_t __at(LCDCR2_ADDR) LCDCR2bits;

#define LCDR               LCDCR1bits.LCDR              /* bit 0 */



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



// ----- PWM2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2TBS0 : 1;
		unsigned char PWM2TBS1 : 1;
		unsigned char PWM2DEN : 1;
		unsigned char PWM2NAS : 1;
		unsigned char PWM2PAS : 1;
		unsigned char PWM2NOE : 1;
		unsigned char PWM2POE : 1;
		unsigned char PWM2EN : 1;
	};
} __PWM2CRbits_t;
extern volatile __PWM2CRbits_t __at(PWM2CR_ADDR) PWM2CRbits;

#define PWM2TBS0              PWM2CRbits.PWM2TBS0             /* bit 0 */
#define PWM2TBS1              PWM2CRbits.PWM2TBS1             /* bit 1 */
#define PWM2DEN               PWM2CRbits.PWM2DEN              /* bit 2 */
#define PWM2NAS               PWM2CRbits.PWM2NAS              /* bit 3 */
#define PWM2PAS               PWM2CRbits.PWM2PAS              /* bit 4 */
#define PWM2NOE               PWM2CRbits.PWM2NOE              /* bit 5 */
#define PWM2POE               PWM2CRbits.PWM2POE              /* bit 6 */
#define PWM2EN                PWM2CRbits.PWM2EN               /* bit 7 */



// ----- PWM2DH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2D4 : 1;
		unsigned char PWM2D5 : 1;
		unsigned char PWM2D6 : 1;
		unsigned char PWM2D7 : 1;
		unsigned char PWM2D8 : 1;
		unsigned char PWM2D9 : 1;
		unsigned char PWM2D10 : 1;
		unsigned char PWM2D11 : 1;
	};
} __PWM2DHbits_t;
extern volatile __PWM2DHbits_t __at(PWM2DH_ADDR) PWM2DHbits;

#define PWM2D4               PWM2DHbits.PWM2D4              /* bit 0 */
#define PWM2D5               PWM2DHbits.PWM2D5              /* bit 1 */
#define PWM2D6               PWM2DHbits.PWM2D6              /* bit 2 */
#define PWM2D7               PWM2DHbits.PWM2D7              /* bit 3 */
#define PWM2D8               PWM2DHbits.PWM2D8              /* bit 4 */
#define PWM2D9               PWM2DHbits.PWM2D9              /* bit 5 */
#define PWM2D10              PWM2DHbits.PWM2D10             /* bit 6 */
#define PWM2D11              PWM2DHbits.PWM2D11             /* bit 7 */



// ----- PWM2DL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char PWM2D0 : 1;
		unsigned char PWM2D1 : 1;
		unsigned char PWM2D2 : 1;
		unsigned char PWM2D3 : 1;
	};
} __PWM2DLbits_t;
extern volatile __PWM2DLbits_t __at(PWM2DL_ADDR) PWM2DLbits;

#define PWM2D0               PWM2DLbits.PWM2D0              /* bit 4 */
#define PWM2D1               PWM2DLbits.PWM2D1              /* bit 5 */
#define PWM2D2               PWM2DLbits.PWM2D2              /* bit 6 */
#define PWM2D3               PWM2DLbits.PWM2D3              /* bit 7 */



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



// ----- TX0CR Bits --------------------------------------------------------
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
} __TX0CRbits_t;
extern volatile __TX0CRbits_t __at(TX0CR_ADDR) TX0CRbits;

#define TXD9               TX0CRbits.TXD9              /* bit 0 */
#define SPD0               TX0CRbits.SPD0              /* bit 1 */
#define SPD1               TX0CRbits.SPD1              /* bit 2 */
#define SLAVE              TX0CRbits.SLAVE             /* bit 3 */
#define TX9                TX0CRbits.TX9               /* bit 4 */
#define SYNC               TX0CRbits.SYNC              /* bit 5 */
#define TMCLR              TX0CRbits.TMCLR             /* bit 6 */
#define TXEN               TX0CRbits.TXEN              /* bit 7 */



// ----- TX0REG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TX0D0 : 1;
		unsigned char TX0D1 : 1;
		unsigned char TX0D2 : 1;
		unsigned char TX0D3 : 1;
		unsigned char TX0D4 : 1;
		unsigned char TX0D5 : 1;
		unsigned char TX0D6 : 1;
		unsigned char TX0D7 : 1;
	};
} __TX0REGbits_t;
extern volatile __TX0REGbits_t __at(TX0REG_ADDR) TX0REGbits;

#define TX0D0               TX0REGbits.TX0D0              /* bit 0 */
#define TX0D1               TX0REGbits.TX0D1              /* bit 1 */
#define TX0D2               TX0REGbits.TX0D2              /* bit 2 */
#define TX0D3               TX0REGbits.TX0D3              /* bit 3 */
#define TX0D4               TX0REGbits.TX0D4              /* bit 4 */
#define TX0D5               TX0REGbits.TX0D5              /* bit 5 */
#define TX0D6               TX0REGbits.TX0D6              /* bit 6 */
#define TX0D7               TX0REGbits.TX0D7              /* bit 7 */



// ----- RX0CR Bits --------------------------------------------------------
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
} __RX0CRbits_t;
extern volatile __RX0CRbits_t __at(RX0CR_ADDR) RX0CRbits;

#define RXD9               RX0CRbits.RXD9              /* bit 0 */
#define FRER               RX0CRbits.FRER              /* bit 1 */
#define RXOVF              RX0CRbits.RXOVF             /* bit 2 */
#define SREN               RX0CRbits.SREN              /* bit 3 */
#define RX9                RX0CRbits.RX9               /* bit 4 */
#define CKPS               RX0CRbits.CKPS              /* bit 6 */
#define RXEN               RX0CRbits.RXEN              /* bit 7 */



// ----- RX0REG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RX0D0 : 1;
		unsigned char RX0D1 : 1;
		unsigned char RX0D2 : 1;
		unsigned char RX0D3 : 1;
		unsigned char RX0D4 : 1;
		unsigned char RX0D5 : 1;
		unsigned char RX0D6 : 1;
		unsigned char RX0D7 : 1;
	};
} __RX0REGbits_t;
extern volatile __RX0REGbits_t __at(RX0REG_ADDR) RX0REGbits;

#define RX0D0               RX0REGbits.RX0D0              /* bit 0 */
#define RX0D1               RX0REGbits.RX0D1              /* bit 1 */
#define RX0D2               RX0REGbits.RX0D2              /* bit 2 */
#define RX0D3               RX0REGbits.RX0D3              /* bit 3 */
#define RX0D4               RX0REGbits.RX0D4              /* bit 4 */
#define RX0D5               RX0REGbits.RX0D5              /* bit 5 */
#define RX0D6               RX0REGbits.RX0D6              /* bit 6 */
#define RX0D7               RX0REGbits.RX0D7              /* bit 7 */



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
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char PD:1;
		unsigned char TO:1;
		unsigned char :1;
		unsigned char GIE:1;
	};
} __OPTIONbits_t;
extern volatile __OPTIONbits_t __at(OPTION_ADDR) OPTIONbits;

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
		unsigned char :1;	
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



// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char TC2IE:1;
		unsigned char TC2GIE :1;
		unsigned char TXIE:1;
		unsigned char RXIE:1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TC2IE           INTCR0bits.TC2IE          /* bit 2 */
#define TC2GIE          INTCR0bits.TC2GIE         /* bit 3 */
#define TXIE            INTCR0bits.TXIE       	  /* bit 4 */
#define RXIE            INTCR0bits.RXIE       	  /* bit 5 */



// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF        	  /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */
#define TXIF            INTF0bits.TXIF        	  /* bit 4 */
#define RXIF            INTF0bits.RXIF            /* bit 5 */



// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIE:1;
		unsigned char IOFCHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOACHIE         INTCR1bits.IOACHIE     	  /* bit 0 */
#define IOFCHIE         INTCR1bits.IOFCHIE     	  /* bit 1 */
#define LVDIE           INTCR1bits.LVDIE          /* bit 4 */



// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIF:1;
		unsigned char IOFCHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOACHIF         INTF1bits.IOACHIF         /* bit 0 */
#define IOFCHIF         INTF1bits.IOFCHIF         /* bit 1 */
#define LVDIF           INTF1bits.LVDIF           /* bit 4 */



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



// ----- IOAICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAICR0 : 1;
		unsigned char IOAICR1 : 1;
		unsigned char IOAICR2 : 1;
		unsigned char IOAICR3 : 1;
		unsigned char IOAICR4 : 1;
		unsigned char IOAICR5 : 1;
		unsigned char IOAICR6 : 1;
		unsigned char IOAICR7 : 1;
	};
} __IOAICRbits_t;
extern volatile __IOAICRbits_t __at(IOAICR_ADDR) IOAICRbits;

#define IOAICR0               IOAICRbits.IOAICR0              /* bit 0 */
#define IOAICR1               IOAICRbits.IOAICR1              /* bit 1 */
#define IOAICR2               IOAICRbits.IOAICR2              /* bit 2 */
#define IOAICR3               IOAICRbits.IOAICR3              /* bit 3 */
#define IOAICR4               IOAICRbits.IOAICR4              /* bit 4 */
#define IOAICR5               IOAICRbits.IOAICR5              /* bit 5 */
#define IOAICR6               IOAICRbits.IOAICR6              /* bit 6 */
#define IOAICR7               IOAICRbits.IOAICR7              /* bit 7 */



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



// ----- IODS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBDS0 : 1;
		unsigned char IOBDS1 : 1;
		unsigned char IOCDDS0 : 1;
		unsigned char IOCDDS1 : 1;
		unsigned char IOEDS0 : 1;
		unsigned char IOEDS1 : 1;
		unsigned char IOFDS0 : 1;
		unsigned char IOFDS1 : 1;
	};
} __IODSbits_t;
extern volatile __IODSbits_t __at(IODS_ADDR) IODSbits;

#define IOBDS0           IODSbits.IOBDS0           /* bit 0 */
#define IOBDS1           IODSbits.IOBDS1           /* bit 1 */
#define IOCDDS0          IODSbits.IOCDDS0          /* bit 2 */
#define IOCDDS1          IODSbits.IOCDDS1          /* bit 3 */
#define IOEDS0           IODSbits.IOEDS0           /* bit 4 */
#define IOEDS1           IODSbits.IOEDS1           /* bit 5 */
#define IOFDS0           IODSbits.IOFDS0           /* bit 6 */
#define IOFDS1           IODSbits.IOFDS1           /* bit 7 */



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



// ----- PUF Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUF0 : 1;
		unsigned char PUF1 : 1;
		unsigned char PUF2 : 1;
		unsigned char PUF3 : 1;
		unsigned char PUF4 : 1;
		unsigned char PUF5 : 1;
		unsigned char PUF6 : 1;
		unsigned char PUF7 : 1;
	};
} __PUFbits_t;
extern volatile __PUFbits_t __at(PUF_ADDR) PUFbits;

#define PUF0               PUFbits.PUF0              /* bit 0 */
#define PUF1               PUFbits.PUF1              /* bit 1 */
#define PUF2               PUFbits.PUF2              /* bit 2 */
#define PUF3               PUFbits.PUF3              /* bit 3 */
#define PUF4               PUFbits.PUF4              /* bit 4 */
#define PUF5               PUFbits.PUF5              /* bit 5 */
#define PUF6               PUFbits.PUF6              /* bit 6 */
#define PUF7               PUFbits.PUF7              /* bit 7 */



// ----- IOFICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOFICR0 : 1;
		unsigned char IOFICR1 : 1;
		unsigned char IOFICR2 : 1;
		unsigned char IOFICR3 : 1;
		unsigned char IOFICR4 : 1;
		unsigned char IOFICR5 : 1;
		unsigned char IOFICR6 : 1;
		unsigned char IOFICR7 : 1;
	};
} __IOFICRbits_t;
extern volatile __IOFICRbits_t __at(IOFICR_ADDR) IOFICRbits;

#define IOFICR0               IOFICRbits.IOFICR0              /* bit 0 */
#define IOFICR1               IOFICRbits.IOFICR1              /* bit 1 */
#define IOFICR2               IOFICRbits.IOFICR2              /* bit 2 */
#define IOFICR3               IOFICRbits.IOFICR3              /* bit 3 */
#define IOFICR4               IOFICRbits.IOFICR4              /* bit 4 */
#define IOFICR5               IOFICRbits.IOFICR5              /* bit 5 */
#define IOFICR6               IOFICRbits.IOFICR6              /* bit 6 */
#define IOFICR7               IOFICRbits.IOFICR7              /* bit 7 */



// ----- PWM0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0TBS0 : 1;
		unsigned char PWM0TBS1 : 1;
		unsigned char PWM0DEN : 1;
		unsigned char PWM0NAS : 1;
		unsigned char PWM0PAS : 1;
		unsigned char PWM0NOE : 1;
		unsigned char PWM0POE : 1;
		unsigned char PWM0EN : 1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0TBS0              PWM0CRbits.PWM0TBS0             /* bit 0 */
#define PWM0TBS1              PWM0CRbits.PWM0TBS1             /* bit 1 */
#define PWM0DEN               PWM0CRbits.PWM0DEN              /* bit 2 */
#define PWM0NAS               PWM0CRbits.PWM0NAS              /* bit 3 */
#define PWM0PAS               PWM0CRbits.PWM0PAS              /* bit 4 */
#define PWM0NOE               PWM0CRbits.PWM0NOE              /* bit 5 */
#define PWM0POE               PWM0CRbits.PWM0POE              /* bit 6 */
#define PWM0EN                PWM0CRbits.PWM0EN               /* bit 7 */



// ----- PWM0DH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0D4 : 1;
		unsigned char PWM0D5 : 1;
		unsigned char PWM0D6 : 1;
		unsigned char PWM0D7 : 1;
		unsigned char PWM0D8 : 1;
		unsigned char PWM0D9 : 1;
		unsigned char PWM0D10 : 1;
		unsigned char PWM0D11 : 1;
	};
} __PWM0DHbits_t;
extern volatile __PWM0DHbits_t __at(PWM0DH_ADDR) PWM0DHbits;

#define PWM0D4               PWM0DHbits.PWM0D4              /* bit 0 */
#define PWM0D5               PWM0DHbits.PWM0D5              /* bit 1 */
#define PWM0D6               PWM0DHbits.PWM0D6              /* bit 2 */
#define PWM0D7               PWM0DHbits.PWM0D7              /* bit 3 */
#define PWM0D8               PWM0DHbits.PWM0D8              /* bit 4 */
#define PWM0D9               PWM0DHbits.PWM0D9              /* bit 5 */
#define PWM0D10              PWM0DHbits.PWM0D10             /* bit 6 */
#define PWM0D11              PWM0DHbits.PWM0D11             /* bit 7 */



// ----- PWM0DL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char PWM0D0 : 1;
		unsigned char PWM0D1 : 1;
		unsigned char PWM0D2 : 1;
		unsigned char PWM0D3 : 1;
	};
} __PWM0DLbits_t;
extern volatile __PWM0DLbits_t __at(PWM0DL_ADDR) PWM0DLbits;

#define PWM0D0               PWM0DLbits.PWM0D0              /* bit 4 */
#define PWM0D1               PWM0DLbits.PWM0D1              /* bit 5 */
#define PWM0D2               PWM0DLbits.PWM0D2              /* bit 6 */
#define PWM0D3               PWM0DLbits.PWM0D3              /* bit 7 */



// ----- PWMDEADT Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char DEADTR0 : 1;
		unsigned char DEADTR1 : 1;
		unsigned char DEADTR2 : 1;
		unsigned char DEADTR3 : 1;
		unsigned char DEADTF0 : 1;
		unsigned char DEADTF1 : 1;
		unsigned char DEADTF2 : 1;
		unsigned char DEADTF3 : 1;
	};
} __PWMDEADTbits_t;
extern volatile __PWMDEADTbits_t __at(PWMDEADT_ADDR) PWMDEADTbits;

#define DEADTR0               PWMDEADTbits.DEADTR0              /* bit 0 */
#define DEADTR1               PWMDEADTbits.DEADTR1              /* bit 1 */
#define DEADTR2               PWMDEADTbits.DEADTR2              /* bit 2 */
#define DEADTR3               PWMDEADTbits.DEADTR3              /* bit 3 */
#define DEADTF0               PWMDEADTbits.DEADTF0              /* bit 4 */
#define DEADTF1               PWMDEADTbits.DEADTF1              /* bit 5 */
#define DEADTF2               PWMDEADTbits.DEADTF2              /* bit 6 */
#define DEADTF3               PWMDEADTbits.DEADTF3              /* bit 7 */



// ----- PWM1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1TBS0 : 1;
		unsigned char PWM1TBS1 : 1;
		unsigned char PWM1DEN : 1;
		unsigned char PWM1NAS : 1;
		unsigned char PWM1PAS : 1;
		unsigned char PWM1NOE : 1;
		unsigned char PWM1POE : 1;
		unsigned char PWM1EN : 1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1TBS0              PWM1CRbits.PWM1TBS0             /* bit 0 */
#define PWM1TBS1              PWM1CRbits.PWM1TBS1             /* bit 1 */
#define PWM1DEN               PWM1CRbits.PWM1DEN              /* bit 2 */
#define PWM1NAS               PWM1CRbits.PWM1NAS              /* bit 3 */
#define PWM1PAS               PWM1CRbits.PWM1PAS              /* bit 4 */
#define PWM1NOE               PWM1CRbits.PWM1NOE              /* bit 5 */
#define PWM1POE               PWM1CRbits.PWM1POE              /* bit 6 */
#define PWM1EN                PWM1CRbits.PWM1EN               /* bit 7 */



// ----- PWM1DH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1D4 : 1;
		unsigned char PWM1D5 : 1;
		unsigned char PWM1D6 : 1;
		unsigned char PWM1D7 : 1;
		unsigned char PWM1D8 : 1;
		unsigned char PWM1D9 : 1;
		unsigned char PWM1D10 : 1;
		unsigned char PWM1D11 : 1;
	};
} __PWM1DHbits_t;
extern volatile __PWM1DHbits_t __at(PWM1DH_ADDR) PWM1DHbits;

#define PWM1D4               PWM1DHbits.PWM1D4              /* bit 0 */
#define PWM1D5               PWM1DHbits.PWM1D5              /* bit 1 */
#define PWM1D6               PWM1DHbits.PWM1D6              /* bit 2 */
#define PWM1D7               PWM1DHbits.PWM1D7              /* bit 3 */
#define PWM1D8               PWM1DHbits.PWM1D8              /* bit 4 */
#define PWM1D9               PWM1DHbits.PWM1D9              /* bit 5 */
#define PWM1D10              PWM1DHbits.PWM1D10             /* bit 6 */
#define PWM1D11              PWM1DHbits.PWM1D11             /* bit 7 */



// ----- PWM1DL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char PWM1D0 : 1;
		unsigned char PWM1D1 : 1;
		unsigned char PWM1D2 : 1;
		unsigned char PWM1D3 : 1;
	};
} __PWM1DLbits_t;
extern volatile __PWM1DLbits_t __at(PWM1DL_ADDR) PWM1DLbits;

#define PWM1D0               PWM1DLbits.PWM1D0              /* bit 4 */
#define PWM1D1               PWM1DLbits.PWM1D1              /* bit 5 */
#define PWM1D2               PWM1DLbits.PWM1D2              /* bit 6 */
#define PWM1D3               PWM1DLbits.PWM1D3              /* bit 7 */



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



// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0 : 1;
		unsigned char TC2CKPS1 : 1;
		unsigned char TC2CKPS2 : 1;
		unsigned char TC2CKS0 : 1;
		unsigned char TC2CKS1 : 1;
		unsigned char : 1;
		unsigned char TC2MOD : 1;
		unsigned char TC2EN : 1;
	};
} __T2CRbits_t;
extern volatile __T2CRbits_t __at(T2CR_ADDR) T2CRbits;

#define TC2CKPS0               T2CRbits.TC2CKPS0             /* bit 0 */
#define TC2CKPS1               T2CRbits.TC2CKPS1             /* bit 1 */
#define TC2CKPS2               T2CRbits.TC2CKPS2             /* bit 2 */
#define TC2CKS0                T2CRbits.TC2CKS0              /* bit 3 */
#define TC2CKS1                T2CRbits.TC2CKS1              /* bit 4 */
#define TC2MOD                 T2CRbits.TC2MOD               /* bit 6 */
#define TC2EN                  T2CRbits.TC2EN                /* bit 7 */



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



// ----- LVDCON Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVD0 : 1;
		unsigned char VLVD1 : 1;
		unsigned char VLVD2 : 1;
		unsigned char VLVD3 : 1;
		unsigned char LVDF : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char LVDEN : 1;
	};
} __LVDCONbits_t;
extern volatile __LVDCONbits_t __at(LVDCON_ADDR) LVDCONbits;

#define VLVD0               LVDCONbits.VLVD0              /* bit 0 */
#define VLVD1               LVDCONbits.VLVD1              /* bit 1 */
#define VLVD2               LVDCONbits.VLVD2              /* bit 2 */
#define VLVD3               LVDCONbits.VLVD3              /* bit 3 */
#define LVDF                LVDCONbits.LVDF               /* bit 4 */
#define LVDEN               LVDCONbits.LVDEN              /* bit 7 */



// ----- IRCCAL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRCCAL0 : 1;
		unsigned char IRCCAL1 : 1;
		unsigned char IRCCAL2 : 1;
		unsigned char IRCCAL3 : 1;
		unsigned char IRCCAL4 : 1;
		unsigned char IRCCAL5 : 1;
		unsigned char IRCCAL6 : 1;
		unsigned char : 1;
	};
} __IRCCALbits_t;
extern volatile __IRCCALbits_t __at(IRCCAL_ADDR) IRCCALbits;

#define IRCCAL0               IRCCALbits.IRCCAL0              /* bit 0 */
#define IRCCAL1               IRCCALbits.IRCCAL1              /* bit 1 */
#define IRCCAL2               IRCCALbits.IRCCAL2              /* bit 2 */
#define IRCCAL3               IRCCALbits.IRCCAL3              /* bit 3 */
#define IRCCAL4               IRCCALbits.IRCCAL4              /* bit 4 */
#define IRCCAL5               IRCCALbits.IRCCAL5              /* bit 5 */
#define IRCCAL6               IRCCALbits.IRCCAL6              /* bit 6 */



#endif