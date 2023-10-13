#ifndef __M8R63_H__
#define __M8R63_H__

//
// Register addresses.
//

#define INDF0_ADDR          0x01B0
#define FSR0_ADDR           0x01B1
#define COPA0C_ADDR         0x01B2
#define COPA1C_ADDR         0x01B3
#define CMPINC_ADDR         0x01B4
#define INDF1_ADDR          0x01B8
#define FSR1_ADDR           0x01B9
#define PCL_ADDR            0x01BA
#define STATUS_ADDR         0x01BB
#define OPTION_ADDR         0x01BC
#define OSCM_ADDR           0x01BD
#define WDTC_ADDR      	    0x01BE
#define IOBICR_ADDR         0x01BF

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
#define PUA_ADDR            0x01CA
#define ANSA_ADDR           0x01CB
#define IOB_ADDR            0x01CC
#define OEB_ADDR            0x01CD
#define PUB_ADDR            0x01CE
#define ANSB_ADDR           0x01CF

#define IOC_ADDR            0x01D0
#define OEC_ADDR            0x01D1
#define PUC_ADDR            0x01D2
#define ANSC_ADDR           0x01D3
#define PWM0CR_ADDR         0x01D8
#define BRGDH_ADDR          0x01DA
#define BRGDL_ADDR          0x01DB
#define PWM1CR_ADDR         0x01DC
#define PWM1DH_ADDR         0x01DD    
#define PWM1DL_ADDR         0x01DE

#define TXCR_ADDR         	0x01E0
#define TXREG_ADDR          0x01E1
#define RXCR_ADDR         	0x01E2
#define RXREG_ADDR          0x01E3
#define CMP1C_ADDR          0x01E4
#define CMP2C_ADDR          0x01E5
#define CMP3C_ADDR          0x01E6
#define CMP4C_ADDR          0x01E7

#define T0CR_ADDR           0x01E8
#define TC0R_ADDR           0x01E9
#define TC0C_ADDR           0x01EA
#define T1CR_ADDR           0x01EC
#define TC1CL_ADDR          0x01ED
#define TC1CH_ADDR          0x01EE

#define PPGC0_ADDR          0x01F0
#define PPGC1_ADDR          0x01F1
#define PPGD_ADDR           0x01F2
#define CCRES_ADDR          0x01F3
#define ADCON0_ADDR         0x01F4
#define ADCON1_ADDR         0x01F5
#define ADH_ADDR            0x01F6
#define ADL_ADDR            0x01F7
#define LVDCON_ADDR         0x01F8
#define C3SET_ADDR          0x01FA
#define DLYSET_ADDR         0x01FB

//
//----- Register Files -----------------------------------------------------
//

extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (COPA0C_ADDR)        COPA0C;
extern __sfr __at (COPA1C_ADDR)        COPA1C;
extern __sfr __at (CMPINC_ADDR)        CMPINC;
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

extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (BRGDH_ADDR)         BRGDH;
extern __sfr __at (BRGDL_ADDR)         BRGDL;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;

extern __sfr __at (TXCR_ADDR)          TXCR;
extern __sfr __at (TXREG_ADDR)         TXREG;
extern __sfr __at (RXCR_ADDR)          RXCR;
extern __sfr __at (RXREG_ADDR)         RXREG;
extern __sfr __at (CMP1C_ADDR)         CMP1C;
extern __sfr __at (CMP2C_ADDR)         CMP2C;
extern __sfr __at (CMP3C_ADDR)         CMP3C;    
extern __sfr __at (CMP4C_ADDR)         CMP4C;

extern __sfr __at (T0CR_ADDR)         T0CR;
extern __sfr __at (TC0R_ADDR)         TC0R;
extern __sfr __at (TC0C_ADDR)         TC0C;
extern __sfr __at (T1CR_ADDR)         T1CR;
extern __sfr __at (TC1CL_ADDR)        TC1CL;
extern __sfr __at (TC1CH_ADDR)        TC1CH;

extern __sfr __at (PPGC0_ADDR)        PPGC0;
extern __sfr __at (PPGC1_ADDR)        PPGC1;
extern __sfr __at (PPGD_ADDR)         PPGD;
extern __sfr __at (CCRES_ADDR)        CCRES;
extern __sfr __at (ADCON0_ADDR)       ADCON0;
extern __sfr __at (ADCON1_ADDR)       ADCON1;
extern __sfr __at (ADH_ADDR)          ADH;
extern __sfr __at (ADL_ADDR)          ADL;
extern __sfr __at (LVDCON_ADDR)       LVDCON;
extern __sfr __at (C3SET_ADDR)        C3SET;
extern __sfr __at (DLYSET_ADDR)       DLYSET;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================


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

// ----- COPA0C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPNS0:1;
		unsigned char :1;	
		unsigned char OPPS0:1;	
		unsigned char OPPS1:1;	
		unsigned char :1;
		unsigned char :1;	
		unsigned char OPAO_R:1;
		unsigned char OPEN:1;	
	};
} __COPA0Cbits_t;
extern volatile __COPA0Cbits_t __at(COPA0C_ADDR) COPA0Cbits;

#define OPNS0           COPA0Cbits.OPNS0       	    /* bit 0 */
#define OPPS0           COPA0Cbits.OPPS0       	    /* bit 2 */
#define OPPS1           COPA0Cbits.OPPS1       	    /* bit 3 */
#define OPAO_R          COPA0Cbits.OPAO_R           /* bit 6 */
#define OPEN            COPA0Cbits.OPEN             /* bit 7 */

// ----- COPA1C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPG0:1;
		unsigned char OPG1:1;	
		unsigned char OPG2:1;	
		unsigned char :1;	
		unsigned char S1:1;
		unsigned char S2:1;	
		unsigned char S3:1;
		unsigned char S4:1;	
	};
} __COPA1Cbits_t;
extern volatile __COPA1Cbits_t __at(COPA1C_ADDR) COPA1Cbits;

#define OPG0           COPA1Cbits.OPG0       	    /* bit 0 */
#define OPG1           COPA1Cbits.OPG1       	    /* bit 1 */
#define OPG2           COPA1Cbits.OPG2       	    /* bit 2 */
#define S1             COPA1Cbits.S1              /* bit 4 */
#define S2             COPA1Cbits.S2              /* bit 5 */
#define S3             COPA1Cbits.S3              /* bit 6 */
#define S4             COPA1Cbits.S4              /* bit 7 */

// ----- CMPINC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char V2S0:1;
		unsigned char V2S1:1;	
		unsigned char V2S2:1;	
		unsigned char V2S3:1;	
		unsigned char V3S0:1;
		unsigned char V3S1:1;	
		unsigned char V3S2:1;
		unsigned char V3S3:1;	
	};
} __CMPINCbits_t;
extern volatile __CMPINCbits_t __at(CMPINC_ADDR) CMPINCbits;

#define V2S0           CMPINCbits.V2S0       	      /* bit 0 */
#define V2S1           CMPINCbits.V2S1       	      /* bit 1 */
#define V2S2           CMPINCbits.V2S2       	      /* bit 2 */
#define V2S3           CMPINCbits.V2S3              /* bit 3 */
#define V3S0           CMPINCbits.V3S0              /* bit 4 */
#define V3S1           CMPINCbits.V3S1              /* bit 5 */
#define V3S2           CMPINCbits.V3S2              /* bit 6 */
#define V3S3           CMPINCbits.V3S3              /* bit 7 */

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
#define LPSPD           OSCMbits.LPSPD      	    /* bit 1 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define CLKM            OSCMbits.CLKM             /* bit 3 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */
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

// ----- IOBICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBICR0:1;
		unsigned char IOBICR1:1;
		unsigned char IOBICR2:1;	
		unsigned char IOBICR3:1;
		unsigned char IOBICR4:1;
		unsigned char IOBICR5:1;	
		unsigned char IOBICR6:1;
		unsigned char IOBICR7:1;	
	};
} __IOBICRbits_t;
extern volatile __IOBICRbits_t __at(IOBICR_ADDR) IOBICRbits;

#define IOBICR0           IOBICRbits.IOBICR0              /* bit 0 */
#define IOBICR1           IOBICRbits.IOBICR1              /* bit 1 */
#define IOBICR2           IOBICRbits.IOBICR2              /* bit 2 */
#define IOBICR3           IOBICRbits.IOBICR3              /* bit 3 */
#define IOBICR4           IOBICRbits.IOBICR4              /* bit 4 */
#define IOBICR5           IOBICRbits.IOBICR5              /* bit 5 */
#define IOBICR6           IOBICRbits.IOBICR6              /* bit 6 */
#define IOBICR7           IOBICRbits.IOBICR7              /* bit 7 */

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
		unsigned char CMP1IE:1;
		unsigned char CMP2IE:1;
		unsigned char CMP3IE:1;
		unsigned char CMP4IE:1;
		unsigned char OPAIE:1;
		unsigned char :1;	
		unsigned char TXIE:1;
		unsigned char RXIE:1;	
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define CMP1IE           INTCR2bits.CMP1IE          /* bit 0 */
#define CMP2IE           INTCR2bits.CMP2IE          /* bit 1 */
#define CMP3IE           INTCR2bits.CMP3IE          /* bit 2 */
#define CMP4IE           INTCR2bits.CMP4IE          /* bit 3 */
#define OPAIE            INTCR2bits.OPAIE           /* bit 4 */
#define TXIE             INTCR2bits.TXIE            /* bit 6 */
#define RXIE             INTCR2bits.RXIE            /* bit 7 */

// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CMP1IF:1;
		unsigned char CMP2IF:1;
		unsigned char CMP3IF:1;
		unsigned char CMP4IF:1;
		unsigned char OPAIF:1;
		unsigned char :1;
		unsigned char TXIF:1;
		unsigned char RXIF:1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define CMP1IF           INTF2bits.CMP1IF           /* bit 0 */
#define CMP2IF           INTF2bits.CMP2IF           /* bit 1 */
#define CMP3IF           INTF2bits.CMP3IF           /* bit 2 */
#define CMP4IF           INTF2bits.CMP4IF           /* bit 3 */
#define OPAIF            INTF2bits.OPAIF            /* bit 4 */
#define TXIF             INTF2bits.TXIF             /* bit 6 */
#define RXIF             INTF2bits.RXIF             /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ADIE:1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define ADIE            INTCR0bits.ADIE           /* bit 6 */

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ADIF:1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define ADIF            INTF0bits.ADIF        	  /* bit 6 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBIE:1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
		unsigned char LVDIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOBIE           INTCR1bits.IOBIE     	    /* bit 0 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */
#define LVDIE           INTCR1bits.LVDIE      	  /* bit 4 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBIF:1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
		unsigned char LVDIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOBIF           INTF1bits.IOBIF           /* bit 0 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */
#define LVDIF           INTF1bits.LVDIF           /* bit 4 */

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
		unsigned char PUA7:1;
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
#define PUA7            PUAbits.PUA7      	      /* bit 7 */

// ----- ANSA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSA0:1;
		unsigned char ANSA1:1;
		unsigned char ANSA2:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ANSA5:1;
		unsigned char ANSA6:1;
		unsigned char ANSA7:1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0           ANSAbits.ANSA0            /* bit 0 */
#define ANSA1           ANSAbits.ANSA1            /* bit 1 */
#define ANSA2           ANSAbits.ANSA2            /* bit 2 */
#define ANSA5           ANSAbits.ANSA5            /* bit 5 */
#define ANSA6           ANSAbits.ANSA6            /* bit 6 */
#define ANSA7           ANSAbits.ANSA7      	    /* bit 7 */

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

// ----- PUB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUB0:1;
		unsigned char PUB1:1;
		unsigned char PUB2:1;
		unsigned char PUB3:1;
		unsigned char PUB4:1;
		unsigned char PUB5:1;
		unsigned char PUB6:1;
		unsigned char PUB7:1;
	};
} __PUBbits_t;
extern volatile __PUBbits_t __at(PUB_ADDR) PUBbits;

#define PUB0            PUBbits.PUB0              /* bit 0 */
#define PUB1            PUBbits.PUB1              /* bit 1 */
#define PUB2            PUBbits.PUB2              /* bit 2 */
#define PUB3            PUBbits.PUB3              /* bit 3 */
#define PUB4            PUBbits.PUB4              /* bit 4 */
#define PUB5            PUBbits.PUB5              /* bit 5 */
#define PUB6            PUBbits.PUB6              /* bit 6 */
#define PUB7            PUBbits.PUB7      	      /* bit 7 */

// ----- ANSB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ANSB3:1;
		unsigned char ANSB4:1;
		unsigned char ANSB5:1;
		unsigned char ANSB6:1;
		unsigned char ANSB7:1;
	};
} __ANSBbits_t;
extern volatile __ANSBbits_t __at(ANSB_ADDR) ANSBbits;

#define ANSB3           ANSBbits.ANSB3            /* bit 3 */
#define ANSB4           ANSBbits.ANSB4            /* bit 4 */
#define ANSB5           ANSBbits.ANSB5            /* bit 5 */
#define ANSB6           ANSBbits.ANSB6            /* bit 6 */
#define ANSB7           ANSBbits.ANSB7      	    /* bit 7 */

// ----- IOC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0:1;
		unsigned char IOC1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

#define IOC0            IOCbits.IOC0              /* bit 0 */
#define IOC1            IOCbits.IOC1              /* bit 1 */

// ----- OEC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEC0:1;
		unsigned char OEC1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __OECbits_t;
extern volatile __OECbits_t __at(OEC_ADDR) OECbits;

#define OEC0            OECbits.OEC0              /* bit 0 */
#define OEC1            OECbits.OEC1              /* bit 1 */

// ----- PUC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUC0:1;
		unsigned char PUC1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __PUCbits_t;
extern volatile __PUCbits_t __at(PUC_ADDR) PUCbits;

#define PUC0            PUCbits.PUC0              /* bit 0 */
#define PUC1            PUCbits.PUC1              /* bit 1 */

// ----- ANSC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSC0:1;
		unsigned char ANSC1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __ANSCbits_t;
extern volatile __ANSCbits_t __at(ANSC_ADDR) ANSCbits;

#define ANSC0           ANSCbits.ANSC0            /* bit 0 */
#define ANSC1           ANSCbits.ANSC1            /* bit 1 */

// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0T0:1;
		unsigned char PWM0T1:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM0OE:1;
		unsigned char :1;
		unsigned char PWM0EN:1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0T0        PWM0CRbits.PWM0T0        /* bit 0 */
#define PWM0T1        PWM0CRbits.PWM0T1         /* bit 1 */
#define PWM0OE        PWM0CRbits.PWM0OE        /* bit 5 */
#define PWM0EN        PWM0CRbits.PWM0EN        /* bit 7 */

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

// ----- PWM1CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TDT0:1;
		unsigned char TDT1:1;
		unsigned char TDT2:1;
		unsigned char TDT3:1;
		unsigned char PWM1NOE:1;
		unsigned char PWM1POE:1;
		unsigned char PWM1MOD:1;
		unsigned char PWM1EN:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define TDT0             PWM1CRbits.TDT0           /* bit 0 */
#define TDT1             PWM1CRbits.TDT1       	   /* bit 1 */
#define TDT2             PWM1CRbits.TDT2           /* bit 2 */
#define TDT3             PWM1CRbits.TDT3           /* bit 3 */
#define PWM1NOE          PWM1CRbits.PWM1NOE        /* bit 4 */
#define PWM1POE          PWM1CRbits.PWM1POE        /* bit 5 */
#define PWM1MOD          PWM1CRbits.PWM1MOD        /* bit 6 */
#define PWM1EN           PWM1CRbits.PWM1EN       	 /* bit 7 */

// ----- PWM1DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWMD2:1;
		unsigned char PWMD3:1;
		unsigned char PWMD4:1;
		unsigned char PWMD5:1;
		unsigned char PWMD6:1;
		unsigned char PWMD7:1;
		unsigned char PWMD8:1;
		unsigned char PWMD9:1;
	};
} __PWM1DHbits_t;
extern volatile __PWM1DHbits_t __at(PWM1DH_ADDR) PWM1DHbits;

#define PWMD2         PWM1DHbits.PWMD2         /* bit 0 */
#define PWMD3         PWM1DHbits.PWMD3         /* bit 1 */
#define PWMD4         PWM1DHbits.PWMD4         /* bit 2 */
#define PWMD5         PWM1DHbits.PWMD5         /* bit 3 */
#define PWMD6         PWM1DHbits.PWMD6         /* bit 4 */
#define PWMD7         PWM1DHbits.PWMD7         /* bit 5 */
#define PWMD8         PWM1DHbits.PWMD8         /* bit 6 */
#define PWMD9         PWM1DHbits.PWMD9      	 /* bit 7 */

// ----- PWM1DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWMD0:1;
		unsigned char PWMD1:1;
	};
} __PWM1DLbits_t;
extern volatile __PWM1DLbits_t __at(PWM1DL_ADDR) PWM1DLbits;

#define PWMD0         PWM1DLbits.PWMD0         /* bit 6 */
#define PWMD1         PWM1DLbits.PWMD1      	 /* bit 7 */

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
#define TXD9            TXCRbits.TXD9              /* bit 4 */
#define SYNC            TXCRbits.SYNC              /* bit 5 */
#define TMCLR           TXCRbits.TMCLR             /* bit 6 */
#define TXEN            TXCRbits.TXEN              /* bit 7 */

// ----- TXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TX0D0:1;
		unsigned char TX0D1:1;	
		unsigned char TX0D2:1;
		unsigned char TX0D3:1;	
		unsigned char TX0D4:1;
		unsigned char TX0D5:1;	
		unsigned char TX0D6:1;
		unsigned char TX0D7:1;		
	};
} __TXREGbits_t;
extern volatile __TXREGbits_t __at(TXREG_ADDR) TXREGbits;

#define TX0D0           TXREGbits.TX0D0            /* bit 0 */
#define TX0D1           TXREGbits.TX0D1            /* bit 1 */
#define TX0D2           TXREGbits.TX0D2            /* bit 2 */
#define TX0D3           TXREGbits.TX0D3            /* bit 3 */
#define TX0D4           TXREGbits.TX0D4            /* bit 4 */
#define TX0D5           TXREGbits.TX0D5            /* bit 5 */
#define TX0D6           TXREGbits.TX0D6            /* bit 6 */
#define TX0D7           TXREGbits.TX0D7            /* bit 7 */

// ----- RXCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RXD9:1;
		unsigned char FRER:1;
		unsigned char RXOVF:1;	
		unsigned char SREN:1;
		unsigned char RX9:1;
		unsigned char ABRG:1;
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
#define ABRG            RXCRbits.ABRG              /* bit 5 */
#define CKPS            RXCRbits.CKPS              /* bit 6 */
#define RXEN            RXCRbits.RXEN              /* bit 7 */

// ----- RXREG Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char RX0D0:1;
		unsigned char RX0D1:1;	
		unsigned char RX0D2:1;
		unsigned char RX0D3:1;	
		unsigned char RX0D4:1;
		unsigned char RX0D5:1;	
		unsigned char RX0D6:1;
		unsigned char RX0D7:1;		
	};
} __RXREGbits_t;
extern volatile __RXREGbits_t __at(RXREG_ADDR) RXREGbits;

#define RX0D0           RXREGbits.RX0D0            /* bit 0 */
#define RX0D1           RXREGbits.RX0D1            /* bit 1 */
#define RX0D2           RXREGbits.RX0D2            /* bit 2 */
#define RX0D3           RXREGbits.RX0D3            /* bit 3 */
#define RX0D4           RXREGbits.RX0D4            /* bit 4 */
#define RX0D5           RXREGbits.RX0D5            /* bit 5 */
#define RX0D6           RXREGbits.RX0D6            /* bit 6 */
#define RX0D7           RXREGbits.RX0D7            /* bit 7 */

// ----- CMP1C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CO1C:1;
		unsigned char C1PS0:1;
		unsigned char C1PS1:1;
		unsigned char C1INTS0:1;
		unsigned char C1INTS1:1;
		unsigned char C1POL:1;
		unsigned char CO1_R:1;
		unsigned char C1EN:1;
	};
} __CMP1Cbits_t;
extern volatile __CMP1Cbits_t __at(CMP1C_ADDR) CMP1Cbits;

#define CO1C               CMP1Cbits.CO1C              /* bit 0 */
#define C1PS0              CMP1Cbits.C1PS0         	   /* bit 1 */
#define C1PS1              CMP1Cbits.C1PS1             /* bit 2 */
#define C1INTS0            CMP1Cbits.C1INTS0         	 /* bit 3 */
#define C1INTS1            CMP1Cbits.C1INTS1           /* bit 4 */
#define C1POL              CMP1Cbits.C1POL        	   /* bit 5 */
#define CO1_R              CMP1Cbits.CO1_R             /* bit 6 */
#define C1EN               CMP1Cbits.C1EN              /* bit 6 */

// ----- CMP2C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CO2C:1;
		unsigned char C2PS0:1;
		unsigned char :1;
		unsigned char C2INTS0:1;
		unsigned char C2INTS1:1;
		unsigned char C2POL:1;
		unsigned char CO2_R:1;
		unsigned char C2EN:1;
	};
} __CMP2Cbits_t;
extern volatile __CMP2Cbits_t __at(CMP2C_ADDR) CMP2Cbits;

#define CO2C               CMP2Cbits.CO2C              /* bit 0 */
#define C2PS0              CMP2Cbits.C2PS0         	   /* bit 1 */
#define C2INTS0            CMP2Cbits.C2INTS0         	 /* bit 3 */
#define C2INTS1            CMP2Cbits.C2INTS1           /* bit 4 */
#define C2POL              CMP2Cbits.C2POL        	   /* bit 5 */
#define CO2_R              CMP2Cbits.CO2_R             /* bit 6 */
#define C2EN               CMP2Cbits.C2EN              /* bit 6 */

// ----- CMP3C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char C3NS:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char C3INTS0:1;
		unsigned char C3INTS1:1;
		unsigned char C3POL:1;
		unsigned char CO3_R:1;
		unsigned char C3EN:1;
	};
} __CMP3Cbits_t;
extern volatile __CMP3Cbits_t __at(CMP3C_ADDR) CMP3Cbits;

#define C3NS               CMP3Cbits.C3NS              /* bit 0 */
#define C3INTS0            CMP3Cbits.C3INTS0         	 /* bit 3 */
#define C3INTS1            CMP3Cbits.C3INTS1           /* bit 4 */
#define C3POL              CMP3Cbits.C3POL        	   /* bit 5 */
#define CO3_R              CMP3Cbits.CO3_R             /* bit 6 */
#define C3EN               CMP3Cbits.C3EN              /* bit 7 */

// ----- CMP4C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char C4NS:1;
		unsigned char C4PS0:1;
		unsigned char C4PS1:1;
		unsigned char C4INTS0:1;
		unsigned char C4INTS1:1;
		unsigned char C4POL:1;
		unsigned char CO4_R:1;
		unsigned char C4EN:1;
	};
} __CMP4Cbits_t;
extern volatile __CMP4Cbits_t __at(CMP4C_ADDR) CMP4Cbits;

#define C4NS               CMP4Cbits.C4NS              /* bit 0 */
#define C4PS0              CMP4Cbits.C4PS0          	 /* bit 1 */
#define C4PS1              CMP4Cbits.C4PS1             /* bit 2 */
#define C4INTS0            CMP4Cbits.C4INTS0         	 /* bit 3 */
#define C4INTS1            CMP4Cbits.C4INTS1           /* bit 4 */
#define C4POL              CMP4Cbits.C4POL        	   /* bit 5 */
#define CO4_R              CMP4Cbits.CO4_R             /* bit 6 */
#define C4EN               CMP4Cbits.C4EN              /* bit 7 */

// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0 : 1;
		unsigned char TC0CKPS1 : 1;
		unsigned char TC0CKPS2 : 1;
		unsigned char TC0CKS0 : 1;
		unsigned char TC0CKS1 : 1;
		unsigned char TC0BUZZOE: 1;
		unsigned char  : 1;
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
		unsigned char TC0CL0 : 1;
		unsigned char TC0CL1 : 1;
		unsigned char TC0CL2 : 1;
		unsigned char TC0CL3 : 1;
		unsigned char TC0CL4 : 1;
		unsigned char TC0CL5 : 1;
		unsigned char TC0CL6 : 1;
		unsigned char TC0CL7 : 1;
	};
} __TC0Rbits_t;
extern volatile __TC0Rbits_t __at(TC0R_ADDR) TC0Rbits;

#define TC0CL0               TC0CLbits.TC0CL0              /* bit 0 */
#define TC0CL1               TC0CLbits.TC0CL1              /* bit 1 */
#define TC0CL2               TC0CLbits.TC0CL2              /* bit 2 */
#define TC0CL3               TC0CLbits.TC0CL3              /* bit 3 */
#define TC0CL4               TC0CLbits.TC0CL4              /* bit 4 */
#define TC0CL5               TC0CLbits.TC0CL5              /* bit 5 */
#define TC0CL6               TC0CLbits.TC0CL6              /* bit 6 */
#define TC0CL7               TC0CLbits.TC0CL7              /* bit 7 */



// ----- TC0C Bits --------------------------------------------------------
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
} __TC0Cbits_t;
extern volatile __TC0Cbits_t __at(TC0C_ADDR) TC0Cbits;

#define TC0CH0               TC0Cbits.TC0CH0              /* bit 0 */
#define TC0CH1               TC0Cbits.TC0CH1              /* bit 1 */
#define TC0CH2               TC0Cbits.TC0CH2              /* bit 2 */
#define TC0CH3               TC0Cbits.TC0CH3              /* bit 3 */
#define TC0CH4               TC0Cbits.TC0CH4              /* bit 4 */
#define TC0CH5               TC0Cbits.TC0CH5              /* bit 5 */
#define TC0CH6               TC0Cbits.TC0CH6              /* bit 6 */
#define TC0CH7               TC0Cbits.TC0CH7              /* bit 7 */

// ----- T1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1CKPS0:1;
		unsigned char TC1CKPS1:1;	
		unsigned char TC1CKPS2:1;	
		unsigned char TC1CKS0:1;
		unsigned char TC1CKS1:1;	
		unsigned char TC1BUZZOE:1;
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
#define TC1BUZZOE       T1CRbits.TC1BUZZOE             /* bit 5 */
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

// ----- PPGC0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PPGAJ0:1;
		unsigned char PPGAJ1:1;	
		unsigned char PPGDC0:1;	
		unsigned char PPGDC1:1;
		unsigned char DLY_EN:1;	
		unsigned char PPG_CK0:1;
		unsigned char PPG_CK1:1;	
		unsigned char PPG_GO:1;
	};
} __PPGC0bits_t;
extern volatile __PPGC0bits_t __at(PPGC0_ADDR) PPGC0bits;

#define PPGAJ0          PPGC0bits.PPGAJ0            /* bit 0 */
#define PPGAJ1          PPGC0bits.PPGAJ1            /* bit 1 */
#define PPGDC0          PPGC0bits.PPGDC0            /* bit 2 */
#define PPGDC1          PPGC0bits.PPGDC1            /* bit 3 */
#define DLY_EN          PPGC0bits.DLY_EN            /* bit 4 */
#define PPG_CK0         PPGC0bits.PPG_CK0           /* bit 5 */
#define PPG_CK1         PPGC0bits.PPG_CK1           /* bit 6 */
#define PPG_GO          PPGC0bits.PPG_GO            /* bit 7 */

// ----- PPGC1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char FPPGD:1;
		unsigned char :1;	
		unsigned char :1;	
		unsigned char :1;
		unsigned char AGS0:1;	
		unsigned char AGS1:1;
		unsigned char :1;	
		unsigned char Auto:1;
	};
} __PPGC1bits_t;
extern volatile __PPGC1bits_t __at(PPGC1_ADDR) PPGC1bits;

#define FPPGD          PPGC1bits.FPPGD            /* bit 0 */
#define AGS0           PPGC1bits.AGS0             /* bit 4 */
#define AGS1           PPGC1bits.AGS1             /* bit 5 */
#define Auto           PPGC1bits.Auto             /* bit 7 */
 
// ----- PPGD Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PPGD0:1;
		unsigned char PPGD1:1;	
		unsigned char PPGD2:1;	
		unsigned char PPGD3:1;
		unsigned char PPGD4:1;	
		unsigned char PPGD5:1;
		unsigned char PPGD6:1;	
		unsigned char PPGD7:1;
	};
} __PPGDbits_t;
extern volatile __PPGDbits_t __at(PPGD_ADDR) PPGDbits;

#define PPGD0          PPGDbits.PPGD0            /* bit 0 */
#define PPGD1          PPGDbits.PPGD1            /* bit 1 */
#define PPGD2          PPGDbits.PPGD2            /* bit 2 */
#define PPGD3          PPGDbits.PPGD3            /* bit 3 */
#define PPGD4          PPGDbits.PPGD4            /* bit 4 */
#define PPGD5          PPGDbits.PPGD5            /* bit 5 */
#define PPGD6          PPGDbits.PPGD6            /* bit 6 */
#define PPGD7          PPGDbits.PPGD7            /* bit 7 */

// ----- CCRES Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CCR0:1;
		unsigned char CCR1:1;	
		unsigned char CCR2:1;	
		unsigned char CCR3:1;
		unsigned char CCR4:1;	
		unsigned char CCR5:1;
		unsigned char CCR6:1;	
		unsigned char CCR7:1;
	};
} __CCRESbits_t;
extern volatile __CCRESbits_t __at(CCRES_ADDR) CCRESbits;

#define CCR0          CCRESbits.CCR0            /* bit 0 */
#define CCR1          CCRESbits.CCR1            /* bit 1 */
#define CCR2          CCRESbits.CCR2            /* bit 2 */
#define CCR3          CCRESbits.CCR3            /* bit 3 */
#define CCR4          CCRESbits.CCR4            /* bit 4 */
#define CCR5          CCRESbits.CCR5            /* bit 5 */
#define CCR6          CCRESbits.CCR6            /* bit 6 */
#define CCR7          CCRESbits.CCR7            /* bit 7 */

// ----- ADCON0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CHS0:1;
		unsigned char CHS1:1;	
		unsigned char CHS2:1;	
		unsigned char CHS3:1;	
		unsigned char ADFM:1;
		unsigned char EOC:1;
		unsigned char ADS:1;
		unsigned char ADENB:1;	
	};
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;

#define CHS0            ADCON0bits.CHS0           /* bit 0 */
#define CHS1            ADCON0bits.CHS1           /* bit 1 */
#define CHS2            ADCON0bits.CHS2           /* bit 2 */
#define CHS3            ADCON0bits.CHS3           /* bit 3 */
#define ADFM            ADCON0bits.ADFM           /* bit 4 */
#define EOC             ADCON0bits.EOC            /* bit 5 */
#define ADS             ADCON0bits.ADS            /* bit 6 */
#define ADENB           ADCON0bits.ADENB          /* bit 7 */

// ----- ADCON1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char VHS0:1;
		unsigned char VHS1:1;	
		unsigned char ADCKS0:1;
		unsigned char ADCKS1:1;	
		unsigned char ADCKS2:1;
		unsigned char :1;	
		unsigned char :1;	
		unsigned char EVHENB:1;	
	};
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;

#define VHS0            ADCON1bits.VHS0           /* bit 0 */
#define VHS1            ADCON1bits.VHS1           /* bit 1 */
#define ADCKS0          ADCON1bits.ADCKS0         /* bit 2 */
#define ADCKS1          ADCON1bits.ADCKS1         /* bit 3 */
#define ADCKS2          ADCON1bits.ADCKS2         /* bit 4 */
#define EVHENB          ADCON1bits.EVHENB         /* bit 7 */

// ----- LVDCON Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVD0 : 1;
		unsigned char VLVD1 : 1;
		unsigned char VLVD2 : 1;
		unsigned char  : 1;
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

// ----- C3SET Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char C3SET0:1;
		unsigned char C3SET1:1;	
		unsigned char C3SET2:1;
		unsigned char C3SET3:1;	
		unsigned char C3SET4:1;
		unsigned char C3SET5:1;	
		unsigned char C3SET6:1;	
		unsigned char C3SETEN:1;	
	};
} __C3SETbits_t;
extern volatile __C3SETbits_t __at(C3SET_ADDR) C3SETbits;

#define C3SET0            C3SETbits.C3SET0         /* bit 0 */
#define C3SET1            C3SETbits.C3SET1         /* bit 1 */
#define C3SET2            C3SETbits.C3SET2         /* bit 2 */
#define C3SET3            C3SETbits.C3SET3         /* bit 3 */
#define C3SET4            C3SETbits.C3SET4         /* bit 4 */
#define C3SET5            C3SETbits.C3SET5         /* bit 5 */
#define C3SET6            C3SETbits.C3SET6         /* bit 6 */
#define C3SETEN           C3SETbits.C3SETEN        /* bit 7 */

// ----- DLYSET Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char DLYSET0:1;
		unsigned char DLYSET1:1;	
		unsigned char DLYSET2:1;
		unsigned char DLYSET3:1;	
		unsigned char DLYSET4:1;
		unsigned char DLYSET5:1;	
		unsigned char DLYSET6:1;	
		unsigned char DLYSET7:1;	
	};
} __DLYSETbits_t;
extern volatile __DLYSETbits_t __at(DLYSET_ADDR) DLYSETbits;

#define DLYSET0            DLYSETbits.DLYSET0         /* bit 0 */
#define DLYSET1            DLYSETbits.DLYSET1         /* bit 1 */
#define DLYSET2            DLYSETbits.DLYSET2         /* bit 2 */
#define DLYSET3            DLYSETbits.DLYSET3         /* bit 3 */
#define DLYSET4            DLYSETbits.DLYSET4         /* bit 4 */
#define DLYSET5            DLYSETbits.DLYSET5         /* bit 5 */
#define DLYSET6            DLYSETbits.DLYSET6         /* bit 6 */
#define DLYSET7            DLYSETbits.DLYSET7         /* bit 7 */


#endif