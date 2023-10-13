#ifndef __M8R511_H__
#define __M8R511_H__

//
// Register addresses.
//

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
#define INTCR0_ADDR         0x00C4
#define INTF0_ADDR          0x00C5
#define INTCR1_ADDR         0x00C6
#define INTF1_ADDR          0x00C7
#define IOA_ADDR            0x00C8
#define OEA_ADDR            0x00C9
#define PUA_ADDR            0x00CA
#define ANSA_ADDR           0x00CB
#define IODS_ADDR           0x00CC

#define PWM0CR_ADDR         0x00D8

#define CMP0C_ADDR          0x00E4
#define CMP0S_ADDR          0x00E5

#define T0CR_ADDR           0x00E8
#define TC0R_ADDR           0x00E9
#define TC0C_ADDR           0x00EA

#define VREFC_ADDR          0x00F5
#define LVDCON_ADDR         0x00F8

//
//----- Register Files -----------------------------------------------------
//

extern __sfr __at (INDF0_ADDR)         INDF0;
extern __sfr __at (FSR0_ADDR)          FSR0;
extern __sfr __at (INDF1_ADDR)         INDF1;
extern __sfr __at (FSR1_ADDR)          FSR1;
extern __sfr __at (PCL_ADDR)           PCL;
extern __sfr __at (STATUS_ADDR)        STATUS;
extern __sfr __at (OPTION_ADDR)        OPTION;
extern __sfr __at (OSCM_ADDR)          OSCM;
extern __sfr __at (WDTC_ADDR)      	   WDTC;
extern __sfr __at (IOAICR_ADDR)        IOAICR;

extern __sfr __at (INDF2_ADDR)         INDF2;
extern __sfr __at (HBUF_ADDR)          HBUF; 
extern __sfr __at (INTCR0_ADDR)        INTCR0;
extern __sfr __at (INTF0_ADDR)         INTF0;
extern __sfr __at (INTCR1_ADDR)        INTCR1;
extern __sfr __at (INTF1_ADDR)         INTF1;
extern __sfr __at (IOA_ADDR)           IOA;
extern __sfr __at (OEA_ADDR)           OEA;
extern __sfr __at (PUA_ADDR)           PUA;
extern __sfr __at (ANSA_ADDR)          ANSA;
extern __sfr __at (IODS_ADDR)          IODS;

extern __sfr __at (PWM0CR_ADDR)        PWM0CR;

extern __sfr __at (CMP0C_ADDR)        CMP0C;
extern __sfr __at (CMP0S_ADDR)        CMP0S;

extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0R_ADDR)          TC0R;
extern __sfr __at (TC0C_ADDR)          TC0C;

extern __sfr __at (VREFC_ADDR)         VREFC;
extern __sfr __at (LVDCON_ADDR)        LVDCON;

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

#define PD              OPTIONbits.PD        	    /* bit 4 */
#define TO              OPTIONbits.TO             /* bit 5 */
#define GIE             OPTIONbits.GIE        	  /* bit 7 */

// ----- OSCM Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char STPL:1;
		unsigned char :1;
		unsigned char STPH:1;
		unsigned char :1;
		unsigned char STOP:1;
		unsigned char :1;	
		unsigned char :1;
		unsigned char :1;	
	};
} __OSCMbits_t;
extern volatile __OSCMbits_t __at(OSCM_ADDR) OSCMbits;

#define STPL            OSCMbits.STPL        	    /* bit 0 */
#define STPH            OSCMbits.STPH        	    /* bit 2 */
#define STOP            OSCMbits.STOP        	    /* bit 4 */

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

// ----- IOAICR Bits --------------------------------------------------------
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

#define IOAICR0           IOAICRbits.IOAICR0              /* bit 0 */
#define IOAICR1           IOAICRbits.IOAICR1              /* bit 1 */
#define IOAICR2           IOAICRbits.IOAICR2              /* bit 2 */
#define IOAICR3           IOAICRbits.IOAICR3              /* bit 3 */
#define IOAICR4           IOAICRbits.IOAICR4              /* bit 4 */
#define IOAICR5           IOAICRbits.IOAICR5              /* bit 5 */
#define IOAICR6           IOAICRbits.IOAICR6              /* bit 6 */
#define IOAICR7           IOAICRbits.IOAICR7              /* bit 7 */

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

// ----- INTCR0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IE:1;
		unsigned char :1;
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

// ----- INTF0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0IF:1;
		unsigned char :1;
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

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char CMP0IE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOAIE           INTCR1bits.IOAIE     	    /* bit 0 */
#define LVDIE           INTCR1bits.LVDIE      	  /* bit 4 */
#define CMP0IE          INTCR1bits.CMP0IE      	  /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char CMP0IF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOAIF           INTF1bits.IOAIF           /* bit 0 */
#define LVDIF           INTF1bits.LVDIF           /* bit 4 */
#define CMP0IF          INTF1bits.CMP0IF     	    /* bit 7 */

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
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0           ANSAbits.ANSA0            /* bit 0 */
#define ANSA1           ANSAbits.ANSA1            /* bit 1 */
#define ANSA2           ANSAbits.ANSA2            /* bit 2 */

// ----- IODS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IODS0:1;
		unsigned char IODS1:1;
		unsigned char IODS2:1;
		unsigned char IODS3:1;
		unsigned char IODS4:1;
		unsigned char IODS5:1;
		unsigned char IODS6:1;
		unsigned char IODS7:1;
	};
} __IODSbits_t;
extern volatile __IODSbits_t __at(IODS_ADDR) IODSbits;

#define IODS0           IODSbits.IODS0            /* bit 0 */
#define IODS1           IODSbits.IODS1            /* bit 1 */
#define IODS2           IODSbits.IODS2            /* bit 2 */
#define IODS3           IODSbits.IODS3            /* bit 3 */
#define IODS4           IODSbits.IODS4            /* bit 4 */
#define IODS5           IODSbits.IODS5            /* bit 5 */
#define IODS6           IODSbits.IODS6            /* bit 6 */
#define IODS7           IODSbits.IODS7            /* bit 7 */

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

// ----- CMP0C Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CINTS0:1;
		unsigned char CINTS1:1;
		unsigned char DBC0:1;
		unsigned char DBC1:1;
		unsigned char C0OUT:1;
		unsigned char C0POL:1;
		unsigned char C0EN:1;
		unsigned char :1;
	};
} __CMP0Cbits_t;
extern volatile __CMP0Cbits_t __at(CMP0C_ADDR) CMP0Cbits;

#define CINTS0         CMP0Cbits.CINTS0        /* bit 0 */
#define CINTS1         CMP0Cbits.CINTS1      	 /* bit 1 */
#define DBC0           CMP0Cbits.DBC0          /* bit 2 */
#define DBC1           CMP0Cbits.DBC1       	 /* bit 3 */
#define C0OUT          CMP0Cbits.C0OUT         /* bit 4 */
#define C0POL          CMP0Cbits.C0POL         /* bit 5 */
#define C0EN           CMP0Cbits.C0EN          /* bit 6 */

// ----- CMP0S Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char TMR0S:1;
		unsigned char CPVRC:1;
		unsigned char CX:1;
		unsigned char CNS0:1;
		unsigned char CNS1:1;
		unsigned char CPS0:1;
		unsigned char CPS1:1;
		unsigned char CPS2:1;
	};
} __CMP0Sbits_t;
extern volatile __CMP0Sbits_t __at(CMP0S_ADDR) CMP0Sbits;

#define TMR0S         CMP0Sbits.TMR0S        /* bit 0 */
#define CPVRC         CMP0Sbits.CPVRC      	 /* bit 1 */
#define CX            CMP0Sbits.CX           /* bit 2 */
#define CNS0          CMP0Sbits.CNS0       	 /* bit 3 */
#define CNS1          CMP0Sbits.CNS1         /* bit 4 */
#define CPS0          CMP0Sbits.CPS0       	 /* bit 5 */
#define CPS1          CMP0Sbits.CPS1         /* bit 6 */
#define CPS2          CMP0Sbits.CPS2         /* bit 7 */

// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0 : 1;
		unsigned char TC0CKPS1 : 1;
		unsigned char TC0CKPS2 : 1;
		unsigned char TC0CKS0 : 1;
		unsigned char TC0CKS1 : 1;
		unsigned char BUZZOE: 1;
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
#define BUZZOE                 T0CRbits.BUZZOE               /* bit 5 */
#define TC0EN                  T0CRbits.TC0EN                /* bit 7 */

// ----- TC0R Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0R0 : 1;
		unsigned char TC0R1 : 1;
		unsigned char TC0R2 : 1;
		unsigned char TC0R3 : 1;
		unsigned char TC0R4 : 1;
		unsigned char TC0R5 : 1;
		unsigned char TC0R6 : 1;
		unsigned char TC0R7 : 1;
	};
} __TC0Rbits_t;
extern volatile __TC0Rbits_t __at(TC0R_ADDR) TC0Rbits;

#define TC0R0               TC0Rbits.TC0R0              /* bit 0 */
#define TC0R1               TC0Rbits.TC0R1              /* bit 1 */
#define TC0R2               TC0Rbits.TC0R2              /* bit 2 */
#define TC0R3               TC0Rbits.TC0R3              /* bit 3 */
#define TC0R4               TC0Rbits.TC0R4              /* bit 4 */
#define TC0R5               TC0Rbits.TC0R5              /* bit 5 */
#define TC0R6               TC0Rbits.TC0R6              /* bit 6 */
#define TC0R7               TC0Rbits.TC0R7              /* bit 7 */

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

// ----- VREFC Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char  VS0: 1;
		unsigned char  VS1: 1;
		unsigned char  VS2: 1;
		unsigned char  VS3: 1;
		unsigned char  VS4: 1;
		unsigned char  : 1;
		unsigned char  VHS: 1;
		unsigned char  VREFEN: 1;
	};
} __VREFCbits_t;
extern volatile __VREFCbits_t __at(VREFC_ADDR) VREFCbits;

#define VS0               VREFCbits.VS0              /* bit 0 */
#define VS1               VREFCbits.VS1              /* bit 1 */
#define VS2               VREFCbits.VS2              /* bit 2 */
#define VS3               VREFCbits.VS3              /* bit 3 */
#define VS4               VREFCbits.VS4              /* bit 4 */
#define VHS               VREFCbits.VHS              /* bit 6 */
#define VREFEN            VREFCbits.VREFEN           /* bit 7 */

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






#endif