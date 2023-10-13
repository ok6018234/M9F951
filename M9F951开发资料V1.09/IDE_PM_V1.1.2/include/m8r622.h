#ifndef __M8R622_H__
#define __M8R622_H__

//
// Register addresses.
//
#define INDF0_ADDR          0x00B0
#define FSR0_ADDR           0x00B1
#define COPA0C_ADDR        	0x00B2
#define COPA1C_ADDR         0x00B3
#define COPA2C_ADDR        	0x00B4
#define OPA0OC_ADDR    	    0x00B6
#define OPA1OC_ADDR         0x00B7
#define INDF1_ADDR          0x00B8
#define FSR1_ADDR           0x00B9
#define PCL_ADDR            0x00BA
#define STATUS_ADDR         0x00BB
#define OPTION_ADDR         0x00BC
#define OSCM_ADDR           0x00BD
#define WDTC_ADDR      	    0x00BE
#define IOBICR_ADDR         0x00BF
#define INDF2_ADDR          0x00C0
#define HBUF_ADDR           0x00C1 
#define INTCR2_ADDR         0x00C2
#define INTF2_ADDR          0x00C3
#define INTCR0_ADDR         0x00C4
#define INTF0_ADDR          0x00C5
#define INTCR1_ADDR         0x00C6
#define INTF1_ADDR          0x00C7
#define IOA_ADDR            0x00C8
#define OEA_ADDR            0x00C9
#define PUA_ADDR            0x00CA
#define ANSA_ADDR           0x00CB
#define IOB_ADDR            0x00CC
#define OEB_ADDR            0x00CD
#define PUB_ADDR            0x00CE
#define ANSB_ADDR           0x00CF
#define IOC_ADDR            0x00D0
#define OEC_ADDR            0x00D1
#define PUC_ADDR            0x00D2
#define ANSC_ADDR           0x00D3
#define IOD_ADDR            0x00D4
#define OED_ADDR            0x00D5
#define PUD_ADDR            0x00D6
#define ANSD_ADDR           0x00D7
#define PWM0CR_ADDR         0x00D8
#define PWM0DH_ADDR         0x00D9    
#define PWM0DL_ADDR         0x00DA
#define DTGCR_ADDR          0x00DB
#define PWM1CR_ADDR         0x00DC
#define PWM1DH_ADDR         0x00DD    
#define PWM1DL_ADDR         0x00DE
#define PWMOC_ADDR          0x00DF
#define PWM2CR_ADDR         0x00E0
#define PWM2DH_ADDR         0x00E1    
#define PWM2DL_ADDR         0x00E2
#define PWMOV_ADDR          0x00E3
#define CMP0C_ADDR          0x00E4       
#define CMP1C_ADDR          0x00E5
#define TKCTR0_ADDR         0x00E6
#define TKCTR1_ADDR         0x00E7
#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA
#define PWMECR_ADDR         0x00EB
#define T1CR_ADDR           0x00EC
#define TC1CL_ADDR          0x00ED
#define TC1CH_ADDR          0x00EE
#define CMP2C_ADDR          0x00EF
#define T2CR_ADDR           0x00F0
#define TC2CL_ADDR          0x00F1
#define TC2CH_ADDR          0x00F2
#define T2GCR_ADDR          0x00F3
#define ADCON0_ADDR         0x00F4
#define ADCON1_ADDR         0x00F5
#define ADH_ADDR            0x00F6
#define ADL_ADDR            0x00F7
#define LVDCR_ADDR          0x00F8     
#define COMC_ADDR           0x00F9

//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (COPA0C_ADDR)        COPA0C;
extern __sfr __at (COPA1C_ADDR)        COPA1C;
extern __sfr __at (COPA2C_ADDR)        COPA2C;
extern __sfr __at (OPA0OC_ADDR)    	   OPA0OC;
extern __sfr __at (OPA1OC_ADDR)        OPA1OC;
extern __sfr __at (INDF1_ADDR)         INDF1;
extern __sfr __at (FSR1_ADDR)          FSR1;
extern __sfr __at (PCL_ADDR)           PCL;
extern __sfr __at (STATUS_ADDR)        STATUS;
extern __sfr __at (OPTION_ADDR)        OPTION;
extern __sfr __at (OSCM_ADDR)          OSCM;
extern __sfr __at (WDTC_ADDR)      	   WDTC;
extern __sfr __at (IOBICR_ADDR)        IOBICR;
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
extern __sfr __at (PUA_ADDR)           PUA;
extern __sfr __at (ANSA_ADDR)          ANSA;
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (PUB_ADDR)           PUB;
extern __sfr __at (ANSB_ADDR)          ANSB;
extern __sfr __at (IOC_ADDR)           IOC;
extern __sfr __at (OEC_ADDR)           OEC;
extern __sfr __at (PUC_ADDR)           PUC;
extern __sfr __at (ANSC_ADDR)          ANSC;
extern __sfr __at (IOD_ADDR)           IOD;
extern __sfr __at (OED_ADDR)           OED;
extern __sfr __at (PUD_ADDR)           PUD;
extern __sfr __at (ANSD_ADDR)          ANSD;
extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0DH_ADDR)        PWM0DH;    
extern __sfr __at (PWM0DL_ADDR)        PWM0DL;
extern __sfr __at (DTGCR_ADDR)         DTGCR;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;
extern __sfr __at (PWMOC_ADDR)         PWMOC;
extern __sfr __at (PWM2CR_ADDR)        PWM2CR;
extern __sfr __at (PWM2DH_ADDR)        PWM2DH;    
extern __sfr __at (PWM2DL_ADDR)        PWM2DL;
extern __sfr __at (PWMOV_ADDR)         PWMOV;
extern __sfr __at (CMP0C_ADDR)         CMP0C;       
extern __sfr __at (CMP1C_ADDR)         CMP1C;
extern __sfr __at (TKCTR0_ADDR)        TKCTR0;       
extern __sfr __at (TKCTR1_ADDR)        TKCTR1;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (PWMECR_ADDR)        PWMECR;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (CMP2C_ADDR)         CMP2C;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (TC2CL_ADDR)         TC2CL;
extern __sfr __at (TC2CH_ADDR)         TC2CH;
extern __sfr __at (T2GCR_ADDR)         T2GCR;
extern __sfr __at (ADCON0_ADDR)        ADCON0;
extern __sfr __at (ADCON1_ADDR)        ADCON1;
extern __sfr __at (ADH_ADDR)           ADH;
extern __sfr __at (ADL_ADDR)           ADL;
extern __sfr __at (LVDCR_ADDR)         LVDCR;
extern __sfr __at (COMC_ADDR)          COMC;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================



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



// ----- COPA0C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CNS0 : 1;
		unsigned char CNS1 : 1;
		unsigned char CPS0 : 1;
		unsigned char CPS1 : 1;
		unsigned char CPS2 : 1;
		unsigned char A0PS0 : 1;
		unsigned char A0PS1 : 1;
		unsigned char A0PS2 : 1;
	};
} __COPA0Cbits_t;
extern volatile __COPA0Cbits_t __at(COPA0C_ADDR) COPA0Cbits;

#define CNS0             COPA0Cbits.CNS0        	    /* bit 0 */
#define CNS1             COPA0Cbits.CNS1        	    /* bit 1 */
#define CPS0             COPA0Cbits.CPS0        	    /* bit 2 */
#define CPS1             COPA0Cbits.CPS1        	    /* bit 3 */
#define CPS2             COPA0Cbits.CPS2        	    /* bit 4 */
#define A0PS0            COPA0Cbits.A0PS0               /* bit 5 */
#define A0PS1            COPA0Cbits.A0PS1               /* bit 6 */
#define A0PS2            COPA0Cbits.A0PS2               /* bit 7 */



// ----- COPA1C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A1NS0 : 1;
		unsigned char A1NS1 : 1;
		unsigned char A1PS0 : 1;
		unsigned char A1PS1 : 1;
		unsigned char A1PS2 : 1;
		unsigned char A1G0 : 1;
		unsigned char A1G1 : 1;
		unsigned char A1G2 : 1;
	};
} __COPA1Cbits_t;
extern volatile __COPA1Cbits_t __at(COPA1C_ADDR) COPA1Cbits;

#define A1NS0            COPA1Cbits.A1NS0        	    /* bit 0 */
#define A1NS1            COPA1Cbits.A1NS1        	    /* bit 1 */
#define A1PS0            COPA1Cbits.A1PS0        	    /* bit 2 */
#define A1PS1            COPA1Cbits.A1PS1        	    /* bit 3 */
#define A1PS2            COPA1Cbits.A1PS2        	    /* bit 4 */
#define A1G0             COPA1Cbits.A1G0                /* bit 5 */
#define A1G1             COPA1Cbits.A1G1                /* bit 6 */
#define A1G2             COPA1Cbits.A1G2                /* bit 7 */



// ----- COPA2C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CXC : 1;
		unsigned char S11 : 1;
		unsigned char S12 : 1;
		unsigned char S13 : 1;
		unsigned char S21 : 1;
		unsigned char S22 : 1;
		unsigned char S23 : 1;
		unsigned char S24 : 1;
	};
} __COPA2Cbits_t;
extern volatile __COPA2Cbits_t __at(COPA2C_ADDR) COPA2Cbits;

#define CXC             COPA2Cbits.CXC              /* bit 0 */
#define S11             COPA2Cbits.S11              /* bit 1 */
#define S12             COPA2Cbits.S12              /* bit 2 */
#define S13             COPA2Cbits.S13              /* bit 3 */
#define S21             COPA2Cbits.S21              /* bit 4 */
#define S22             COPA2Cbits.S22              /* bit 5 */
#define S23             COPA2Cbits.S23              /* bit 6 */
#define S24             COPA2Cbits.S24              /* bit 7 */



// ----- OPA0OC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A0OF0 : 1;
		unsigned char A0OF1 : 1;
		unsigned char A0OF2 : 1;
		unsigned char A0OF3 : 1;
		unsigned char A0RS : 1;
		unsigned char A0OFM : 1;
		unsigned char A0OP : 1;
		unsigned char A0EN : 1;
	};
} __OPA0OCbits_t;
extern volatile __OPA0OCbits_t __at(OPA0OC_ADDR) OPA0OCbits;

#define A0OF0            OPA0OCbits.A0OF0             /* bit 0 */
#define A0OF1            OPA0OCbits.A0OF1             /* bit 1 */
#define A0OF2            OPA0OCbits.A0OF2             /* bit 2 */
#define A0OF3            OPA0OCbits.A0OF3             /* bit 3 */
#define A0RS             OPA0OCbits.A0RS              /* bit 4 */
#define A0OFM            OPA0OCbits.A0OFM             /* bit 5 */
#define A0OP             OPA0OCbits.A0OP              /* bit 6 */
#define A0EN             OPA0OCbits.A0EN              /* bit 7 */



// ----- OPA1OC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A1OF0 : 1;
		unsigned char A1OF1 : 1;
		unsigned char A1OF2 : 1;
		unsigned char A1OF3 : 1;
		unsigned char A1RS : 1;
		unsigned char A1OFM : 1;
		unsigned char A1OP : 1;
		unsigned char A1EN : 1;
	};
} __OPA1OCbits_t;
extern volatile __OPA1OCbits_t __at(OPA1OC_ADDR) OPA1OCbits;

#define A1OF0            OPA1OCbits.A1OF0             /* bit 0 */
#define A1OF1            OPA1OCbits.A1OF1             /* bit 1 */
#define A1OF2            OPA1OCbits.A1OF2             /* bit 2 */
#define A1OF3            OPA1OCbits.A1OF3             /* bit 3 */
#define A1RS             OPA1OCbits.A1RS              /* bit 4 */
#define A1OFM            OPA1OCbits.A1OFM             /* bit 5 */
#define A1OP             OPA1OCbits.A1OP              /* bit 6 */
#define A1EN             OPA1OCbits.A1EN              /* bit 7 */



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
		unsigned char MINT00 : 1;
		unsigned char MINT01 : 1;
		unsigned char MINT10 : 1;
		unsigned char MINT11 : 1;
		unsigned char PD : 1;
		unsigned char TO : 1;
		unsigned char : 1;
		unsigned char GIE : 1;
	};
} __OPTIONbits_t;
extern volatile __OPTIONbits_t __at(OPTION_ADDR) OPTIONbits;

#define MINT00           OPTIONbits.MINT00        	/* bit 0 */
#define MINT01           OPTIONbits.MINT01        	/* bit 1 */
#define MINT10           OPTIONbits.MINT10        	/* bit 2 */
#define MINT11           OPTIONbits.MINT11        	/* bit 3 */
#define PD               OPTIONbits.PD        	    /* bit 4 */
#define TO               OPTIONbits.TO              /* bit 5 */
#define GIE              OPTIONbits.GIE        	    /* bit 7 */



// ----- OSCM Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char STPL:1;
		unsigned char LPSPD:1;
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
#define LPSPD           OSCMbits.LPSPD        	  /* bit 1 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define CLKM            OSCMbits.CLKM             /* bit 3 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */
#define STBL            OSCMbits.STBL             /* bit 6 */
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
		unsigned char PWM0IE:1;
		unsigned char PWM1IE:1;
		unsigned char PWM2IE:1;
		unsigned char FLTIE:1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char :1;	
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define PWM0IE          INTCR2bits.PWM0IE      	  /* bit 0 */
#define PWM1IE          INTCR2bits.PWM1IE        	/* bit 1 */
#define PWM2IE          INTCR2bits.PWM2IE      	  /* bit 2 */
#define FLTIE           INTCR2bits.FLTIE          /* bit 3 */



// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0IF:1;
		unsigned char PWM1IF:1;
		unsigned char PWM2IF:1;
		unsigned char FLTIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define PWM0IF          INTF2bits.PWM0IF          /* bit 0 */
#define PWM1IF          INTF2bits.PWM1IF       	  /* bit 1 */
#define PWM2IF          INTF2bits.PWM2IF       	  /* bit 2 */
#define FLTIF           INTF2bits.FLTIF           /* bit 3 */



// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char TC2IE:1;
		unsigned char TC2GIE:1;
		unsigned char TKIE:1;
		unsigned char :1;
		unsigned char ADIE:1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TC2IE           INTCR0bits.TC2IE          /* bit 2 */
#define TC2GIE          INTCR0bits.TC2GIE         /* bit 3 */
#define TKIE            INTCR0bits.TKIE        	  /* bit 4 */
#define ADIE            INTCR0bits.ADIE        	  /* bit 6 */



// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char TKIF:1;
		unsigned char :1;
		unsigned char ADIF:1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF        	  /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */
#define TKIF            INTF0bits.TKIF        	  /* bit 4 */
#define ADIF            INTF0bits.ADIF        	  /* bit 6 */



// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBIE:1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
		unsigned char LVDIE:1;
		unsigned char OPA0IE:1;
		unsigned char OPA1IE:1;
		unsigned char CMPIE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOBIE           INTCR1bits.IOBIE       	  /* bit 0 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */
#define LVDIE           INTCR1bits.LVDIE          /* bit 4 */
#define OPA0IE          INTCR1bits.OPA0IE      	  /* bit 5 */
#define OPA1IE          INTCR1bits.OPA1IE      	  /* bit 6 */
#define CMPIE           INTCR1bits.CMPIE      	  /* bit 7 */



// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBIF:1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
		unsigned char LVDIF:1;
		unsigned char OPA0IF:1;
		unsigned char OPA1IF:1;
		unsigned char CMIF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOBIF           INTF1bits.IOBIF           /* bit 0 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */
#define LVDIF           INTF1bits.LVDIF           /* bit 4 */
#define OPA0IF          INTF1bits.OPA0IF          /* bit 5 */
#define OPA1IF          INTF1bits.OPA1IF          /* bit 6 */
#define CMIF            INTF1bits.CMIF      	    /* bit 7 */



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



// ----- ANSA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSA0 : 1;
		unsigned char ANSA1 : 1;
		unsigned char ANSA2 : 1;
		unsigned char ANSA3 : 1;
		unsigned char ANSA4 : 1;
		unsigned char ANSA5 : 1;
		unsigned char ANSA6 : 1;
		unsigned char ANSA7 : 1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0               ANSAbits.ANSA0              /* bit 0 */
#define ANSA1               ANSAbits.ANSA1              /* bit 1 */
#define ANSA2               ANSAbits.ANSA2              /* bit 2 */
#define ANSA3               ANSAbits.ANSA3              /* bit 3 */
#define ANSA4               ANSAbits.ANSA4              /* bit 4 */
#define ANSA5               ANSAbits.ANSA5              /* bit 5 */
#define ANSA6               ANSAbits.ANSA6              /* bit 6 */
#define ANSA7               ANSAbits.ANSA7              /* bit 7 */



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



// ----- ANSB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char ANSB6 : 1;
		unsigned char ANSB7 : 1;
	};
} __ANSBbits_t;
extern volatile __ANSBbits_t __at(PUB_ADDR) ANSBbits;

#define ANSB6               ANSBbits.ANSB6              /* bit 6 */
#define ANSB7               ANSBbits.ANSB7              /* bit 7 */



// ----- IOC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0 : 1;
		unsigned char IOC1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

#define IOC0               IOCbits.IOC0              /* bit 0 */
#define IOC1               IOCbits.IOC1              /* bit 1 */



// ----- OEC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEC0 : 1;
		unsigned char OEC1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __OECbits_t;
extern volatile __OECbits_t __at(OEC_ADDR) OECbits;

#define OEC0               OECbits.OEC0              /* bit 0 */
#define OEC1               OECbits.OEC1              /* bit 1 */



// ----- PUC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUC0 : 1;
		unsigned char PUC1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __PUCbits_t;
extern volatile __PUCbits_t __at(PUC_ADDR) PUCbits;

#define PUC0               PUCbits.PUC0              /* bit 0 */
#define PUC1               PUCbits.PUC1              /* bit 1 */



// ----- ANSC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSC0 : 1;
		unsigned char ANSC1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __ANSCbits_t;
extern volatile __ANSCbits_t __at(ANSC_ADDR) ANSCbits;

#define ANSC0               ANSCbits.ANSC0              /* bit 0 */
#define ANSC1               ANSCbits.ANSC1              /* bit 1 */



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



// ----- PUD Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUD0 : 1;
		unsigned char PUD1 : 1;
		unsigned char PUD2 : 1;
		unsigned char PUD3 : 1;
		unsigned char PUD4 : 1;
		unsigned char PUD5 : 1;
		unsigned char PUD6 : 1;
		unsigned char PUD7 : 1;
	};
} __PUDbits_t;
extern volatile __PUDbits_t __at(PUD_ADDR) PUDbits;

#define PUD0               PUDbits.PUD0              /* bit 0 */
#define PUD1               PUDbits.PUD1              /* bit 1 */
#define PUD2               PUDbits.PUD2              /* bit 2 */
#define PUD3               PUDbits.PUD3              /* bit 3 */
#define PUD4               PUDbits.PUD4              /* bit 4 */
#define PUD5               PUDbits.PUD5              /* bit 5 */
#define PUD6               PUDbits.PUD6              /* bit 6 */
#define PUD7               PUDbits.PUD7              /* bit 7 */



// ----- ANSD Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSD0 : 1;
		unsigned char ANSD1 : 1;
		unsigned char ANSD2 : 1;
		unsigned char ANSD3 : 1;
		unsigned char ANSD4 : 1;
		unsigned char ANSD5 : 1;
		unsigned char ANSD6 : 1;
		unsigned char ANSD7 : 1;
	};
} __ANSDbits_t;
extern volatile __ANSDbits_t __at(ANSD_ADDR) ANSDbits;

#define ANSD0               ANSDbits.ANSD0              /* bit 0 */
#define ANSD1               ANSDbits.ANSD1              /* bit 1 */
#define ANSD2               ANSDbits.ANSD2              /* bit 2 */
#define ANSD3               ANSDbits.ANSD3              /* bit 3 */
#define ANSD4               ANSDbits.ANSD4              /* bit 4 */
#define ANSD5               ANSDbits.ANSD5              /* bit 5 */
#define ANSD6               ANSDbits.ANSD6              /* bit 6 */
#define ANSD7               ANSDbits.ANSD7              /* bit 7 */



// ----- PWM0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0TBS0 : 1;
		unsigned char PWM0TBS1 : 1;
		unsigned char PWM0DTEN : 1;
		unsigned char PWM0FLTEN : 1;
		unsigned char PWM0NOE : 1;
		unsigned char PWM0POE : 1;
		unsigned char PWM0MOD : 1;
		unsigned char PWM0EN : 1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0TBS0                  PWM0CRbits.PWM0TBS0                 /* bit 0 */
#define PWM0TBS1                  PWM0CRbits.PWM0TBS1                 /* bit 1 */
#define PWM0DTEN                  PWM0CRbits.PWM0DTEN                 /* bit 2 */
#define PWM0FLTEN                 PWM0CRbits.PWM0FLTEN                /* bit 3 */
#define PWM0NOE                   PWM0CRbits.PWM0NOE                  /* bit 4 */
#define PWM0POE                   PWM0CRbits.PWM0POE                  /* bit 5 */
#define PWM0MOD                   PWM0CRbits.PWM0MOD                  /* bit 6 */
#define PWM0EN                    PWM0CRbits.PWM0EN                   /* bit 7 */



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



// ----- DTGCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char DTG0 : 1;
		unsigned char DTG1 : 1;
		unsigned char DTG2 : 1;
		unsigned char DTG3 : 1;
		unsigned char DTG4 : 1;
		unsigned char DTG5 : 1;
		unsigned char DTG6 : 1;
		unsigned char DTG7 : 1;
	};
} __DTGCRbits_t;
extern volatile __DTGCRbits_t __at(DTGCR_ADDR) DTGCRbits;

#define DTG0               DTGCRbits.DTG0              /* bit 0 */
#define DTG1               DTGCRbits.DTG1              /* bit 1 */
#define DTG2               DTGCRbits.DTG2              /* bit 2 */
#define DTG3               DTGCRbits.DTG3              /* bit 3 */
#define DTG4               DTGCRbits.DTG4              /* bit 4 */
#define DTG5               DTGCRbits.DTG5              /* bit 5 */
#define DTG6               DTGCRbits.DTG6              /* bit 6 */
#define DTG7               DTGCRbits.DTG7              /* bit 7 */



// ----- PWM1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1TBS0 : 1;
		unsigned char PWM1TBS1 : 1;
		unsigned char PWM1DTEN : 1;
		unsigned char PWM1FLTEN : 1;
		unsigned char PWM1NOE : 1;
		unsigned char PWM1POE : 1;
		unsigned char PWM1MOD : 1;
		unsigned char PWM1EN : 1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1TBS0                  PWM1CRbits.PWM1TBS0                 /* bit 0 */
#define PWM1TBS1                  PWM1CRbits.PWM1TBS1                 /* bit 1 */
#define PWM1DTEN                  PWM1CRbits.PWM1DTEN                 /* bit 2 */
#define PWM1FLTEN                 PWM1CRbits.PWM1FLTEN                /* bit 3 */
#define PWM1NOE                   PWM1CRbits.PWM1NOE                  /* bit 4 */
#define PWM1POE                   PWM1CRbits.PWM1POE                  /* bit 5 */
#define PWM1MOD                   PWM1CRbits.PWM1MOD                  /* bit 6 */
#define PWM1EN                    PWM1CRbits.PWM1EN                   /* bit 7 */



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



// ----- PWMOC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0POC:1;
		unsigned char PWM0NOC:1;
		unsigned char PWM1POC:1;
		unsigned char PWM1NOC:1;
		unsigned char PWM2POC:1;
		unsigned char PWM2NOC:1;
		unsigned char :1;
		unsigned char :1;
	};
} __PWMOCbits_t;
extern volatile __PWMOCbits_t __at(PWMOC_ADDR) PWMOCbits;

#define PWM0POC         PWMOCbits.PWM0POC         /* bit 0 */
#define PWM0NOC         PWMOCbits.PWM0NOC         /* bit 1 */
#define PWM1POC         PWMOCbits.PWM1POC         /* bit 2 */
#define PWM1NOC         PWMOCbits.PWM1NOC         /* bit 3 */
#define PWM2POC         PWMOCbits.PWM2POC         /* bit 4 */
#define PWM2NOC         PWMOCbits.PWM2NOC         /* bit 5 */



// ----- PWM2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2TBS0 : 1;
		unsigned char PWM2TBS1 : 1;
		unsigned char PWM2DTEN : 1;
		unsigned char PWM2FLTEN : 1;
		unsigned char PWM2NOE : 1;
		unsigned char PWM2POE : 1;
		unsigned char PWM2MOD : 1;
		unsigned char PWM2EN : 1;
	};
} __PWM2CRbits_t;
extern volatile __PWM2CRbits_t __at(PWM2CR_ADDR) PWM2CRbits;

#define PWM2TBS0              PWM2CRbits.PWM2TBS0             /* bit 0 */
#define PWM2TBS1              PWM2CRbits.PWM2TBS1             /* bit 1 */
#define PWM2DTEN              PWM2CRbits.PWM2DTEN             /* bit 2 */
#define PWM2FLTEN             PWM2CRbits.PWM2FLTEN            /* bit 3 */
#define PWM2NOE               PWM2CRbits.PWM2NOE              /* bit 4 */
#define PWM2POE               PWM2CRbits.PWM2POE              /* bit 5 */
#define PWM2MOD               PWM2CRbits.PWM2MOD              /* bit 6 */
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



// ----- PWMOV Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0POV:1;
		unsigned char PWM0NOV:1;
		unsigned char PWM1POV:1;
		unsigned char PWM1NOV:1;
		unsigned char PWM2POV:1;
		unsigned char PWM2NOV:1;
		unsigned char :1;
		unsigned char :1;
	};
} __PWMOVbits_t;
extern volatile __PWMOVbits_t __at(PWMOV_ADDR) PWMOVbits;

#define PWM0POV         PWMOVbits.PWM0POV         /* bit 0 */
#define PWM0NOV         PWMOVbits.PWM0NOV         /* bit 1 */
#define PWM1POV         PWMOVbits.PWM1POV         /* bit 2 */
#define PWM1NOV         PWMOVbits.PWM1NOV         /* bit 3 */
#define PWM2POV         PWMOVbits.PWM2POV         /* bit 4 */
#define PWM2NOV         PWMOVbits.PWM2NOV         /* bit 5 */



// ----- CMP0C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char DBC0 : 1;
		unsigned char DBC1 : 1;
		unsigned char COUT : 1;
		unsigned char CPOL : 1;
		unsigned char CEN : 1;
		unsigned char : 1;
	};
} __CMP0Cbits_t;
extern volatile __CMP0Cbits_t __at(CMP0C_ADDR) CMP0Cbits;

#define DBC0            CMP0Cbits.DBC0            /* bit 2 */
#define DBC1            CMP0Cbits.DBC1            /* bit 3 */
#define COUT            CMP0Cbits.COUT            /* bit 4 */
#define CPOL            CMP0Cbits.CPOL            /* bit 5 */
#define CEN             CMP0Cbits.CEN             /* bit 6 */



// ----- CMP1C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CINTS0 : 1;
		unsigned char CINTS1 : 1;
		unsigned char TMR0S : 1;
		unsigned char CPVRC : 1;
		unsigned char A1VRC : 1;
		unsigned char A0VRC : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __CMP1Cbits_t;
extern volatile __CMP1Cbits_t __at(CMP1C_ADDR) CMP1Cbits;

#define CINTS0          CMP1Cbits.CINTS0          /* bit 0 */
#define CINTS1          CMP1Cbits.CINTS1          /* bit 1 */
#define TMR0S           CMP1Cbits.TMR0S           /* bit 2 */
#define CPVRC           CMP1Cbits.CPVRC           /* bit 3 */
#define A1VRC           CMP1Cbits.A1VRC           /* bit 4 */
#define A0VRC           CMP1Cbits.A0VRC           /* bit 5 */



// ----- TKCTR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCKS0 : 1;
		unsigned char TKCKS1 : 1;
		unsigned char TKCKS2 : 1;
		unsigned char TKCLKS : 1;
		unsigned char TKCAPS0 : 1;
		unsigned char TKCAPS1 : 1;
		unsigned char TKSTART : 1;
		unsigned char TKEN : 1;
	};
} __TKCTR0bits_t;
extern volatile __TKCTR0bits_t __at(TKCTR0_ADDR) TKCTR0bits;

#define TKCKS0           TKCTR0bits.TKCKS0          /* bit 0 */
#define TKCKS1           TKCTR0bits.TKCKS1          /* bit 1 */
#define TKCKS2           TKCTR0bits.TKCKS2          /* bit 2 */
#define TKCLKS           TKCTR0bits.TKCLKS          /* bit 3 */
#define TKCAPS0          TKCTR0bits.TKCAPS0         /* bit 4 */
#define TKCAPS1          TKCTR0bits.TKCAPS1         /* bit 5 */
#define TKSTART          TKCTR0bits.TKSTART         /* bit 6 */
#define TKEN             TKCTR0bits.TKEN            /* bit 7 */



// ----- TKCTR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCHS0 : 1;
		unsigned char TKCHS1 : 1;
		unsigned char TKCHS2 : 1;
		unsigned char TKCHS3 : 1;
		unsigned char TKCMVS0 : 1;
		unsigned char TKCMVS1 : 1;
		unsigned char TKIS0 : 1;
		unsigned char TKIS1 : 1;
	};
} __TKCTR1bits_t;
extern volatile __TKCTR1bits_t __at(TKCTR1_ADDR) TKCTR1bits;

#define TKCHS0           TKCTR1bits.TKCHS0          /* bit 0 */
#define TKCHS1           TKCTR1bits.TKCHS1          /* bit 1 */
#define TKCHS2           TKCTR1bits.TKCHS2          /* bit 2 */
#define TKCHS3           TKCTR1bits.TKCHS3          /* bit 3 */
#define TKCMVS0          TKCTR1bits.TKCMVS0         /* bit 4 */
#define TKCMVS1          TKCTR1bits.TKCMVS1         /* bit 5 */
#define TKIS0            TKCTR1bits.TKIS0           /* bit 6 */
#define TKIS1            TKCTR1bits.TKIS1           /* bit 7 */



// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0 : 1;
		unsigned char TC0CKPS1 : 1;
		unsigned char TC0CKPS2 : 1;
		unsigned char TC0CKS0 : 1;
		unsigned char TC0CKS1 : 1;
		unsigned char TC0BUZZOE : 1;
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
#define TC0BUZZOE              T0CRbits.TC0BUZZOE            /* bit 5 */
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



// ----- PWMECR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char FLT0DB0 : 1;
		unsigned char FLT0DB1 : 1;
		unsigned char FLT0M : 1;
		unsigned char FLT0EN : 1;
		unsigned char FLT1EN : 1;
		unsigned char DTGCKS0 : 1;
		unsigned char DTGCKS1 : 1;
		unsigned char FLTST : 1;
	};
} __PWMECRbits_t;
extern volatile __PWMECRbits_t __at(PWMECR_ADDR) PWMECRbits;

#define FLT0DB0          PWMECRbits.FLT0DB0         /* bit 0 */
#define FLT0DB1          PWMECRbits.FLT0DB1         /* bit 1 */
#define FLT0M            PWMECRbits.FLT0M           /* bit 2 */
#define FLT0EN           PWMECRbits.FLT0EN          /* bit 3 */
#define FLT1EN           PWMECRbits.FLT1EN          /* bit 4 */
#define DTGCKS0          PWMECRbits.DTGCKS0         /* bit 5 */
#define DTGCKS1          PWMECRbits.DTGCKS1         /* bit 6 */
#define FLTST            PWMECRbits.FLTST           /* bit 7 */



// ----- T1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CKPS0 : 1;
		unsigned char TC1CKPS1 : 1;
		unsigned char TC1CKPS2 : 1;
		unsigned char TC1CKS0 : 1;
		unsigned char TC1CKS1 : 1;
		unsigned char TC1BUZZOE : 1;
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
#define TC1BUZZOE              T1CRbits.TC1BUZZOE            /* bit 5 */
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



// ----- CMP2C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPOF0 : 1;
		unsigned char CMPOF1 : 1;
		unsigned char CMPOF2 : 1;
		unsigned char CMPOF3 : 1;
		unsigned char CMPRS : 1;
		unsigned char CMPOFM : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __CMP2Cbits_t;
extern volatile __CMP2Cbits_t __at(CMP2C_ADDR) CMP2Cbits;

#define CMPOF0           CMP2Cbits.CMPOF0           /* bit 0 */
#define CMPOF1           CMP2Cbits.CMPOF1           /* bit 1 */
#define CMPOF2           CMP2Cbits.CMPOF2           /* bit 2 */
#define CMPOF3           CMP2Cbits.CMPOF3           /* bit 3 */
#define CMPRS            CMP2Cbits.CMPRS            /* bit 4 */
#define CMPOFM           CMP2Cbits.CMPOFM           /* bit 5 */



// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0 : 1;
		unsigned char TC2CKPS1 : 1;
		unsigned char TC2CKPS2 : 1;
		unsigned char TC2CKS0 : 1;
		unsigned char TC2CKS1 : 1;
		unsigned char TC2BUZZOE : 1;
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
#define TC2BUZZOE              T2CRbits.TC2BUZZOE            /* bit 5 */
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



// ----- ADCON0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CHS0 : 1;
		unsigned char CHS1 : 1;
		unsigned char CHS2 : 1;
		unsigned char CHS3 : 1;
		unsigned char ADFM : 1;
		unsigned char EOC : 1;
		unsigned char ADS : 1;
		unsigned char ADENB : 1;
	};
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;

#define CHS0             ADCON0bits.CHS0            /* bit 0 */
#define CHS1             ADCON0bits.CHS1            /* bit 1 */
#define CHS2             ADCON0bits.CHS2            /* bit 2 */
#define CHS3             ADCON0bits.CHS3            /* bit 3 */
#define ADFM             ADCON0bits.ADFM            /* bit 4 */
#define EOC              ADCON0bits.EOC             /* bit 5 */
#define ADS              ADCON0bits.ADS             /* bit 6 */
#define ADENB            ADCON0bits.ADENB           /* bit 7 */



// ----- ADCON1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char VHS0 : 1;
		unsigned char VHS1 : 1;
		unsigned char ADCKS0 : 1;
		unsigned char ADCKS1 : 1;
		unsigned char ADCKS2 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char EVHENB : 1;
	};
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;

#define VHS0             ADCON1bits.VHS0            /* bit 0 */
#define VHS1             ADCON1bits.VHS1            /* bit 1 */
#define ADCKS0           ADCON1bits.ADCKS0          /* bit 2 */
#define ADCKS1           ADCON1bits.ADCKS1          /* bit 3 */
#define ADCKS2           ADCON1bits.ADCKS2          /* bit 4 */
#define EVHENB           ADCON1bits.EVHENB          /* bit 7 */



// ----- LVDCR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVD0 : 1;
		unsigned char VLVD1 : 1;
		unsigned char VLVD2 : 1;
		unsigned char : 1;
		unsigned char LVDF : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char LVDEN : 1;
	};
} __LVDCRbits_t;
extern volatile __LVDCRbits_t __at(LVDCR_ADDR) LVDCRbits;

#define VLVD0            LVDCRbits.VLVD0            /* bit 0 */
#define VLVD1            LVDCRbits.VLVD1            /* bit 1 */
#define VLVD2            LVDCRbits.VLVD2            /* bit 2 */
#define LVDF             LVDCRbits.LVDF             /* bit 4 */
#define LVDEN            LVDCRbits.LVDEN            /* bit 7 */



// ----- COMC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char SCOM0 : 1;
		unsigned char SCOM1 : 1;
		unsigned char SCOM2 : 1;
		unsigned char SCOM3 : 1;
		unsigned char RLCD0 : 1;
		unsigned char RLCD1 : 1;
		unsigned char RLCD2 : 1;
		unsigned char : 1;
	};
} __COMCbits_t;
extern volatile __COMCbits_t __at(COMC_ADDR) COMCbits;

#define SCOM0            COMCbits.SCOM0            /* bit 0 */
#define SCOM1            COMCbits.SCOM1            /* bit 1 */
#define SCOM2            COMCbits.SCOM2            /* bit 2 */
#define SCOM3            COMCbits.SCOM3            /* bit 3 */
#define RLCD0            COMCbits.RLCD0            /* bit 4 */
#define RLCD1            COMCbits.RLCD1            /* bit 5 */
#define RLCD2            COMCbits.RLCD2            /* bit 6 */





























#endif