#ifndef __M8P6270_H__
#define __M8P6270_H__

//
// Register addresses.
//
#define I2CADR_ADDR         0x00AD
#define I2CCON_ADDR         0x00AE
#define I2CBUF_ADDR         0x00AF
#define INDF0_ADDR          0x00B0
#define FSR0_ADDR           0x00B1

#define INDF1_ADDR          0x00B8
#define FSR1_ADDR           0x00B9
#define PCL_ADDR            0x00BA
#define STATUS_ADDR         0x00BB
#define OPTION_ADDR         0x00BC
#define OSCM_ADDR           0x00BD
#define WDTC_ADDR      	    0x00BE
#define IOAICR_ADDR         0x00BF

#define INDF2_ADDR          0x00C0
#define HBUF_ADDR           0x00C1 
#define MPUART_ADDR         0x00C2
#define INTCR0_ADDR         0x00C4
#define INTF0_ADDR          0x00C5
#define INTCR1_ADDR         0x00C6
#define INTF1_ADDR          0x00C7

#define IOA_ADDR            0x00C8
#define OEA_ADDR            0x00C9
#define PUA_ADDR            0x00CA
#define ANSA_ADDR           0x00CB
#define PWM01D_ADDR         0x00CD
#define PWM02D_ADDR         0x00CE
#define PWM03D_ADDR         0x00CF

#define IOAOR_ADDR          0x00D0
#define IOAODS0_ADDR        0x00D1
#define IOAIPS_ADDR         0x00D2
#define CMPC0_ADDR          0x00D4
#define CMPC1_ADDR          0x00D5
#define CMPC2_ADDR          0x00D6

#define PWM0CR_ADDR         0x00D8
#define PWM00D_ADDR         0x00D9
#define TX0CR_ADDR           0x00DA
#define TX0REG_ADDR          0x00DB
#define RX0CR_ADDR           0x00DC
#define RX0REG_ADDR          0x00DD
#define BRGD0H_ADDR          0x00DE    
#define BRGD0L_ADDR          0x00DF

#define ADCON0_ADDR         0x00E0
#define ADCON1_ADDR         0x00E1    
#define ADL_ADDR            0x00E2
#define ADH_ADDR            0x00E3
#define ADCON2_ADDR         0x00E4
#define T1CR_ADDR           0x00E5    
#define TC1CL_ADDR          0x00E6
#define TC1CH_ADDR          0x00E7
#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA
#define PWMDEADT_ADDR       0x00EB
#define PWM1DEAD_ADDR       0x00EB
#define PWM1S_ADDR          0x00EC
#define PWM1CR_ADDR         0x00ED
#define PWM1DL_ADDR         0x00EE
#define PWM1DH_ADDR         0x00EF

#define VREFCAL_ADDR        0x00FA
#define IRCCAL_ADDR         0x00FC


//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (I2CADR_ADDR)         I2CADR;
extern __sfr __at (I2CCON_ADDR)         I2CCON;
extern __sfr __at (I2CBUF_ADDR)         I2CBUF;
extern __sfr __at (INDF0_ADDR)          INDF0;
extern __sfr __at (FSR0_ADDR)           FSR0;


extern __sfr __at (INDF1_ADDR)          INDF1;
extern __sfr __at (FSR1_ADDR)           FSR1;
extern __sfr __at (PCL_ADDR)            PCL;
extern __sfr __at (STATUS_ADDR)         STATUS;
extern __sfr __at (OPTION_ADDR)         OPTION;
extern __sfr __at (OSCM_ADDR)           OSCM;
extern __sfr __at (WDTC_ADDR)       	WDTC;
extern __sfr __at (IOAICR_ADDR)         IOAICR;

extern __sfr __at (INDF2_ADDR)          INDF2;
extern __sfr __at (HBUF_ADDR)           HBUF; 
extern __sfr __at (MPUART_ADDR)         MPUART;
extern __sfr __at (INTCR0_ADDR)         INTCR0;
extern __sfr __at (INTF0_ADDR)          INTF0;
extern __sfr __at (INTCR1_ADDR)         INTCR1;
extern __sfr __at (INTF1_ADDR)          INTF1;
extern __sfr __at (IOA_ADDR)            IOA;
extern __sfr __at (OEA_ADDR)            OEA;
extern __sfr __at (PUA_ADDR)            PUA;
extern __sfr __at (ANSA_ADDR)         ANSA;
extern __sfr __at (PWM01D_ADDR)         PWM01D;
extern __sfr __at (PWM02D_ADDR)         PWM02D;
extern __sfr __at (PWM03D_ADDR)         PWM03D;

extern __sfr __at (IOAOR_ADDR)          IOAOR;
extern __sfr __at (IOAODS0_ADDR)        IOAODS0;
extern __sfr __at (IOAIPS_ADDR)         IOAIPS;
extern __sfr __at (CMPC0_ADDR)          CMPC0;
extern __sfr __at (CMPC1_ADDR)          CMPC1;
extern __sfr __at (CMPC2_ADDR)          CMPC2;

extern __sfr __at (PWM0CR_ADDR)         PWM0CR;    
extern __sfr __at (PWM00D_ADDR)         PWM00D;
extern __sfr __at (TX0CR_ADDR)           TX0CR;
extern __sfr __at (TX0REG_ADDR)          TX0REG;
extern __sfr __at (RX0CR_ADDR)           RX0CR;    
extern __sfr __at (RX0REG_ADDR)          RX0REG;
extern __sfr __at (BRGD0H_ADDR)          BRGD0H;
extern __sfr __at (BRGD0L_ADDR)          BRGD0L;
extern __sfr __at (ADCON0_ADDR)         ADCON0;
extern __sfr __at (ADCON1_ADDR)         ADCON1;
extern __sfr __at (ADL_ADDR)            ADL;
extern __sfr __at (ADH_ADDR)            ADH;
extern __sfr __at (ADCON2_ADDR)         ADCON2;
extern __sfr __at (T1CR_ADDR)           T1CR;
extern __sfr __at (TC1CL_ADDR)          TC1CL;
extern __sfr __at (TC1CH_ADDR)          TC1CH;
extern __sfr __at (T0CR_ADDR)           T0CR;
extern __sfr __at (TC0CL_ADDR)          TC0CL;
extern __sfr __at (TC0CH_ADDR)          TC0CH;
extern __sfr __at (PWM1DEAD_ADDR)       PWM1DEAD;
extern __sfr __at (PWMDEADT_ADDR)       PWMDEADT;
extern __sfr __at (PWM1S_ADDR)          PWM1S;
extern __sfr __at (PWM1CR_ADDR)         PWM1CR;
extern __sfr __at (PWM1DL_ADDR)         PWM1DL;
extern __sfr __at (PWM1DH_ADDR)         PWM1DH;

extern __sfr __at (VREFCAL_ADDR)        VREFCAL;
extern __sfr __at (IRCCAL_ADDR)         IRCCAL;

//==========================================================================
//
//	Configuration Bits
//
//==========================================================================
// ----- I2CADR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char I2CA0:1;
		unsigned char I2CA1:1;
		unsigned char I2CA2:1;	
		unsigned char I2CA3:1;	
		unsigned char I2CA4:1;
		unsigned char I2CA5:1;
		unsigned char I2CA6:1;
		unsigned char I2CA7:1;	
	};
} __I2CADRbits_t;
extern volatile __I2CADRbits_t __at(I2CADR_ADDR) I2CADRbits;

#define I2CA0          I2CADRbits.I2CA0            /* bit 0 */
#define I2CA1          I2CADRbits.I2CA1            /* bit 1 */
#define I2CA2          I2CADRbits.I2CA2            /* bit 2 */
#define I2CA3          I2CADRbits.I2CA3            /* bit 3 */
#define I2CA4          I2CADRbits.I2CA4            /* bit 4 */
#define I2CA5          I2CADRbits.I2CA5            /* bit 5 */
#define I2CA6          I2CADRbits.I2CA6            /* bit 6 */
#define I2CA7          I2CADRbits.I2CA7            /* bit 7 */

// ----- I2CCON Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IICPS:1;
		unsigned char IICM:1;
        unsigned char :1;        
		unsigned char NACK:1;	
		unsigned char BF:1;
		unsigned char D_A:1;
		unsigned char R_W:1;
		unsigned char I2CEN:1;	
	};
} __I2CCONbits_t;
extern volatile __I2CCONbits_t __at(I2CCON_ADDR) I2CCONbits;

#define IICPS          I2CCONbits.IICPS            /* bit 0 */
#define IICM           I2CCONbits.IICM             /* bit 1 */
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
		unsigned char IOAICR7:1;
	};
} __IOAICRbits_t;
extern volatile __IOAICRbits_t __at(IOAICR_ADDR) IOAICRbits;

#define IOAICR0         IOAICRbits.IOAICR0         /* bit 0 */
#define IOAICR1         IOAICRbits.IOAICR1         /* bit 1 */
#define IOAICR2         IOAICRbits.IOAICR2         /* bit 2 */
#define IOAICR3         IOAICRbits.IOAICR3         /* bit 3 */
#define IOAICR4         IOAICRbits.IOAICR4         /* bit 4 */
#define IOAICR5         IOAICRbits.IOAICR5         /* bit 5 */
#define IOAICR6         IOAICRbits.IOAICR6         /* bit 6 */
#define IOAICR7         IOAICRbits.IOAICR7      	 /* bit 7 */

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

// ----- MPUART Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char MPTX0:1;
		unsigned char MPTX1:1;
		unsigned char MPTX2:1;	
		unsigned char :1;	
		unsigned char MPRX0:1;
		unsigned char MPRX1:1;
		unsigned char MPRX2:1;
		unsigned char :1;	
	};
} __MPUARTbits_t;
extern volatile __MPUARTbits_t __at(MPUART_ADDR) MPUARTbits;

#define MPTX0           MPUARTbits.MPTX0              /* bit 0 */
#define MPTX1           MPUARTbits.MPTX1              /* bit 1 */
#define MPTX2           MPUARTbits.MPTX2              /* bit 2 */
//#define PDB3           MPUARTbits.PDB3              /* bit 3 */
#define MPRX0           MPUARTbits.MPRX0              /* bit 4 */
#define MPRX1           MPUARTbits.MPRX1              /* bit 5 */
#define MPRX2           MPUARTbits.MPRX2              /* bit 6 */
//#define PDB7           MPUARTbits.PDB7              /* bit 7 */

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char TC1IE:1;
		unsigned char CMP0IE:1;
		unsigned char I2CIE:1;
		unsigned char TXIE:1;
		unsigned char RXIE:1;
		unsigned char ADIE:1;
		unsigned char TKIE:1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define CMP0IE          INTCR0bits.CMP0IE         /* bit 2 */
#define I2CIE           INTCR0bits.I2CIE       	  /* bit 3 */
#define TXIE            INTCR0bits.TXIE        	  /* bit 4 */
#define RXIE            INTCR0bits.RXIE        	  /* bit 5 */
#define ADIE            INTCR0bits.ADIE        	  /* bit 6 */
#define TKIE            INTCR0bits.TKIE        	  /* bit 7 */

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char TC1IF:1;
		unsigned char CMP0IF:1;
		unsigned char I2CIF:1;
		unsigned char TXIF:1;
		unsigned char RXIF:1;
		unsigned char ADIF:1;
		unsigned char TKIF:1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define CMP0IF          INTF0bits.CMP0IF         /* bit 2 */
#define I2CIF           INTF0bits.I2CIF        	  /* bit 3 */
#define TXIF            INTF0bits.TXIF        	  /* bit 4 */
#define RXIF            INTF0bits.RXIF            /* bit 5 */
#define ADIF            INTF0bits.ADIF            /* bit 6 */
#define TKIF            INTF0bits.TKIF            /* bit 7 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIE:1;
		unsigned char :1;
		unsigned char INT0IE:1;
		unsigned char INT1IE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOACHIE         INTCR1bits.IOACHIE     	  /* bit 0 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOACHIF:1;
		unsigned char :1;
		unsigned char INT0IF:1;
		unsigned char INT1IF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOACHIF         INTF1bits.IOACHIF         /* bit 0 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */

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
		unsigned char ANSA3:1;
		unsigned char ANSA4:1;
		unsigned char ANSA5:1;
		unsigned char ANSA6:1;
		unsigned char PDA3:1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0            ANSAbits.ANSA0              /* bit 0 */
#define ANSA1            ANSAbits.ANSA1              /* bit 1 */
#define ANSA2            ANSAbits.ANSA2              /* bit 2 */
#define ANSA3            ANSAbits.ANSA3              /* bit 3 */
#define ANSA4            ANSAbits.ANSA4              /* bit 4 */
#define ANSA5            ANSAbits.ANSA5              /* bit 5 */
#define ANSA6            ANSAbits.ANSA6              /* bit 6 */
#define PDA3             ANSAbits.PDA3      	       /* bit 7 */

// ----- PWM01D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM01D0:1;
		unsigned char PWM01D1:1;
		unsigned char PWM01D2:1;
		unsigned char PWM01D3:1;
		unsigned char PWM01D4:1;
		unsigned char PWM01D5:1;
		unsigned char PWM01D6:1;
		unsigned char PWM01D7:1;
	};
} __PWM01Dbits_t;
extern volatile __PWM01Dbits_t __at(PWM01D_ADDR) PWM01Dbits;

#define PWM01D0            PWM01Dbits.PWM01D0              /* bit 0 */
#define PWM01D1            PWM01Dbits.PWM01D1              /* bit 1 */
#define PWM01D2            PWM01Dbits.PWM01D2              /* bit 2 */
#define PWM01D3            PWM01Dbits.PWM01D3              /* bit 3 */
#define PWM01D4            PWM01Dbits.PWM01D4              /* bit 4 */
#define PWM01D5            PWM01Dbits.PWM01D5              /* bit 5 */
#define PWM01D6            PWM01Dbits.PWM01D6              /* bit 6 */
#define PWM01D7            PWM01Dbits.PWM01D7      	       /* bit 7 */

// ----- PWM02D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM02D0:1;
		unsigned char PWM02D1:1;
		unsigned char PWM02D2:1;
		unsigned char PWM02D3:1;
		unsigned char PWM02D4:1;
		unsigned char PWM02D5:1;
		unsigned char PWM02D6:1;
		unsigned char PWM02D7:1;
	};
} __PWM02Dbits_t;
extern volatile __PWM02Dbits_t __at(PWM02D_ADDR) PWM02Dbits;

#define PWM02D0            PWM02Dbits.PWM02D0              /* bit 0 */
#define PWM02D1            PWM02Dbits.PWM02D1              /* bit 1 */
#define PWM02D2            PWM02Dbits.PWM02D2              /* bit 2 */
#define PWM02D3            PWM02Dbits.PWM02D3              /* bit 3 */
#define PWM02D4            PWM02Dbits.PWM02D4              /* bit 4 */
#define PWM02D5            PWM02Dbits.PWM02D5              /* bit 5 */
#define PWM02D6            PWM02Dbits.PWM02D6              /* bit 6 */
#define PWM02D7            PWM02Dbits.PWM02D7      	       /* bit 7 */

// ----- PWM03D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM03D0:1;
		unsigned char PWM03D1:1;
		unsigned char PWM03D2:1;
		unsigned char PWM03D3:1;
		unsigned char PWM03D4:1;
		unsigned char PWM03D5:1;
		unsigned char PWM03D6:1;
		unsigned char PWM03D7:1;
	};
} __PWM03Dbits_t;
extern volatile __PWM03Dbits_t __at(PWM03D_ADDR) PWM03Dbits;

#define PWM03D0            PWM03Dbits.PWM03D0              /* bit 0 */
#define PWM03D1            PWM03Dbits.PWM03D1              /* bit 1 */
#define PWM03D2            PWM03Dbits.PWM03D2              /* bit 2 */
#define PWM03D3            PWM03Dbits.PWM03D3              /* bit 3 */
#define PWM03D4            PWM03Dbits.PWM03D4              /* bit 4 */
#define PWM03D5            PWM03Dbits.PWM03D5              /* bit 5 */
#define PWM03D6            PWM03Dbits.PWM03D6              /* bit 6 */
#define PWM03D7            PWM03Dbits.PWM03D7      	       /* bit 7 */

// ----- IOAOR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAOR0:1;
		unsigned char IOAOR1:1;
		unsigned char IOAOR2:1;
		unsigned char IOAOR3:1;
		unsigned char IOAOR4:1;
		unsigned char IOAOR5:1;
		unsigned char IOAOR6:1;
		unsigned char IOAOR7:1;
	};
} __IOAORbits_t;
extern volatile __IOAORbits_t __at(IOAOR_ADDR) IOAORbits;

#define IOAOR0            IOAORbits.IOAOR0              /* bit 0 */
#define IOAOR1            IOAORbits.IOAOR1              /* bit 1 */
#define IOAOR2            IOAORbits.IOAOR2              /* bit 2 */
#define IOAOR3            IOAORbits.IOAOR3              /* bit 3 */
#define IOAOR4            IOAORbits.IOAOR4              /* bit 4 */
#define IOAOR5            IOAORbits.IOAOR5              /* bit 5 */
#define IOAOR6            IOAORbits.IOAOR6              /* bit 6 */
#define IOAOR7            IOAORbits.IOAOR7      	    /* bit 7 */

// ----- IOAODS0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAODS00:1;
		unsigned char IOAODS01:1;
		unsigned char IOAODS02:1;
		unsigned char IOAODS03:1;
		unsigned char IOAODS04:1;
		unsigned char IOAODS05:1;
		unsigned char IOAODS06:1;
		unsigned char IOAODS07:1;
	};
} __IOAODS0bits_t;
extern volatile __IOAODS0bits_t __at(IOAODS0_ADDR) IOAODS0bits;

#define IOAODS00            IOAODS0bits.IOAODS00              /* bit 0 */
#define IOAODS01            IOAODS0bits.IOAODS01              /* bit 1 */
#define IOAODS02            IOAODS0bits.IOAODS02              /* bit 2 */
#define IOAODS03            IOAODS0bits.IOAODS03              /* bit 3 */
#define IOAODS04            IOAODS0bits.IOAODS04              /* bit 4 */
#define IOAODS05            IOAODS0bits.IOAODS05              /* bit 5 */
#define IOAODS06            IOAODS0bits.IOAODS06              /* bit 6 */
#define IOAODS07            IOAODS0bits.IOAODS07      	      /* bit 7 */

// ----- IOAIPS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAIPS0:1;
		unsigned char IOAIPS1:1;
		unsigned char IOAIPS2:1;
		unsigned char IOAIPS3:1;
		unsigned char IOAIPS4:1;
		unsigned char IOAIPS5:1;
		unsigned char IOAIPS6:1;
		unsigned char IOAIPS7:1;
	};
} __IOAIPSbits_t;
extern volatile __IOAIPSbits_t __at(IOAIPS_ADDR) IOAIPSbits;

#define IOAIPS0            IOAIPSbits.IOAIPS0              /* bit 0 */
#define IOAIPS1            IOAIPSbits.IOAIPS1              /* bit 1 */
#define IOAIPS2            IOAIPSbits.IOAIPS2              /* bit 2 */
#define IOAIPS3            IOAIPSbits.IOAIPS3              /* bit 3 */
#define IOAIPS4            IOAIPSbits.IOAIPS4              /* bit 4 */
#define IOAIPS5            IOAIPSbits.IOAIPS5              /* bit 5 */
#define IOAIPS6            IOAIPSbits.IOAIPS6              /* bit 6 */
#define IOAIPS7            IOAIPSbits.IOAIPS7      	       /* bit 7 */

// ----- CMPC0 Bits -------------------------------------------------------
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
} __CMPC0bits_t;
extern volatile __CMPC0bits_t __at(CMPC0_ADDR) CMPC0bits;

#define CMPPS0            CMPC0bits.CMPPS0              /* bit 0 */
#define CMPPS1            CMPC0bits.CMPPS1              /* bit 1 */
#define CMPPS2            CMPC0bits.CMPPS2              /* bit 2 */
#define CMPNS0            CMPC0bits.CMPNS0              /* bit 3 */
#define CMPNS1            CMPC0bits.CMPNS1              /* bit 4 */
#define CMPNS2            CMPC0bits.CMPNS2              /* bit 5 */
#define CMPOUT            CMPC0bits.CMPOUT              /* bit 6 */
#define CMPEN             CMPC0bits.CMPEN      	        /* bit 7 */

// ----- CMPC1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CMPVLD0:1;
		unsigned char CMPVLD1:1;
		unsigned char CMPVLD2:1;
		unsigned char CMPVLD3:1;
		unsigned char CMPVLD4:1;
		unsigned char :1;
		unsigned char C0PVRC:1;
		unsigned char :1;
	};
} __CMPC1bits_t;
extern volatile __CMPC1bits_t __at(CMPC1_ADDR) CMPC1bits;

#define CMPVLD0            CMPC1bits.CMPVLD0              /* bit 0 */
#define CMPVLD1            CMPC1bits.CMPVLD1              /* bit 1 */
#define CMPVLD2            CMPC1bits.CMPVLD2              /* bit 2 */
#define CMPVLD3            CMPC1bits.CMPVLD3              /* bit 3 */
#define CMPVLD4            CMPC1bits.CMPVLD4              /* bit 4 */
#define C0PVRC             CMPC1bits.C0PVRC              /* bit 6 */

// ----- CMPC2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char DEB0:1;
		unsigned char DEB1:1;
		unsigned char DEB2:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char CINTS0:1;
		unsigned char CINTS1:1;
	};
} __CMPC2bits_t;
extern volatile __CMPC2bits_t __at(CMPC2_ADDR) CMPC2bits;

#define DEB0               CMPC2bits.DEB0              /* bit 0 */
#define DEB1               CMPC2bits.DEB1              /* bit 1 */
#define DEB2               CMPC2bits.DEB2              /* bit 2 */
#define CINTS0             CMPC2bits.CINTS0            /* bit 6 */
#define CINTS1             CMPC2bits.CINTS1      	   /* bit 7 */

// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM00OE:1;
		unsigned char PWM00EN:1;
		unsigned char PWM01OE:1;
		unsigned char PWM01EN:1;
		unsigned char PWM02OE:1;
		unsigned char PWM02EN:1;
		unsigned char PWM03OE:1;
		unsigned char PWM03EN:1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM00OE          PWM0CRbits.PWM00OE          /* bit 0 */
#define PWM00EN          PWM0CRbits.PWM00EN       	 /* bit 1 */
#define PWM01OE          PWM0CRbits.PWM01OE          /* bit 2 */
#define PWM01EN          PWM0CRbits.PWM01EN       	 /* bit 3 */
#define PWM02OE          PWM0CRbits.PWM02OE          /* bit 4 */
#define PWM02EN          PWM0CRbits.PWM02EN       	 /* bit 5 */
#define PWM03OE          PWM0CRbits.PWM03OE          /* bit 6 */
#define PWM03EN          PWM0CRbits.PWM03EN       	 /* bit 7 */

// ----- PWM00D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM00D0:1;
		unsigned char PWM00D1:1;
		unsigned char PWM00D2:1;
		unsigned char PWM00D3:1;
		unsigned char PWM00D4:1;
		unsigned char PWM00D5:1;
		unsigned char PWM00D6:1;
		unsigned char PWM00D7:1;
	};
} __PWM00Dbits_t;
extern volatile __PWM00Dbits_t __at(PWM00D_ADDR) PWM00Dbits;

#define PWM00D0         PWM00Dbits.PWM00D0         /* bit 0 */
#define PWM00D1         PWM00Dbits.PWM00D1         /* bit 1 */
#define PWM00D2         PWM00Dbits.PWM00D2         /* bit 2 */
#define PWM00D3         PWM00Dbits.PWM00D3         /* bit 3 */
#define PWM00D4         PWM00Dbits.PWM00D4         /* bit 4 */
#define PWM00D5         PWM00Dbits.PWM00D5         /* bit 5 */
#define PWM00D6         PWM00Dbits.PWM00D6         /* bit 6 */
#define PWM00D7         PWM00Dbits.PWM00D7      	 /* bit 7 */

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
} __TX0CRbits_t;
extern volatile __TX0CRbits_t __at(TX0CR_ADDR) TX0CRbits;

#define TXD9            TX0CRbits.TXD9              /* bit 0 */
#define SPD0            TX0CRbits.SPD0              /* bit 1 */
#define SPD1            TX0CRbits.SPD1              /* bit 2 */
#define SLAVE           TX0CRbits.SLAVE             /* bit 3 */
#define TX9             TX0CRbits.TX9               /* bit 4 */
#define SYNC            TX0CRbits.SYNC              /* bit 5 */
#define TMCLR           TX0CRbits.TMCLR             /* bit 6 */
#define TXEN            TX0CRbits.TXEN              /* bit 7 */

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
} __TX0REGbits_t;
extern volatile __TX0REGbits_t __at(TX0REG_ADDR) TX0REGbits;

#define TX0D0           TX0REGbits.TX0D0            /* bit 0 */
#define TX0D1           TX0REGbits.TX0D1            /* bit 1 */
#define TX0D2           TX0REGbits.TX0D2            /* bit 2 */
#define TX0D3           TX0REGbits.TX0D3            /* bit 3 */
#define TX0D4           TX0REGbits.TX0D4            /* bit 4 */
#define TX0D5           TX0REGbits.TX0D5            /* bit 5 */
#define TX0D6           TX0REGbits.TX0D6            /* bit 6 */
#define TX0D7           TX0REGbits.TX0D7            /* bit 7 */

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
} __RX0CRbits_t;
extern volatile __RX0CRbits_t __at(RX0CR_ADDR) RX0CRbits;

#define RXD9            RX0CRbits.RXD9              /* bit 0 */
#define FRER            RX0CRbits.FRER              /* bit 1 */
#define RXOVF           RX0CRbits.RXOVF             /* bit 2 */
#define SREN            RX0CRbits.SREN              /* bit 3 */
#define RX9             RX0CRbits.RX9               /* bit 4 */
#define CKPS            RX0CRbits.CKPS              /* bit 6 */
#define RXEN            RX0CRbits.RXEN              /* bit 7 */

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
} __RX0REGbits_t;
extern volatile __RX0REGbits_t __at(RX0REG_ADDR) RX0REGbits;

#define RX0D0           RX0REGbits.RX0D0            /* bit 0 */
#define RX0D1           RX0REGbits.RX0D1            /* bit 1 */
#define RX0D2           RX0REGbits.RX0D2            /* bit 2 */
#define RX0D3           RX0REGbits.RX0D3            /* bit 3 */
#define RX0D4           RX0REGbits.RX0D4            /* bit 4 */
#define RX0D5           RX0REGbits.RX0D5            /* bit 5 */
#define RX0D6           RX0REGbits.RX0D6            /* bit 6 */
#define RX0D7           RX0REGbits.RX0D7            /* bit 7 */

// ----- BRGD0H Bits --------------------------------------------------------
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
} __BRGD0Hbits_t;
extern volatile __BRGD0Hbits_t __at(BRGD0H_ADDR) BRGD0Hbits;

#define BRGD8           BRGD0Hbits.BRGD8             /* bit 0 */
#define BRGD9           BRGD0Hbits.BRGD9             /* bit 1 */
#define SBYTE           BRGD0Hbits.SBYTE             /* bit 7 */

// ----- BRGD0L Bits --------------------------------------------------------
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
} __BRGD0Lbits_t;
extern volatile __BRGD0Lbits_t __at(BRGD0L_ADDR) BRGD0Lbits;

#define BRGD0           BRGD0Lbits.BRGD0             /* bit 0 */
#define BRGD1           BRGD0Lbits.BRGD1             /* bit 1 */
#define BRGD2           BRGD0Lbits.BRGD2             /* bit 2 */
#define BRGD3           BRGD0Lbits.BRGD3             /* bit 3 */
#define BRGD4           BRGD0Lbits.BRGD4             /* bit 4 */
#define BRGD5           BRGD0Lbits.BRGD5             /* bit 5 */
#define BRGD6           BRGD0Lbits.BRGD6             /* bit 6 */
#define BRGD7           BRGD0Lbits.BRGD7             /* bit 7 */

// ----- ADCON0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CHS0:1;
		unsigned char CHS1:1;	
		unsigned char CHS2:1;	
		unsigned char CHS3:1;	
		unsigned char ADFM:1;
		unsigned char ADEOC:1;
		unsigned char ADS:1;
		unsigned char ADON:1;	
	};
} __ADCON0bits_t;
extern volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;

#define CHS0            ADCON0bits.CHS0           /* bit 0 */
#define CHS1            ADCON0bits.CHS1           /* bit 1 */
#define CHS2            ADCON0bits.CHS2           /* bit 2 */
#define CHS3            ADCON0bits.CHS3           /* bit 3 */
#define ADFM            ADCON0bits.ADFM           /* bit 4 */
#define ADEOC           ADCON0bits.ADEOC          /* bit 5 */
#define ADS             ADCON0bits.ADS            /* bit 6 */
#define ADON            ADCON0bits.ADON           /* bit 7 */

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

#define ADVOS0          ADCON2bits.ADVOS0         /* bit 0 */
#define ADVOS1          ADCON2bits.ADVOS1         /* bit 1 */
#define ADVOS2          ADCON2bits.ADVOS2         /* bit 2 */
#define ADVOS3          ADCON2bits.ADVOS3         /* bit 3 */

// ----- ADL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ADL0:1;
		unsigned char ADL1:1;
		unsigned char ADL2:1;	
		unsigned char ADL3:1;
		unsigned char ADL4:1;
		unsigned char ADL5:1;	
		unsigned char ADL6:1;
		unsigned char ADL7:1;	
	};
} __ADLbits_t;
extern volatile __ADLbits_t __at(ADL_ADDR) ADLbits;

#define ADL0           ADLbits.ADL0             /* bit 0 */
#define ADL1           ADLbits.ADL1             /* bit 1 */
#define ADL2           ADLbits.ADL2             /* bit 2 */
#define ADL3           ADLbits.ADL3             /* bit 3 */
#define ADL4           ADLbits.ADL4             /* bit 4 */
#define ADL5           ADLbits.ADL5             /* bit 5 */
#define ADL6           ADLbits.ADL6             /* bit 6 */
#define ADL7           ADLbits.ADL7             /* bit 7 */

// ----- ADH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ADH0:1;
		unsigned char ADH1:1;
		unsigned char ADH2:1;	
		unsigned char ADH3:1;
		unsigned char ADH4:1;
		unsigned char ADH5:1;	
		unsigned char ADH6:1;
		unsigned char ADH7:1;	
	};
} __ADHbits_t;
extern volatile __ADHbits_t __at(ADH_ADDR) ADHbits;

#define ADH0           ADHbits.ADH0             /* bit 0 */
#define ADH1           ADHbits.ADH1             /* bit 1 */
#define ADH2           ADHbits.ADH2             /* bit 2 */
#define ADH3           ADHbits.ADH3             /* bit 3 */
#define ADH4           ADHbits.ADH4             /* bit 4 */
#define ADH5           ADHbits.ADH5             /* bit 5 */
#define ADH6           ADHbits.ADH6             /* bit 6 */
#define ADH7           ADHbits.ADH7             /* bit 7 */

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

// ----- PWM1S Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1A:1;
		unsigned char PWM1B:1;
		unsigned char PWM1C:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __PWM1Sbits_t;
extern volatile __PWM1Sbits_t __at(PWM1S_ADDR) PWM1Sbits;

#define PWM1A         PWM1Sbits.PWM1A         /* bit 0 */
#define PWM1B         PWM1Sbits.PWM1B         /* bit 1 */
#define PWM1C         PWM1Sbits.PWM1C         /* bit 2 */

// ----- PWM1CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1T:1;
		unsigned char PWM1M:1;
		unsigned char :1;
		unsigned char PWM1NAS:1;
		unsigned char PWM1PAS:1;
		unsigned char PWM1NOE:1;
		unsigned char PWM1POE:1;
		unsigned char PWM1EN:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1T           PWM1CRbits.PWM1T           /* bit 0 */
#define PWM1M           PWM1CRbits.PWM1M           /* bit 1 */
#define PWM1NAS         PWM1CRbits.PWM1NAS         /* bit 3 */
#define PWM1PAS         PWM1CRbits.PWM1PAS         /* bit 4 */
#define PWM1NOE         PWM1CRbits.PWM1NOE         /* bit 5 */
#define PWM1POE         PWM1CRbits.PWM1POE         /* bit 6 */
#define PWM1EN          PWM1CRbits.PWM1EN       	 /* bit 7 */

// ----- PWM1DL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM1DL4:1;
		unsigned char PWM1DL5:1;
		unsigned char PWM1DL6:1;
		unsigned char PWM1DL7:1;
	};
} __PWM1DLbits_t;
extern volatile __PWM1DLbits_t __at(PWM1DL_ADDR) PWM1DLbits;

#define PWM1DL4         PWM1DLbits.PWM1DL4         /* bit 4 */
#define PWM1DL5         PWM1DLbits.PWM1DL5         /* bit 5 */
#define PWM1DL6         PWM1DLbits.PWM1DL6         /* bit 6 */
#define PWM1DL7         PWM1DLbits.PWM1DL7      	 /* bit 7 */

// ----- PWM1DH Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1DH0:1;
		unsigned char PWM1DH1:1;
		unsigned char PWM1DH2:1;
		unsigned char PWM1DH3:1;
		unsigned char PWM1DH4:1;
		unsigned char PWM1DH5:1;
		unsigned char PWM1DH6:1;
		unsigned char PWM1DH7:1;
	};
} __PWM1DHbits_t;
extern volatile __PWM1DHbits_t __at(PWM1DH_ADDR) PWM1DHbits;

#define PWM1DH0         PWM1DHbits.PWM1DH0         /* bit 0 */
#define PWM1DH1         PWM1DHbits.PWM1HD1         /* bit 1 */
#define PWM1DH2         PWM1DHbits.PWM1DH2         /* bit 2 */
#define PWM1DH3         PWM1DHbits.PWM1DH3         /* bit 3 */
#define PWM1DH4         PWM1DHbits.PWM1DH4         /* bit 4 */
#define PWM1DH5         PWM1DHbits.PWM1DH5         /* bit 5 */
#define PWM1DH6         PWM1DHbits.PWM1DH6         /* bit 6 */
#define PWM1DH7         PWM1DHbits.PWM1DH7      	 /* bit 7 */

// ----- VREFCAL Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char VREFCAL0:1;
		unsigned char VREFCAL1:1;
		unsigned char VREFCAL2:1;
		unsigned char VREFCAL3:1;
		unsigned char VREFCAL4:1;
		unsigned char VREFCAL5:1;
		unsigned char VREFCAL6:1;
		unsigned char VREFCAL7:1;
	};
} __VREFCALbits_t;
extern volatile __VREFCALbits_t __at(VREFCAL_ADDR) VREFCALbits;

#define VREFCAL0         VREFCALbits.VREFCAL0         /* bit 0 */
#define VREFCAL1         VREFCALbits.VREFCAL1         /* bit 1 */
#define VREFCAL2         VREFCALbits.VREFCAL2         /* bit 2 */
#define VREFCAL3         VREFCALbits.VREFCAL3         /* bit 3 */
#define VREFCAL4         VREFCALbits.VREFCAL4         /* bit 4 */
#define VREFCAL5         VREFCALbits.VREFCAL5         /* bit 5 */
#define VREFCAL6         VREFCALbits.VREFCAL6         /* bit 6 */
#define VREFCAL7         VREFCALbits.VREFCAL7      	 /* bit 7 */

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