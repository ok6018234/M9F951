#ifndef __MA006E_H__
#define __MA006E_H__

//
// Register addresses.
//

#define TC0PRL_ADDR         0x0198
#define TC0PRH_ADDR         0x0199
#define TC1PRL_ADDR         0x019A
#define TC1PRH_ADDR         0x019B
#define TC2PRL_ADDR         0x019C
#define TC2PRH_ADDR         0x019D
#define TK1CNTL_ADDR        0x019E
#define TK1CNTH_ADDR        0x019F
#define TK1CTR0_ADDR        0x01A0
#define TK1CHSL_ADDR        0x01A1
#define TK1CHSH_ADDR        0x01A2
#define TK0CNTL_ADDR        0x01A3
#define TK0CNTH_ADDR        0x01A4
#define TK0CTR0_ADDR        0x01A5
#define TK0CHSL_ADDR        0x01A6
#define TK0CHSH_ADDR        0x01A7
#define OPA1C0_ADDR         0x01A8
#define OPA1C1_ADDR         0x01A9
#define COPA1C_ADDR         0x01AA
#define CMP0C0_ADDR         0x01AB
#define CMPC0_ADDR         0x01AB
#define CMP0C1_ADDR         0x01AC
#define CMPC1_ADDR         0x01AC
#define OPA0C0_ADDR         0x01AD
#define OPA0C1_ADDR         0x01AE
#define COPA0C_ADDR         0x01AF
#define INDF0_ADDR          0x01B0
#define FSR0_ADDR           0x01B1
#define TXCR_ADDR         	0x01B2
#define TX0CR_ADDR         	0x01B2
#define TXREG_ADDR          0x01B3
#define TX0REG_ADDR          0x01B3
#define RXCR_ADDR         	0x01B4
#define RX0CR_ADDR         	0x01B4
#define RXREG_ADDR          0x01B5
#define RX0REG_ADDR          0x01B5
#define BRGDH_ADDR          0x01B6
#define BRGDL_ADDR          0x01B7
#define INDF1_ADDR          0x01B8
#define FSR1_ADDR           0x01B9
#define PCL_ADDR            0x01BA
#define STATUS_ADDR         0x01BB
#define OPTION_ADDR         0x01BC
#define OSCM_ADDR           0x01BD
#define WDTC_ADDR      	    0x01BE
#define ADCON2_ADDR         0x01BF
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
#define PDA_ADDR            0x01CB
#define IOB_ADDR            0x01CC
#define OEB_ADDR            0x01CD
#define PUB_ADDR            0x01CE
#define PDB_ADDR            0x01CF
#define IOC_ADDR            0x01D0
#define OEC_ADDR            0x01D1
#define PUC_ADDR            0x01D2
#define PDC_ADDR            0x01D3
#define IOD_ADDR            0x01D4
#define OED_ADDR            0x01D5
#define PUD_ADDR            0x01D6
#define PDD_ADDR            0x01D7
#define ANSA_ADDR           0x01D8
#define ANSC_ADDR           0x01D9
#define IOBICR_ADDR         0x01DA
#define IOCICR_ADDR         0x01DB
#define IODICR_ADDR         0x01DC
#define PWM2CR_ADDR         0x01DD
#define PWM2DH_ADDR         0x01DE    
#define PWM2DL_ADDR         0x01DF
#define PWM0CR_ADDR         0x01E0
#define PWM0DH_ADDR         0x01E1    
#define PWM0DL_ADDR         0x01E2
#define PWMDEADT_ADDR       0x01E3
#define PWMDEAD_ADDR       0x01E3
#define PWM1CR_ADDR         0x01E4
#define PWM1DH_ADDR         0x01E5    
#define PWM1DL_ADDR         0x01E6
#define I2CCON_ADDR         0x01E7
#define T0CR_ADDR           0x01E8
#define TC0CL_ADDR          0x01E9
#define TC0CH_ADDR          0x01EA
#define IODS_ADDR           0x01EB
#define T1CR_ADDR           0x01EC
#define TC1CL_ADDR          0x01ED
#define TC1CH_ADDR          0x01EE
#define I2CBUF_ADDR         0x01EF
#define SSPBUF_ADDR         0x01EF
#define T2CR_ADDR           0x01F0
#define TC2CL_ADDR          0x01F1
#define TC2CH_ADDR          0x01F2
#define T2GCR_ADDR          0x01F3
#define ADCON0_ADDR         0x01F4
#define ADCON1_ADDR         0x01F5
#define ADL_ADDR            0x01F6
#define ADH_ADDR            0x01F7
#define PWMS_ADDR           0x01F8
#define IRCCAL_ADDR         0x01FC
#define VREFCAL_ADDR         0x01FA

//
//----- Register Files -----------------------------------------------------
//

extern __sfr __at (TC0PRL_ADDR)        TC0PRL;
extern __sfr __at (TC0PRH_ADDR)        TC0PRH;
extern __sfr __at (TC1PRL_ADDR)        TC1PRL;
extern __sfr __at (TC1PRH_ADDR)        TC1PRH;
extern __sfr __at (TC2PRL_ADDR)        TC2PRL;
extern __sfr __at (TC2PRH_ADDR)        TC2PRH;
extern __sfr __at (TK1CNTL_ADDR)       TK1CNTL;
extern __sfr __at (TK1CNTH_ADDR)       TK1CNTH;
extern __sfr __at (TK1CTR0_ADDR)       TK1CTR0;
extern __sfr __at (TK1CHSL_ADDR)       TK1CHSL;
extern __sfr __at (TK1CHSH_ADDR)       TK1CHSH;
extern __sfr __at (TK0CNTL_ADDR)       TK0CNTL;
extern __sfr __at (TK0CNTH_ADDR)       TK0CNTH;
extern __sfr __at (TK0CTR0_ADDR)       TK0CTR0;
extern __sfr __at (TK0CHSL_ADDR)       TK0CHSL;
extern __sfr __at (TK0CHSH_ADDR)       TK0CHSH;
extern __sfr __at (OPA1C0_ADDR)        OPA1C0;
extern __sfr __at (OPA1C1_ADDR)        OPA1C1;
extern __sfr __at (COPA1C_ADDR)        COPA1C;
extern __sfr __at (CMP0C0_ADDR)        CMP0C0;
extern __sfr __at (CMPC0_ADDR)        CMPC0;
extern __sfr __at (CMP0C1_ADDR)        CMP0C1;
extern __sfr __at (CMPC1_ADDR)        CMPC1;
extern __sfr __at (OPA0C0_ADDR)        OPA0C0;
extern __sfr __at (OPA0C1_ADDR)        OPA0C1;
extern __sfr __at (COPA0C_ADDR)        COPA0C;
extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (TXCR_ADDR)          TXCR;
extern __sfr __at (TX0CR_ADDR)          TX0CR;
extern __sfr __at (TXREG_ADDR)         TXREG;
extern __sfr __at (TX0REG_ADDR)         TX0REG;
extern __sfr __at (RXCR_ADDR)          RXCR;
extern __sfr __at (RX0CR_ADDR)          RX0CR;
extern __sfr __at (RXREG_ADDR)         RXREG;
extern __sfr __at (RX0REG_ADDR)         RX0REG;
extern __sfr __at (BRGDH_ADDR)         BRGDH;
extern __sfr __at (BRGDL_ADDR)         BRGDL;
extern __sfr __at (INDF1_ADDR)         INDF1;
extern __sfr __at (FSR1_ADDR)          FSR1;
extern __sfr __at (PCL_ADDR)           PCL;
extern __sfr __at (STATUS_ADDR)        STATUS;
extern __sfr __at (OPTION_ADDR)        OPTION;
extern __sfr __at (OSCM_ADDR)          OSCM;
extern __sfr __at (WDTC_ADDR)      	   WDTC;
extern __sfr __at (ADCON2_ADDR)        ADCON2;
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
extern __sfr __at (PDA_ADDR)           PDA;
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (PUB_ADDR)           PUB;
extern __sfr __at (PDB_ADDR)           PDB;
extern __sfr __at (IOC_ADDR)           IOC;
extern __sfr __at (OEC_ADDR)           OEC;
extern __sfr __at (PUC_ADDR)           PUC;
extern __sfr __at (PDC_ADDR)           PDC;
extern __sfr __at (IOD_ADDR)           IOD;
extern __sfr __at (OED_ADDR)           OED;
extern __sfr __at (PUD_ADDR)           PUD;
extern __sfr __at (PDD_ADDR)           PDD;
extern __sfr __at (ANSA_ADDR)          ANSA;
extern __sfr __at (ANSC_ADDR)          ANSC;
extern __sfr __at (IOBICR_ADDR)        IOBICR;
extern __sfr __at (IOCICR_ADDR)        IOCICR;
extern __sfr __at (IODICR_ADDR)        IODICR;
extern __sfr __at (PWM2CR_ADDR)        PWM2CR;
extern __sfr __at (PWM2DH_ADDR)        PWM2DH;    
extern __sfr __at (PWM2DL_ADDR)        PWM2DL;
extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0DH_ADDR)        PWM0DH;    
extern __sfr __at (PWM0DL_ADDR)        PWM0DL;
extern __sfr __at (PWMDEADT_ADDR)      PWMDEADT;
extern __sfr __at (PWMDEAD_ADDR)      PWMDEAD;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;
extern __sfr __at (I2CCON_ADDR)        I2CCON;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (IODS_ADDR)          IODS;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (I2CBUF_ADDR)        I2CBUF;
extern __sfr __at (SSPBUF_ADDR)        SSPBUF;
extern __sfr __at (T2CR_ADDR)          T2CR;
extern __sfr __at (TC2CL_ADDR)         TC2CL;
extern __sfr __at (TC2CH_ADDR)         TC2CH;
extern __sfr __at (T2GCR_ADDR)         T2GCR;
extern __sfr __at (ADCON0_ADDR)        ADCON0;
extern __sfr __at (ADCON1_ADDR)        ADCON1;
extern __sfr __at (ADL_ADDR)           ADL;
extern __sfr __at (ADH_ADDR)           ADH;
extern __sfr __at (PWMS_ADDR)          PWMS;
extern __sfr __at (IRCCAL_ADDR)        IRCCAL;
extern __sfr __at (VREFCAL_ADDR)        VREFCAL;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================

// ----- TC0PRL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0PRL0:1;
		unsigned char TC0PRL1:1;
		unsigned char TC0PRL2:1;
		unsigned char TC0PRL3:1;	
		unsigned char TC0PRL4:1;
		unsigned char TC0PRL5:1;
		unsigned char TC0PRL6:1;
		unsigned char TC0PRL7:1;		
	};
} __TC0PRLbits_t;
extern volatile __TC0PRLbits_t __at(TC0PRL_ADDR) TC0PRLbits;

#define TC0PRL0         TC0PRLbits.TC0PRL0   	      /* bit 0 */
#define TC0PRL1         TC0PRLbits.TC0PRL1     	    /* bit 1 */
#define TC0PRL2         TC0PRLbits.TC0PRL2          /* bit 2 */
#define TC0PRL3         TC0PRLbits.TC0PRL3          /* bit 3 */
#define TC0PRL4         TC0PRLbits.TC0PRL4   	      /* bit 4 */
#define TC0PRL5         TC0PRLbits.TC0PRL5     	    /* bit 5 */
#define TC0PRL6         TC0PRLbits.TC0PRL6          /* bit 6 */
#define TC0PRL7         TC0PRLbits.TC0PRL7          /* bit 7 */

// ----- TC0PRH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0PRH0:1;
		unsigned char TC0PRH1:1;
		unsigned char TC0PRH2:1;
		unsigned char TC0PRH3:1;	
		unsigned char TC0PRH4:1;
		unsigned char TC0PRH5:1;
		unsigned char TC0PRH6:1;
		unsigned char TC0PRH7:1;		
	};
} __TC0PRHbits_t;
extern volatile __TC0PRHbits_t __at(TC0PRH_ADDR) TC0PRHbits;

#define TC0PRH0         TC0PRHbits.TC0PRH0   	      /* bit 0 */
#define TC0PRH1         TC0PRHbits.TC0PRH1     	    /* bit 1 */
#define TC0PRH2         TC0PRHbits.TC0PRH2          /* bit 2 */
#define TC0PRH3         TC0PRHbits.TC0PRH3          /* bit 3 */
#define TC0PRH4         TC0PRHbits.TC0PRH4   	      /* bit 4 */
#define TC0PRH5         TC0PRHbits.TC0PRH5     	    /* bit 5 */
#define TC0PRH6         TC0PRHbits.TC0PRH6          /* bit 6 */
#define TC0PRH7         TC0PRHbits.TC0PRH7          /* bit 7 */

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

// ----- TC2PRL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2PRL0:1;
		unsigned char TC2PRL1:1;
		unsigned char TC2PRL2:1;
		unsigned char TC2PRL3:1;	
		unsigned char TC2PRL4:1;
		unsigned char TC2PRL5:1;
		unsigned char TC2PRL6:1;
		unsigned char TC2PRL7:1;		
	};
} __TC2PRLbits_t;
extern volatile __TC2PRLbits_t __at(TC2PRL_ADDR) TC2PRLbits;

#define TC2PRL0         TC2PRLbits.TC2PRL0   	      /* bit 0 */
#define TC2PRL1         TC2PRLbits.TC2PRL1     	    /* bit 1 */
#define TC2PRL2         TC2PRLbits.TC2PRL2          /* bit 2 */
#define TC2PRL3         TC2PRLbits.TC2PRL3          /* bit 3 */
#define TC2PRL4         TC2PRLbits.TC2PRL4   	      /* bit 4 */
#define TC2PRL5         TC2PRLbits.TC2PRL5     	    /* bit 5 */
#define TC2PRL6         TC2PRLbits.TC2PRL6          /* bit 6 */
#define TC2PRL7         TC2PRLbits.TC2PRL7          /* bit 7 */

// ----- TC2PRH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2PRH0:1;
		unsigned char TC2PRH1:1;
		unsigned char TC2PRH2:1;
		unsigned char TC2PRH3:1;	
		unsigned char TC2PRH4:1;
		unsigned char TC2PRH5:1;
		unsigned char TC2PRH6:1;
		unsigned char TC2PRH7:1;		
	};
} __TC2PRHbits_t;
extern volatile __TC2PRHbits_t __at(TC2PRH_ADDR) TC2PRHbits;

#define TC2PRH0         TC2PRHbits.TC2PRH0   	      /* bit 0 */
#define TC2PRH1         TC2PRHbits.TC2PRH1     	    /* bit 1 */
#define TC2PRH2         TC2PRHbits.TC2PRH2          /* bit 2 */
#define TC2PRH3         TC2PRHbits.TC2PRH3          /* bit 3 */
#define TC2PRH4         TC2PRHbits.TC2PRH4   	      /* bit 4 */
#define TC2PRH5         TC2PRHbits.TC2PRH5     	    /* bit 5 */
#define TC2PRH6         TC2PRHbits.TC2PRH6          /* bit 6 */
#define TC2PRH7         TC2PRHbits.TC2PRH7          /* bit 7 */

// ----- TK1CNTL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK1CNTL0:1;
		unsigned char TK1CNTL1:1;
		unsigned char TK1CNTL2:1;
		unsigned char TK1CNTL3:1;	
		unsigned char TK1CNTL4:1;
		unsigned char TK1CNTL5:1;
		unsigned char TK1CNTL6:1;
		unsigned char TK1CNTL7:1;		
	};
} __TK1CNTLbits_t;
extern volatile __TK1CNTLbits_t __at(TK1CNTL_ADDR) TK1CNTLbits;

#define TK1CNTL0        TK1CNTLbits.TK1CNTL0   	    /* bit 0 */
#define TK1CNTL1        TK1CNTLbits.TK1CNTL1     	  /* bit 1 */
#define TK1CNTL2        TK1CNTLbits.TK1CNTL2        /* bit 2 */
#define TK1CNTL3        TK1CNTLbits.TK1CNTL3        /* bit 3 */
#define TK1CNTL4        TK1CNTLbits.TK1CNTL4   	    /* bit 4 */
#define TK1CNTL5        TK1CNTLbits.TK1CNTL5     	  /* bit 5 */
#define TK1CNTL6        TK1CNTLbits.TK1CNTL6        /* bit 6 */
#define TK1CNTL7        TK1CNTLbits.TK1CNTL7        /* bit 7 */

// ----- TK1CNTH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK1CNTH0:1;
		unsigned char TK1CNTH1:1;
		unsigned char TK1CNTH2:1;
		unsigned char TK1CNTH3:1;	
		unsigned char TK1CNTH4:1;
		unsigned char TK1CNTH5:1;
		unsigned char TK1CNTH6:1;
		unsigned char TK1CNTH7:1;		
	};
} __TK1CNTHbits_t;
extern volatile __TK1CNTHbits_t __at(TK1CNTH_ADDR) TK1CNTHbits;

#define TK1CNTH0        TK1CNTHbits.TK1CNTH0   	    /* bit 0 */
#define TK1CNTH1        TK1CNTHbits.TK1CNTH1     	  /* bit 1 */
#define TK1CNTH2        TK1CNTHbits.TK1CNTH2        /* bit 2 */
#define TK1CNTH3        TK1CNTHbits.TK1CNTH3        /* bit 3 */
#define TK1CNTH4        TK1CNTHbits.TK1CNTH4   	    /* bit 4 */
#define TK1CNTH5        TK1CNTHbits.TK1CNTH5        /* bit 5 */
#define TK1CNTH6        TK1CNTHbits.TK1CNTH6        /* bit 6 */
#define TK1CNTH7        TK1CNTHbits.TK1CNTH7        /* bit 7 */

// ----- TK1CTR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char TK1CKS0:1;
		unsigned char TK1CKS1:1;
		unsigned char TK1START:1;
		unsigned char TK1EN:1;		
	};
} __TK1CTR0bits_t;
extern volatile __TK1CTR0bits_t __at(TK1CTR0_ADDR) TK1CTR0bits;

#define TK1CKS0         TK1CTR0bits.TK1CKS0          /* bit 4 */
#define TK1CKS1         TK1CTR0bits.TK1CKS1          /* bit 5 */
#define TK1START        TK1CTR0bits.TK1START         /* bit 6 */
#define TK1EN           TK1CTR0bits.TK1EN            /* bit 7 */

// ----- TK1CHSL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK1CHS0:1;
		unsigned char TK1CHS1:1;
		unsigned char TK1CHS2:1;
		unsigned char TK1CHS3:1;	
		unsigned char TK1CHS4:1;
		unsigned char TK1CHS5:1;
		unsigned char TK1CHS6:1;
		unsigned char TK1CHS7:1;		
	};
} __TK1CHSLbits_t;
extern volatile __TK1CHSLbits_t __at(TK1CHSL_ADDR) TK1CHSLbits;

#define TK1CHS0        TK1CHSLbits.TK1CHS0        /* bit 0 */
#define TK1CHS1        TK1CHSLbits.TK1CHS1        /* bit 1 */
#define TK1CHS2        TK1CHSLbits.TK1CHS2        /* bit 2 */
#define TK1CHS3        TK1CHSLbits.TK1CHS3        /* bit 3 */
#define TK1CHS4        TK1CHSLbits.TK1CHS4        /* bit 4 */
#define TK1CHS5        TK1CHSLbits.TK1CHS5        /* bit 5 */
#define TK1CHS6        TK1CHSLbits.TK1CHS6        /* bit 6 */
#define TK1CHS7        TK1CHSLbits.TK1CHS7        /* bit 7 */

// ----- TK1CHSH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK1CHS8:1;
		unsigned char TK1CHS9:1;
		unsigned char TK1CHS10:1;
		unsigned char TK1CHS11:1;	
		unsigned char TK1CHS12:1;
		unsigned char TK1CHS13:1;
		unsigned char TK1CHS14:1;
		unsigned char TK1CHS15:1;		
	};
} __TK1CHSHbits_t;
extern volatile __TK1CHSHbits_t __at(TK1CHSH_ADDR) TK1CHSHbits;

#define TK1CHS8        TK1CHSHbits.TK1CHS8        /* bit 0 */
#define TK1CHS9        TK1CHSHbits.TK1CHS9        /* bit 1 */
#define TK1CHS10       TK1CHSHbits.TK1CHS10       /* bit 2 */
#define TK1CHS11       TK1CHSHbits.TK1CHS11       /* bit 3 */
#define TK1CHS12       TK1CHSHbits.TK1CHS12       /* bit 4 */
#define TK1CHS13       TK1CHSHbits.TK1CHS13       /* bit 5 */
#define TK1CHS14       TK1CHSHbits.TK1CHS14       /* bit 6 */
#define TK1CHS15       TK1CHSHbits.TK1CHS15       /* bit 7 */

// ----- TK0CNTL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK0CNTL0:1;
		unsigned char TK0CNTL1:1;
		unsigned char TK0CNTL2:1;
		unsigned char TK0CNTL3:1;	
		unsigned char TK0CNTL4:1;
		unsigned char TK0CNTL5:1;
		unsigned char TK0CNTL6:1;
		unsigned char TK0CNTL7:1;		
	};
} __TK0CNTLbits_t;
extern volatile __TK0CNTLbits_t __at(TK0CNTL_ADDR) TK0CNTLbits;

#define TK0CNTL0        TK0CNTLbits.TK0CNTL0   	    /* bit 0 */
#define TK0CNTL1        TK0CNTLbits.TK0CNTL1     	  /* bit 1 */
#define TK0CNTL2        TK0CNTLbits.TK0CNTL2        /* bit 2 */
#define TK0CNTL3        TK0CNTLbits.TK0CNTL3        /* bit 3 */
#define TK0CNTL4        TK0CNTLbits.TK0CNTL4   	    /* bit 4 */
#define TK0CNTL5        TK0CNTLbits.TK0CNTL5     	  /* bit 5 */
#define TK0CNTL6        TK0CNTLbits.TK0CNTL6        /* bit 6 */
#define TK0CNTL7        TK0CNTLbits.TK0CNTL7        /* bit 7 */

// ----- TK0CNTH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK0CNTH0:1;
		unsigned char TK0CNTH1:1;
		unsigned char TK0CNTH2:1;
		unsigned char TK0CNTH3:1;	
		unsigned char TK0CNTH4:1;
		unsigned char TK0CNTH5:1;
		unsigned char TK0CNTH6:1;
		unsigned char TK0CNTH7:1;		
	};
} __TK0CNTHbits_t;
extern volatile __TK0CNTHbits_t __at(TK0CNTH_ADDR) TK0CNTHbits;

#define TK0CNTH0        TK0CNTHbits.TK0CNTH0   	    /* bit 0 */
#define TK0CNTH1        TK0CNTHbits.TK0CNTH1     	  /* bit 1 */
#define TK0CNTH2        TK0CNTHbits.TK0CNTH2        /* bit 2 */
#define TK0CNTH3        TK0CNTHbits.TK0CNTH3        /* bit 3 */
#define TK0CNTH4        TK0CNTHbits.TK0CNTH4   	    /* bit 4 */
#define TK0CNTH5        TK0CNTHbits.TK0CNTH5     	  /* bit 5 */
#define TK0CNTH6        TK0CNTHbits.TK0CNTH6        /* bit 6 */
#define TK0CNTH7        TK0CNTHbits.TK0CNTH7        /* bit 7 */

// ----- TK0CTR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char TK0CKS0:1;
		unsigned char TK0CKS1:1;
		unsigned char TK0START:1;
		unsigned char TK0EN:1;		
	};
} __TK0CTR0bits_t;
extern volatile __TK0CTR0bits_t __at(TK0CTR0_ADDR) TK0CTR0bits;

#define TK0CKS0         TK0CTR0bits.TK0CKS0          /* bit 4 */
#define TK0CKS1         TK0CTR0bits.TK0CKS1          /* bit 5 */
#define TK0START        TK0CTR0bits.TK0START         /* bit 6 */
#define TK0EN           TK0CTR0bits.TK0EN            /* bit 7 */

// ----- TK0CHSL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK0CHS0:1;
		unsigned char TK0CHS1:1;
		unsigned char TK0CHS2:1;
		unsigned char TK0CHS3:1;	
		unsigned char TK0CHS4:1;
		unsigned char TK0CHS5:1;
		unsigned char TK0CHS6:1;
		unsigned char TK0CHS7:1;		
	};
} __TK0CHSLbits_t;
extern volatile __TK0CHSLbits_t __at(TK0CHSL_ADDR) TK0CHSLbits;

#define TK0CHS0        TK0CHSLbits.TK0CHS0        /* bit 0 */
#define TK0CHS1        TK0CHSLbits.TK0CHS1        /* bit 1 */
#define TK0CHS2        TK0CHSLbits.TK0CHS2        /* bit 2 */
#define TK0CHS3        TK0CHSLbits.TK0CHS3        /* bit 3 */
#define TK0CHS4        TK0CHSLbits.TK0CHS4        /* bit 4 */
#define TK0CHS5        TK0CHSLbits.TK0CHS5        /* bit 5 */
#define TK0CHS6        TK0CHSLbits.TK0CHS6        /* bit 6 */
#define TK0CHS7        TK0CHSLbits.TK0CHS7        /* bit 7 */

// ----- TK0CHSH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TK0CHS8:1;
		unsigned char TK0CHS9:1;
		unsigned char TK0CHS10:1;
		unsigned char TK0CHS11:1;	
		unsigned char TK0CHS12:1;
		unsigned char TK0CHS13:1;
		unsigned char TK0CHS14:1;
		unsigned char TK0CHS15:1;		
	};
} __TK0CHSHbits_t;
extern volatile __TK0CHSHbits_t __at(TK0CHSH_ADDR) TK0CHSHbits;

#define TK0CHS8         TK0CHSHbits.TK0CHS8         /* bit 0 */
#define TK0CHS9         TK0CHSHbits.TK0CHS9         /* bit 1 */
#define TK0CHS10        TK0CHSHbits.TK0CHS10        /* bit 2 */
#define TK0CHS11        TK0CHSHbits.TK0CHS11        /* bit 3 */
#define TK0CHS12        TK0CHSHbits.TK0CHS12        /* bit 4 */
#define TK0CHS13        TK0CHSHbits.TK0CHS13        /* bit 5 */
#define TK0CHS14        TK0CHSHbits.TK0CHS14        /* bit 6 */
#define TK0CHS15        TK0CHSHbits.TK0CHS15        /* bit 7 */

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
#define OPA1NS0         OPA1C0bits.OPA1NS0     	    /* bit 3 */
#define OPA1NS1         OPA1C0bits.OPA1NS1     	    /* bit 4 */
#define OPA1NS2         OPA1C0bits.OPA1NS2     	    /* bit 5 */
#define OPA1O           OPA1C0bits.OPA1O            /* bit 6 */
#define OPA1EN          OPA1C0bits.OPA1EN           /* bit 7 */

// ----- OPA1C1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPA1OF0:1;
		unsigned char OPA1OF1:1;	
		unsigned char OPA1OF2:1;	
		unsigned char OPA1OF3:1;	
		unsigned char OPA1OFM:1;	
		unsigned char OPA1HIEN:1;
		unsigned char OPA1VRC:1;
		unsigned char A1ENLO:1;	
	};
} __OPA1C1bits_t;
extern volatile __OPA1C1bits_t __at(OPA1C1_ADDR) OPA1C1bits;

#define OPA1OF0         OPA1C1bits.OPA1OF0   	      /* bit 0 */
#define OPA1OF1         OPA1C1bits.OPA1OF1   	      /* bit 1 */
#define OPA1OF2         OPA1C1bits.OPA1OF2   	      /* bit 2 */
#define OPA1OF3         OPA1C1bits.OPA1OF3   	      /* bit 3 */
#define OPA1OFM         OPA1C1bits.OPA1OFM     	    /* bit 4 */
#define OPA1HIEN        OPA1C1bits.OPA1HIEN    	    /* bit 5 */
#define OPA1VRC         OPA1C1bits.OPA1VRC          /* bit 6 */
#define A1ENLO          OPA1C1bits.A1ENLO           /* bit 7 */

// ----- COPA1C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A1SW0:1;
		unsigned char A1SW1:1;	
		unsigned char A1SW2:1;	
		unsigned char A1SW3:1;	
		unsigned char OPA1GS:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
	};
} __COPA1Cbits_t;
extern volatile __COPA1Cbits_t __at(COPA1C_ADDR) COPA1Cbits;

#define A1SW0           COPA1Cbits.A1SW0       	    /* bit 0 */
#define A1SW1           COPA1Cbits.A1SW1       	    /* bit 1 */
#define A1SW2           COPA1Cbits.A1SW2       	    /* bit 2 */
#define A1SW3           COPA1Cbits.A1SW3       	    /* bit 3 */
#define OPA1GS          COPA1Cbits.OPA1GS      	    /* bit 4 */

// ----- CMPC0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPPS0:1;
		unsigned char CMPPS1:1;	
		unsigned char CMPPS2:1;	
		unsigned char CMPNS0:1;
		unsigned char CMPNS1:1;	
		unsigned char CMPNS2:1;	
		unsigned char CMPOUT:1;
		unsigned char CMPEN:1;
	};
} __CMP0C0bits_t;
extern volatile __CMP0C0bits_t __at(CMP0C0_ADDR) CMP0C0bits;

#define CMPPS0          CMP0C0bits.CMPPS0            /* bit 0 */
#define CMPPS1          CMP0C0bits.CMPPS1            /* bit 1 */
#define CMPPS2          CMP0C0bits.CMPPS2            /* bit 2 */
#define CMPNS0          CMP0C0bits.CMPNS0            /* bit 3 */
#define CMPNS1          CMP0C0bits.CMPNS1            /* bit 4 */
#define CMPNS2          CMP0C0bits.CMPNS2            /* bit 5 */
#define CMPOUT          CMP0C0bits.CMPOUT            /* bit 6 */
#define CMPEN           CMP0C0bits.CMPEN             /* bit 7 */

// ----- CMP0C1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPOF0:1;
		unsigned char CMPOF1:1;	
		unsigned char CMPOF2:1;	
		unsigned char CMPOF3:1;	
		unsigned char CMPOFM:1;
		unsigned char CMPHIEN:1;
		unsigned char :1;
		unsigned char CMPOEN:1;
	};
} __CMP0C1bits_t;
extern volatile __CMP0C1bits_t __at(CMP0C1_ADDR) CMP0C1bits;

#define CMPOF0          CMP0C1bits.CMPOF0            /* bit 0 */
#define CMPOF1          CMP0C1bits.CMPOF1            /* bit 1 */
#define CMPOF2          CMP0C1bits.CMPOF2            /* bit 2 */
#define CMPOF3          CMP0C1bits.CMPOF3            /* bit 3 */
#define CMPOFM          CMP0C1bits.CMPOFM            /* bit 4 */
#define CMPHIEN         CMP0C1bits.CMPHIEN           /* bit 5 */
#define CMPOEN          CMP0C1bits.CMPOEN            /* bit 7 */

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

#define OPA0PS0         OPA0C0bits.OPA0PS0          /* bit 0 */
#define OPA0PS1         OPA0C0bits.OPA0PS1          /* bit 1 */
#define OPA0PS2         OPA0C0bits.OPA0PS2          /* bit 2 */
#define OPA0NS0         OPA0C0bits.OPA0NS0          /* bit 3 */
#define OPA0NS1         OPA0C0bits.OPA0NS1          /* bit 4 */
#define OPA0NS2         OPA0C0bits.OPA0NS2          /* bit 5 */
#define OPA0O           OPA0C0bits.OPA0O            /* bit 6 */
#define OPA0EN          OPA0C0bits.OPA0EN           /* bit 7 */

// ----- OPA0C1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OPAOF0:1;
		unsigned char OPAOF1:1;	
		unsigned char OPAOF2:1;	
		unsigned char OPAOF3:1;	
		unsigned char OPAOFM:1;
		unsigned char OPAHIEN:1;
		unsigned char OPA0VRC:1;
		unsigned char A0ENLO:1;	
	};
} __OPA0C1bits_t;
extern volatile __OPA0C1bits_t __at(OPA0C1_ADDR) OPA0C1bits;

#define OPAOF0          OPA0C1bits.OPAOF0           /* bit 0 */
#define OPAOF1          OPA0C1bits.OPAOF1           /* bit 1 */
#define OPAOF2          OPA0C1bits.OPAOF2           /* bit 2 */
#define OPAOF3          OPA0C1bits.OPAOF3           /* bit 3 */
#define OPAOFM          OPA0C1bits.OPAOFM           /* bit 4 */
#define OPAHIEN         OPA0C1bits.OPAHIEN          /* bit 5 */
#define OPA0VRC         OPA0C1bits.OPA0VRC          /* bit 6 */
#define A0ENLO          OPA0C1bits.A0ENLO           /* bit 7 */

// ----- COPA0C Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char A0SW0:1;
		unsigned char A0SW1:1;	
		unsigned char A0SW2:1;	
		unsigned char A0SW3:1;	
		unsigned char OPAGS:1;
		unsigned char :1;	
		unsigned char CINTS0:1;
		unsigned char CINTS1:1;	
	};
} __COPA0Cbits_t;
extern volatile __COPA0Cbits_t __at(COPA0C_ADDR) COPA0Cbits;

#define A0SW0           COPA0Cbits.A0SW0       	    /* bit 0 */
#define A0SW1           COPA0Cbits.A0SW1       	    /* bit 1 */
#define A0SW2           COPA0Cbits.A0SW2       	    /* bit 2 */
#define A0SW3           COPA0Cbits.A0SW3       	    /* bit 3 */
#define OPAGS           COPA0Cbits.OPAGS       	    /* bit 4 */
#define CINTS0          COPA0Cbits.CINTS0           /* bit 6 */
#define CINTS1          COPA0Cbits.CINTS1           /* bit 7 */

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

// ----- TX0CR Bits --------------------------------------------------------
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

// ----- TX0REG Bits --------------------------------------------------------
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

// ----- RX0CR Bits --------------------------------------------------------
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

// ----- RX0REG Bits --------------------------------------------------------
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
		unsigned char :1;	
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

// ----- ADCON2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ADVOS0:1;
		unsigned char ADVOS1:1;	
		unsigned char ADVOS2:1;	
		unsigned char ADVOS3:1;	
		unsigned char :1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char :1;	
	};
} __ADCON2bits_t;
extern volatile __ADCON2bits_t __at(ADCON2_ADDR) ADCON2bits;

#define ADVOS0          ADCON2bits.ADVOS0    	    /* bit 0 */
#define ADVOS1          ADCON2bits.ADVOS1    	    /* bit 1 */
#define ADVOS2          ADCON2bits.ADVOS2    	    /* bit 2 */
#define ADVOS3          ADCON2bits.ADVOS3    	    /* bit 3 */

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
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char TK0IE:1;
		unsigned char TK1IE:1;	
	};
} __INTCR2bits_t;
extern volatile __INTCR2bits_t __at(INTCR2_ADDR) INTCR2bits;

#define TK0IE           INTCR2bits.TK0IE          /* bit 6 */
#define TK1IE           INTCR2bits.TK1IE          /* bit 7 */

// ----- INTF2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char TK0IF:1;
		unsigned char TK1IF:1;
	};
} __INTF2bits_t;
extern volatile __INTF2bits_t __at(INTF2_ADDR) INTF2bits;

#define TK0IF           INTF2bits.TK0IF           /* bit 6 */
#define TK1IF           INTF2bits.TK1IF           /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char TC2IE:1;
		unsigned char TC2GIE:1;
		unsigned char TXIE:1;
		unsigned char RXIE:1;
		unsigned char ADIE:1;
		unsigned char I2CIE:1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TC2IE           INTCR0bits.TC2IE          /* bit 2 */
#define TC2GIE          INTCR0bits.TC2GIE         /* bit 3 */
#define TXIE            INTCR0bits.TXIE        	  /* bit 4 */
#define RXIE            INTCR0bits.RXIE        	  /* bit 5 */
#define ADIE            INTCR0bits.ADIE        	  /* bit 6 */
#define I2CIE           INTCR0bits.I2CIE       	  /* bit 7 */

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char TC2IF:1;
		unsigned char TC2GIF:1;
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char ADIF:1;
		unsigned char I2CIF:1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TC2IF           INTF0bits.TC2IF        	  /* bit 2 */
#define TC2GIF          INTF0bits.TC2GIF          /* bit 3 */
#define TXIF            INTF0bits.TXIF        	  /* bit 4 */
#define RXIF            INTF0bits.RXIF            /* bit 5 */
#define ADIF            INTF0bits.ADIF            /* bit 6 */
#define I2CIF           INTF0bits.I2CIF        	  /* bit 7 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBCHIE:1;
		unsigned char IOCCHIE:1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
		unsigned char IODCHIE:1;
		unsigned char OPA1IE:1;
		unsigned char OPA0IE:1;
		unsigned char CMPIE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOBCHIE         INTCR1bits.IOBCHIE     	  /* bit 0 */
#define IOCCHIE         INTCR1bits.IOCCHIE     	  /* bit 1 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */
#define IODCHIE         INTCR1bits.IODCHIE        /* bit 4 */
#define OPA1IE          INTCR1bits.OPA1IE      	  /* bit 5 */
#define OPA0IE          INTCR1bits.OPA0IE      	  /* bit 6 */
#define CMPIE           INTCR1bits.CMPIE      	  /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOBCHIF:1;
		unsigned char IOCCHIF:1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
		unsigned char IODCHIF:1;
		unsigned char OPA1IF:1;
		unsigned char OPA0IF:1;
		unsigned char CMPIF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOBCHIF          INTF1bits.IOBCHIF          /* bit 0 */
#define IOCCHIF         INTF1bits.IOCCHIF         /* bit 1 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */
#define IODCHIF         INTF1bits.IODCHIF         /* bit 4 */
#define OPA1IF          INTF1bits.OPA1IF          /* bit 5 */
#define OPA0IF          INTF1bits.OPA0IF          /* bit 6 */
#define CMPIF           INTF1bits.CMPIF      	    /* bit 7 */

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
		unsigned char PDA7:1;
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
#define PDA7            PDAbits.PDA7      	      /* bit 7 */

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

// ----- PDB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PDB0:1;
		unsigned char PDB1:1;
		unsigned char PDB2:1;
		unsigned char PDB3:1;
		unsigned char PDB4:1;
		unsigned char PDB5:1;
		unsigned char PDB6:1;
		unsigned char PDB7:1;
	};
} __PDBbits_t;
extern volatile __PDBbits_t __at(PDB_ADDR) PDBbits;

#define PDB0            PDBbits.PDB0              /* bit 0 */
#define PDB1            PDBbits.PDB1              /* bit 1 */
#define PDB2            PDBbits.PDB2              /* bit 2 */
#define PDB3            PDBbits.PDB3              /* bit 3 */
#define PDB4            PDBbits.PDB4              /* bit 4 */
#define PDB5            PDBbits.PDB5              /* bit 5 */
#define PDB6            PDBbits.PDB6              /* bit 6 */
#define PDB7            PDBbits.PDB7      	      /* bit 7 */

// ----- IOC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOC0:1;
		unsigned char IOC1:1;
		unsigned char IOC2:1;
		unsigned char IOC3:1;
		unsigned char IOC4:1;
		unsigned char IOC5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOCbits_t;
extern volatile __IOCbits_t __at(IOC_ADDR) IOCbits;

#define IOC0            IOCbits.IOC0              /* bit 0 */
#define IOC1            IOCbits.IOC1              /* bit 1 */
#define IOC2            IOCbits.IOC2              /* bit 2 */
#define IOC3            IOCbits.IOC3              /* bit 3 */
#define IOC4            IOCbits.IOC4              /* bit 4 */
#define IOC5            IOCbits.IOC5              /* bit 5 */

// ----- OEC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEC0:1;
		unsigned char OEC1:1;
		unsigned char OEC2:1;
		unsigned char OEC3:1;
		unsigned char OEC4:1;
		unsigned char OEC5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __OECbits_t;
extern volatile __OECbits_t __at(OEC_ADDR) OECbits;

#define OEC0            OECbits.OEC0              /* bit 0 */
#define OEC1            OECbits.OEC1              /* bit 1 */
#define OEC2            OECbits.OEC2              /* bit 2 */
#define OEC3            OECbits.OEC3              /* bit 3 */
#define OEC4            OECbits.OEC4              /* bit 4 */
#define OEC5            OECbits.OEC5              /* bit 5 */

// ----- PUC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUC0:1;
		unsigned char PUC1:1;
		unsigned char PUC2:1;
		unsigned char PUC3:1;
		unsigned char PUC4:1;
		unsigned char PUC5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __PUCbits_t;
extern volatile __PUCbits_t __at(PUC_ADDR) PUCbits;

#define PUC0            PUCbits.PUC0              /* bit 0 */
#define PUC1            PUCbits.PUC1              /* bit 1 */
#define PUC2            PUCbits.PUC2              /* bit 2 */
#define PUC3            PUCbits.PUC3              /* bit 3 */
#define PUC4            PUCbits.PUC4              /* bit 4 */
#define PUC5            PUCbits.PUC5              /* bit 5 */

// ----- PDC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PDC0:1;
		unsigned char PDC1:1;
		unsigned char PDC2:1;
		unsigned char PDC3:1;
		unsigned char PDC4:1;
		unsigned char PDC5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __PDCbits_t;
extern volatile __PDCbits_t __at(PDC_ADDR) PDCbits;

#define PDC0            PDCbits.PDC0              /* bit 0 */
#define PDC1            PDCbits.PDC1              /* bit 1 */
#define PDC2            PDCbits.PDC2              /* bit 2 */
#define PDC3            PDCbits.PDC3              /* bit 3 */
#define PDC4            PDCbits.PDC4              /* bit 4 */
#define PDC5            PDCbits.PDC5              /* bit 5 */

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
#define IOD7            IODbits.IOD7              /* bit 7 */

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

// ----- PUD Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUD0:1;
		unsigned char PUD1:1;
		unsigned char PUD2:1;
		unsigned char PUD3:1;
		unsigned char PUD4:1;
		unsigned char PUD5:1;
		unsigned char PUD6:1;
		unsigned char PUD7:1;
	};
} __PUDbits_t;
extern volatile __PUDbits_t __at(PUD_ADDR) PUDbits;

#define PUD0            PUDbits.PUD0              /* bit 0 */
#define PUD1            PUDbits.PUD1              /* bit 1 */
#define PUD2            PUDbits.PUD2              /* bit 2 */
#define PUD3            PUDbits.PUD3              /* bit 3 */
#define PUD4            PUDbits.PUD4              /* bit 4 */
#define PUD5            PUDbits.PUD5              /* bit 5 */
#define PUD6            PUDbits.PUD6              /* bit 6 */
#define PUD7            PUDbits.PUD7      	      /* bit 7 */

// ----- PDD Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PDD0:1;
		unsigned char PDD1:1;
		unsigned char PDD2:1;
		unsigned char PDD3:1;
		unsigned char PDD4:1;
		unsigned char PDD5:1;
		unsigned char PDD6:1;
		unsigned char PDD7:1;
	};
} __PDDbits_t;
extern volatile __PDDbits_t __at(PDD_ADDR) PDDbits;

#define PDD0            PDDbits.PDD0              /* bit 0 */
#define PDD1            PDDbits.PDD1              /* bit 1 */
#define PDD2            PDDbits.PDD2              /* bit 2 */
#define PDD3            PDDbits.PDD3              /* bit 3 */
#define PDD4            PDDbits.PDD4              /* bit 4 */
#define PDD5            PDDbits.PDD5              /* bit 5 */
#define PDD6            PDDbits.PDD6              /* bit 6 */
#define PDD7            PDDbits.PDD7      	      /* bit 7 */

// ----- ANSA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSA0:1;
		unsigned char ANSA1:1;
		unsigned char ANSA2:1;
		unsigned char ANSA3:1;
		unsigned char ANSA4:1;
		unsigned char ANSA5:1;
		unsigned char ANSA6:1;
		unsigned char ANSA7:1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0           ANSAbits.ANSA0            /* bit 0 */
#define ANSA1           ANSAbits.ANSA1            /* bit 1 */
#define ANSA2           ANSAbits.ANSA2            /* bit 2 */
#define ANSA3           ANSAbits.ANSA3            /* bit 3 */
#define ANSA4           ANSAbits.ANSA4            /* bit 4 */
#define ANSA5           ANSAbits.ANSA5            /* bit 5 */
#define ANSA6           ANSAbits.ANSA6            /* bit 6 */
#define ANSA7           ANSAbits.ANSA7      	    /* bit 7 */

// ----- ANSC Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSC0:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ANSC4:1;
		unsigned char ANSC5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __ANSCbits_t;
extern volatile __ANSCbits_t __at(ANSC_ADDR) ANSCbits;

#define ANSC0           ANSCbits.ANSC0            /* bit 0 */
#define ANSC4           ANSCbits.ANSC4            /* bit 4 */
#define ANSC5           ANSCbits.ANSC5            /* bit 5 */

// ----- IOBICR Bits -------------------------------------------------------
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

#define IOBICR0         IOBICRbits.IOBICR0         /* bit 0 */
#define IOBICR1         IOBICRbits.IOBICR1         /* bit 1 */
#define IOBICR2         IOBICRbits.IOBICR2         /* bit 2 */
#define IOBICR3         IOBICRbits.IOBICR3         /* bit 3 */
#define IOBICR4         IOBICRbits.IOBICR4         /* bit 4 */
#define IOBICR5         IOBICRbits.IOBICR5         /* bit 5 */
#define IOBICR6         IOBICRbits.IOBICR6         /* bit 6 */
#define IOBICR7         IOBICRbits.IOBICR7      	 /* bit 7 */

// ----- IOCICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCICR0:1;
		unsigned char IOCICR1:1;
		unsigned char IOCICR2:1;
		unsigned char IOCICR3:1;
		unsigned char IOCICR4:1;
		unsigned char IOCICR5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOCICRbits_t;
extern volatile __IOCICRbits_t __at(IOCICR_ADDR) IOCICRbits;

#define IOCICR0         IOCICRbits.IOCICR0         /* bit 0 */
#define IOCICR1         IOCICRbits.IOCICR1         /* bit 1 */
#define IOCICR2         IOCICRbits.IOCICR2         /* bit 2 */
#define IOCICR3         IOCICRbits.IOCICR3         /* bit 3 */
#define IOCICR4         IOCICRbits.IOCICR4         /* bit 4 */
#define IOCICR5         IOCICRbits.IOCICR5         /* bit 5 */

// ----- IODICR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IODICR0:1;
		unsigned char IODICR1:1;
		unsigned char IODICR2:1;
		unsigned char IODICR3:1;
		unsigned char IODICR4:1;
		unsigned char IODICR5:1;
		unsigned char IODICR6:1;
		unsigned char IODICR7:1;
	};
} __IODICRbits_t;
extern volatile __IODICRbits_t __at(IODICR_ADDR) IODICRbits;

#define IODICR0         IODICRbits.IODICR0         /* bit 0 */
#define IODICR1         IODICRbits.IODICR1         /* bit 1 */
#define IODICR2         IODICRbits.IODICR2         /* bit 2 */
#define IODICR3         IODICRbits.IODICR3         /* bit 3 */
#define IODICR4         IODICRbits.IODICR4         /* bit 4 */
#define IODICR5         IODICRbits.IODICR5         /* bit 5 */
#define IODICR6         IODICRbits.IODICR6         /* bit 6 */
#define IODICR7         IODICRbits.IODICR7      	 /* bit 7 */

// ----- PWM2CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM2TBS0:1;
		unsigned char PWM2TBS1:1;
		unsigned char PWM2DEN:1;
		unsigned char PWM2NAS:1;
		unsigned char PWM2PAS:1;
		unsigned char PWM2NOE:1;
		unsigned char PWM2POE:1;
		unsigned char PWM2EN:1;
	};
} __PWM2CRbits_t;
extern volatile __PWM2CRbits_t __at(PWM2CR_ADDR) PWM2CRbits;

#define PWM2TBS0        PWM2CRbits.PWM2TBS0        /* bit 0 */
#define PWM2TBS1        PWM2CRbits.PWM2TBS1        /* bit 1 */
#define PWM2DEN         PWM2CRbits.PWM2DEN         /* bit 2 */
#define PWM2NAS         PWM2CRbits.PWM2NAS         /* bit 3 */
#define PWM2PAS         PWM2CRbits.PWM2PAS         /* bit 4 */
#define PWM2NOE         PWM2CRbits.PWM2NOE         /* bit 5 */
#define PWM2POE         PWM2CRbits.PWM2POE         /* bit 6 */
#define PWM2EN          PWM2CRbits.PWM2EN       	 /* bit 7 */

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

// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0TBS0:1;
		unsigned char PWM0TBS1:1;
		unsigned char PWM0DEN:1;
		unsigned char PWM0NAS:1;
		unsigned char PWM0PAS:1;
		unsigned char PWM0NOE:1;
		unsigned char PWM0POE:1;
		unsigned char PWM0EN:1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0TBS0        PWM0CRbits.PWM0TBS0        /* bit 0 */
#define PWM0TBS1        PWM0CRbits.PWM0TBS1         /* bit 1 */
#define PWM0DEN         PWM0CRbits.PWM0DEN         /* bit 2 */
#define PWM0NAS         PWM0CRbits.PWM0NAS         /* bit 3 */
#define PWM0PAS         PWM0CRbits.PWM0PAS         /* bit 4 */
#define PWM0NOE         PWM0CRbits.PWM0NOE         /* bit 5 */
#define PWM0POE         PWM0CRbits.PWM0POE         /* bit 6 */
#define PWM0EN          PWM0CRbits.PWM0EN       	 /* bit 7 */

// ----- PWM0DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0H0:1;
		unsigned char PWM0H1:1;
		unsigned char PWM0H2:1;
		unsigned char PWM0H3:1;
		unsigned char PWM0H4:1;
		unsigned char PWM0H5:1;
		unsigned char PWM0H6:1;
		unsigned char PWM0H7:1;
	};
} __PWM0DHbits_t;
extern volatile __PWM0DHbits_t __at(PWM0DH_ADDR) PWM0DHbits;

#define PWM0H0         PWM0DHbits.PWM0H0         /* bit 0 */
#define PWM0H1         PWM0DHbits.PWM0H1         /* bit 1 */
#define PWM0H2         PWM0DHbits.PWM0H2         /* bit 2 */
#define PWM0H3         PWM0DHbits.PWM0H3         /* bit 3 */
#define PWM0H4         PWM0DHbits.PWM0H4         /* bit 4 */
#define PWM0H5         PWM0DHbits.PWM0H5         /* bit 5 */
#define PWM0H6         PWM0DHbits.PWM0H6         /* bit 6 */
#define PWM0H7         PWM0DHbits.PWM0H7      	 /* bit 7 */

// ----- PWM0DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0L0:1;
		unsigned char PWM0L1:1;
		unsigned char PWM0L2:1;
		unsigned char PWM0L3:1;
		unsigned char PWM0L4:1;
		unsigned char PWM0L5:1;
		unsigned char PWM0L6:1;
		unsigned char PWM0L7:1;
	};
} __PWM0DLbits_t;
extern volatile __PWM0DLbits_t __at(PWM0DL_ADDR) PWM0DLbits;

#define PWM0L0         PWM0DLbits.PWM0L0         /* bit 0 */
#define PWM0L1         PWM0DLbits.PWM0L1         /* bit 1 */
#define PWM0L2         PWM0DLbits.PWM0L2         /* bit 2 */
#define PWM0L3         PWM0DLbits.PWM0L3         /* bit 3 */
#define PWM0L4         PWM0DLbits.PWM0L4         /* bit 4 */
#define PWM0L5         PWM0DLbits.PWM0L5         /* bit 5 */
#define PWM0L6         PWM0DLbits.PWM0L6         /* bit 6 */
#define PWM0L7         PWM0DLbits.PWM0L7      	 /* bit 7 */

// ----- PWMDEADT Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char DEADTR0:1;
		unsigned char DEADTR1:1;
		unsigned char DEADTR2:1;
		unsigned char DEADTR3:1;
		unsigned char DEADTF0:1;
		unsigned char DEADTF1:1;
		unsigned char DEADTF2:1;
		unsigned char DEADTF3:1;
	};
} __PWMDEADTbits_t;
extern volatile __PWMDEADTbits_t __at(PWMDEADT_ADDR) PWMDEADTbits;

#define DEADTR0         PWMDEADTbits.DEADTR0        /* bit 0 */
#define DEADTR1         PWMDEADTbits.DEADTR1        /* bit 1 */
#define DEADTR2         PWMDEADTbits.DEADTR2        /* bit 2 */
#define DEADTR3         PWMDEADTbits.DEADTR3        /* bit 3 */
#define DEADTF0         PWMDEADTbits.DEADTF0        /* bit 4 */
#define DEADTF1         PWMDEADTbits.DEADTF1        /* bit 5 */
#define DEADTF2         PWMDEADTbits.DEADTF2        /* bit 6 */
#define DEADTF3         PWMDEADTbits.DEADTF3        /* bit 7 */

// ----- PWM1CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1TBS0:1;
		unsigned char PWM1TBS1:1;
		unsigned char PWM1DEN:1;
		unsigned char PWM1NAS:1;
		unsigned char PWM1PAS:1;
		unsigned char PWM1NOE:1;
		unsigned char PWM1POE:1;
		unsigned char PWM1EN:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1TBS0        PWM1CRbits.PWM1TBS0        /* bit 0 */
#define PWM1TBS1        PWM1CRbits.PWM1TBS1        /* bit 1 */
#define PWM1DEN         PWM1CRbits.PWM1DEN         /* bit 2 */
#define PWM1NAS         PWM1CRbits.PWM1NAS         /* bit 3 */
#define PWM1PAS         PWM1CRbits.PWM1PAS         /* bit 4 */
#define PWM1NOE         PWM1CRbits.PWM1NOE         /* bit 5 */
#define PWM1POE         PWM1CRbits.PWM1POE         /* bit 6 */
#define PWM1EN          PWM1CRbits.PWM1EN       	 /* bit 7 */

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

// ----- I2CCON Bits -------------------------------------------------------
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

#define A0              I2CCONbits.A0             /* bit 0 */
#define A1              I2CCONbits.A1             /* bit 1 */
#define A2              I2CCONbits.A2             /* bit 2 */
#define NACK            I2CCONbits.NACK           /* bit 3 */
#define BF              I2CCONbits.BF             /* bit 4 */
#define D_A             I2CCONbits.D_A            /* bit 5 */
#define R_W             I2CCONbits.R_W            /* bit 6 */
#define I2CEN           I2CCONbits.I2CEN          /* bit 7 */

// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0:1;
		unsigned char TC0CKPS1:1;	
		unsigned char TC0CKPS2:1;	
		unsigned char TC0CKS0:1;
		unsigned char TC0CKS1:1;	
		unsigned char TC0MOD0:1;
		unsigned char TC0MOD1:1;	
		unsigned char TC0EN:1;
	};
} __T0CRbits_t;
extern volatile __T0CRbits_t __at(T0CR_ADDR) T0CRbits;

#define TC0CKPS0        T0CRbits.TC0CKPS0           /* bit 0 */
#define TC0CKPS1        T0CRbits.TC0CKPS1           /* bit 1 */
#define TC0CKPS2        T0CRbits.TC0CKPS2           /* bit 2 */
#define TC0CKS0         T0CRbits.TC0CKS0            /* bit 3 */
#define TC0CKS1         T0CRbits.TC0CKS1            /* bit 4 */
#define TC0MOD0         T0CRbits.TC0MOD0            /* bit 5 */
#define TC0MOD1         T0CRbits.TC0MOD1            /* bit 6 */
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

// ----- IODS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOADS:1;
		unsigned char IOBDS:1;
		unsigned char IOCDS:1;
		unsigned char IODDS:1;
		unsigned char IOAIS:1;
		unsigned char IOBIS:1;
		unsigned char IOCIS:1;
		unsigned char IODIS:1;
	};
} __IODSbits_t;
extern volatile __IODSbits_t __at(IODS_ADDR) IODSbits;

#define IOADS           IODSbits.IOADS            /* bit 0 */
#define IOBDS           IODSbits.IOBDS            /* bit 1 */
#define IOCDS           IODSbits.IOCDS            /* bit 2 */
#define IODDS           IODSbits.IODDS            /* bit 3 */
#define IOAIS           IODSbits.IOAIS            /* bit 4 */
#define IOBIS           IODSbits.IOBIS            /* bit 5 */
#define IOCIS           IODSbits.IOCIS            /* bit 6 */
#define IODIS           IODSbits.IODIS            /* bit 7 */

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
#define TC1MOD0         T1CRbits.TC1MOD0            /* bit 5 */
#define TC1MOD1         T1CRbits.TC1MOD1            /* bit 6 */
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

#define I2CBUF0         I2CBUFbits.I2CBUF0          /* bit 0 */
#define I2CBUF1         I2CBUFbits.I2CBUF1          /* bit 1 */
#define I2CBUF2         I2CBUFbits.I2CBUF2          /* bit 2 */
#define I2CBUF3         I2CBUFbits.I2CBUF3          /* bit 3 */
#define I2CBUF4         I2CBUFbits.I2CBUF4          /* bit 4 */
#define I2CBUF5         I2CBUFbits.I2CBUF5          /* bit 5 */
#define I2CBUF6         I2CBUFbits.I2CBUF6          /* bit 6 */
#define I2CBUF7         I2CBUFbits.I2CBUF7          /* bit 7 */

// ----- T2CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC2CKPS0:1;
		unsigned char TC2CKPS1:1;	
		unsigned char TC2CKPS2:1;	
		unsigned char TC2CKS0:1;
		unsigned char TC2CKS1:1;	
		unsigned char TC2MOD0:1;
		unsigned char TC2MOD1:1;	
		unsigned char TC2EN:1;
	};
} __T2CRbits_t;
extern volatile __T2CRbits_t __at(T2CR_ADDR) T2CRbits;

#define TC2CKPS0        T2CRbits.TC2CKPS0           /* bit 0 */
#define TC2CKPS1        T2CRbits.TC2CKPS1           /* bit 1 */
#define TC2CKPS2        T2CRbits.TC2CKPS2           /* bit 2 */
#define TC2CKS0         T2CRbits.TC2CKS0            /* bit 3 */
#define TC2CKS1         T2CRbits.TC2CKS1            /* bit 4 */
#define TC2MOD0         T2CRbits.TC2MOD0            /* bit 5 */
#define TC2MOD1         T2CRbits.TC2MOD1            /* bit 6 */
#define TC2EN           T2CRbits.TC2EN              /* bit 7 */

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

#define TC2GM0          T2GCRbits.TC2GM0            /* bit 0 */
#define TC2GM1          T2GCRbits.TC2GM1            /* bit 1 */
#define TC2GS0          T2GCRbits.TC2GS0            /* bit 2 */
#define TC2GS1          T2GCRbits.TC2GS1            /* bit 3 */
#define TC2GO           T2GCRbits.TC2GO             /* bit 6 */
#define TC2GEN          T2GCRbits.TC2GEN            /* bit 7 */

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
		unsigned char VREMS0:1;
		unsigned char VREMS1:1;	
		unsigned char ADCKS0:1;
		unsigned char ADCKS1:1;	
		unsigned char ADCKS2:1;	
		unsigned char VHS2:1;	
	};
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;

#define VHS0            ADCON1bits.VHS0           /* bit 0 */
#define VHS1            ADCON1bits.VHS1           /* bit 1 */
#define VREMS0          ADCON1bits.VREMS0         /* bit 2 */
#define VREMS1          ADCON1bits.VREMS1         /* bit 3 */
#define ADCKS0          ADCON1bits.ADCKS0         /* bit 4 */
#define ADCKS1          ADCON1bits.ADCKS1         /* bit 5 */
#define ADCKS2          ADCON1bits.ADCKS2         /* bit 6 */
#define VHS2            ADCON1bits.VHS2           /* bit 7 */

// ----- PWMS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1S0:1;
		unsigned char PWM1S1:1;	
		unsigned char PWM2S0:1;
		unsigned char PWM2S1:1;	
		unsigned char PWM0S:1;
		unsigned char :1;	
		unsigned char :1;	
		unsigned char :1;	
	};
} __PWMSbits_t;
extern volatile __PWMSbits_t __at(PWMS_ADDR) PWMSbits;

#define PWM1S0          PWMSbits.PWM1S0           /* bit 0 */
#define PWM1S1          PWMSbits.PWM1S1           /* bit 1 */
#define PWM2S0          PWMSbits.PWM2S0           /* bit 2 */
#define PWM2S1          PWMSbits.PWM2S1           /* bit 3 */
#define PWM0S           PWMSbits.PWM0S            /* bit 4 */

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