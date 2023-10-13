#ifndef __M8R82_H__
#define __M8R82_H__

//
// Register addresses.
//
#define LCDCR0_ADDR         0x00A0
#define LCDCR1_ADDR         0x00A1
#define LCDCR2_ADDR         0x00A2
#define RFCCR0_ADDR         0x00A8
#define RFCCR1_ADDR         0x00A9
#define KEYCR_ADDR          0x00AC
#define KEYSC_ADDR          0x00AD
#define KEYSS_ADDR          0x00AE
#define INDF0_ADDR          0x00B0
#define FSR0_ADDR           0x00B1
#define INDF1_ADDR          0x00B8
#define FSR1_ADDR           0x00B9
#define PCL_ADDR            0x00BA
#define STATUS_ADDR         0x00BB
#define OPTION_ADDR         0x00BC
#define OSCM_ADDR           0x00BD
#define WDTC_ADDR      	    0x00BE
#define INDF2_ADDR          0x00C0
#define HBUF_ADDR           0x00C1
#define INTCR0_ADDR         0x00C4
#define INTF0_ADDR          0x00C5
#define INTCR1_ADDR         0x00C6
#define INTF1_ADDR          0x00C7
#define IOA_ADDR            0x00C8
#define OEA_ADDR            0x00C9
#define PUA_ADDR            0x00CA
#define IOB_ADDR            0x00CC
#define OEB_ADDR            0x00CD
#define IOC_ADDR            0x00D0
#define OEC_ADDR            0x00D1
#define PUC_ADDR            0x00D2
#define IOCICR_ADDR         0x00D3
#define IOD_ADDR            0x00D4
#define OED_ADDR            0x00D5
#define IOE_ADDR            0x00D8
#define OEE_ADDR            0x00D9
#define IOF_ADDR            0x00DC
#define OEF_ADDR            0x00DD
#define T0CR_ADDR           0x00E8
#define TC0R_ADDR           0x00E9
#define TC0C_ADDR           0x00EA
#define T1CR_ADDR           0x00EC
#define TC1R_ADDR           0x00ED
#define TC1C_ADDR           0x00EE
#define T2CR_ADDR           0x00F0
#define TC2CL_ADDR          0x00F1
#define TC2CH_ADDR          0x00F2
#define IRCR_ADDR           0x00F4
#define IRCKS_ADDR          0x00F5
#define IRHT_ADDR           0x00F6
#define IRLT_ADDR           0x00F7
#define LVDCON_ADDR         0x00F8


//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (LCDCR0_ADDR)        LCDCR0;
extern __sfr __at (LCDCR1_ADDR)        LCDCR1;
extern __sfr __at (LCDCR2_ADDR)        LCDCR2;
extern __sfr __at (RFCCR0_ADDR)        RFCCR0;
extern __sfr __at (RFCCR1_ADDR)        RFCCR1;
extern __sfr __at (KEYCR_ADDR)         KEYCR;
extern __sfr __at (KEYSC_ADDR)         KEYSC;
extern __sfr __at (KEYSS_ADDR)         KEYSS;
extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
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
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (IOC_ADDR)           IOC;
extern __sfr __at (OEC_ADDR)           OEC;
extern __sfr __at (PUC_ADDR)           PUC;
extern __sfr __at (IOCICR_ADDR)        IOCICR;
extern __sfr __at (IOD_ADDR)           IOD;
extern __sfr __at (OED_ADDR)           OED;
extern __sfr __at (IOE_ADDR)           IOE;
extern __sfr __at (OEE_ADDR)           OEE;
extern __sfr __at (IOF_ADDR)           IOF;
extern __sfr __at (OEF_ADDR)           OEF;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0R_ADDR)          TC0R;
extern __sfr __at (TC0C_ADDR)          TC0C;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1R_ADDR)          TC1R;
extern __sfr __at (TC1C_ADDR)          TC1C;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (TC2CL_ADDR)         TC2CL;
extern __sfr __at (TC2CH_ADDR)         TC2CH;
extern __sfr __at (IRCR_ADDR)          IRCR;
extern __sfr __at (IRCKS_ADDR)         IRCKS;
extern __sfr __at (IRHT_ADDR)          IRHT;
extern __sfr __at (IRLT_ADDR)          IRLT;
extern __sfr __at (LVDCON_ADDR)        LVDCON;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================



// ----- LCDCR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char LCDCKS : 1;
		unsigned char SPDEN : 1;
		unsigned char BIAS : 1;
		unsigned char DUTY : 1;
		unsigned char CIOS0 : 1;
		unsigned char CIOS1 : 1;
		unsigned char MODS : 1;
		unsigned char LCDEN : 1;
	};
} __LCDCR0bits_t;
extern volatile __LCDCR0bits_t __at(LCDCR0_ADDR) LCDCR0bits;

#define LCDCKS               LCDCR0bits.LCDCKS              /* bit 0 */
#define SPDEN                LCDCR0bits.SPDEN              /* bit 1 */
#define BIAS                 LCDCR0bits.BIAS             /* bit 2 */
#define DUTY                 LCDCR0bits.DUTY               /* bit 3 */
#define CIOS0                LCDCR0bits.CIOS0              /* bit 4 */
#define CIOS1                LCDCR0bits.CIOS1              /* bit 5 */
#define MODS                 LCDCR0bits.MODS              /* bit 6 */
#define LCDEN                LCDCR0bits.LCDEN              /* bit 7 */



// ----- LCDCR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char GYS0 : 1;
		unsigned char GYS1 : 1;
		unsigned char GYS2 : 1;
		unsigned char LCDM : 1;
		unsigned char FLCD0 : 1;
		unsigned char FCLD1 : 1;
		unsigned char LCDRS0 : 1;
		unsigned char LCDRS1 : 1;
	};
} __LCDCR1bits_t;
extern volatile __LCDCR1bits_t __at(LCDCR1_ADDR) LCDCR1bits;

#define GYS0               LCDCR1bits.GYS0              /* bit 0 */
#define GYS1               LCDCR1bits.GYS1              /* bit 1 */
#define GYS2               LCDCR1bits.GYS2              /* bit 2 */
#define LCDM               LCDCR1bits.LCDM              /* bit 3 */
#define FLCD0              LCDCR1bits.FLCD0             /* bit 4 */
#define FCLD1              LCDCR1bits.FCLD1             /* bit 5 */
#define LCDRS0             LCDCR1bits.LCDRS0            /* bit 6 */
#define LCDRS1             LCDCR1bits.LCDRS1            /* bit 7 */



// ----- LCDCR2 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char SIOS0 : 1;
		unsigned char SIOS1 : 1;
		unsigned char SIOS2 : 1;
		unsigned char SIOS3 : 1;
		unsigned char SIOS4 : 1;
		unsigned char SIOS5 : 1;
		unsigned char SIOS6 : 1;
		unsigned char LCDVS : 1;
	};
} __LCDCR2bits_t;
extern volatile __LCDCR2bits_t __at(LCDCR2_ADDR) LCDCR2bits;

#define SIOS0               LCDCR2bits.SIOS0              /* bit 0 */
#define SIOS1               LCDCR2bits.SIOS1              /* bit 1 */
#define SIOS2               LCDCR2bits.SIOS2              /* bit 2 */
#define SIOS3               LCDCR2bits.SIOS3              /* bit 3 */
#define SIOS4               LCDCR2bits.SIOS4              /* bit 4 */
#define SIOS5               LCDCR2bits.SIOS5              /* bit 5 */
#define SIOS6               LCDCR2bits.SIOS6              /* bit 6 */
#define LCDVS               LCDCR2bits.LCDVS              /* bit 7 */



// ----- RFCCR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RFCH0 : 1;
		unsigned char RFCH1 : 1;
		unsigned char : 1;
		unsigned char RFCOE : 1;
		unsigned char RFCH0E : 1;
		unsigned char RFCH1E : 1;
		unsigned char RFCH2E : 1;
		unsigned char RFCEN : 1;
	};
} __RFCCR0bits_t;
extern volatile __RFCCR0bits_t __at(RFCCR0_ADDR) RFCCR0bits;

#define RFCH0                RFCCR0bits.RFCH0               /* bit 0 */
#define RFCH1                RFCCR0bits.RFCH1               /* bit 1 */
#define RFCOE                RFCCR0bits.RFCOE               /* bit 3 */
#define RFCH0E               RFCCR0bits.RFCH0E              /* bit 4 */
#define RFCH1E               RFCCR0bits.RFCH1E              /* bit 5 */
#define RFCH2E               RFCCR0bits.RFCH2E              /* bit 6 */
#define RFCEN                RFCCR0bits.RFCEN               /* bit 7 */



// ----- RFCCR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char LDOEN : 1;
		unsigned char PUMPEN : 1;
	};
} __RFCCR1bits_t;
extern volatile __RFCCR1bits_t __at(RFCCR1_ADDR) RFCCR1bits;


#define LDOEN               RFCCR1bits.LDOEN              /* bit 6 */
#define PUMPEN              RFCCR1bits.PUMPEN             /* bit 7 */



// ----- KEYCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char KEYIM : 1;
		unsigned char KEYEN : 1;
	};
} __KEYCRbits_t;
extern volatile __KEYCRbits_t __at(KEYCR_ADDR) KEYCRbits;


#define KEYIM               KEYCRbits.KEYIM              /* bit 6 */
#define KEYEN               KEYCRbits.KEYEN              /* bit 7 */



// ----- KEYSC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char KEYSC0 : 1;
		unsigned char KEYSC1 : 1;
		unsigned char KEYSC2 : 1;
		unsigned char KEYSC3 : 1;
		unsigned char KEYSC4 : 1;
		unsigned char KEYSC5 : 1;
		unsigned char KEYSC6 : 1;
		unsigned char KEYSC7 : 1;
	};
} __KEYSCbits_t;
extern volatile __KEYSCbits_t __at(KEYSC_ADDR) KEYSCbits;


#define KEYSC0               KEYSCbits.KEYSC0              /* bit 0 */
#define KEYSC1               KEYSCbits.KEYSC1              /* bit 1 */
#define KEYSC2               KEYSCbits.KEYSC2              /* bit 2 */
#define KEYSC3               KEYSCbits.KEYSC3              /* bit 3 */
#define KEYSC4               KEYSCbits.KEYSC4              /* bit 4 */
#define KEYSC5               KEYSCbits.KEYSC5              /* bit 5 */
#define KEYSC6               KEYSCbits.KEYSC6              /* bit 6 */
#define KEYSC7               KEYSCbits.KEYSC7              /* bit 7 */



// ----- KEYSS Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char KEYSS0 : 1;
		unsigned char KEYSS1 : 1;
		unsigned char KEYSS2 : 1;
		unsigned char KEYSS3 : 1;
		unsigned char KEYSS4 : 1;
		unsigned char KEYSS5 : 1;
		unsigned char KEYSS6 : 1;
		unsigned char KEYSS7 : 1;
	};
} __KEYSSbits_t;
extern volatile __KEYSSbits_t __at(KEYSS_ADDR) KEYSSbits;


#define KEYSS0               KEYSSbits.KEYSS0              /* bit 0 */
#define KEYSS1               KEYSSbits.KEYSS1              /* bit 1 */
#define KEYSS2               KEYSSbits.KEYSS2              /* bit 2 */
#define KEYSS3               KEYSSbits.KEYSS3              /* bit 3 */
#define KEYSS4               KEYSSbits.KEYSS4              /* bit 4 */
#define KEYSS5               KEYSSbits.KEYSS5              /* bit 5 */
#define KEYSS6               KEYSSbits.KEYSS6              /* bit 6 */
#define KEYSS7               KEYSSbits.KEYSS7              /* bit 7 */



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

#define MINT00          OPTIONbits.MINT00    	    /* bit 0 */
#define MINT01          OPTIONbits.MINT01    	    /* bit 1 */
#define MINT10          OPTIONbits.MINT10    	    /* bit 2 */
#define MINT11          OPTIONbits.MINT11    	    /* bit 3 */
#define PD              OPTIONbits.PD        	    /* bit 4 */
#define TO              OPTIONbits.TO             /* bit 5 */
#define GIE             OPTIONbits.GIE        	  /* bit 7 */



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
		unsigned char TC2GIE:1;
		unsigned char IRLTIE:1;
		unsigned char IRHTIE:1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TC2IE           INTCR0bits.TC2IE          /* bit 2 */
#define TC2GIE          INTCR0bits.TC2GIE         /* bit 3 */
#define IRLTIE          INTCR0bits.IRLTIE      	  /* bit 4 */
#define IRHTIE          INTCR0bits.IRHTIE      	  /* bit 5 */



// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char IRLTIF:1;
		unsigned char IRHTIF:1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF        	  /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */
#define IRLTIF          INTF0bits.IRLTIF       	  /* bit 4 */
#define IRHTIF          INTF0bits.IRHTIF          /* bit 5 */



// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIE:1;
		unsigned char KEYIE:1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
		unsigned char LVDIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOCHIE          INTCR1bits.IOCHIE         /* bit 0 */
#define KEYIE           INTCR1bits.KEYIE       	  /* bit 1 */
#define INT0IE          INTCR1bits.INT0IE         /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */
#define LVDIE           INTCR1bits.LVDIE          /* bit 4 */



// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIF:1;
		unsigned char KEYIF:1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
		unsigned char LVDIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOCHIF          INTF1bits.IOCHIF          /* bit 0 */
#define KEYIF           INTF1bits.KEYIF           /* bit 1 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */
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
		unsigned char : 1;
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



// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0 : 1;
		unsigned char TC0CKPS1 : 1;
		unsigned char TC0CKPS2 : 1;
		unsigned char TC0CKS0 : 1;
		unsigned char TC0CKS1 : 1;
		unsigned char TC0BUZZOE : 1;
		unsigned char : 1;
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
#define TC0EN                  T0CRbits.TC0EN                /* bit 7 */



// ----- TC0R Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0RD0 : 1;
		unsigned char TC0RD1 : 1;
		unsigned char TC0RD2 : 1;
		unsigned char TC0RD3 : 1;
		unsigned char TC0RD4 : 1;
		unsigned char TC0RD5 : 1;
		unsigned char TC0RD6 : 1;
		unsigned char TC0RD7 : 1;
	};
} __TC0Rbits_t;
extern volatile __TC0Rbits_t __at(TC0R_ADDR) TC0Rbits;

#define TC0RD0               TC0Rbits.TC0RD0              /* bit 0 */
#define TC0RD1               TC0Rbits.TC0RD1              /* bit 1 */
#define TC0RD2               TC0Rbits.TC0RD2              /* bit 2 */
#define TC0RD3               TC0Rbits.TC0RD3              /* bit 3 */
#define TC0RD4               TC0Rbits.TC0RD4              /* bit 4 */
#define TC0RD5               TC0Rbits.TC0RD5              /* bit 5 */
#define TC0RD6               TC0Rbits.TC0RD6              /* bit 6 */
#define TC0RD7               TC0Rbits.TC0RD7              /* bit 7 */



// ----- TC0C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CD0 : 1;
		unsigned char TC0CD1 : 1;
		unsigned char TC0CD2 : 1;
		unsigned char TC0CD3 : 1;
		unsigned char TC0CD4 : 1;
		unsigned char TC0CD5 : 1;
		unsigned char TC0CD6 : 1;
		unsigned char TC0CD7 : 1;
	};
} __TC0Cbits_t;
extern volatile __TC0Cbits_t __at(TC0C_ADDR) TC0Cbits;

#define TC0CD0               TC0Cbits.TC0CD0              /* bit 0 */
#define TC0CD1               TC0Cbits.TC0CD1              /* bit 1 */
#define TC0CD2               TC0Cbits.TC0CD2              /* bit 2 */
#define TC0CD3               TC0Cbits.TC0CD3              /* bit 3 */
#define TC0CD4               TC0Cbits.TC0CD4              /* bit 4 */
#define TC0CD5               TC0Cbits.TC0CD5              /* bit 5 */
#define TC0CD6               TC0Cbits.TC0CD6              /* bit 6 */
#define TC0CD7               TC0Cbits.TC0CD7              /* bit 7 */



// ----- T1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CKPS0 : 1;
		unsigned char TC1CKPS1 : 1;
		unsigned char TC1CKPS2 : 1;
		unsigned char TC1CKS0 : 1;
		unsigned char TC1CKS1 : 1;
		unsigned char TC1BUZZOE : 1;
		unsigned char : 1;
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
#define TC1EN                  T1CRbits.TC1EN                /* bit 7 */



// ----- TC1R Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1RD0 : 1;
		unsigned char TC1RD1 : 1;
		unsigned char TC1RD2 : 1;
		unsigned char TC1RD3 : 1;
		unsigned char TC1RD4 : 1;
		unsigned char TC1RD5 : 1;
		unsigned char TC1RD6 : 1;
		unsigned char TC1RD7 : 1;
	};
} __TC1Rbits_t;
extern volatile __TC1Rbits_t __at(TC1R_ADDR) TC1Rbits;

#define TC1RD0               TC1Rbits.TC1RD0              /* bit 0 */
#define TC1RD1               TC1Rbits.TC1RD1              /* bit 1 */
#define TC1RD2               TC1Rbits.TC1RD2              /* bit 2 */
#define TC1RD3               TC1Rbits.TC1RD3              /* bit 3 */
#define TC1RD4               TC1Rbits.TC1RD4              /* bit 4 */
#define TC1RD5               TC1Rbits.TC1RD5              /* bit 5 */
#define TC1RD6               TC1Rbits.TC1RD6              /* bit 6 */
#define TC1RD7               TC1Rbits.TC1RD7              /* bit 7 */



// ----- TC1C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CD0 : 1;
		unsigned char TC1CD1 : 1;
		unsigned char TC1CD2 : 1;
		unsigned char TC1CD3 : 1;
		unsigned char TC1CD4 : 1;
		unsigned char TC1CD5 : 1;
		unsigned char TC1CD6 : 1;
		unsigned char TC1CD7 : 1;
	};
} __TC1Cbits_t;
extern volatile __TC1Cbits_t __at(TC1C_ADDR) TC1Cbits;

#define TC1CD0               TC1Cbits.TC1CD0              /* bit 0 */
#define TC1CD1               TC1Cbits.TC1CD1              /* bit 1 */
#define TC1CD2               TC1Cbits.TC1CD2              /* bit 2 */
#define TC1CD3               TC1Cbits.TC1CD3              /* bit 3 */
#define TC1CD4               TC1Cbits.TC1CD4              /* bit 4 */
#define TC1CD5               TC1Cbits.TC1CD5              /* bit 5 */
#define TC1CD6               TC1Cbits.TC1CD6              /* bit 6 */
#define TC1CD7               TC1Cbits.TC1CD7              /* bit 7 */



// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0 : 1;
		unsigned char TC2CKPS1 : 1;
		unsigned char TC2CKS0 : 1;
		unsigned char TC2CKS1 : 1;
		unsigned char TC2GS : 1;
		unsigned char TC2GO : 1;
		unsigned char TC2GEN : 1;
		unsigned char TC2EN : 1;
	};
} __T2CRbits_t;
extern volatile __T2CRbits_t __at(T2CR_ADDR) T2CRbits;

#define TC2CKPS0               T2CRbits.TC2CKPS0             /* bit 0 */
#define TC2CKPS1               T2CRbits.TC2CKPS1             /* bit 1 */
#define TC2CKS0                T2CRbits.TC2CKS0              /* bit 2 */
#define TC2CKS1                T2CRbits.TC2CKS1              /* bit 3 */
#define TC2GS                  T2CRbits.TC2GS                /* bit 4 */
#define TC2GO                  T2CRbits.TC2GO                /* bit 5 */
#define TC2GEN                 T2CRbits.TC2GEN               /* bit 6 */
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



// ----- IRCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRCKS0 : 1;
		unsigned char IRCKS1 : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char HFEN : 1;
		unsigned char IRE : 1;
		unsigned char IREN : 1;
	};
} __IRCRbits_t;
extern volatile __IRCRbits_t __at(IRCR_ADDR) IRCRbits;

#define IRCKS0               IRCRbits.IRCKS0              /* bit 0 */
#define IRCKS1               IRCRbits.IRCKS1              /* bit 1 */
#define HFEN                 IRCRbits.HFEN                /* bit 5 */
#define IRE                  IRCRbits.IRE                 /* bit 6 */
#define IREN                 IRCRbits.IREN                /* bit 7 */



// ----- IRCKS Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRLTPS0 : 1;
		unsigned char IRLTPS1 : 1;
		unsigned char IRLTPS2 : 1;
		unsigned char IRLTPS3 : 1;
		unsigned char IRHTPS0 : 1;
		unsigned char IRHTPS1 : 1;
		unsigned char IRHTPS2 : 1;
		unsigned char IRHTPS3 : 1;
	};
} __IRCKSbits_t;
extern volatile __IRCKSbits_t __at(IRCKS_ADDR) IRCKSbits;

#define IRLTPS0               IRCKSbits.IRLTPS0              /* bit 0 */
#define IRLTPS1               IRCKSbits.IRLTPS1              /* bit 1 */
#define IRLTPS2               IRCKSbits.IRLTPS2              /* bit 2 */
#define IRLTPS3               IRCKSbits.IRLTPS3              /* bit 3 */
#define IRHTPS0               IRCKSbits.IRHTPS0              /* bit 4 */
#define IRHTPS1               IRCKSbits.IRHTPS1              /* bit 5 */
#define IRHTPS2               IRCKSbits.IRHTPS2              /* bit 6 */
#define IRHTPS3               IRCKSbits.IRHTPS3              /* bit 7 */



// ----- IRHT Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRHT0 : 1;
		unsigned char IRHT1 : 1;
		unsigned char IRHT2 : 1;
		unsigned char IRHT3 : 1;
		unsigned char IRHT4 : 1;
		unsigned char IRHT5 : 1;
		unsigned char IRHT6 : 1;
		unsigned char IRHT7 : 1;
	};
} __IRHTbits_t;
extern volatile __IRHTbits_t __at(IRHT_ADDR) IRHTbits;

#define IRHT0               IRHTbits.IRHT0              /* bit 0 */
#define IRHT1               IRHTbits.IRHT1              /* bit 1 */
#define IRHT2               IRHTbits.IRHT2              /* bit 2 */
#define IRHT3               IRHTbits.IRHT3              /* bit 3 */
#define IRHT4               IRHTbits.IRHT4              /* bit 4 */
#define IRHT5               IRHTbits.IRHT5              /* bit 5 */
#define IRHT6               IRHTbits.IRHT6              /* bit 6 */
#define IRHT7               IRHTbits.IRHT7              /* bit 7 */



// ----- IRLT Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRLT0 : 1;
		unsigned char IRLT1 : 1;
		unsigned char IRLT2 : 1;
		unsigned char IRLT3 : 1;
		unsigned char IRLT4 : 1;
		unsigned char IRLT5 : 1;
		unsigned char IRLT6 : 1;
		unsigned char IRLT7 : 1;
	};
} __IRLTbits_t;
extern volatile __IRLTbits_t __at(IRLT_ADDR) IRLTbits;

#define IRLT0               IRLTbits.IRLT0              /* bit 0 */
#define IRLT1               IRLTbits.IRLT1              /* bit 1 */
#define IRLT2               IRLTbits.IRLT2              /* bit 2 */
#define IRLT3               IRLTbits.IRLT3              /* bit 3 */
#define IRLT4               IRLTbits.IRLT4              /* bit 4 */
#define IRLT5               IRLTbits.IRLT5              /* bit 5 */
#define IRLT6               IRLTbits.IRLT6              /* bit 6 */
#define IRLT7               IRLTbits.IRLT7              /* bit 7 */



// ----- LVDCON Bits --------------------------------------------------------
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
} __LVDCONbits_t;
extern volatile __LVDCONbits_t __at(LVDCON_ADDR) LVDCONbits;

#define VLVD0               LVDCONbits.VLVD0              /* bit 0 */
#define VLVD1               LVDCONbits.VLVD1              /* bit 1 */
#define VLVD2               LVDCONbits.VLVD2              /* bit 2 */
#define LVDF                LVDCONbits.LVDF               /* bit 4 */
#define LVDEN               LVDCONbits.LVDEN              /* bit 7 */








#endif