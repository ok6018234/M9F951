#ifndef __M8E521_H__
#define __M8E521_H__

//
// Register addresses.
//
#define INDF0_ADDR          0x00B0
#define FSR0_ADDR           0x00B1
#define TXCR_ADDR         	0x00B2
#define TXREG_ADDR          0x00B3
#define RXCR_ADDR         	0x00B4
#define RXREG_ADDR          0x00B5
#define BRGDH_ADDR          0x00B6
#define BRGDL_ADDR          0x00B7
#define INDF1_ADDR          0x00B8
#define FSR1_ADDR           0x00B9
#define PCL_ADDR            0x00BA
#define STATUS_ADDR         0x00BB
#define OPTION_ADDR         0x00BC
#define OSCM_ADDR           0x00BD
#define WDTC_ADDR      	    0x00BE

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
#define IOB_ADDR            0x00CA
#define OEB_ADDR            0x00CB

#define PWM3CR_ADDR         0x00D2
#define PWM3DL_ADDR         0x00D3
#define PWM3DH_ADDR         0x00D4
#define PWM4CR_ADDR         0x00D5
#define PWM4DL_ADDR         0x00D6
#define PWM4DH_ADDR         0x00D7
#define PWM0CR_ADDR         0x00D8
#define PWM0D_ADDR          0x00D9
#define PWM1CR_ADDR         0x00DA
#define PWM1DL_ADDR         0x00DB
#define PWM1DH_ADDR         0x00DC
#define PWM2CR_ADDR         0x00DD
#define PWM2DL_ADDR         0x00DE    
#define PWM2DH_ADDR         0x00DF

#define PUA_ADDR            0x00E0
#define PUB_ADDR            0x00E1    
#define PDA_ADDR            0x00E2
#define PDB_ADDR            0x00E3
#define IOAICR_ADDR         0x00E4
#define IOBICR_ADDR         0x00E5    
#define IOIDS_ADDR          0x00E6
#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA
#define T1CR_ADDR           0x00EB
#define TC1CL_ADDR          0x00EC
#define TC1CH_ADDR          0x00ED
#define TC1PRL_ADDR         0x00EE
#define TC1PRH_ADDR         0x00EF

#define EECON1_ADDR         0x00F3
#define EECON2_ADDR         0x00F4
#define CMPC0_ADDR          0x00F5
#define LVDCR_ADDR          0x00F6
#define IRCCAL_ADDR         0x01FC


//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (INDF0_ADDR)          INDF0;
extern __sfr __at (FSR0_ADDR)           FSR0;
extern __sfr __at (TXCR_ADDR)           TXCR;
extern __sfr __at (TXREG_ADDR)          TXREG;
extern __sfr __at (RXCR_ADDR)           RXCR;
extern __sfr __at (RXREG_ADDR)          RXREG;
extern __sfr __at (BRGDH_ADDR)          BRGDH;
extern __sfr __at (BRGDL_ADDR)          BRGDL;
extern __sfr __at (INDF1_ADDR)          INDF1;
extern __sfr __at (FSR1_ADDR)           FSR1;
extern __sfr __at (PCL_ADDR)            PCL;
extern __sfr __at (STATUS_ADDR)         STATUS;
extern __sfr __at (OPTION_ADDR)         OPTION;
extern __sfr __at (OSCM_ADDR)           OSCM;
extern __sfr __at (WDTC_ADDR)       	  WDTC;

extern __sfr __at (INDF2_ADDR)          INDF2;
extern __sfr __at (HBUF_ADDR)           HBUF; 
extern __sfr __at (INTCR2_ADDR)         INTCR2;
extern __sfr __at (INTF2_ADDR)          INTF2;
extern __sfr __at (INTCR0_ADDR)         INTCR0;
extern __sfr __at (INTF0_ADDR)          INTF0;
extern __sfr __at (INTCR1_ADDR)         INTCR1;
extern __sfr __at (INTF1_ADDR)          INTF1;
extern __sfr __at (IOA_ADDR)            IOA;
extern __sfr __at (OEA_ADDR)            OEA;
extern __sfr __at (IOB_ADDR)            IOB;
extern __sfr __at (OEB_ADDR)            OEB;

extern __sfr __at (PWM3CR_ADDR)         PWM3CR;
extern __sfr __at (PWM3DL_ADDR)         PWM3DL;    
extern __sfr __at (PWM3DH_ADDR)         PWM3DH;
extern __sfr __at (PWM4CR_ADDR)         PWM4CR;
extern __sfr __at (PWM4DL_ADDR)         PWM4DL;    
extern __sfr __at (PWM4DH_ADDR)         PWM4DH;
extern __sfr __at (PWM0CR_ADDR)         PWM0CR;    
extern __sfr __at (PWM0D_ADDR)          PWM0D;
extern __sfr __at (PWM1CR_ADDR)         PWM1CR;
extern __sfr __at (PWM1DL_ADDR)         PWM1DL;
extern __sfr __at (PWM1DH_ADDR)         PWM1DH;
extern __sfr __at (PWM2CR_ADDR)         PWM2CR;
extern __sfr __at (PWM2DL_ADDR)         PWM2DL;    
extern __sfr __at (PWM2DH_ADDR)         PWM2DH;

extern __sfr __at (PUA_ADDR)            PUA;
extern __sfr __at (PUB_ADDR)            PUB;
extern __sfr __at (PDA_ADDR)            PDA;
extern __sfr __at (PDB_ADDR)            PDB;
extern __sfr __at (IOAICR_ADDR)         IOAICR;
extern __sfr __at (IOBICR_ADDR)         IOBICR;
extern __sfr __at (IOIDS_ADDR)          IOIDS;
extern __sfr __at (T0CR_ADDR)           T0CR;
extern __sfr __at (TC0CL_ADDR)          TC0CL;
extern __sfr __at (TC0CH_ADDR)          TC0CH;
extern __sfr __at (T1CR_ADDR)           T1CR;
extern __sfr __at (TC1CL_ADDR)          TC1CL;
extern __sfr __at (TC1CH_ADDR)          TC1CH;
extern __sfr __at (TC1PRL_ADDR)         TC1PRL;
extern __sfr __at (TC1PRH_ADDR)         TC1PRH;

extern __sfr __at (EECON1_ADDR)         EECON1;
extern __sfr __at (EECON2_ADDR)         EECON2;
extern __sfr __at (CMPC0_ADDR)          CMPC0;
extern __sfr __at (LVDCR_ADDR)          LVDCR;
extern __sfr __at (IRCCAL_ADDR)         IRCCAL;

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

// ----- BRGDH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char BRGD8:1;
		unsigned char BRGD9:1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char :1;
		unsigned char RXS0:1;	
		unsigned char RXS1:1;
		unsigned char SBYTE:1;	
	};
} __BRGDHbits_t;
extern volatile __BRGDHbits_t __at(BRGDH_ADDR) BRGDHbits;

#define BRGD8           BRGDHbits.BRGD8             /* bit 0 */
#define BRGD9           BRGDHbits.BRGD9             /* bit 1 */
#define RXS0            BRGDHbits.RXS0              /* bit 5 */
#define RXS1            BRGDHbits.RXS1              /* bit 6 */
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
#define TO              OPTIONbits.TO             /* bit 5 */
#define GIE             OPTIONbits.GIE        	  /* bit 7 */

// ----- OSCM Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char STPL:1;
		unsigned char LIRC500K:1;
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
#define LIRC500K        OSCMbits.LIRC500K      	  /* bit 1 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define CLKM            OSCMbits.CLKM             /* bit 3 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */
#define HSPDX2          OSCMbits.HSPDX2      	    /* bit 5 */
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
		unsigned char  :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIE:1;
		unsigned char CMPIE:1;
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define TXIE            INTCR2bits.TXIE       	  /* bit 0 */
#define RXIE            INTCR2bits.RXIE       	  /* bit 1 */
#define LVDIE            INTCR2bits.LVDIE       	  /* bit 6 */
#define CMPIE            INTCR2bits.CMPIE       	  /* bit 7 */

// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char :1;
		unsigned char  :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIF:1;
		unsigned char CMPIF:1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define TXIF            INTF2bits.TXIF       	  /* bit 0 */
#define RXIF            INTF2bits.RXIF       	  /* bit 1 */
#define LVDIF            INTF2bits.LVDIF       	  /* bit 6 */
#define CMPIF            INTF2bits.CMPIF       	  /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIE:1;
		unsigned char IOBCHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOACHIE         INTCR1bits.IOACHIE     	  /* bit 0 */
#define IOBCHIE         INTCR1bits.IOBCHIE     	  /* bit 1 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 6 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIF:1;
		unsigned char IOBCHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOACHIF         INTF1bits.IOACHIF         /* bit 0 */
#define IOBCHIF         INTF1bits.IOBCHIF         /* bit 1 */
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

// ----- PWM3CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM3OE:1;
		unsigned char PWM3EN:1;
	};
} __PWM3CRbits_t;
extern volatile __PWM3CRbits_t __at(PWM3CR_ADDR) PWM3CRbits;

#define PWM3OE         PWM3CRbits.PWM3OE         /* bit 6 */
#define PWM3EN         PWM3CRbits.PWM3EN       	 /* bit 7 */

// ----- PWM3DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1DL0:1;
		unsigned char PWM1DL1:1;
		unsigned char PWM1DL2:1;
		unsigned char PWM1DL3:1;
		unsigned char PWM1DL4:1;
		unsigned char PWM1DL5:1;
		unsigned char PWM1DL6:1;
		unsigned char PWM1DL7:1;
	};
} __PWM3DLbits_t;
extern volatile __PWM3DLbits_t __at(PWM3DL_ADDR) PWM3DLbits;

#define PWM3DL0         PWM3DLbits.PWM3DL0         /* bit 0 */
#define PWM3DL1         PWM3DLbits.PWM3DL1         /* bit 1 */
#define PWM3DL2         PWM3DLbits.PWM3DL2         /* bit 2 */
#define PWM3DL3         PWM3DLbits.PWM3DL3      	 /* bit 3 */
#define PWM3DL4         PWM3DLbits.PWM3DL4         /* bit 4 */
#define PWM3DL5         PWM3DLbits.PWM3DL5         /* bit 5 */
#define PWM3DL6         PWM3DLbits.PWM3DL6         /* bit 6 */
#define PWM3DL7         PWM3DLbits.PWM3DL7      	 /* bit 7 */

// ----- PWM3DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM3DH0:1;
		unsigned char PWM3DH1:1;
		unsigned char PWM3DH2:1;
		unsigned char PWM3DH3:1;
		unsigned char PWM3DH4:1;
		unsigned char PWM3DH5:1;
		unsigned char PWM3DH6:1;
		unsigned char PWM3DH7:1;
	};
} __PWM3DHbits_t;
extern volatile __PWM3DHbits_t __at(PWM3DH_ADDR) PWM3DHbits;

#define PWM3DH0         PWM3DHbits.PWM3DH0         /* bit 0 */
#define PWM3DH1         PWM3DHbits.PWM3DH1         /* bit 1 */
#define PWM3DH2         PWM3DHbits.PWM3DH2         /* bit 2 */
#define PWM3DH3         PWM3DHbits.PWM3DH3         /* bit 3 */
#define PWM3DH4         PWM3DHbits.PWM3DH4         /* bit 4 */
#define PWM3DH5         PWM3DHbits.PWM3DH5         /* bit 5 */
#define PWM3DH6         PWM3DHbits.PWM3DH6         /* bit 6 */
#define PWM3DH7         PWM3DHbits.PWM3DH7      	 /* bit 7 */

// ----- PWM4CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM4OE:1;
		unsigned char PWM4EN:1;
	};
} __PWM4CRbits_t;
extern volatile __PWM4CRbits_t __at(PWM4CR_ADDR) PWM4CRbits;

#define PWM4OE         PWM4CRbits.PWM4OE         /* bit 6 */
#define PWM4EN         PWM4CRbits.PWM4EN       	 /* bit 7 */

// ----- PWM4DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM4DL0:1;
		unsigned char PWM4DL1:1;
		unsigned char PWM4DL2:1;
		unsigned char PWM4DL3:1;
		unsigned char PWM4DL4:1;
		unsigned char PWM4DL5:1;
		unsigned char PWM4DL6:1;
		unsigned char PWM4DL7:1;
	};
} __PWM4DLbits_t;
extern volatile __PWM4DLbits_t __at(PWM4DL_ADDR) PWM4DLbits;

#define PWM4DL0         PWM4DLbits.PWM4DL0         /* bit 0 */
#define PWM4DL1         PWM4DLbits.PWM4DL1         /* bit 1 */
#define PWM4DL2         PWM4DLbits.PWM4DL2         /* bit 2 */
#define PWM4DL3         PWM4DLbits.PWM4DL3      	 /* bit 3 */
#define PWM4DL4         PWM4DLbits.PWM4DL4         /* bit 4 */
#define PWM4DL5         PWM4DLbits.PWM4DL5         /* bit 5 */
#define PWM4DL6         PWM4DLbits.PWM4DL6         /* bit 6 */
#define PWM4DL7         PWM4DLbits.PWM4DL7      	 /* bit 7 */

// ----- PWM4DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM4DH0:1;
		unsigned char PWM4DH1:1;
		unsigned char PWM4DH2:1;
		unsigned char PWM4DH3:1;
		unsigned char PWM4DH4:1;
		unsigned char PWM4DH5:1;
		unsigned char PWM4DH6:1;
		unsigned char PWM4DH7:1;
	};
} __PWM4DHbits_t;
extern volatile __PWM4DHbits_t __at(PWM4DH_ADDR) PWM4DHbits;

#define PWM4DH0         PWM4DHbits.PWM4DH0         /* bit 0 */
#define PWM4DH1         PWM4DHbits.PWM4DH1         /* bit 1 */
#define PWM4DH2         PWM4DHbits.PWM4DH2         /* bit 2 */
#define PWM4DH3         PWM4DHbits.PWM4DH3         /* bit 3 */
#define PWM4DH4         PWM4DHbits.PWM4DH4         /* bit 4 */
#define PWM4DH5         PWM4DHbits.PWM4DH5         /* bit 5 */
#define PWM4DH6         PWM4DHbits.PWM4DH6         /* bit 6 */
#define PWM4DH7         PWM4DHbits.PWM4DH7      	 /* bit 7 */

// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
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

#define PWM0OE         PWM0CRbits.PWM0OE         /* bit 6 */
#define PWM0EN          PWM0CRbits.PWM0EN       	 /* bit 7 */

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
#define PWM0D7         PWM0Dbits.PWM0D7      	 /* bit 7 */

// ----- PWM1CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
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

#define PWM1OE         PWM1CRbits.PWM1OE         /* bit 6 */
#define PWM1EN          PWM1CRbits.PWM1EN       	 /* bit 7 */

// ----- PWM1DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1L0:1;
		unsigned char PWM1L1:1;
		unsigned char PWM1L2:1;
		unsigned char PWM1L3:1;
		unsigned char PWM1L4:1;
		unsigned char PWM1L5:1;
		unsigned char PWM1L6:1;
		unsigned char PWM1L7:1;
	};
} __PWM1DLbits_t;
extern volatile __PWM1DLbits_t __at(PWM1DL_ADDR) PWM1DLbits;

#define PWM1L0         PWM1DLbits.PWM1L0         /* bit 0 */
#define PWM1L1         PWM1DLbits.PWM1L1         /* bit 1 */
#define PWM1L2         PWM1DLbits.PWM1L2         /* bit 2 */
#define PWM1L3         PWM1DLbits.PWM1L3         /* bit 3 */
#define PWM1L4         PWM1DLbits.PWM1L4         /* bit 4 */
#define PWM1L5         PWM1DLbits.PWM1L5         /* bit 5 */
#define PWM1L6         PWM1DLbits.PWM1L6         /* bit 6 */
#define PWM1L7         PWM1DLbits.PWM1L7      	 /* bit 7 */

// ----- PWM1DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1H0:1;
		unsigned char PWM1H1:1;
		unsigned char PWM1H2:1;
		unsigned char PWM1H3:1;
		unsigned char PWM1H4:1;
		unsigned char PWM1H5:1;
		unsigned char PWM1H6:1;
		unsigned char PWM1H7:1;
	};
} __PWM1DHbits_t;
extern volatile __PWM1DHbits_t __at(PWM1DH_ADDR) PWM1DHbits;

#define PWM1H0         PWM1DHbits.PWM1H0         /* bit 0 */
#define PWM1H1         PWM1DHbits.PWM1H1         /* bit 1 */
#define PWM1H2         PWM1DHbits.PWM1H2         /* bit 2 */
#define PWM1H3         PWM1DHbits.PWM1H3         /* bit 3 */
#define PWM1H4         PWM1DHbits.PWM1H4         /* bit 4 */
#define PWM1H5         PWM1DHbits.PWM1H5         /* bit 5 */
#define PWM1H6         PWM1DHbits.PWM1H6         /* bit 6 */
#define PWM1H7         PWM1DHbits.PWM1H7      	 /* bit 7 */

// ----- PWM2CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
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

#define PWM2OE         PWM2CRbits.PWM2OE         /* bit 6 */
#define PWM2EN          PWM2CRbits.PWM2EN       	 /* bit 7 */

// ----- PWM2DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2L0:1;
		unsigned char PWM2L1:1;
		unsigned char PWM2L2:1;
		unsigned char PWM2L3:1;
		unsigned char PWM2L4:1;
		unsigned char PWM2L5:1;
		unsigned char PWM2L6:1;
		unsigned char PWM2L7:1;
	};
} __PWM2DLbits_t;
extern volatile __PWM2DLbits_t __at(PWM2DL_ADDR) PWM2DLbits;

#define PWM2L0         PWM2DLbits.PWM2L0         /* bit 0 */
#define PWM2L1         PWM2DLbits.PWM2L1         /* bit 1 */
#define PWM2L2         PWM2DLbits.PWM2L2         /* bit 2 */
#define PWM2L3         PWM2DLbits.PWM2L3         /* bit 3 */
#define PWM2L4         PWM2DLbits.PWM2L4         /* bit 4 */
#define PWM2L5         PWM2DLbits.PWM2L5         /* bit 5 */
#define PWM2L6         PWM2DLbits.PWM2L6         /* bit 6 */
#define PWM2L7         PWM2DLbits.PWM2L7      	 /* bit 7 */

// ----- PWM2DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2H0:1;
		unsigned char PWM2H1:1;
		unsigned char PWM2H2:1;
		unsigned char PWM2H3:1;
		unsigned char PWM2H4:1;
		unsigned char PWM2H5:1;
		unsigned char PWM2H6:1;
		unsigned char PWM2H7:1;
	};
} __PWM2DHbits_t;
extern volatile __PWM2DHbits_t __at(PWM2DH_ADDR) PWM2DHbits;

#define PWM2H0         PWM2DHbits.PWM2H0         /* bit 0 */
#define PWM2H1         PWM2DHbits.PWM2H1         /* bit 1 */
#define PWM2H2         PWM2DHbits.PWM2H2         /* bit 2 */
#define PWM2H3         PWM2DHbits.PWM2H3         /* bit 3 */
#define PWM2H4         PWM2DHbits.PWM2H4         /* bit 4 */
#define PWM2H5         PWM2DHbits.PWM2H5         /* bit 5 */
#define PWM2H6         PWM2DHbits.PWM2H6         /* bit 6 */
#define PWM2H7         PWM2DHbits.PWM2H7      	 /* bit 7 */

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

// ----- PDA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PDA0:1;
		unsigned char PDA1:1;
		unsigned char PDA2:1;
		unsigned char PDA3:1;
		unsigned char PDA4:1;
		unsigned char PDA5:1;
		unsigned char PDA6:1;
		unsigned char :1;
	};
} __PDAbits_t;
extern volatile __PDAbits_t __at(PDA_ADDR) PDAbits;

#define PDA0            PDAbits.PDA0              /* bit 0 */
#define PDA1            PDAbits.PDA1              /* bit 1 */
#define PDA2            PDAbits.PDA2              /* bit 2 */
#define PDA3            PDAbits.PDA3              /* bit 3 */
#define PDA4            PDAbits.PDA4              /* bit 4 */
#define PDA5            PDAbits.PDA5              /* bit 5 */
#define PDA6            PDAbits.PDA6              /* bit 6 */

// ----- PDB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PDB0:1;
		unsigned char PDB1:1;
		unsigned char PDB2:1;	
		unsigned char PDB3:1;	
		unsigned char PDB4:1;
		unsigned char PDB5:1;
		unsigned char PDB6:1;
		unsigned char :1;	
	};
} __PDBbits_t;
extern volatile __PDBbits_t __at(PDB_ADDR) PDBbits;

#define PDB0           PDBbits.PDB0              /* bit 0 */
#define PDB1           PDBbits.PDB1              /* bit 1 */
#define PDB2           PDBbits.PDB2              /* bit 2 */
#define PDB3           PDBbits.PDB3              /* bit 3 */
#define PDB4           PDBbits.PDB4              /* bit 4 */
#define PDB5           PDBbits.PDB5              /* bit 5 */
#define PDB6           PDBbits.PDB6              /* bit 6 */

// ----- IOAICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAICR0:1;
		unsigned char IOAICR1:1;
		unsigned char IOAICR2:1;	
		unsigned char IOAICR3:1;	
		unsigned char IOAICR4:1;
		unsigned char IOAICR5:1;
		unsigned char :1;
		unsigned char :1;	
	};
} __IOAICRbits_t;
extern volatile __IOAICRbits_t __at(IOAICR_ADDR) IOAICRbits;

#define IOAICR0           IOAICRbits.IOAICR0              /* bit 0 */
#define IOAICR1           IOAICRbits.IOAICR1              /* bit 1 */
#define IOAICR2           IOAICRbits.IOAICR2              /* bit 2 */
#define IOAICR3           IOAICRbits.IOAICR3              /* bit 3 */
#define IOAICR4           IOAICRbits.IOAICR4              /* bit 4 */
#define IOAICR5           IOAICRbits.IOAICR5              /* bit 5 */

// ----- IOBICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBICR0:1;
		unsigned char IOBICR1:1;
		unsigned char IOBICR2:1;	
		unsigned char IOBICR3:1;	
		unsigned char IOBICR4:1;
		unsigned char IOBICR5:1;
		unsigned char :1;
		unsigned char :1;	
	};
} __IOBICRbits_t;
extern volatile __IOBICRbits_t __at(IOBICR_ADDR) IOBICRbits;

#define IOBICR0           IOBICRbits.IOBICR0              /* bit 0 */
#define IOBICR1           IOBICRbits.IOBICR1              /* bit 1 */
#define IOBICR2           IOBICRbits.IOBICR2              /* bit 2 */
#define IOBICR3           IOBICRbits.IOBICR3              /* bit 3 */
#define IOBICR4           IOBICRbits.IOBICR4              /* bit 4 */
#define IOBICR5           IOBICRbits.IOBICR5              /* bit 5 */

// ----- IOIDS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOALDS:1;
		unsigned char IOAHDS:1;
		unsigned char IOBLDS:1;
		unsigned char IOBHDS:1;
		unsigned char IOALIS:1;
		unsigned char IOAHIS:1;
		unsigned char IOBLIS:1;
		unsigned char IOBHIS:1;
	};
} __IOIDSbits_t;
extern volatile __IOIDSbits_t __at(IOIDS_ADDR) IOIDSbits;

#define IOALDS         IOIDSbits.IOALDS         /* bit 0 */
#define IOAHDS         IOIDSbits.IOAHDS         /* bit 1 */
#define IOBLDS         IOIDSbits.IOBLDS         /* bit 2 */
#define IOBHDS         IOIDSbits.IOBHDS         /* bit 3 */
#define IOALIS         IOIDSbits.IOALIS         /* bit 0 */
#define IOAHIS         IOIDSbits.IOAHIS         /* bit 1 */
#define IOBLIS         IOIDSbits.IOBLIS         /* bit 2 */
#define IOBHIS         IOIDSbits.IOBHIS         /* bit 3 */

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
		unsigned char TC1CKPS0:1;
		unsigned char TC1CKPS1:1;	
		unsigned char TC1CKPS2:1;	
		unsigned char TC1CKS0:1;
		unsigned char TC1CKS1:1;	
		unsigned char TC1MOD0:1;
		unsigned char TC1MOD1:1;	
		unsigned char TC1EN:1;
	};
} __T1CRbits_t;
extern volatile __T1CRbits_t __at(T1CR_ADDR) T1CRbits;

#define TC1CKPS0        T1CRbits.TC1CKPS0           /* bit 0 */
#define TC1CKPS1        T1CRbits.TC1CKPS1           /* bit 1 */
#define TC1CKPS2        T1CRbits.TC1CKPS2           /* bit 2 */
#define TC1CKS0         T1CRbits.TC1CKS0            /* bit 3 */
#define TC1CKS1         T1CRbits.TC1CKS1            /* bit 4 */
#define TC1MOD0          T1CRbits.TC1MOD0           /* bit 5 */
#define TC1MOD1          T1CRbits.TC1MOD1           /* bit 6 */
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

// ----- TC1PRL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1PRL0:1;
		unsigned char TC1PRL1:1;
		unsigned char TC1PRL2:1;
		unsigned char TC1PRL3:1;	
		unsigned char TC1PRL4:1;
		unsigned char TC1PRL5:1;
		unsigned char TC1PRL6:1;
		unsigned char TC1PRL7:1;		
	};
} __TC1PRLbits_t;
extern volatile __TC1PRLbits_t __at(TC1PRL_ADDR) TC1PRLbits;

#define TC1PRL0         TC1PRLbits.TC1PRL0   	      /* bit 0 */
#define TC1PRL1         TC1PRLbits.TC1PRL1     	    /* bit 1 */
#define TC1PRL2         TC1PRLbits.TC1PRL2          /* bit 2 */
#define TC1PRL3         TC1PRLbits.TC1PRL3          /* bit 3 */
#define TC1PRL4         TC1PRLbits.TC1PRL4   	      /* bit 4 */
#define TC1PRL5         TC1PRLbits.TC1PRL5     	    /* bit 5 */
#define TC1PRL6         TC1PRLbits.TC1PRL6          /* bit 6 */
#define TC1PRL7         TC1PRLbits.TC1PRL7          /* bit 7 */

// ----- TC1PRH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC1PRH0:1;
		unsigned char TC1PRH1:1;
		unsigned char TC1PRH2:1;
		unsigned char TC1PRH3:1;	
		unsigned char TC1PRH4:1;
		unsigned char TC1PRH5:1;
		unsigned char TC1PRH6:1;
		unsigned char TC1PRH7:1;		
	};
} __TC1PRHbits_t;
extern volatile __TC1PRHbits_t __at(TC1PRH_ADDR) TC1PRHbits;

#define TC1PRH0         TC1PRHbits.TC1PRH0   	      /* bit 0 */
#define TC1PRH1         TC1PRHbits.TC1PRH1     	    /* bit 1 */
#define TC1PRH2         TC1PRHbits.TC1PRH2          /* bit 2 */
#define TC1PRH3         TC1PRHbits.TC1PRH3          /* bit 3 */
#define TC1PRH4         TC1PRHbits.TC1PRH4   	      /* bit 4 */
#define TC1PRH5         TC1PRHbits.TC1PRH5     	    /* bit 5 */
#define TC1PRH6         TC1PRHbits.TC1PRH6          /* bit 6 */
#define TC1PRH7         TC1PRHbits.TC1PRH7          /* bit 7 */

// ----- EECON1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char EEWEN:1;
		unsigned char WERR:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char EEMOD:1;
	};
} __EECON1bits_t;
extern volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;

#define EEWEN         EECON1bits.EEWEN         /* bit 0 */
#define WERR          EECON1bits.WERR          /* bit 1 */
#define EEMOD         EECON1bits.EEMOD      	 /* bit 7 */

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
		unsigned char :1;
	};
} __EECON2bits_t;
extern volatile __EECON2bits_t __at(EECON2_ADDR) EECON2bits;

#define EEWE         EECON2bits.EEWE         /* bit 0 */
#define EELOCK1      EECON2bits.EELOCK1      /* bit 1 */
#define EELOCK2      EECON2bits.EELOCK2      /* bit 2 */
#define EELOCK3      EECON2bits.EELOCK3      /* bit 3 */

// ----- CMPC0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char CX : 1;
		unsigned char CINTS0 : 1;
		unsigned char CINTS1 : 1;
		unsigned char CMPOUT : 1;
		unsigned char CMPEN : 1;
	};
} __CMPC0bits_t;
extern volatile __CMPC0bits_t __at(CMPC0_ADDR) CMPC0bits;

#define CX                    CMPC0bits.CX              /* bit 3 */
#define CINTS0                CMPC0bits.CINTS0               /* bit 4 */
#define CINTS1               CMPC0bits.CINTS1              /* bit 3 */
#define CMPOUT                CMPC0bits.CMPOUT               /* bit 4 */
#define CMPEN               CMPC0bits.CMPEN              /* bit 7 */

// ----- LVDCR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVDS0: 1;
		unsigned char VLVDS1: 1;
		unsigned char VLVDS2: 1;
		unsigned char VLVDS3 : 1;
		unsigned char VLVDS4 : 1;
		unsigned char VREFOEN : 1;
		unsigned char LVDF : 1;
		unsigned char LVDEN : 1;
	};
} __LVDCRbits_t;
extern volatile __LVDCRbits_t __at(LVDCR_ADDR) LVDCRbits;

#define VLVDS0                LVDCRbits.VLVDS0              /* bit 0 */
#define VLVDS1                LVDCRbits.VLVDS1          /* bit 1 */
#define VLVDS2                LVDCRbits.VLVDS2              /* bit 2 */
#define VLVDS3                LVDCRbits.VLVDS3               /* bit 3 */
#define VLVDS4                LVDCRbits.VLVDS4               /* bit 4 */
#define VREFOEN               LVDCRbits.VREFOEN              /* bit 3 */
#define LVDF                  LVDCRbits.LVDF               /* bit 4 */
#define LVDEN                 LVDCRbits.LVDEF              /* bit 7 */

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