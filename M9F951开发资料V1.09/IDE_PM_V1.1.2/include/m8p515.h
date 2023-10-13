#ifndef __M8P515_H__
#define __M8P515_H__

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
#define IOICR_ADDR          0x00BF
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
#define IOB_ADDR            0x00CC
#define OEB_ADDR            0x00CD
#define PUB_ADDR            0x00CE
#define ANSB_ADDR           0x00CF
#define IOLDS_ADDR          0x00D5
#define IOHDS_ADDR          0x00D6
#define PWM1CR_ADDR         0x00DC
#define PWM1DH_ADDR         0x00DD    
#define PWM1DL_ADDR         0x00DE
#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA
#define T1CR_ADDR           0x00EC
#define TC1CL_ADDR          0x00ED
#define TC1CH_ADDR          0x00EE
#define TKCTR0_ADDR         0x00F8
#define TKCTR_ADDR         0x00F8
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
extern __sfr __at (IOICR_ADDR)         IOICR;
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
extern __sfr __at (IOB_ADDR)           IOB;
extern __sfr __at (OEB_ADDR)           OEB;
extern __sfr __at (PUB_ADDR)           PUB;
extern __sfr __at (ANSB_ADDR)          ANSB;
extern __sfr __at (IOLDS_ADDR)         IOLDS;
extern __sfr __at (IOHDS_ADDR)         IOHDS;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (TKCTR0_ADDR)        TKCTR0;
extern __sfr __at (TKCTR_ADDR)        TKCTR;
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
		unsigned char  WDTC0:1;
		unsigned char  WDTC1:1;
		unsigned char  WDTC2:1;
		unsigned char  WDTC3:1;
		unsigned char  WDTC4:1;
		unsigned char  WDTC5:1;
		unsigned char  WDTC6:1;
		unsigned char  WDTC7:1;
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

// ----- IOICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char  :1;
		unsigned char  :1;
		unsigned char  :1;
		unsigned char  :1;
		unsigned char  IOB4ICR:1;
		unsigned char  IOB5ICR:1;
		unsigned char  :1;
		unsigned char  :1;
	};
} __IOICRbits_t;
extern volatile __IOICRbits_t __at(IOICR_ADDR) IOICRbits;

#define IOB4ICR               IOICRbits.IOB4ICR              /* bit 4 */
#define IOB5ICR               IOICRbits.IOB5ICR              /* bit 5 */

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
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char TKIE:1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define TKIE            INTCR0bits.TKIE        	  /* bit 7 */

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
		unsigned char TKIF:1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define TKIF            INTF0bits.TKIF        	  /* bit 7 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOCHIE          INTCR1bits.IOCHIE      	  /* bit 0 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOCHIF          INTF1bits.IOCHIF          /* bit 0 */

// ----- IOA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char IOA1:1;
		unsigned char :1;
		unsigned char IOA3:1;
		unsigned char IOA4:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char IOA7:1;
	};
} __IOAbits_t;
extern volatile __IOAbits_t __at(IOA_ADDR) IOAbits;

#define IOA1               IOAbits.IOA1              /* bit 1 */
#define IOA3               IOAbits.IOA3              /* bit 3 */
#define IOA4               IOAbits.IOA4              /* bit 4 */
#define IOA7               IOAbits.IOA7              /* bit 7 */

// ----- OEA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char OEA1:1;
		unsigned char :1;
		unsigned char OEA3:1;
		unsigned char OEA4:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char OEA7:1;
	};
} __OEAbits_t;
extern volatile __OEAbits_t __at(OEA_ADDR) OEAbits;

#define OEA1               OEAbits.OEA1              /* bit 1 */
#define OEA3               OEAbits.OEA3              /* bit 3 */
#define OEA4               OEAbits.OEA4              /* bit 4 */
#define OEA7               OEAbits.OEA7              /* bit 7 */

// ----- PUA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char PUA1:1;
		unsigned char :1;
		unsigned char PUA3:1;
		unsigned char PUA4:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PUA7:1;
	};
} __PUAbits_t;
extern volatile __PUAbits_t __at(PUA_ADDR) PUAbits;

#define PUA1               PUAbits.PUA1              /* bit 1 */
#define PUA3               PUAbits.PUA3              /* bit 3 */
#define PUA4               PUAbits.PUA4              /* bit 4 */
#define PUA7               PUAbits.PUA7              /* bit 7 */

// ----- ANSA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char ANSA1:1;
		unsigned char :1;
		unsigned char ANSA3:1;
		unsigned char ANSA4:1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char ANSA7:1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA1               ANSAbits.ANSA1              /* bit 1 */
#define ANSA3               ANSAbits.ANSA3              /* bit 3 */
#define ANSA4               ANSAbits.ANSA4              /* bit 4 */
#define ANSA7               ANSAbits.ANSA7              /* bit 7 */

// ----- IOB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char IOB4:1;
		unsigned char IOB5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOBbits_t;
extern volatile __IOBbits_t __at(IOB_ADDR) IOBbits;

#define IOB4               IOBbits.IOB4              /* bit 4 */
#define IOB5               IOBbits.IOB5              /* bit 5 */

// ----- OEB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char OEB4:1;
		unsigned char OEB5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __OEBbits_t;
extern volatile __OEBbits_t __at(OEB_ADDR) OEBbits;

#define OEB4               OEBbits.OEB4              /* bit 4 */
#define OEB5               OEBbits.OEB5              /* bit 5 */

// ----- PUB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PUB4:1;
		unsigned char PUB5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __PUBbits_t;
extern volatile __PUBbits_t __at(PUB_ADDR) PUBbits;

#define PUB4               PUBbits.PUB4              /* bit 4 */
#define PUB5               PUBbits.PUB5              /* bit 5 */

// ----- ANSB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ANSB4:1;
		unsigned char ANSB5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __ANSBbits_t;
extern volatile __ANSBbits_t __at(ANSB_ADDR) ANSBbits;

#define ANSB4               ANSBbits.ANSB4              /* bit 4 */
#define ANSB5               ANSBbits.ANSB5              /* bit 5 */

// ----- IOLDS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char A4LDS : 1;
		unsigned char  : 1;
		unsigned char  : 1;
		unsigned char A7LDS : 1;
	};
} __IOLDSbits_t;
extern volatile __IOLDSbits_t __at(IOLDS_ADDR) IOLDSbits;

#define A4LDS           IOLDSbits.A4LDS           /* bit 4 */
#define A7LDS           IOLDSbits.A7LDS           /* bit 7 */

// ----- IOHDS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char B4HDS : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char A4HDS : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char LTS1 : 1;
	};
} __IOHDSbits_t;
extern volatile __IOHDSbits_t __at(IOHDS_ADDR) IOHDSbits;

#define B4HDS           IOHDSbits.B4HDS           /* bit 1 */
#define A4HDS           IOHDSbits.A4HDS           /* bit 4 */
#define LTS1            IOHDSbits.LTS1            /* bit 7 */

// ----- PWM1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char PWM1CR1:1;
		unsigned char PWM1CR2:1;
		unsigned char :1;
		unsigned char PWM1CR4:1;
		unsigned char :1;
		unsigned char PWM1CR6:1;
		unsigned char PWM1CR7:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1CR1               PWM1CRbits.PWM1CR1              /* bit 1 */
#define PWM1CR2               PWM1CRbits.PWM1CR2              /* bit 2 */
#define PWM1CR4               PWM1CRbits.PWM1CR4              /* bit 4 */
#define PWM1CR6               PWM1CRbits.PWM1CR6              /* bit 6 */
#define PWM1CR7               PWM1CRbits.PWM1CR7              /* bit 7 */

// ----- PWM1DH Bits --------------------------------------------------------
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

#define PWM1DH0               PWM1DHbits.PWM1DH0              /* bit 0 */
#define PWM1DH1               PWM1DHbits.PWM1DH1              /* bit 1 */
#define PWM1DH2               PWM1DHbits.PWM1DH2              /* bit 2 */
#define PWM1DH3               PWM1DHbits.PWM1DH3              /* bit 3 */
#define PWM1DH4               PWM1DHbits.PWM1DH4              /* bit 4 */
#define PWM1DH5               PWM1DHbits.PWM1DH5              /* bit 5 */
#define PWM1DH6               PWM1DHbits.PWM1DH6              /* bit 6 */
#define PWM1DH7               PWM1DHbits.PWM1DH7              /* bit 7 */

// ----- PWM1DL Bits --------------------------------------------------------
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

#define PWM1DL4               PWM1DLbits.PWM1DL4              /* bit 4 */
#define PWM1DL5               PWM1DLbits.PWM1DL5              /* bit 5 */
#define PWM1DL6               PWM1DLbits.PWM1DL6              /* bit 6 */
#define PWM1DL7               PWM1DLbits.PWM1DL7              /* bit 7 */

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
		unsigned char :1;
		unsigned char TC1MOD:1;
		unsigned char TC1EN:1;
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

#define TC1CH0               TC1CHbits.TC1CH0              /* bit 0 */
#define TC1CH1               TC1CHbits.TC1CH1              /* bit 1 */
#define TC1CH2               TC1CHbits.TC1CH2              /* bit 2 */
#define TC1CH3               TC1CHbits.TC1CH3              /* bit 3 */
#define TC1CH4               TC1CHbits.TC1CH4              /* bit 4 */
#define TC1CH5               TC1CHbits.TC1CH5              /* bit 5 */
#define TC1CH6               TC1CHbits.TC1CH6              /* bit 6 */
#define TC1CH7               TC1CHbits.TC1CH7              /* bit 7 */

// ----- TKCTR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCHS0:1;
		unsigned char TKCHS1:1;
		unsigned char TKCHS2:1;
		unsigned char :1;
		unsigned char TKCKS0:1;
		unsigned char TKCKS1:1;
		unsigned char TKSTART:1;
		unsigned char TKEN:1;
	};
} __TKCTR0bits_t;
extern volatile __TKCTR0bits_t __at(TKCTR0_ADDR) TKCTR0bits;

#define TKCHS0               TKCTR0bits.TKCHS0             /* bit 0 */
#define TKCHS1               TKCTR0bits.TKCHS1             /* bit 1 */
#define TKCHS2               TKCTR0bits.TKCHS2             /* bit 2 */
#define TKCKS0               TKCTR0bits.TKCKS0             /* bit 4 */
#define TKCKS1               TKCTR0bits.TKCKS1             /* bit 5 */
#define TKSTART              TKCTR0bits.TKSTART            /* bit 6 */
#define TKEN                 TKCTR0bits.TKEN               /* bit 7 */


#endif