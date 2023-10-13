#ifndef __M8P615_H__
#define __M8P615_H__

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
#define IOBICR_ADDR          0x00BF
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
#define PDAB_ADDR           0x00D7
#define PWM0CR_ADDR         0x00D8
#define PWM0D_ADDR          0x00D9
#define PWM1CR_ADDR         0x00DC
#define PWM1DH_ADDR         0x00DD    
#define PWM1DL_ADDR         0x00DE
#define PWMDEADT_ADDR       0x00DF
#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA
#define T1CR_ADDR           0x00EC
#define TC1CL_ADDR          0x00ED
#define TC1CH_ADDR          0x00EE
#define ADCON2_ADDR         0x00F3
#define ADCON0_ADDR         0x00F4
#define ADCON1_ADDR         0x00F5
#define ADH_ADDR            0x00F6
#define ADL_ADDR            0x00F7
#define TKCTR0_ADDR         0x00F8
#define TKCTR_ADDR          0x00F8
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
extern __sfr __at (IOBICR_ADDR)         IOBICR;
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
extern __sfr __at (PDAB_ADDR)          PDAB;
extern __sfr __at (PWM0CR_ADDR)        PWM0CR;
extern __sfr __at (PWM0D_ADDR)         PWM0D;
extern __sfr __at (PWM1CR_ADDR)        PWM1CR;
extern __sfr __at (PWM1DH_ADDR)        PWM1DH;    
extern __sfr __at (PWM1DL_ADDR)        PWM1DL;
extern __sfr __at (PWMDEADT_ADDR)      PWMDEADT;
extern __sfr __at (T0CR_ADDR)          T0CR;
extern __sfr __at (TC0CL_ADDR)         TC0CL;
extern __sfr __at (TC0CH_ADDR)         TC0CH;
extern __sfr __at (T1CR_ADDR)          T1CR;
extern __sfr __at (TC1CL_ADDR)         TC1CL;
extern __sfr __at (TC1CH_ADDR)         TC1CH;
extern __sfr __at (ADCON2_ADDR)        ADCON2;
extern __sfr __at (ADCON0_ADDR)        ADCON0;
extern __sfr __at (ADCON1_ADDR)        ADCON1;
extern __sfr __at (ADH_ADDR)           ADH;
extern __sfr __at (ADL_ADDR)           ADL;
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



// ----- IOICR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOB0ICR: 1;
		unsigned char IOB1ICR : 1;
		unsigned char IOB2ICR : 1;
		unsigned char IOB3ICR : 1;
		unsigned char IOB4ICR : 1;
		unsigned char IOB5ICR : 1;
		unsigned char IOA5ICR : 1;
		unsigned char IOA6ICR : 1;
	};
} __IOICRbits_t;
extern volatile __IOICRbits_t __at(IOICR_ADDR) IOICRbits;

#define IOB0ICR               IOICRbits.IOB0ICR              /* bit 0 */
#define IOB1ICR               IOICRbits.IOB1ICR              /* bit 1 */
#define IOB2ICR               IOICRbits.IOB2ICR              /* bit 2 */
#define IOB3ICR               IOICRbits.IOB3ICR              /* bit 3 */
#define IOB4ICR               IOICRbits.IOB4ICR              /* bit 4 */
#define IOB5ICR               IOICRbits.IOB5ICR              /* bit 5 */
#define IOA5ICR               IOICRbits.IOA5ICR              /* bit 6 */
#define IOA6ICR               IOICRbits.IOA6ICR              /* bit 7 */



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
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char ADIE:1;
		unsigned char TKIE:1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TC1IE           INTCR0bits.TC1IE          /* bit 1 */
#define ADIE            INTCR0bits.ADIE        	  /* bit 6 */
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
		unsigned char ADIF:1;
		unsigned char TKIF:1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TC1IF           INTF0bits.TC1IF        	  /* bit 1 */
#define ADIF            INTF0bits.ADIF        	  /* bit 6 */
#define TKIF            INTF0bits.TKIF        	  /* bit 7 */



// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIE:1;
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

#define IOCHIE          INTCR1bits.IOCHIE      	  /* bit 0 */
#define INT0IE          INTCR1bits.INT0IE      	  /* bit 2 */
#define INT1IE          INTCR1bits.INT1IE      	  /* bit 3 */



// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOCHIF:1;
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

#define IOCHIF          INTF1bits.IOCHIF          /* bit 0 */
#define INT0IF          INTF1bits.INT0IF          /* bit 2 */
#define INT1IF          INTF1bits.INT1IF          /* bit 3 */



// ----- IOA Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IOA0: 1;
		unsigned char IOA1: 1;
		unsigned char IOA2: 1;
		unsigned char IOA3: 1;
		unsigned char IOA4: 1;
		unsigned char IOA5: 1;
		unsigned char IOA6: 1;
		unsigned char IOA7: 1;
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
		unsigned char OEA0: 1;
		unsigned char OEA1: 1;
		unsigned char OEA2: 1;
		unsigned char OEA3: 1;
		unsigned char OEA4: 1;
		unsigned char OEA5: 1;
		unsigned char OEA6: 1;
		unsigned char OEA7: 1;
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
		unsigned char PUA0: 1;
		unsigned char PUA1: 1;
		unsigned char PUA2: 1;
		unsigned char PUA3: 1;
		unsigned char PUA4: 1;
		unsigned char PUA5: 1;
		unsigned char PUA6: 1;
		unsigned char PUA7: 1;
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
		unsigned char ANSA0: 1;
		unsigned char ANSA1: 1;
		unsigned char ANSA2: 1;
		unsigned char ANSA3: 1;
		unsigned char ANSA4: 1;
		unsigned char ANSA5: 1;
		unsigned char ANSA6: 1;
		unsigned char ANSA7: 1;
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
		unsigned char IOB0: 1;
		unsigned char IOB1: 1;
		unsigned char IOB2: 1;
		unsigned char IOB3: 1;
		unsigned char IOB4 : 1;
		unsigned char IOB5 : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __IOBbits_t;
extern volatile __IOBbits_t __at(IOB_ADDR) IOBbits;

#define IOB0               IOBbits.IOB0              /* bit 0 */
#define IOB1               IOBbits.IOB1              /* bit 1 */
#define IOB2               IOBbits.IOB2              /* bit 2 */
#define IOB3               IOBbits.IOB3              /* bit 3 */
#define IOB4               IOBbits.IOB4              /* bit 4 */
#define IOB5               IOBbits.IOB5              /* bit 5 */



// ----- OEB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char OEB0: 1;
		unsigned char OEB1: 1;
		unsigned char OEB2: 1;
		unsigned char OEB3: 1;
		unsigned char OEB4 : 1;
		unsigned char OEB5 : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __OEBbits_t;
extern volatile __OEBbits_t __at(OEB_ADDR) OEBbits;

#define OEB0               OEBbits.OEB0              /* bit 0 */
#define OEB1               OEBbits.OEB1              /* bit 1 */
#define OEB2               OEBbits.OEB2              /* bit 2 */
#define OEB3               OEBbits.OEB3              /* bit 3 */
#define OEB4               OEBbits.OEB4              /* bit 4 */
#define OEB5               OEBbits.OEB5              /* bit 5 */




// ----- PUB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PUB0: 1;
		unsigned char PUB1: 1;
		unsigned char PUB2: 1;
		unsigned char PUB3: 1;
		unsigned char PUB4 : 1;
		unsigned char PUB5 : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __PUBbits_t;
extern volatile __PUBbits_t __at(PUB_ADDR) PUBbits;

#define PUB0               PUBbits.PUB0              /* bit 0 */
#define PUB1               PUBbits.PUB1              /* bit 1 */
#define PUB2               PUBbits.PUB2              /* bit 2 */
#define PUB3               PUBbits.PUB3              /* bit 3 */
#define PUB4               PUBbits.PUB4              /* bit 4 */
#define PUB5               PUBbits.PUB5              /* bit 5 */



// ----- ANSB Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSB0: 1;
		unsigned char ANSB1: 1;
		unsigned char ANSB2: 1;
		unsigned char ANSB3: 1;
		unsigned char ANSB4: 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
	};
} __ANSBbits_t;
extern volatile __ANSBbits_t __at(PUB_ADDR) ANSBbits;

#define ANSB0               ANSBbits.ANSB0              /* bit 0 */
#define ANSB1               ANSBbits.ANSB1              /* bit 1 */
#define ANSB2               ANSBbits.ANSB2              /* bit 2 */
#define ANSB3               ANSBbits.ANSB3              /* bit 3 */
#define ANSB4               ANSBbits.ANSB4              /* bit 4 */



// ----- IOLDS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char B0LDS:1;
		unsigned char B1LDS:1;
		unsigned char B2LDS:1;
		unsigned char B3LDS:1;
		unsigned char A4LDS:1;
		unsigned char A5LDS:1;
		unsigned char A6LDS:1;
		unsigned char A7LDS:1;
	};
} __IOLDSbits_t;
extern volatile __IOLDSbits_t __at(IOLDS_ADDR) IOLDSbits;

#define B0LDS           IOLDSbits.B0LDS           /* bit 0 */
#define B1LDS           IOLDSbits.B1LDS           /* bit 1 */
#define B2LDS           IOLDSbits.B2LDS           /* bit 2 */
#define B3LDS           IOLDSbits.B3LDS           /* bit 3 */
#define A4LDS           IOLDSbits.A4LDS           /* bit 4 */
#define A5LDS           IOLDSbits.A5LDS           /* bit 5 */
#define A6LDS           IOLDSbits.A6LDS           /* bit 6 */
#define A7LDS           IOLDSbits.A7LDS           /* bit 7 */



// ----- IOHDS Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char B3HDS:1;
		unsigned char B4HDS:1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char A4HDS:1;
		unsigned char :1;
		unsigned char LTS0:1;
		unsigned char LTS1:1;
	};
} __IOHDSbits_t;
extern volatile __IOHDSbits_t __at(IOHDS_ADDR) IOHDSbits;

#define B3HDS           IOHDSbits.B3HDS           /* bit 0 */
#define B4HDS           IOHDSbits.B4HDS           /* bit 1 */
#define A4HDS           IOHDSbits.A4HDS           /* bit 4 */
#define LTS0            IOHDSbits.LTS0            /* bit 6 */
#define LTS1            IOHDSbits.LTS1            /* bit 7 */



// ----- PDAB Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PDB0: 1;
		unsigned char PDB1: 1;
		unsigned char PDB2: 1;
		unsigned char PDB3: 1;
		unsigned char PDB4: 1;
		unsigned char PDA0: 1;
		unsigned char PDA1: 1;
		unsigned char PDA2: 1;
	};
} __PDABbits_t;
extern volatile __PDABbits_t __at(PDAB_ADDR) PDABbits;

#define PDB0           PDABbits.PDB0           /* bit 0 */
#define PDB1           PDABbits.PDB1           /* bit 1 */
#define PDB2           PDABbits.PDB2           /* bit 4 */
#define PDB3           PDABbits.PDB3           /* bit 6 */
#define PDB4           PDABbits.PDB4           /* bit 7 */
#define PDA0           PDABbits.PDA0           /* bit 0 */
#define PDA1           PDABbits.PDA1           /* bit 1 */
#define PDA2           PDABbits.PDA2           /* bit 4 */



// ----- PWM0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char : 1;
		unsigned char : 1;
		unsigned char PWM0TBS: 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char : 1;
		unsigned char PWM0OE: 1;
		unsigned char PWM0EN: 1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0TBS               PWM0CRbits.PWM0TBS             /* bit 2 */
#define PWM0OE                PWM0CRbits.PWM0OE              /* bit 6 */
#define PWM0EN                PWM0CRbits.PWM0EN              /* bit 7 */



// ----- PWM0D Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM0D0 : 1;
		unsigned char PWM0D1 : 1;
		unsigned char PWM0D2 : 1;
		unsigned char PWM0D3 : 1;
		unsigned char PWM0D4 : 1;
		unsigned char PWM0D5 : 1;
		unsigned char PWM0D6 : 1;
		unsigned char PWM0D7 : 1;
	};
} __PWM0Dbits_t;
extern volatile __PWM0Dbits_t __at(PWM0D_ADDR) PWM0Dbits;

#define PWM0D0               PWM0Dbits.PWM0D0              /* bit 0 */
#define PWM0D1               PWM0Dbits.PWM0D1              /* bit 1 */
#define PWM0D2               PWM0Dbits.PWM0D2              /* bit 2 */
#define PWM0D3               PWM0Dbits.PWM0D3              /* bit 3 */
#define PWM0D4               PWM0Dbits.PWM0D4              /* bit 4 */
#define PWM0D5               PWM0Dbits.PWM0D5              /* bit 5 */
#define PWM0D6               PWM0Dbits.PWM0D6              /* bit 6 */
#define PWM0D7               PWM0Dbits.PWM0D7              /* bit 7 */



// ----- PWM1CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1S0: 1;
		unsigned char PWM1S1: 1;
		unsigned char PWM1TBS: 1;
		unsigned char PWM1NAS: 1;
		unsigned char PWM1PAS: 1;
		unsigned char PWM1NOE: 1;
		unsigned char PWM1POE: 1;
		unsigned char PWM1EN: 1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1S0                PWM1CRbits.PWM1S0               /* bit 0 */
#define PWM1S1                PWM1CRbits.PWM1S1               /* bit 1 */
#define PWM1TBS               PWM1CRbits.PWM1TBS              /* bit 2 */
#define PWM1NAS               PWM1CRbits.PWM1NAS              /* bit 3 */
#define PWM1PAS               PWM1CRbits.PWM1PAS              /* bit 4 */
#define PWM1NOE               PWM1CRbits.PWM1NOE              /* bit 5 */
#define PWM1POE               PWM1CRbits.PWM1POE              /* bit 6 */
#define PWM1EN                PWM1CRbits.PWM1EN               /* bit 7 */




// ----- PWM1DH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1D4: 1;
		unsigned char PWM1D5: 1;
		unsigned char PWM1D6: 1;
		unsigned char PWM1D7: 1;
		unsigned char PWM1D8: 1;
		unsigned char PWM1D9: 1;
		unsigned char PWM1D10: 1;
		unsigned char PWM1D11: 1;
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
		unsigned char PWM1D0: 1;
		unsigned char PWM1D1: 1;
		unsigned char PWM1D2: 1;
		unsigned char PWM1D3: 1;
	};
} __PWM1DLbits_t;
extern volatile __PWM1DLbits_t __at(PWM1DL_ADDR) PWM1DLbits;

#define PWM1D0               PWM1DLbits.PWM1D0              /* bit 4 */
#define PWM1D1               PWM1DLbits.PWM1D1              /* bit 5 */
#define PWM1D2               PWM1DLbits.PWM1D2              /* bit 6 */
#define PWM1D3               PWM1DLbits.PWM1D3              /* bit 7 */



// ----- PWMDEADT Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char DEADTR0: 1;
		unsigned char DEADTR1: 1;
		unsigned char DEADTR2: 1;
		unsigned char DEADTR3: 1;
		unsigned char DEADTF0: 1;
		unsigned char DEADTF1: 1;
		unsigned char DEADTF2: 1;
		unsigned char DEADTF3: 1;
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



// ----- T0CR Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TC0CKPS0: 1;
		unsigned char TC0CKPS1: 1;
		unsigned char TC0CKPS2: 1;
		unsigned char TC0CKS0: 1;
		unsigned char TC0CKS1: 1;
		unsigned char : 1;
		unsigned char TC0MOD: 1;
		unsigned char TC0EN: 1;
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
		unsigned char TC0CL0: 1;
		unsigned char TC0CL1: 1;
		unsigned char TC0CL2: 1;
		unsigned char TC0CL3: 1;
		unsigned char TC0CL4: 1;
		unsigned char TC0CL5: 1;
		unsigned char TC0CL6: 1;
		unsigned char TC0CL7: 1;
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
		unsigned char TC0CH0: 1;
		unsigned char TC0CH1: 1;
		unsigned char TC0CH2: 1;
		unsigned char TC0CH3: 1;
		unsigned char TC0CH4: 1;
		unsigned char TC0CH5: 1;
		unsigned char TC0CH6: 1;
		unsigned char TC0CH7: 1;
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
		unsigned char TC1CKPS0: 1;
		unsigned char TC1CKPS1: 1;
		unsigned char TC1CKPS2: 1;
		unsigned char TC1CKS0: 1;
		unsigned char TC1CKS1: 1;
		unsigned char : 1;
		unsigned char TC1MOD: 1;
		unsigned char TC1EN: 1;
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
		unsigned char TC1CL0: 1;
		unsigned char TC1CL1: 1;
		unsigned char TC1CL2: 1;
		unsigned char TC1CL3: 1;
		unsigned char TC1CL4: 1;
		unsigned char TC1CL5: 1;
		unsigned char TC1CL6: 1;
		unsigned char TC1CL7: 1;
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
		unsigned char TC1CH0: 1;
		unsigned char TC1CH1: 1;
		unsigned char TC1CH2: 1;
		unsigned char TC1CH3: 1;
		unsigned char TC1CH4: 1;
		unsigned char TC1CH5: 1;
		unsigned char TC1CH6: 1;
		unsigned char TC1CH7: 1;
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



// ----- ADCON2 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ADVOS0: 1;
		unsigned char ADVOS1: 1;
		unsigned char ADVOS2: 1;
		unsigned char ADVOS3: 1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __ADCON2bits_t;
extern volatile __ADCON2bits_t __at(ADCON2_ADDR) ADCON2bits;

#define ADVOS0           ADCON2bits.ADVOS0          /* bit 0 */
#define ADVOS1           ADCON2bits.ADVOS1          /* bit 1 */
#define ADVOS2           ADCON2bits.ADVOS2          /* bit 2 */
#define ADVOS3           ADCON2bits.ADVOS3          /* bit 3 */



// ----- ADCON0 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char CHS0: 1;
		unsigned char CHS1: 1;
		unsigned char CHS2: 1;
		unsigned char CHS3: 1;
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
		unsigned char VHS0: 1;
		unsigned char VHS1: 1;
		unsigned char VREMS0: 1;
		unsigned char VREMS1: 1;
		unsigned char ADCKS0: 1;
		unsigned char ADCKS1: 1;
		unsigned char ADCKS2: 1;
		unsigned char :1;	
	};
} __ADCON1bits_t;
extern volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;

#define VHS0             ADCON1bits.VHS0            /* bit 0 */
#define VHS1             ADCON1bits.VHS1            /* bit 1 */
#define VREMS0           ADCON1bits.VREMS0          /* bit 2 */
#define VREMS1           ADCON1bits.VREMS1          /* bit 3 */
#define ADCKS0           ADCON1bits.ADCKS0          /* bit 4 */
#define ADCKS1           ADCON1bits.ADCKS1          /* bit 5 */
#define ADCKS2           ADCON1bits.ADCKS2          /* bit 6 */

// ----- TKCTR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCHS0: 1;
		unsigned char TKCHS1: 1;
		unsigned char TKCHS2: 1;
		unsigned char : 1;
		unsigned char TKCKS0: 1;
		unsigned char TKCKS1: 1;
		unsigned char TKSTART: 1;
		unsigned char TKEN: 1;
	};
} __TKCTR0bits_t;
extern volatile __TKCTR0bits_t __at(TKCTR0_ADDR) TKCTR0bits;

#define TKCHS0               TKCTR0bits.TKCHS0              /* bit 0 */
#define TKCHS1               TKCTR0bits.TKCHS1              /* bit 1 */
#define TKCHS2               TKCTR0bits.TKCHS2              /* bit 2 */
#define TKCKS0               TKCTR0bits.TKCKS0              /* bit 4 */
#define TKCKS1               TKCTR0bits.TKCKS1              /* bit 5 */
#define TKSTART              TKCTR0bits.TKSTART             /* bit 6 */
#define TKEN                 TKCTR0bits.TKEN                /* bit 7 */



#endif