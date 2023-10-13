#ifndef __M8P516_H__
#define __M8P516_H__

//
// Register addresses.
//
#define INDF0_ADDR          0x00B0
#define FSR0_ADDR           0x00B1
#define TKCTR0_ADDR        	0x00B2
#define TKCTR1_ADDR         0x00B3
#define TKCNTL_ADDR        	0x00B4
#define TKCNTH_ADDR         0x00B5
#define TKCHS_ADDR          0x00B6

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
#define IOAICR_ADDR         0x00CB
#define ANSA_ADDR           0x00CC

#define PWM0CR_ADDR         0x00D8
#define PWM0D_ADDR          0x00D9
#define PWM1CR_ADDR         0x00DA
#define PWM1D_ADDR          0x00DB

#define T0CR_ADDR           0x00E8
#define TC0CL_ADDR          0x00E9
#define TC0CH_ADDR          0x00EA

#define LVDCR_ADDR          0x00F0

#define IRCLOCK_ADDR        0x01F9
#define IRCCAL_ADDR         0x01FC


//
//----- Register Files -----------------------------------------------------
//
extern __sfr __at (INDF0_ADDR)          INDF0;
extern __sfr __at (FSR0_ADDR)           FSR0;
extern __sfr __at (TKCTR0_ADDR)         TKCTR0;
extern __sfr __at (TKCTR1_ADDR)         TKCTR1;
extern __sfr __at (TKCNTL_ADDR)         TKCNTL;
extern __sfr __at (TKCNTH_ADDR)         TKCNTH;
extern __sfr __at (TKCHS_ADDR)          TKCHS;
extern __sfr __at (INDF1_ADDR)          INDF1;
extern __sfr __at (FSR1_ADDR)           FSR1;
extern __sfr __at (PCL_ADDR)            PCL;
extern __sfr __at (STATUS_ADDR)         STATUS;
extern __sfr __at (OPTION_ADDR)         OPTION;
extern __sfr __at (OSCM_ADDR)           OSCM;
extern __sfr __at (WDTC_ADDR)       	  WDTC;
extern __sfr __at (INDF2_ADDR)          INDF2;
extern __sfr __at (HBUF_ADDR)           HBUF; 
extern __sfr __at (INTCR0_ADDR)         INTCR0;
extern __sfr __at (INTF0_ADDR)          INTF0;
extern __sfr __at (INTCR1_ADDR)         INTCR1;
extern __sfr __at (INTF1_ADDR)          INTF1;
extern __sfr __at (IOA_ADDR)            IOA;
extern __sfr __at (OEA_ADDR)            OEA;
extern __sfr __at (PUA_ADDR)            PUA;
extern __sfr __at (IOAICR_ADDR)         IOAICR;
extern __sfr __at (ANSA_ADDR)           ANSA;
extern __sfr __at (PWM0CR_ADDR)         PWM0CR;    
extern __sfr __at (PWM0D_ADDR)          PWM0D;
extern __sfr __at (PWM1CR_ADDR)         PWM1CR;
extern __sfr __at (PWM1D_ADDR)          PWM1D;
extern __sfr __at (T0CR_ADDR)           T0CR;
extern __sfr __at (TC0CL_ADDR)          TC0CL;
extern __sfr __at (TC0CH_ADDR)          TC0CH;
extern __sfr __at (LVDCR_ADDR)          LVDCR;
extern __sfr __at (IRCLOCK_ADDR)        IRCLOCK;
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

// ----- TKCTR0 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char :1;	
		unsigned char TKCKS0:1;
		unsigned char TKCKS1:1;
		unsigned char TKSTART:1;
		unsigned char TKEN:1;	
	};
} __TKCTR0bits_t;
extern volatile __TKCTR0bits_t __at(TKCTR0_ADDR) TKCTR0bits;

#define TKCKS0          TKCTR0bits.TKCKS0            /* bit 4 */
#define TKCKS1          TKCTR0bits.TKCKS1            /* bit 5 */
#define TKSTART         TKCTR0bits.TKSTART           /* bit 6 */
#define TKEN            TKCTR0bits.TKEN              /* bit 7 */

// ----- TKCTR1 Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
		unsigned char :1;	
		unsigned char TKVCS0:1;
		unsigned char TKVCS1:1;
		unsigned char TKVLS0:1;
		unsigned char TKVLS1:1;	
	};
} __TKCTR1bits_t;
extern volatile __TKCTR1bits_t __at(TKCTR1_ADDR) TKCTR1bits;

#define TKVCS0           TKCTR1bits.TKVCS0            /* bit 4 */
#define TKVCS1           TKCTR1bits.TKVCS1            /* bit 5 */
#define TKVLS0           TKCTR1bits.TKVLS0            /* bit 6 */
#define TKVLS1           TKCTR1bits.TKVLS1            /* bit 7 */

// ----- TKCNTL Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCNTL0:1;
		unsigned char TKCNTL1:1;
		unsigned char TKCNTL2:1;	
		unsigned char TKCNTL3:1;	
		unsigned char TKCNTL4:1;
		unsigned char TKCNTL5:1;
		unsigned char TKCNTL6:1;
		unsigned char TKCNTL7:1;	
	};
} __TKCNTLbits_t;
extern volatile __TKCNTLbits_t __at(TKCNTL_ADDR) TKCNTLbits;

#define TKCNTL0         TKCNTLbits.TKCNTL0            /* bit 0 */
#define TKCNTL1         TKCNTLbits.TKCNTL1            /* bit 1 */
#define TKCNTL2         TKCNTLbits.TKCNTL2            /* bit 2 */
#define TKCNTL3         TKCNTLbits.TKCNTL3            /* bit 3 */
#define TKCNTL4         TKCNTLbits.TKCNTL4            /* bit 4 */
#define TKCNTL5         TKCNTLbits.TKCNTL5            /* bit 5 */
#define TKCNTL6         TKCNTLbits.TKCNTL6            /* bit 6 */
#define TKCNTL7         TKCNTLbits.TKCNTL7            /* bit 7 */

// ----- TKCNTH Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCNTH0:1;
		unsigned char TKCNTH1:1;
		unsigned char TKCNTH2:1;	
		unsigned char TKCNTH3:1;	
		unsigned char TKCNTH4:1;
		unsigned char TKCNTH5:1;
		unsigned char TKCNTH6:1;
		unsigned char TKCNTH7:1;	
	};
} __TKCNTHbits_t;
extern volatile __TKCNTHbits_t __at(TKCNTH_ADDR) TKCNTHbits;

#define TKCNTH0         TKCNTHbits.TKCNTH0            /* bit 0 */
#define TKCNTH1         TKCNTHbits.TKCNTH1            /* bit 1 */
#define TKCNTH2         TKCNTHbits.TKCNTH2            /* bit 2 */
#define TKCNTH3         TKCNTHbits.TKCNTH3            /* bit 3 */
#define TKCNTH4         TKCNTHbits.TKCNTH4            /* bit 4 */
#define TKCNTH5         TKCNTHbits.TKCNTH5            /* bit 5 */
#define TKCNTH6         TKCNTHbits.TKCNTH6            /* bit 6 */
#define TKCNTH7         TKCNTHbits.TKCNTH7            /* bit 7 */

// ----- TKCHS Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char TKCHS0:1;
		unsigned char TKCHS1:1;
		unsigned char TKCHS2:1;	
		unsigned char TKCHS3:1;	
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;	
	};
} __TKCHSbits_t;
extern volatile __TKCHSbits_t __at(TKCHS_ADDR) TKCHLbits;

#define TKCHS0         TKCHSbits.TKCHS0            /* bit 0 */
#define TKCHS1         TKCHSbits.TKCHS1            /* bit 1 */
#define TKCHS2         TKCHSbits.TKCHS2            /* bit 2 */
#define TKCHS3         TKCHSbits.TKCHS3            /* bit 3 */

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
		unsigned char LIRC500K:1;
		unsigned char STPH:1;
		unsigned char :1;
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
		unsigned char TKIE:1;
	};
} __INTCR0bits_t;
extern volatile __INTCR0bits_t __at(INTCR0_ADDR) INTCR0bits;

#define TC0IE           INTCR0bits.TC0IE       	  /* bit 0 */
#define TKIE            INTCR0bits.TKIE        	  /* bit 7 */

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
		unsigned char TKIF:1;
	};
} __INTF0bits_t;
extern volatile __INTF0bits_t __at(INTF0_ADDR) INTF0bits;

#define TC0IF           INTF0bits.TC0IF        	  /* bit 0 */
#define TKIF            INTF0bits.TKIF            /* bit 7 */

// ----- INTCR1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAHIE:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIE:1;
	};
} __INTCR1bits_t;
extern volatile __INTCR1bits_t __at(INTCR1_ADDR) INTCR1bits;

#define IOAHIE         INTCR1bits.IOAHIE     	  /* bit 0 */
#define LVDIE          INTCR1bits.LVDIE      	  /* bit 7 */

// ----- INTF1 Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOAHIF:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char LVDIF:1;
	};
} __INTF1bits_t;
extern volatile __INTF1bits_t __at(INTF1_ADDR) INTF1bits;

#define IOAHIF         INTF1bits.IOAHIF         /* bit 0 */
#define LVDIF          INTF1bits.LVDIF          /* bit 7 */

// ----- IOA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char IOA0:1;
		unsigned char IOA1:1;
		unsigned char IOA2:1;
		unsigned char IOA3:1;
		unsigned char IOA4:1;
		unsigned char IOA5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __IOAbits_t;
extern volatile __IOAbits_t __at(IOA_ADDR) IOAbits;

#define IOA0            IOAbits.IOA0              /* bit 0 */
#define IOA1            IOAbits.IOA1              /* bit 1 */
#define IOA2            IOAbits.IOA2              /* bit 2 */
#define IOA3            IOAbits.IOA3              /* bit 3 */
#define IOA4            IOAbits.IOA4              /* bit 4 */
#define IOA5            IOAbits.IOA5              /* bit 5 */

// ----- OEA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char OEA0:1;
		unsigned char OEA1:1;
		unsigned char OEA2:1;
		unsigned char OEA3:1;
		unsigned char OEA4:1;
		unsigned char OEA5:1;
		unsigned char :1;
		unsigned char :1;
	};
} __OEAbits_t;
extern volatile __OEAbits_t __at(OEA_ADDR) OEAbits;

#define OEA0            OEAbits.OEA0              /* bit 0 */
#define OEA1            OEAbits.OEA1              /* bit 1 */
#define OEA2            OEAbits.OEA2              /* bit 2 */
#define OEA3            OEAbits.OEA3              /* bit 3 */
#define OEA4            OEAbits.OEA4              /* bit 4 */
#define OEA5            OEAbits.OEA5              /* bit 5 */

// ----- PUA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PUA0:1;
		unsigned char PUA1:1;
		unsigned char PUA2:1;
		unsigned char PUA3:1;
		unsigned char PUA4:1;
		unsigned char PUA5:1;
		unsigned char :1;
		unsigned char A0HD:1;
	};
} __PUAbits_t;
extern volatile __PUAbits_t __at(PUA_ADDR) PUAbits;

#define PUA0            PUAbits.PUA0              /* bit 0 */
#define PUA1            PUAbits.PUA1              /* bit 1 */
#define PUA2            PUAbits.PUA2              /* bit 2 */
#define PUA3            PUAbits.PUA3              /* bit 3 */
#define PUA4            PUAbits.PUA4              /* bit 4 */
#define PUA5            PUAbits.PUA5              /* bit 5 */
#define A0HD            PUAbits.A0HD      	      /* bit 7 */

// ----- IOAICR Bits -------------------------------------------------------
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

#define IOAICR0            IOAICRbits.IOAICR0              /* bit 0 */
#define IOAICR1            IOAICRbits.IOAICR1              /* bit 1 */
#define IOAICR2            IOAICRbits.IOAICR2              /* bit 2 */
#define IOAICR3            IOAICRbits.IOAICR3              /* bit 3 */
#define IOAICR4            IOAICRbits.IOAICR4              /* bit 4 */
#define IOAICR5            IOAICRbits.IOAICR5              /* bit 5 */


// ----- ANSA Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char ANSA0:1;
		unsigned char ANSA1:1;
		unsigned char ANSA2:1;
		unsigned char ANSA3:1;
		unsigned char ANSA4:1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
	};
} __ANSAbits_t;
extern volatile __ANSAbits_t __at(ANSA_ADDR) ANSAbits;

#define ANSA0            ANSAbits.ANSA0              /* bit 0 */
#define ANSA1            ANSAbits.ANSA1              /* bit 1 */
#define ANSA2            ANSAbits.ANSA2              /* bit 2 */
#define ANSA3            ANSAbits.ANSA3              /* bit 3 */
#define ANSA4            ANSAbits.ANSA4              /* bit 4 */


// ----- PWM0CR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char :1;
		unsigned char PWM0BOE:1;
		unsigned char PWM0AOE:1;
		unsigned char PWM0EN:1;
	};
} __PWM0CRbits_t;
extern volatile __PWM0CRbits_t __at(PWM0CR_ADDR) PWM0CRbits;

#define PWM0BOE          PWM0CRbits.PWM0BOE          /* bit 5 */
#define PWM0AOE          PWM0CRbits.PWM0AOE          /* bit 6 */
#define PWM0EN           PWM0CRbits.PWM0EN       	   /* bit 7 */

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
		unsigned char PWM1BOE:1;
		unsigned char PWM1AOE:1;
		unsigned char PWM1EN:1;
	};
} __PWM1CRbits_t;
extern volatile __PWM1CRbits_t __at(PWM1CR_ADDR) PWM1CRbits;

#define PWM1BOE         PWM1CRbits.PWM1BOE         /* bit 5 */
#define PWM1AOE         PWM1CRbits.PWM1AOE         /* bit 6 */
#define PWM1EN          PWM1CRbits.PWM1EN       	 /* bit 7 */

// ----- PWM1D Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char PWM1D0:1;
		unsigned char PWM1D1:1;
		unsigned char PWM1D2:1;
		unsigned char PWM1D3:1;
		unsigned char PWM1D4:1;
		unsigned char PWM1D5:1;
		unsigned char PWM1D6:1;
		unsigned char PWM1D7:1;
	};
} __PWM1Dbits_t;
extern volatile __PWM1Dbits_t __at(PWM1D_ADDR) PWM1Dbits;

#define PWM1D0         PWM1Dbits.PWM1D0         /* bit 0 */
#define PWM1D1         PWM1Dbits.PWM1D1         /* bit 1 */
#define PWM1D2         PWM1Dbits.PWM1D2         /* bit 2 */
#define PWM1D3         PWM1Dbits.PWM1D3         /* bit 3 */
#define PWM1D4         PWM1Dbits.PWM1D4         /* bit 4 */
#define PWM1D5         PWM1Dbits.PWM1D5         /* bit 5 */
#define PWM1D6         PWM1Dbits.PWM1D6         /* bit 6 */
#define PWM1D7         PWM1Dbits.PWM1D7      	  /* bit 7 */


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


// ----- LVDCR Bits -------------------------------------------------------
typedef union {
	struct {
		unsigned char VLVDS0:1;
		unsigned char VLVDS1:1;
		unsigned char VLVDS2:1;
		unsigned char VLVDS3:1;
		unsigned char VLVDS4:1;
		unsigned char :1;
		unsigned char LVDF:1;
		unsigned char LVDEN:1;
	};
} __LVDCRbits_t;
extern volatile __LVDCRbits_t __at(LVDCR_ADDR) LVDCRbits;

#define VLVDS0         LVDCRbits.VLVDS0         /* bit 0 */
#define VLVDS1         LVDCRbits.VLVDS1         /* bit 1 */
#define VLVDS2         LVDCRbits.VLVDS2         /* bit 2 */
#define VLVDS3         LVDCRbits.VLVDS3         /* bit 3 */
#define VLVDS4         LVDCRbits.VLVDS4         /* bit 4 */
#define LVDF           LVDCRbits.LVDF           /* bit 6 */
#define LVDEN          LVDCRbits.LVDEN      	  /* bit 7 */

// ----- IRCLOCK Bits --------------------------------------------------------
typedef union {
	struct {
		unsigned char IRCLOCK0:1;
		unsigned char IRCLOCK1:1;	
		unsigned char IRCLOCK2:1;	
		unsigned char IRCLOCK3:1;
		unsigned char IRCLOCK4:1;	
		unsigned char IRCLOCK5:1;
		unsigned char IRCLOCK6:1;	
		unsigned char IRCLOCK7:1;
	};
} __IRCLOCKbits_t;
extern volatile __IRCLOCKbits_t __at(IRCLOCK_ADDR) IRCLOCKbits;

#define IRCLOCK0         IRCLOCKbits.IRCLOCK0          /* bit 0 */
#define IRCLOCK1         IRCLOCKbits.IRCLOCK1          /* bit 1 */
#define IRCLOCK2         IRCLOCKbits.IRCLOCK2          /* bit 2 */
#define IRCLOCK3         IRCLOCKbits.IRCLOCK3          /* bit 3 */
#define IRCLOCK4         IRCLOCKbits.IRCLOCK4          /* bit 4 */
#define IRCLOCK5         IRCLOCKbits.IRCLOCK5          /* bit 5 */
#define IRCLOCK6         IRCLOCKbits.IRCLOCK6          /* bit 6 */
#define IRCLOCK7         IRCLOCKbits.IRCLOCK7          /* bit 6 */

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