#include "MIMXRT1062.h"
#include "imxrt.h"
#include "wiring.h"
#include "usb_dev.h"
#include "avr/pgmspace.h"
#include "smalloc.h"
#include <string.h>

#include "py/help_text.h"
#include "mpconfigport.h"
#include "py/compile.h"
#include "py/runtime.h"
#include "py/gc.h"
#include "py/mperrno.h"
#include "py/stackctrl.h"
#include "shared/readline/readline.h"
#include "shared/runtime/gchelper.h"
#include "shared/runtime/pyexec.h"



#include "debug/printf.h"



// from the linker
extern unsigned long _stextload;
extern unsigned long _stext;
extern unsigned long _etext;
extern unsigned long _sdataload;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;
extern unsigned long _flexram_bank_config;
extern unsigned long _estack;
extern unsigned long _extram_start;
extern unsigned long _extram_end;

__attribute__ ((used, aligned(1024), section(".vectorsram")))
void (* volatile _VectorsRam[NVIC_NUM_INTERRUPTS+16])(void);

static void memory_copy(uint32_t *dest, const uint32_t *src, uint32_t *dest_end);
static void memory_clear(uint32_t *dest, uint32_t *dest_end);
static void configure_systick(void);
static void reset_PFD();
extern void systick_isr(void);
extern void pendablesrvreq_isr(void);
void configure_cache(void);
void configure_external_ram(void);
void unused_interrupt_vector(void);
void usb_pll_start();
extern void analog_init(void); // analog.c
extern void pwm_init(void); // pwm.c
extern void tempmon_init(void);  //tempmon.c
extern float tempmonGetTemp(void);
extern unsigned long rtc_get(void);
uint32_t set_arm_clock(uint32_t frequency); // clockspeed.c
extern void __libc_init_array(void); // C++ standard library

uint8_t external_psram_size = 0;
#ifdef ARDUINO_TEENSY41
struct smalloc_pool extmem_smalloc_pool;
#endif

extern int main (void);
FLASHMEM void startup_default_early_hook(void) {}
void startup_early_hook(void)	__attribute__ ((weak, alias("startup_default_early_hook")));
FLASHMEM void startup_default_middle_hook(void) {}
void startup_middle_hook(void)	__attribute__ ((weak, alias("startup_default_middle_hook")));
FLASHMEM void startup_default_late_hook(void) {}
void startup_late_hook(void)	__attribute__ ((weak, alias("startup_default_late_hook")));
// 20.6.1: page 1242
#define IMXRT_SNVS        (*(IMXRT_REGISTER32_t *)IMXRT_SNVS_ADDRESS)
// SNVS requires CCM_CCGR5_SNVS_HP and CCM_CCGR5_SNVS_LP
#define SNVS_HPLR            (IMXRT_SNVS.offset000)
#define SNVS_HPCOMR            (IMXRT_SNVS.offset004)
#define SNVS_HPCR            (IMXRT_SNVS.offset008)
#define SNVS_HPSICR            (IMXRT_SNVS.offset00C)
#define SNVS_HPSVCR            (IMXRT_SNVS.offset010)
#define SNVS_HPSR            (IMXRT_SNVS.offset014)
#define SNVS_HPSVSR            (IMXRT_SNVS.offset018)
#define SNVS_HPHACIVR            (IMXRT_SNVS.offset01C)
#define SNVS_HPHACR            (IMXRT_SNVS.offset020)
#define SNVS_HPRTCMR            (IMXRT_SNVS.offset024)
#define SNVS_HPRTCLR            (IMXRT_SNVS.offset028)
#define SNVS_HPTAMR            (IMXRT_SNVS.offset02C)
#define SNVS_HPTALR            (IMXRT_SNVS.offset030)
#define SNVS_LPLR            (IMXRT_SNVS.offset034)
#define SNVS_LPCR            (IMXRT_SNVS.offset038)
#define SNVS_LPMKCR            (IMXRT_SNVS.offset03C)
#define SNVS_LPSVCR            (IMXRT_SNVS.offset040)
#define SNVS_LPTDCR            (IMXRT_SNVS.offset048)
#define SNVS_LPSR            (IMXRT_SNVS.offset04C)
#define SNVS_LPSRTCMR            (IMXRT_SNVS.offset050)
#define SNVS_LPSRTCLR            (IMXRT_SNVS.offset054)
#define SNVS_LPTAR            (IMXRT_SNVS.offset058)
#define SNVS_LPSMCMR            (IMXRT_SNVS.offset05C)
#define SNVS_LPSMCLR            (IMXRT_SNVS.offset060)
#define SNVS_LPPGDR            (IMXRT_SNVS.offset064)
#define SNVS_LPGPR            (IMXRT_SNVS.offset068)
#define SNVS_LPGPR0                     (IMXRT_SNVS.offset100)
#define SNVS_LPGPR1                     (IMXRT_SNVS.offset104)
#define SNVS_LPGPR2                     (IMXRT_SNVS.offset108)
#define SNVS_LPGPR3                     (IMXRT_SNVS.offset10C)
#define IMXRT_SNVS_b        (*(IMXRT_REGISTER32_t *)(IMXRT_SNVS_ADDRESS+0x800))
#define SNVS_HPVIDR1            (IMXRT_SNVS_b.offset3F8)
#define SNVS_HPVIDR2            (IMXRT_SNVS_b.offset3FC)
#define SNVS_HPCR_BTN_MASK        ((uint32_t)(1 << 27))
#define SNVS_HPCR_BTN_CONFIG(n)        ((uint32_t)(((n) & 0x07) << 24))
#define SNVS_HPCR_HP_TS            ((uint32_t)(1 << 16))
#define SNVS_HPCR_HPCALB_VAL(n)        ((uint32_t)(((n) & 0x1F) << 10))
#define SNVS_HPCR_HPCALB_EN        ((uint32_t)(1 << 8))
#define SNVS_HPCR_PI_FREQ(n)        ((uint32_t)(((n) & 0x0F) << 4))
#define SNVS_HPCR_PI_EN            ((uint32_t)(1 << 3))
#define SNVS_HPCR_DIS_PI        ((uint32_t)(1 << 2))
#define SNVS_HPCR_HPTA_EN        ((uint32_t)(1 << 1))
#define SNVS_HPCR_RTC_EN        ((uint32_t)(1 << 0))
#define SNVS_DEFAULT_PGD_VALUE        (0x41736166U)
#define SNVS_LPCR_SRTC_ENV        ((uint32_t)(1 << 0))
#define SNVS_LPCR_MC_ENV        ((uint32_t)(1 << 2))
#define SNVS_LPCR_LPWUI_EN        ((uint32_t)(1 << 3))
#define SNVS_LPCR_DP_EN            ((uint32_t)(1 << 5))
#define SNVS_LPCR_TOP            ((uint32_t)(1 << 6))
#define SNVS_LPCR_PWR_GLITCH_EN        ((uint32_t)(1 << 7))
#define SNVS_LPCR_BTN_PRESS_TIME(n)    ((uint32_t)(((n) & 0x03) << 16))
#define SNVS_LPCR_DEBOUNCE(n)        ((uint32_t)(((n) & 0x03) << 18))
#define SNVS_LPCR_ON_TIME(n)        ((uint32_t)(((n) & 0x03) << 20))
#define SNVS_LPCR_PK_EN            ((uint32_t)(1 << 22))
#define SNVS_LPCR_PK_OVERRIDE        ((uint32_t)(1 << 23))
#define SNVS_LPCR_GPR_Z_DIS             ((uint32_t)(1 << 24))

// 27.7.2.1: page 1695
#define IMXRT_FLEXSPI        (*(IMXRT_REGISTER32_t *)IMXRT_FLEXSPI_ADDRESS)
// FLEXSPI requires CCM_CCGR6_FLEXSPI
#define FLEXSPI_MCR0            (IMXRT_FLEXSPI.offset000)
#define FLEXSPI_MCR0_AHBGRANTWAIT(n)        ((uint32_t)(((n) & 0xFF) << 24))
#define FLEXSPI_MCR0_AHBGRANTWAIT_MASK        ((uint32_t)(0xFF << 24))
#define FLEXSPI_MCR0_IPGRANTWAIT(n)        ((uint32_t)(((n) & 0xFF) << 16))
#define FLEXSPI_MCR0_IPGRANTWAIT_MASK        ((uint32_t)(0xFF << 16))
#define FLEXSPI_MCR0_SCKFREERUNEN        ((uint32_t)(1<<14))
#define FLEXSPI_MCR0_COMBINATIONEN        ((uint32_t)(1<<13))
#define FLEXSPI_MCR0_DOZEEN            ((uint32_t)(1<<12))
#define FLEXSPI_MCR0_HSEN            ((uint32_t)(1<<11))
#define FLEXSPI_MCR0_ATDFEN_orig            ((uint32_t)(1<<7))

#define FLEXSPI_MCR0_ATDFEN_MASK                 (0x80U)
#define FLEXSPI_MCR0_ATDFEN_SHIFT                (7U)
/*! ATDFEN - Enable AHB bus Write Access to IP TX FIFO.
 *  0b0..IP TX FIFO should be written by IP Bus. AHB Bus write access to IP TX FIFO memory space will get bus error response.
 *  0b1..IP TX FIFO should be written by AHB Bus. IP Bus write access to IP TX FIFO memory space will be ignored but no bus error response.
 */
#define FLEXSPI_MCR0_ATDFEN(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXSPI_MCR0_ATDFEN_SHIFT)) & FLEXSPI_MCR0_ATDFEN_MASK)

#define FLEXSPI_MCR0_ARDFEN_orig            ((uint32_t)(1<<6))


#define FLEXSPI_MCR0_ARDFEN_MASK                 (0x40U)
#define FLEXSPI_MCR0_ARDFEN_SHIFT                (6U)
/*! ARDFEN - Enable AHB bus Read Access to IP RX FIFO.
 *  0b0..IP RX FIFO should be read by IP Bus. AHB Bus read access to IP RX FIFO memory space will get bus error response.
 *  0b1..IP RX FIFO should be read by AHB Bus. IP Bus read access to IP RX FIFO memory space will always return data zero but no bus error response.
 */
#define FLEXSPI_MCR0_ARDFEN(x)                   (((uint32_t)(((uint32_t)(x)) << FLEXSPI_MCR0_ARDFEN_SHIFT)) & FLEXSPI_MCR0_ARDFEN_MASK)

#define FLEXSPI_MCR0_RXCLKSRC(n)        ((uint32_t)(((n) & 0x03) << 4))
#define FLEXSPI_MCR0_RXCLKSRC_MASK        ((uint32_t)(0x03 << 4))
#define FLEXSPI_MCR0_MDIS            ((uint32_t)(1<<1))
#define FLEXSPI_MCR0_SWRESET            ((uint32_t)(1<<0))
#define FLEXSPI_MCR1            (IMXRT_FLEXSPI.offset004)
#define FLEXSPI_MCR1_SEQWAIT(n)            ((uint32_t)(((n) & 0xFFFF) << 16))
#define FLEXSPI_MCR1_AHBBUSWAIT(n)        ((uint32_t)(((n) & 0xFFFF) << 0))
#define FLEXSPI_MCR2            (IMXRT_FLEXSPI.offset008)
#define FLEXSPI_MCR2_RESUMEWAIT(n)        ((uint32_t)(((n) & 0xFF) << 24))
#define FLEXSPI_MCR2_RESUMEWAIT_MASK        ((uint32_t)(0xFF << 24))
#define FLEXSPI_MCR2_SCKBDIFFOPT        ((uint32_t)(1<<19))
#define FLEXSPI_MCR2_SAMEDEVICEEN        ((uint32_t)(1<<15))
#define FLEXSPI_MCR2_CLRLEARNPHASE        ((uint32_t)(1<<14))
#define FLEXSPI_MCR2_CLRAHBBUFOPT        ((uint32_t)(1<<11))
#define FLEXSPI_AHBCR            (IMXRT_FLEXSPI.offset00C)
#define FLEXSPI_AHBCR_READADDROPT        ((uint32_t)(1<<6))
#define FLEXSPI_AHBCR_PREFETCHEN        ((uint32_t)(1<<5))
#define FLEXSPI_AHBCR_BUFFERABLEEN        ((uint32_t)(1<<4))
#define FLEXSPI_AHBCR_CACHABLEEN        ((uint32_t)(1<<3))
#define FLEXSPI_AHBCR_APAREN            ((uint32_t)(1<<0))
#define FLEXSPI_INTEN            (IMXRT_FLEXSPI.offset010)
#define FLEXSPI_INTEN_SEQTIMEOUTEN        ((uint32_t)(1<<11))
#define FLEXSPI_INTEN_AHBBUSTIMEOUTEN        ((uint32_t)(1<<10))
#define FLEXSPI_INTEN_SCKSTOPBYWREN        ((uint32_t)(1<<9))
#define FLEXSPI_INTEN_SCKSTOPBYRDEN        ((uint32_t)(1<<8))
#define FLEXSPI_INTEN_IPTXWEEN            ((uint32_t)(1<<6))
#define FLEXSPI_INTEN_IPRXWAEN            ((uint32_t)(1<<5))
#define FLEXSPI_INTEN_AHBCMDERREN        ((uint32_t)(1<<4))
#define FLEXSPI_INTEN_IPCMDERREN        ((uint32_t)(1<<3))
#define FLEXSPI_INTEN_AHBCMDGEEN        ((uint32_t)(1<<2))
#define FLEXSPI_INTEN_IPCMDGEEN            ((uint32_t)(1<<1))
#define FLEXSPI_INTEN_IPCMDDONEEN        ((uint32_t)(1<<0))
#define FLEXSPI_INTR            (IMXRT_FLEXSPI.offset014)
#define FLEXSPI_INTR_SEQTIMEOUT            ((uint32_t)(1<<11))
#define FLEXSPI_INTR_AHBBUSTIMEOUT        ((uint32_t)(1<<10))
#define FLEXSPI_INTR_SCKSTOPBYWR        ((uint32_t)(1<<9))
#define FLEXSPI_INTR_SCKSTOPBYRD        ((uint32_t)(1<<8))
#define FLEXSPI_INTR_IPTXWE            ((uint32_t)(1<<6))
#define FLEXSPI_INTR_IPRXWA            ((uint32_t)(1<<5))
#define FLEXSPI_INTR_AHBCMDERR            ((uint32_t)(1<<4))
#define FLEXSPI_INTR_IPCMDERR            ((uint32_t)(1<<3))
#define FLEXSPI_INTR_AHBCMDGE            ((uint32_t)(1<<2))
#define FLEXSPI_INTR_IPCMDGE            ((uint32_t)(1<<1))
#define FLEXSPI_INTR_IPCMDDONE            ((uint32_t)(1<<0))
#define FLEXSPI_LUTKEY            (IMXRT_FLEXSPI.offset018)
#define FLEXSPI_LUTKEY_VALUE            ((uint32_t)0x5AF05AF0)
#define FLEXSPI_LUTCR            (IMXRT_FLEXSPI.offset01C)
#define FLEXSPI_LUTCR_UNLOCK            ((uint32_t)(1<<1))
#define FLEXSPI_LUTCR_LOCK            ((uint32_t)(1<<0))
#define FLEXSPI_AHBRXBUF0CR0        (IMXRT_FLEXSPI.offset020)
#define FLEXSPI_AHBRXBUF1CR0        (IMXRT_FLEXSPI.offset024)
#define FLEXSPI_AHBRXBUF2CR0        (IMXRT_FLEXSPI.offset028)
#define FLEXSPI_AHBRXBUF3CR0        (IMXRT_FLEXSPI.offset02C)
#define FLEXSPI_AHBRXBUFCR0_PREFETCHEN        ((uint32_t)(1<<31))
#define FLEXSPI_AHBRXBUFCR0_PRIORITY(n)        ((uint32_t)(((n) & 0x03) << 24))
#define FLEXSPI_AHBRXBUFCR0_PRIORITY_MASK    ((uint32_t)((0x03) << 24))
#define FLEXSPI_AHBRXBUFCR0_MSTRID(n)        ((uint32_t)(((n) & 0x0F) << 16))
#define FLEXSPI_AHBRXBUFCR0_MSTRID_MASK        ((uint32_t)((0x0F) << 16))
#define FLEXSPI_AHBRXBUFCR0_BUFSZ(n)        ((uint32_t)(((n) & 0xFF) << 0))
#define FLEXSPI_AHBRXBUFCR0_BUFSZ_MASK        ((uint32_t)((0xFF) << 0))
#define FLEXSPI_FLSHA1CR0        (IMXRT_FLEXSPI.offset060)
#define FLEXSPI_FLSHA2CR0        (IMXRT_FLEXSPI.offset064)
#define FLEXSPI_FLSHB1CR0        (IMXRT_FLEXSPI.offset068)
#define FLEXSPI_FLSHB2CR0        (IMXRT_FLEXSPI.offset06C)
#define FLEXSPI_FLSHCR0_FLSHSZ(n)        ((uint32_t)(((n) & 0x7FFFFF) << 0))
#define FLEXSPI_FLSHCR0_FLSHSZ_MASK        ((uint32_t)((0x7FFFFF) << 0))
#define FLEXSPI_FLSHA1CR1        (IMXRT_FLEXSPI.offset070)
#define FLEXSPI_FLSHA2CR1        (IMXRT_FLEXSPI.offset074)
#define FLEXSPI_FLSHB1CR1        (IMXRT_FLEXSPI.offset078)
#define FLEXSPI_FLSHB2CR1        (IMXRT_FLEXSPI.offset07C)
#define FLEXSPI_FLSHCR1_CSINTERVAL(n)        ((uint32_t)(((n) & 0xFFFF) << 16))
#define FLEXSPI_FLSHCR1_CSINTERVAL_MASK        ((uint32_t)((0xFFFF) << 16))
#define FLEXSPI_FLSHCR1_CSINTERVALUNIT        ((uint32_t)(1<<15))
#define FLEXSPI_FLSHCR1_CAS(n)            ((uint32_t)(((n) & 0x0F) << 11))
#define FLEXSPI_FLSHCR1_WA            ((uint32_t)(1<<10))
#define FLEXSPI_FLSHCR1_TCSH(n)            ((uint32_t)(((n) & 0x1F) << 5))
#define FLEXSPI_FLSHCR1_TCSH_MASK        ((uint32_t)((0x1F) << 5))
#define FLEXSPI_FLSHCR1_TCSS(n)            ((uint32_t)(((n) & 0x1F) << 0))
#define FLEXSPI_FLSHCR1_TCSS_MASK        ((uint32_t)((0x1F) << 0))
#define FLEXSPI_FLSHA1CR2        (IMXRT_FLEXSPI.offset080)
#define FLEXSPI_FLSHA2CR2        (IMXRT_FLEXSPI.offset084)
#define FLEXSPI_FLSHB1CR2        (IMXRT_FLEXSPI.offset088)
#define FLEXSPI_FLSHB2CR2        (IMXRT_FLEXSPI.offset08C)
#define FLEXSPI_FLSHCR2_CLRINSTRPTR        ((uint32_t)(1<<31))
#define FLEXSPI_FLSHCR2_AWRWAITUNIT(n)        ((uint32_t)(((n) & 0x07) << 28))
#define FLEXSPI_FLSHCR2_AWRWAIT(n)        ((uint32_t)(((n) & 0xFFF) << 16))
#define FLEXSPI_FLSHCR2_AWRSEQNUM(n)        ((uint32_t)(((n) & 0x07) << 13))
#define FLEXSPI_FLSHCR2_AWRSEQID(n)        ((uint32_t)(((n) & 0x0F) << 8))
#define FLEXSPI_FLSHCR2_ARDSEQNUM(n)        ((uint32_t)(((n) & 0x07) << 5))
#define FLEXSPI_FLSHCR2_ARDSEQID(n)        ((uint32_t)(((n) & 0x0F) << 0))
#define FLEXSPI_FLSHCR4            (IMXRT_FLEXSPI.offset094)
#define FLEXSPI_FLSHCR4_WMENB            ((uint32_t)(1<<3))
#define FLEXSPI_FLSHCR4_WMENA            ((uint32_t)(1<<2))
#define FLEXSPI_FLSHCR4_WMOPT1            ((uint32_t)(1<<0))
#define FLEXSPI_IPCR0            (IMXRT_FLEXSPI.offset0A0)
#define FLEXSPI_IPCR0_SFAR(n)            ((uint32_t)(n))
#define FLEXSPI_IPCR1            (IMXRT_FLEXSPI.offset0A4)
#define FLEXSPI_IPCR1_IPAREN            ((uint32_t)(1<<31))
#define FLEXSPI_IPCR1_ISEQNUM(n)        ((uint32_t)(((n) & 0x07) << 24))
#define FLEXSPI_IPCR1_ISEQID(n)            ((uint32_t)(((n) & 0x0F) << 16))
#define FLEXSPI_IPCR1_IDATSZ(n)            ((uint32_t)(((n) & 0xFFFF) << 0))
#define FLEXSPI_IPCMD            (IMXRT_FLEXSPI.offset0B0)
#define FLEXSPI_IPCMD_TRG            ((uint32_t)(1<<0))
#define FLEXSPI_IPRXFCR            (IMXRT_FLEXSPI.offset0B8)
#define FLEXSPI_IPRXFCR_RXWMRK(n)        ((uint32_t)(((n) & 0x0F) << 2))
#define FLEXSPI_IPRXFCR_RXDMAEN            ((uint32_t)(1<<1))
#define FLEXSPI_IPRXFCR_CLRIPRXF        ((uint32_t)(1<<0))
#define FLEXSPI_IPTXFCR            (IMXRT_FLEXSPI.offset0BC)
#define FLEXSPI_IPTXFCR_TXWMRK(n)        ((uint32_t)(((n) & 0x0F) << 2))
#define FLEXSPI_IPTXFCR_TXDMAEN            ((uint32_t)(1<<1))
#define FLEXSPI_IPTXFCR_CLRIPTXF        ((uint32_t)(1<<0))
#define FLEXSPI_DLLACR            (IMXRT_FLEXSPI.offset0C0)
#define FLEXSPI_DLLBCR            (IMXRT_FLEXSPI.offset0C4)
#define FLEXSPI_DLLCR_OVRDVAL(n)        ((uint32_t)(((n) & 0x3F) << 9))
#define FLEXSPI_DLLCR_OVRDEN            ((uint32_t)(1<<8))
#define FLEXSPI_DLLCR_SLVDLYTARGET(n)        ((uint32_t)(((n) & 0x0F) << 3))
#define FLEXSPI_DLLCR_DLLRESET            ((uint32_t)(1<<1))
#define FLEXSPI_DLLCR_DLLEN            ((uint32_t)(1<<0))
#define FLEXSPI_STS0            (IMXRT_FLEXSPI.offset0E0)
#define FLEXSPI_STS0_ARBCMDSRC(n)        ((uint32_t)(((n) & 0x03) << 2))
#define FLEXSPI_STS0_ARBIDLE            ((uint32_t)(1<<1))
#define FLEXSPI_STS0_SEQIDLE            ((uint32_t)(1<<0))
#define FLEXSPI_STS1            (IMXRT_FLEXSPI.offset0E4)
#define FLEXSPI_STS1_IPCMDERRCODE(n)        ((uint32_t)(((n) & 0x0F) << 24))
#define FLEXSPI_STS1_IPCMDERRID(n)        ((uint32_t)(((n) & 0x0F) << 16))
#define FLEXSPI_STS1_AHBCMDERRCODE(n)        ((uint32_t)(((n) & 0x0F) << 8))
#define FLEXSPI_STS1_AHBCMDERRID(n)        ((uint32_t)(((n) & 0x0F) << 0))
#define FLEXSPI_STS2            (IMXRT_FLEXSPI.offset0E8)
#define FLEXSPI_STS2_BREFSEL(n)            ((uint32_t)(((n) & 0x3F) << 24))
#define FLEXSPI_STS2_BSLVSEL(n)            ((uint32_t)(((n) & 0x3F) << 18))
#define FLEXSPI_STS2_BREFLOCK            ((uint32_t)(1<<17))
#define FLEXSPI_STS2_BSLVLOCK            ((uint32_t)(1<<16))
#define FLEXSPI_STS2_AREFSEL(n)            ((uint32_t)(((n) & 0x3F) << 8))
#define FLEXSPI_STS2_ASLVSEL(n)            ((uint32_t)(((n) & 0x3F) << 2))
#define FLEXSPI_STS2_AREFLOCK            ((uint32_t)(1<<1))
#define FLEXSPI_STS2_ASLVLOCK            ((uint32_t)(1<<0))
#define FLEXSPI_AHBSPNDSTS        (IMXRT_FLEXSPI.offset0EC)
#define FLEXSPI_AHBSPNDSTS_DATLFT(n)        ((uint32_t)(((n) & 0xFFFF) << 16))
#define FLEXSPI_AHBSPNDSTS_BUFID(n)        ((uint32_t)(((n) & 0x7) << 1))
#define FLEXSPI_AHBSPNDSTS_ACTIVE        ((uint32_t)(1<<0))
#define FLEXSPI_IPRXFSTS        (IMXRT_FLEXSPI.offset0F0)
#define FLEXSPI_IPRXFSTS_RDCNTR(n)        ((uint32_t)(((n) & 0xFFFF) << 16))
#define FLEXSPI_IPRXFSTS_FILL(n)        ((uint32_t)(((n) & 0xFF) << 0))
#define FLEXSPI_IPTXFSTS        (IMXRT_FLEXSPI.offset0F4)
#define FLEXSPI_IPTXFSTS_WRCNTR(n)        ((uint32_t)(((n) & 0xFFFF) << 16))
#define FLEXSPI_IPTXFSTS_FILL(n)        ((uint32_t)(((n) & 0xFF) << 0))
#define FLEXSPI_RFDR0            (IMXRT_FLEXSPI.offset100)
#define FLEXSPI_RFDR1            (IMXRT_FLEXSPI.offset104)
#define FLEXSPI_RFDR2            (IMXRT_FLEXSPI.offset108)
#define FLEXSPI_RFDR3            (IMXRT_FLEXSPI.offset10C)
#define FLEXSPI_RFDR4            (IMXRT_FLEXSPI.offset110)
#define FLEXSPI_RFDR5            (IMXRT_FLEXSPI.offset114)
#define FLEXSPI_RFDR6            (IMXRT_FLEXSPI.offset118)
#define FLEXSPI_RFDR7            (IMXRT_FLEXSPI.offset11C)
#define FLEXSPI_RFDR8            (IMXRT_FLEXSPI.offset120)
#define FLEXSPI_RFDR9            (IMXRT_FLEXSPI.offset124)
#define FLEXSPI_RFDR10            (IMXRT_FLEXSPI.offset128)
#define FLEXSPI_RFDR11            (IMXRT_FLEXSPI.offset12C)
#define FLEXSPI_RFDR12            (IMXRT_FLEXSPI.offset130)
#define FLEXSPI_RFDR13            (IMXRT_FLEXSPI.offset134)
#define FLEXSPI_RFDR14            (IMXRT_FLEXSPI.offset138)
#define FLEXSPI_RFDR15            (IMXRT_FLEXSPI.offset13C)
#define FLEXSPI_RFDR16            (IMXRT_FLEXSPI.offset140)
#define FLEXSPI_RFDR17            (IMXRT_FLEXSPI.offset144)
#define FLEXSPI_RFDR18            (IMXRT_FLEXSPI.offset148)
#define FLEXSPI_RFDR19            (IMXRT_FLEXSPI.offset14C)
#define FLEXSPI_RFDR20            (IMXRT_FLEXSPI.offset150)
#define FLEXSPI_RFDR21            (IMXRT_FLEXSPI.offset154)
#define FLEXSPI_RFDR22            (IMXRT_FLEXSPI.offset158)
#define FLEXSPI_RFDR23            (IMXRT_FLEXSPI.offset15C)
#define FLEXSPI_RFDR24            (IMXRT_FLEXSPI.offset160)
#define FLEXSPI_RFDR25            (IMXRT_FLEXSPI.offset164)
#define FLEXSPI_RFDR26            (IMXRT_FLEXSPI.offset168)
#define FLEXSPI_RFDR27            (IMXRT_FLEXSPI.offset16C)
#define FLEXSPI_RFDR28            (IMXRT_FLEXSPI.offset170)
#define FLEXSPI_RFDR29            (IMXRT_FLEXSPI.offset174)
#define FLEXSPI_RFDR30            (IMXRT_FLEXSPI.offset178)
#define FLEXSPI_RFDR31            (IMXRT_FLEXSPI.offset17C)
#define FLEXSPI_TFDR0            (IMXRT_FLEXSPI.offset180)
#define FLEXSPI_TFDR1            (IMXRT_FLEXSPI.offset184)
#define FLEXSPI_TFDR2            (IMXRT_FLEXSPI.offset188)
#define FLEXSPI_TFDR3            (IMXRT_FLEXSPI.offset18C)
#define FLEXSPI_TFDR4            (IMXRT_FLEXSPI.offset190)
#define FLEXSPI_TFDR5            (IMXRT_FLEXSPI.offset194)
#define FLEXSPI_TFDR6            (IMXRT_FLEXSPI.offset198)
#define FLEXSPI_TFDR7            (IMXRT_FLEXSPI.offset19C)
#define FLEXSPI_TFDR8            (IMXRT_FLEXSPI.offset1A0)
#define FLEXSPI_TFDR9            (IMXRT_FLEXSPI.offset1A4)
#define FLEXSPI_TFDR10            (IMXRT_FLEXSPI.offset1A8)
#define FLEXSPI_TFDR11            (IMXRT_FLEXSPI.offset1AC)
#define FLEXSPI_TFDR12            (IMXRT_FLEXSPI.offset1B0)
#define FLEXSPI_TFDR13            (IMXRT_FLEXSPI.offset1B4)
#define FLEXSPI_TFDR14            (IMXRT_FLEXSPI.offset1B8)
#define FLEXSPI_TFDR15            (IMXRT_FLEXSPI.offset1BC)
#define FLEXSPI_TFDR16            (IMXRT_FLEXSPI.offset1C0)
#define FLEXSPI_TFDR17            (IMXRT_FLEXSPI.offset1C4)
#define FLEXSPI_TFDR18            (IMXRT_FLEXSPI.offset1C8)
#define FLEXSPI_TFDR19            (IMXRT_FLEXSPI.offset1CC)
#define FLEXSPI_TFDR20            (IMXRT_FLEXSPI.offset1D0)
#define FLEXSPI_TFDR21            (IMXRT_FLEXSPI.offset1D4)
#define FLEXSPI_TFDR22            (IMXRT_FLEXSPI.offset1D8)
#define FLEXSPI_TFDR23            (IMXRT_FLEXSPI.offset1DC)
#define FLEXSPI_TFDR24            (IMXRT_FLEXSPI.offset1E0)
#define FLEXSPI_TFDR25            (IMXRT_FLEXSPI.offset1E4)
#define FLEXSPI_TFDR26            (IMXRT_FLEXSPI.offset1E8)
#define FLEXSPI_TFDR27            (IMXRT_FLEXSPI.offset1EC)
#define FLEXSPI_TFDR28            (IMXRT_FLEXSPI.offset1F0)
#define FLEXSPI_TFDR29            (IMXRT_FLEXSPI.offset1F4)
#define FLEXSPI_TFDR30            (IMXRT_FLEXSPI.offset1F8)
#define FLEXSPI_TFDR31            (IMXRT_FLEXSPI.offset1FC)
#define FLEXSPI_LUT0            (IMXRT_FLEXSPI.offset200)
#define FLEXSPI_LUT1            (IMXRT_FLEXSPI.offset204)
#define FLEXSPI_LUT2            (IMXRT_FLEXSPI.offset208)
#define FLEXSPI_LUT3            (IMXRT_FLEXSPI.offset20C)
#define FLEXSPI_LUT4            (IMXRT_FLEXSPI.offset210)
#define FLEXSPI_LUT5            (IMXRT_FLEXSPI.offset214)
#define FLEXSPI_LUT6            (IMXRT_FLEXSPI.offset218)
#define FLEXSPI_LUT7            (IMXRT_FLEXSPI.offset21C)
#define FLEXSPI_LUT8            (IMXRT_FLEXSPI.offset220)
#define FLEXSPI_LUT9            (IMXRT_FLEXSPI.offset224)
#define FLEXSPI_LUT10            (IMXRT_FLEXSPI.offset228)
#define FLEXSPI_LUT11            (IMXRT_FLEXSPI.offset22C)
#define FLEXSPI_LUT12            (IMXRT_FLEXSPI.offset230)
#define FLEXSPI_LUT13            (IMXRT_FLEXSPI.offset234)
#define FLEXSPI_LUT14            (IMXRT_FLEXSPI.offset238)
#define FLEXSPI_LUT15            (IMXRT_FLEXSPI.offset23C)
#define FLEXSPI_LUT16            (IMXRT_FLEXSPI.offset240)
#define FLEXSPI_LUT17            (IMXRT_FLEXSPI.offset244)
#define FLEXSPI_LUT18            (IMXRT_FLEXSPI.offset248)
#define FLEXSPI_LUT19            (IMXRT_FLEXSPI.offset24C)
#define FLEXSPI_LUT20            (IMXRT_FLEXSPI.offset250)
#define FLEXSPI_LUT21            (IMXRT_FLEXSPI.offset254)
#define FLEXSPI_LUT22            (IMXRT_FLEXSPI.offset258)
#define FLEXSPI_LUT23            (IMXRT_FLEXSPI.offset25C)
#define FLEXSPI_LUT24            (IMXRT_FLEXSPI.offset260)
#define FLEXSPI_LUT25            (IMXRT_FLEXSPI.offset264)
#define FLEXSPI_LUT26            (IMXRT_FLEXSPI.offset268)
#define FLEXSPI_LUT27            (IMXRT_FLEXSPI.offset26C)
#define FLEXSPI_LUT28            (IMXRT_FLEXSPI.offset270)
#define FLEXSPI_LUT29            (IMXRT_FLEXSPI.offset274)
#define FLEXSPI_LUT30            (IMXRT_FLEXSPI.offset278)
#define FLEXSPI_LUT31            (IMXRT_FLEXSPI.offset27C)
#define FLEXSPI_LUT32            (IMXRT_FLEXSPI.offset280)
#define FLEXSPI_LUT33            (IMXRT_FLEXSPI.offset284)
#define FLEXSPI_LUT34            (IMXRT_FLEXSPI.offset288)
#define FLEXSPI_LUT35            (IMXRT_FLEXSPI.offset28C)
#define FLEXSPI_LUT36            (IMXRT_FLEXSPI.offset290)
#define FLEXSPI_LUT37            (IMXRT_FLEXSPI.offset294)
#define FLEXSPI_LUT38            (IMXRT_FLEXSPI.offset298)
#define FLEXSPI_LUT39            (IMXRT_FLEXSPI.offset29C)
#define FLEXSPI_LUT40            (IMXRT_FLEXSPI.offset2A0)
#define FLEXSPI_LUT41            (IMXRT_FLEXSPI.offset2A4)
#define FLEXSPI_LUT42            (IMXRT_FLEXSPI.offset2A8)
#define FLEXSPI_LUT43            (IMXRT_FLEXSPI.offset2AC)
#define FLEXSPI_LUT44            (IMXRT_FLEXSPI.offset2B0)
#define FLEXSPI_LUT45            (IMXRT_FLEXSPI.offset2B4)
#define FLEXSPI_LUT46            (IMXRT_FLEXSPI.offset2B8)
#define FLEXSPI_LUT47            (IMXRT_FLEXSPI.offset2BC)
#define FLEXSPI_LUT48            (IMXRT_FLEXSPI.offset2C0)
#define FLEXSPI_LUT49            (IMXRT_FLEXSPI.offset2C4)
#define FLEXSPI_LUT50            (IMXRT_FLEXSPI.offset2C8)
#define FLEXSPI_LUT51            (IMXRT_FLEXSPI.offset2CC)
#define FLEXSPI_LUT52            (IMXRT_FLEXSPI.offset2D0)
#define FLEXSPI_LUT53            (IMXRT_FLEXSPI.offset2D4)
#define FLEXSPI_LUT54            (IMXRT_FLEXSPI.offset2D8)
#define FLEXSPI_LUT55            (IMXRT_FLEXSPI.offset2DC)
#define FLEXSPI_LUT56            (IMXRT_FLEXSPI.offset2E0)
#define FLEXSPI_LUT57            (IMXRT_FLEXSPI.offset2E4)
#define FLEXSPI_LUT58            (IMXRT_FLEXSPI.offset2E8)
#define FLEXSPI_LUT59            (IMXRT_FLEXSPI.offset2EC)
#define FLEXSPI_LUT60            (IMXRT_FLEXSPI.offset2F0)
#define FLEXSPI_LUT61            (IMXRT_FLEXSPI.offset2F4)
#define FLEXSPI_LUT62            (IMXRT_FLEXSPI.offset2F8)
#define FLEXSPI_LUT63            (IMXRT_FLEXSPI.offset2FC)
#define FLEXSPI_LUT_OPCODE1(n)            ((uint32_t)(((n) & 0x3F) << 26))
#define FLEXSPI_LUT_NUM_PADS1(n)        ((uint32_t)(((n) & 0x03) << 24))
#define FLEXSPI_LUT_OPERAND1(n)            ((uint32_t)(((n) & 0xFF) << 16))
#define FLEXSPI_LUT_OPCODE0(n)            ((uint32_t)(((n) & 0x3F) << 10))
#define FLEXSPI_LUT_NUM_PADS0(n)        ((uint32_t)(((n) & 0x03) << 8))
#define FLEXSPI_LUT_OPERAND0(n)            ((uint32_t)(((n) & 0xFF) << 0))
#define FLEXSPI_LUT_INSTRUCTION(opcode, pads, operand) ((uint32_t)(\
    (((opcode) & 0x3F) << 10) | (((pads) & 0x03) << 8) | ((operand) & 0xFF)))
// 30.7.8: page 1637
#define FLEXSPI_LUT_OPCODE_CMD_SDR        0x01
#define FLEXSPI_LUT_OPCODE_CMD_DDR        0x21
#define FLEXSPI_LUT_OPCODE_RADDR_SDR        0x02
#define FLEXSPI_LUT_OPCODE_RADDR_DDR        0x22
#define FLEXSPI_LUT_OPCODE_CADDR_SDR        0x03
#define FLEXSPI_LUT_OPCODE_CADDR_DDR        0x23
#define FLEXSPI_LUT_OPCODE_MODE1_SDR        0x04
#define FLEXSPI_LUT_OPCODE_MODE1_DDR        0x24
#define FLEXSPI_LUT_OPCODE_MODE2_SDR        0x05
#define FLEXSPI_LUT_OPCODE_MODE2_DDR        0x25
#define FLEXSPI_LUT_OPCODE_MODE4_SDR        0x06
#define FLEXSPI_LUT_OPCODE_MODE4_DDR        0x26
#define FLEXSPI_LUT_OPCODE_MODE8_SDR        0x07
#define FLEXSPI_LUT_OPCODE_MODE8_DDR        0x27
#define FLEXSPI_LUT_OPCODE_WRITE_SDR        0x08
#define FLEXSPI_LUT_OPCODE_WRITE_DDR        0x28
#define FLEXSPI_LUT_OPCODE_READ_SDR        0x09
#define FLEXSPI_LUT_OPCODE_READ_DDR        0x29
#define FLEXSPI_LUT_OPCODE_LEARN_SDR        0x0A
#define FLEXSPI_LUT_OPCODE_LEARN_DDR        0x2A
#define FLEXSPI_LUT_OPCODE_DATSZ_SDR        0x0B
#define FLEXSPI_LUT_OPCODE_DATSZ_DDR        0x2B
#define FLEXSPI_LUT_OPCODE_DUMMY_SDR        0x0C
#define FLEXSPI_LUT_OPCODE_DUMMY_DDR        0x2C
#define FLEXSPI_LUT_OPCODE_DUMMY_RWDS_SDR    0x0D
#define FLEXSPI_LUT_OPCODE_DUMMY_RWDS_DDR    0x2D
#define FLEXSPI_LUT_OPCODE_JMP_ON_CS        0x1F
#define FLEXSPI_LUT_OPCODE_STOP            0x00
#define FLEXSPI_LUT_NUM_PADS_1            0x00
#define FLEXSPI_LUT_NUM_PADS_2            0x01
#define FLEXSPI_LUT_NUM_PADS_4            0x02
#define FLEXSPI_LUT_NUM_PADS_8            0x03

#define IMXRT_FLEXSPI2        (*(IMXRT_REGISTER32_t *)IMXRT_FLEXSPI2_ADDRESS)
// FLEXSPI2 requires CCM_CCGR7_FLEXSPI2
#define FLEXSPI2_MCR0            (IMXRT_FLEXSPI2.offset000)
#define FLEXSPI2_MCR1            (IMXRT_FLEXSPI2.offset004)
#define FLEXSPI2_MCR2            (IMXRT_FLEXSPI2.offset008)
#define FLEXSPI2_AHBCR            (IMXRT_FLEXSPI2.offset00C)
#define FLEXSPI2_INTEN            (IMXRT_FLEXSPI2.offset010)
#define FLEXSPI2_INTR            (IMXRT_FLEXSPI2.offset014)
#define FLEXSPI2_LUTKEY            (IMXRT_FLEXSPI2.offset018)
#define FLEXSPI2_LUTCR            (IMXRT_FLEXSPI2.offset01C)
#define FLEXSPI2_AHBRXBUF0CR0        (IMXRT_FLEXSPI2.offset020)
#define FLEXSPI2_AHBRXBUF1CR0        (IMXRT_FLEXSPI2.offset024)
#define FLEXSPI2_AHBRXBUF2CR0        (IMXRT_FLEXSPI2.offset028)
#define FLEXSPI2_AHBRXBUF3CR0        (IMXRT_FLEXSPI2.offset02C)
#define FLEXSPI2_FLSHA1CR0        (IMXRT_FLEXSPI2.offset060)
#define FLEXSPI2_FLSHA2CR0        (IMXRT_FLEXSPI2.offset064)
#define FLEXSPI2_FLSHB1CR0        (IMXRT_FLEXSPI2.offset068)
#define FLEXSPI2_FLSHB2CR0        (IMXRT_FLEXSPI2.offset06C)
#define FLEXSPI2_FLSHA1CR1        (IMXRT_FLEXSPI2.offset070)
#define FLEXSPI2_FLSHA2CR1        (IMXRT_FLEXSPI2.offset074)
#define FLEXSPI2_FLSHB1CR1        (IMXRT_FLEXSPI2.offset078)
#define FLEXSPI2_FLSHB2CR1        (IMXRT_FLEXSPI2.offset07C)
#define FLEXSPI2_FLSHA1CR2        (IMXRT_FLEXSPI2.offset080)
#define FLEXSPI2_FLSHA2CR2        (IMXRT_FLEXSPI2.offset084)
#define FLEXSPI2_FLSHB1CR2        (IMXRT_FLEXSPI2.offset088)
#define FLEXSPI2_FLSHB2CR2        (IMXRT_FLEXSPI2.offset08C)
#define FLEXSPI2_FLSHCR4        (IMXRT_FLEXSPI2.offset094)
#define FLEXSPI2_IPCR0            (IMXRT_FLEXSPI2.offset0A0)
#define FLEXSPI2_IPCR1            (IMXRT_FLEXSPI2.offset0A4)
#define FLEXSPI2_IPCMD            (IMXRT_FLEXSPI2.offset0B0)
#define FLEXSPI2_IPRXFCR        (IMXRT_FLEXSPI2.offset0B8)
#define FLEXSPI2_IPTXFCR        (IMXRT_FLEXSPI2.offset0BC)
#define FLEXSPI2_DLLACR            (IMXRT_FLEXSPI2.offset0C0)
#define FLEXSPI2_DLLBCR            (IMXRT_FLEXSPI2.offset0C4)
#define FLEXSPI2_STS0            (IMXRT_FLEXSPI2.offset0E0)
#define FLEXSPI2_STS1            (IMXRT_FLEXSPI2.offset0E4)
#define FLEXSPI2_STS2            (IMXRT_FLEXSPI2.offset0E8)
#define FLEXSPI2_AHBSPNDSTS        (IMXRT_FLEXSPI2.offset0EC)
#define FLEXSPI2_IPRXFSTS        (IMXRT_FLEXSPI2.offset0F0)
#define FLEXSPI2_IPTXFSTS        (IMXRT_FLEXSPI2.offset0F4)
#define FLEXSPI2_RFDR0            (IMXRT_FLEXSPI2.offset100)
#define FLEXSPI2_RFDR1            (IMXRT_FLEXSPI2.offset104)
#define FLEXSPI2_RFDR2            (IMXRT_FLEXSPI2.offset108)
#define FLEXSPI2_RFDR3            (IMXRT_FLEXSPI2.offset10C)
#define FLEXSPI2_RFDR4            (IMXRT_FLEXSPI2.offset110)
#define FLEXSPI2_RFDR5            (IMXRT_FLEXSPI2.offset114)
#define FLEXSPI2_RFDR6            (IMXRT_FLEXSPI2.offset118)
#define FLEXSPI2_RFDR7            (IMXRT_FLEXSPI2.offset11C)
#define FLEXSPI2_RFDR8            (IMXRT_FLEXSPI2.offset120)
#define FLEXSPI2_RFDR9            (IMXRT_FLEXSPI2.offset124)
#define FLEXSPI2_RFDR10            (IMXRT_FLEXSPI2.offset128)
#define FLEXSPI2_RFDR11            (IMXRT_FLEXSPI2.offset12C)
#define FLEXSPI2_RFDR12            (IMXRT_FLEXSPI2.offset130)
#define FLEXSPI2_RFDR13            (IMXRT_FLEXSPI2.offset134)
#define FLEXSPI2_RFDR14            (IMXRT_FLEXSPI2.offset138)
#define FLEXSPI2_RFDR15            (IMXRT_FLEXSPI2.offset13C)
#define FLEXSPI2_RFDR16            (IMXRT_FLEXSPI2.offset140)
#define FLEXSPI2_RFDR17            (IMXRT_FLEXSPI2.offset144)
#define FLEXSPI2_RFDR18            (IMXRT_FLEXSPI2.offset148)
#define FLEXSPI2_RFDR19            (IMXRT_FLEXSPI2.offset14C)
#define FLEXSPI2_RFDR20            (IMXRT_FLEXSPI2.offset150)
#define FLEXSPI2_RFDR21            (IMXRT_FLEXSPI2.offset154)
#define FLEXSPI2_RFDR22            (IMXRT_FLEXSPI2.offset158)
#define FLEXSPI2_RFDR23            (IMXRT_FLEXSPI2.offset15C)
#define FLEXSPI2_RFDR24            (IMXRT_FLEXSPI2.offset160)
#define FLEXSPI2_RFDR25            (IMXRT_FLEXSPI2.offset164)
#define FLEXSPI2_RFDR26            (IMXRT_FLEXSPI2.offset168)
#define FLEXSPI2_RFDR27            (IMXRT_FLEXSPI2.offset16C)
#define FLEXSPI2_RFDR28            (IMXRT_FLEXSPI2.offset170)
#define FLEXSPI2_RFDR29            (IMXRT_FLEXSPI2.offset174)
#define FLEXSPI2_RFDR30            (IMXRT_FLEXSPI2.offset178)
#define FLEXSPI2_RFDR31            (IMXRT_FLEXSPI2.offset17C)
#define FLEXSPI2_TFDR0            (IMXRT_FLEXSPI2.offset180)
#define FLEXSPI2_TFDR1            (IMXRT_FLEXSPI2.offset184)
#define FLEXSPI2_TFDR2            (IMXRT_FLEXSPI2.offset188)
#define FLEXSPI2_TFDR3            (IMXRT_FLEXSPI2.offset18C)
#define FLEXSPI2_TFDR4            (IMXRT_FLEXSPI2.offset190)
#define FLEXSPI2_TFDR5            (IMXRT_FLEXSPI2.offset194)
#define FLEXSPI2_TFDR6            (IMXRT_FLEXSPI2.offset198)
#define FLEXSPI2_TFDR7            (IMXRT_FLEXSPI2.offset19C)
#define FLEXSPI2_TFDR8            (IMXRT_FLEXSPI2.offset1A0)
#define FLEXSPI2_TFDR9            (IMXRT_FLEXSPI2.offset1A4)
#define FLEXSPI2_TFDR10            (IMXRT_FLEXSPI2.offset1A8)
#define FLEXSPI2_TFDR11            (IMXRT_FLEXSPI2.offset1AC)
#define FLEXSPI2_TFDR12            (IMXRT_FLEXSPI2.offset1B0)
#define FLEXSPI2_TFDR13            (IMXRT_FLEXSPI2.offset1B4)
#define FLEXSPI2_TFDR14            (IMXRT_FLEXSPI2.offset1B8)
#define FLEXSPI2_TFDR15            (IMXRT_FLEXSPI2.offset1BC)
#define FLEXSPI2_TFDR16            (IMXRT_FLEXSPI2.offset1C0)
#define FLEXSPI2_TFDR17            (IMXRT_FLEXSPI2.offset1C4)
#define FLEXSPI2_TFDR18            (IMXRT_FLEXSPI2.offset1C8)
#define FLEXSPI2_TFDR19            (IMXRT_FLEXSPI2.offset1CC)
#define FLEXSPI2_TFDR20            (IMXRT_FLEXSPI2.offset1D0)
#define FLEXSPI2_TFDR21            (IMXRT_FLEXSPI2.offset1D4)
#define FLEXSPI2_TFDR22            (IMXRT_FLEXSPI2.offset1D8)
#define FLEXSPI2_TFDR23            (IMXRT_FLEXSPI2.offset1DC)
#define FLEXSPI2_TFDR24            (IMXRT_FLEXSPI2.offset1E0)
#define FLEXSPI2_TFDR25            (IMXRT_FLEXSPI2.offset1E4)
#define FLEXSPI2_TFDR26            (IMXRT_FLEXSPI2.offset1E8)
#define FLEXSPI2_TFDR27            (IMXRT_FLEXSPI2.offset1EC)
#define FLEXSPI2_TFDR28            (IMXRT_FLEXSPI2.offset1F0)
#define FLEXSPI2_TFDR29            (IMXRT_FLEXSPI2.offset1F4)
#define FLEXSPI2_TFDR30            (IMXRT_FLEXSPI2.offset1F8)
#define FLEXSPI2_TFDR31            (IMXRT_FLEXSPI2.offset1FC)
#define FLEXSPI2_LUT0            (IMXRT_FLEXSPI2.offset200)
#define FLEXSPI2_LUT1            (IMXRT_FLEXSPI2.offset204)
#define FLEXSPI2_LUT2            (IMXRT_FLEXSPI2.offset208)
#define FLEXSPI2_LUT3            (IMXRT_FLEXSPI2.offset20C)
#define FLEXSPI2_LUT4            (IMXRT_FLEXSPI2.offset210)
#define FLEXSPI2_LUT5            (IMXRT_FLEXSPI2.offset214)
#define FLEXSPI2_LUT6            (IMXRT_FLEXSPI2.offset218)
#define FLEXSPI2_LUT7            (IMXRT_FLEXSPI2.offset21C)
#define FLEXSPI2_LUT8            (IMXRT_FLEXSPI2.offset220)
#define FLEXSPI2_LUT9            (IMXRT_FLEXSPI2.offset224)
#define FLEXSPI2_LUT10            (IMXRT_FLEXSPI2.offset228)
#define FLEXSPI2_LUT11            (IMXRT_FLEXSPI2.offset22C)
#define FLEXSPI2_LUT12            (IMXRT_FLEXSPI2.offset230)
#define FLEXSPI2_LUT13            (IMXRT_FLEXSPI2.offset234)
#define FLEXSPI2_LUT14            (IMXRT_FLEXSPI2.offset238)
#define FLEXSPI2_LUT15            (IMXRT_FLEXSPI2.offset23C)
#define FLEXSPI2_LUT16            (IMXRT_FLEXSPI2.offset240)
#define FLEXSPI2_LUT17            (IMXRT_FLEXSPI2.offset244)
#define FLEXSPI2_LUT18            (IMXRT_FLEXSPI2.offset248)
#define FLEXSPI2_LUT19            (IMXRT_FLEXSPI2.offset24C)
#define FLEXSPI2_LUT20            (IMXRT_FLEXSPI2.offset250)
#define FLEXSPI2_LUT21            (IMXRT_FLEXSPI2.offset254)
#define FLEXSPI2_LUT22            (IMXRT_FLEXSPI2.offset258)
#define FLEXSPI2_LUT23            (IMXRT_FLEXSPI2.offset25C)
#define FLEXSPI2_LUT24            (IMXRT_FLEXSPI2.offset260)
#define FLEXSPI2_LUT25            (IMXRT_FLEXSPI2.offset264)
#define FLEXSPI2_LUT26            (IMXRT_FLEXSPI2.offset268)
#define FLEXSPI2_LUT27            (IMXRT_FLEXSPI2.offset26C)
#define FLEXSPI2_LUT28            (IMXRT_FLEXSPI2.offset270)
#define FLEXSPI2_LUT29            (IMXRT_FLEXSPI2.offset274)
#define FLEXSPI2_LUT30            (IMXRT_FLEXSPI2.offset278)
#define FLEXSPI2_LUT31            (IMXRT_FLEXSPI2.offset27C)
#define FLEXSPI2_LUT32            (IMXRT_FLEXSPI2.offset280)
#define FLEXSPI2_LUT33            (IMXRT_FLEXSPI2.offset284)
#define FLEXSPI2_LUT34            (IMXRT_FLEXSPI2.offset288)
#define FLEXSPI2_LUT35            (IMXRT_FLEXSPI2.offset28C)
#define FLEXSPI2_LUT36            (IMXRT_FLEXSPI2.offset290)
#define FLEXSPI2_LUT37            (IMXRT_FLEXSPI2.offset294)
#define FLEXSPI2_LUT38            (IMXRT_FLEXSPI2.offset298)
#define FLEXSPI2_LUT39            (IMXRT_FLEXSPI2.offset29C)
#define FLEXSPI2_LUT40            (IMXRT_FLEXSPI2.offset2A0)
#define FLEXSPI2_LUT41            (IMXRT_FLEXSPI2.offset2A4)
#define FLEXSPI2_LUT42            (IMXRT_FLEXSPI2.offset2A8)
#define FLEXSPI2_LUT43            (IMXRT_FLEXSPI2.offset2AC)
#define FLEXSPI2_LUT44            (IMXRT_FLEXSPI2.offset2B0)
#define FLEXSPI2_LUT45            (IMXRT_FLEXSPI2.offset2B4)
#define FLEXSPI2_LUT46            (IMXRT_FLEXSPI2.offset2B8)
#define FLEXSPI2_LUT47            (IMXRT_FLEXSPI2.offset2BC)
#define FLEXSPI2_LUT48            (IMXRT_FLEXSPI2.offset2C0)
#define FLEXSPI2_LUT49            (IMXRT_FLEXSPI2.offset2C4)
#define FLEXSPI2_LUT50            (IMXRT_FLEXSPI2.offset2C8)
#define FLEXSPI2_LUT51            (IMXRT_FLEXSPI2.offset2CC)
#define FLEXSPI2_LUT52            (IMXRT_FLEXSPI2.offset2D0)
#define FLEXSPI2_LUT53            (IMXRT_FLEXSPI2.offset2D4)
#define FLEXSPI2_LUT54            (IMXRT_FLEXSPI2.offset2D8)
#define FLEXSPI2_LUT55            (IMXRT_FLEXSPI2.offset2DC)
#define FLEXSPI2_LUT56            (IMXRT_FLEXSPI2.offset2E0)
#define FLEXSPI2_LUT57            (IMXRT_FLEXSPI2.offset2E4)
#define FLEXSPI2_LUT58            (IMXRT_FLEXSPI2.offset2E8)
#define FLEXSPI2_LUT59            (IMXRT_FLEXSPI2.offset2EC)
#define FLEXSPI2_LUT60            (IMXRT_FLEXSPI2.offset2F0)
#define FLEXSPI2_LUT61            (IMXRT_FLEXSPI2.offset2F4)
#define FLEXSPI2_LUT62            (IMXRT_FLEXSPI2.offset2F8)
#define FLEXSPI2_LUT63            (IMXRT_FLEXSPI2.offset2FC)

#define IMXRT_PIT_CHANNELS        ((IMXRT_PIT_CHANNEL_t *)(&(IMXRT_PIT.offset100)))
#define PIT_LDVAL0            (IMXRT_PIT.offset100)
#define PIT_CVAL0            (IMXRT_PIT.offset104)
#define PIT_TCTRL0            (IMXRT_PIT.offset108)
#define PIT_TFLG0            (IMXRT_PIT.offset10C)
#define PIT_LDVAL1            (IMXRT_PIT.offset110)
#define PIT_CVAL1            (IMXRT_PIT.offset114)
#define PIT_TCTRL1            (IMXRT_PIT.offset118)
#define PIT_TFLG1            (IMXRT_PIT.offset11C)
#define PIT_LDVAL2            (IMXRT_PIT.offset120)
#define PIT_CVAL2            (IMXRT_PIT.offset124)
#define PIT_TCTRL2            (IMXRT_PIT.offset128)
#define PIT_TFLG2            (IMXRT_PIT.offset12C)
#define PIT_LDVAL3            (IMXRT_PIT.offset130)
#define PIT_CVAL3            (IMXRT_PIT.offset134)
#define PIT_TCTRL3            (IMXRT_PIT.offset138)
#define PIT_TFLG3            (IMXRT_PIT.offset13C)
#define PIT_MCR_MDIS                ((uint32_t)(1<<1))
#define PIT_MCR_FRZ                ((uint32_t)(1<<0))
#define PIT_TCTRL_CHN                ((uint32_t)(1<<2))
#define PIT_TCTRL_TIE                ((uint32_t)(1<<1))
#define PIT_TCTRL_TEN                ((uint32_t)(1<<0))
#define PIT_TFLG_TIF                ((uint32_t)(1<<0))


// 42.5.1.1: page 2212
#define IMXRT_USB1        (*(IMXRT_REGISTER32_t *)IMXRT_USB1_ADDRESS)
// USB1 requires CCM_CCGR6_USBOH3
#define USB1_ID                (IMXRT_USB1.offset000)
#define USB1_HWGENERAL            (IMXRT_USB1.offset004)
#define USB1_HWHOST            (IMXRT_USB1.offset008)
#define USB1_HWDEVICE            (IMXRT_USB1.offset00C)
#define USB1_HWTXBUF            (IMXRT_USB1.offset010)
#define USB1_HWRXBUF            (IMXRT_USB1.offset014)
#define USB1_GPTIMER0LD            (IMXRT_USB1.offset080)
#define USB1_GPTIMER0CTRL        (IMXRT_USB1.offset084)
#define USB1_GPTIMER1LD            (IMXRT_USB1.offset088)
#define USB1_GPTIMER1CTRL        (IMXRT_USB1.offset08C)
#define USB1_SBUSCFG            (IMXRT_USB1.offset090)
#define USB1_HCIVERSION            (IMXRT_USB1.offset100)
#define USB1_HCSPARAMS            (IMXRT_USB1.offset104)
#define USB1_HCCPARAMS            (IMXRT_USB1.offset108)
#define USB1_DCIVERSION            (IMXRT_USB1.offset120)
#define USB1_DCCPARAMS            (IMXRT_USB1.offset124)
#define USB1_USBCMD            (IMXRT_USB1.offset140)
#define USB1_USBSTS            (IMXRT_USB1.offset144)
#define USB1_USBINTR            (IMXRT_USB1.offset148)
#define USB1_FRINDEX            (IMXRT_USB1.offset14C)
#define USB1_PERIODICLISTBASE        (IMXRT_USB1.offset154)
#define USB1_DEVICEADDR            (IMXRT_USB1.offset154)
#define USB1_ASYNCLISTADDR        (IMXRT_USB1.offset158)
#define USB1_ENDPOINTLISTADDR        (IMXRT_USB1.offset158)
#define USB1_BURSTSIZE            (IMXRT_USB1.offset160)
#define USB1_TXFILLTUNING        (IMXRT_USB1.offset164)
#define USB1_ENDPTNAK            (IMXRT_USB1.offset178)
#define USB1_ENDPTNAKEN            (IMXRT_USB1.offset17C)
#define USB1_CONFIGFLAG            (IMXRT_USB1.offset180)
#define USB1_PORTSC1            (IMXRT_USB1.offset184)
#define USB1_OTGSC            (IMXRT_USB1.offset1A4)
#define USB1_USBMODE            (IMXRT_USB1.offset1A8)
#define USB1_ENDPTSETUPSTAT        (IMXRT_USB1.offset1AC)
#define USB1_ENDPTPRIME            (IMXRT_USB1.offset1B0)
#define USB1_ENDPTFLUSH            (IMXRT_USB1.offset1B4)
#define USB1_ENDPTSTATUS        (IMXRT_USB1.offset1B8)
#define USB1_ENDPTCOMPLETE        (IMXRT_USB1.offset1BC)
#define USB1_ENDPTCTRL0            (IMXRT_USB1.offset1C0)
#define USB1_ENDPTCTRL1            (IMXRT_USB1.offset1C4)
#define USB1_ENDPTCTRL2            (IMXRT_USB1.offset1C8)
#define USB1_ENDPTCTRL3            (IMXRT_USB1.offset1CC)
#define USB1_ENDPTCTRL4            (IMXRT_USB1.offset1D0)
#define USB1_ENDPTCTRL5            (IMXRT_USB1.offset1D4)
#define USB1_ENDPTCTRL6            (IMXRT_USB1.offset1D8)
#define USB1_ENDPTCTRL7            (IMXRT_USB1.offset1DC)
#define IMXRT_USB2        (*(IMXRT_REGISTER32_t *)IMXRT_USB2_ADDRESS)
// USB2 requires CCM_CCGR6_USBOH3
#define USB2_ID                (IMXRT_USB2.offset000)
#define USB2_HWGENERAL            (IMXRT_USB2.offset004)
#define USB2_HWHOST            (IMXRT_USB2.offset008)
#define USB2_HWDEVICE            (IMXRT_USB2.offset00C)
#define USB2_HWTXBUF            (IMXRT_USB2.offset010)
#define USB2_HWRXBUF            (IMXRT_USB2.offset014)
#define USB2_GPTIMER0LD            (IMXRT_USB2.offset080)
#define USB2_GPTIMER0CTRL        (IMXRT_USB2.offset084)
#define USB2_GPTIMER1LD            (IMXRT_USB2.offset088)
#define USB2_GPTIMER1CTRL        (IMXRT_USB2.offset08C)
#define USB2_SBUSCFG            (IMXRT_USB2.offset090)
#define USB2_HCIVERSION            (IMXRT_USB2.offset100)
#define USB2_HCSPARAMS            (IMXRT_USB2.offset104)
#define USB2_HCCPARAMS            (IMXRT_USB2.offset108)
#define USB2_DCIVERSION            (IMXRT_USB2.offset120)
#define USB2_DCCPARAMS            (IMXRT_USB2.offset124)
#define USB2_USBCMD            (IMXRT_USB2.offset140)
#define USB2_USBSTS            (IMXRT_USB2.offset144)
#define USB2_USBINTR            (IMXRT_USB2.offset148)
#define USB2_FRINDEX            (IMXRT_USB2.offset14C)
#define USB2_PERIODICLISTBASE        (IMXRT_USB2.offset154)
#define USB2_DEVICEADDR            (IMXRT_USB2.offset154)
#define USB2_ASYNCLISTADDR        (IMXRT_USB2.offset158)
#define USB2_ENDPOINTLISTADDR        (IMXRT_USB2.offset158)
#define USB2_BURSTSIZE            (IMXRT_USB2.offset160)
#define USB2_TXFILLTUNING        (IMXRT_USB2.offset164)
#define USB2_ENDPTNAK            (IMXRT_USB2.offset178)
#define USB2_ENDPTNAKEN            (IMXRT_USB2.offset17C)
#define USB2_CONFIGFLAG            (IMXRT_USB2.offset180)
#define USB2_PORTSC1            (IMXRT_USB2.offset184)
#define USB2_OTGSC            (IMXRT_USB2.offset1A4)
#define USB2_USBMODE            (IMXRT_USB2.offset1A8)
#define USB2_ENDPTSETUPSTAT        (IMXRT_USB2.offset1AC)
#define USB2_ENDPTPRIME            (IMXRT_USB2.offset1B0)
#define USB2_ENDPTFLUSH            (IMXRT_USB2.offset1B4)
#define USB2_ENDPTSTATUS        (IMXRT_USB2.offset1B8)
#define USB2_ENDPTCOMPLETE        (IMXRT_USB2.offset1BC)
#define USB2_ENDPTCTRL0            (IMXRT_USB2.offset1C0)
#define USB2_ENDPTCTRL1            (IMXRT_USB2.offset1C4)
#define USB2_ENDPTCTRL2            (IMXRT_USB2.offset1C8)
#define USB2_ENDPTCTRL3            (IMXRT_USB2.offset1CC)
#define USB2_ENDPTCTRL4            (IMXRT_USB2.offset1D0)
#define USB2_ENDPTCTRL5            (IMXRT_USB2.offset1D4)
#define USB2_ENDPTCTRL6            (IMXRT_USB2.offset1D8)
#define USB2_ENDPTCTRL7            (IMXRT_USB2.offset1DC)
#define USB_USBCMD_ITC(n)            ((uint32_t)(((n) & 0xFF) << 16))
#define USB_USBCMD_FS_2                ((uint32_t)(1<<15))
#define USB_USBCMD_ATDTW            ((uint32_t)(1<<14))
#define USB_USBCMD_SUTW                ((uint32_t)(1<<13))
#define USB_USBCMD_ASPE                ((uint32_t)(1<<11))
#define USB_USBCMD_ASP(n)            ((uint32_t)(((n) & 0x03) << 8))
#define USB_USBCMD_IAA                ((uint32_t)(1<<6))
#define USB_USBCMD_ASE                ((uint32_t)(1<<5))
#define USB_USBCMD_PSE                ((uint32_t)(1<<4))
#define USB_USBCMD_FS_1(n)            ((uint32_t)(((n) & 0x03) << 2))
#define USB_USBCMD_RST                ((uint32_t)(1<<1))
#define USB_USBCMD_RS                ((uint32_t)(1<<0))
#define USB_USBSTS_TI1                ((uint32_t)(1<<25))
#define USB_USBSTS_TI0                ((uint32_t)(1<<24))
#define USB_USBSTS_NAKI                ((uint32_t)(1<<16))
#define USB_USBSTS_AS                ((uint32_t)(1<<15))
#define USB_USBSTS_PS                ((uint32_t)(1<<14))
#define USB_USBSTS_RCL                ((uint32_t)(1<<13))
#define USB_USBSTS_HCH                ((uint32_t)(1<<12))
#define USB_USBSTS_ULPII            ((uint32_t)(1<<10))
#define USB_USBSTS_SLI                ((uint32_t)(1<<8))
#define USB_USBSTS_SRI                ((uint32_t)(1<<7))
#define USB_USBSTS_URI                ((uint32_t)(1<<6))
#define USB_USBSTS_AAI                ((uint32_t)(1<<5))
#define USB_USBSTS_SEI                ((uint32_t)(1<<4))
#define USB_USBSTS_FRI                ((uint32_t)(1<<3))
#define USB_USBSTS_PCI                ((uint32_t)(1<<2))
#define USB_USBSTS_UEI                ((uint32_t)(1<<1))
#define USB_USBSTS_UI                ((uint32_t)(1<<0))
#define USB_USBINTR_TIE1            ((uint32_t)(1<<25))
#define USB_USBINTR_TIE0            ((uint32_t)(1<<24))
#define USB_USBINTR_UPIE            ((uint32_t)(1<<19))
#define USB_USBINTR_UAIE            ((uint32_t)(1<<18))
#define USB_USBINTR_NAKE            ((uint32_t)(1<<16))
#define USB_USBINTR_ULPIE            ((uint32_t)(1<<10))
#define USB_USBINTR_SLE                ((uint32_t)(1<<8))
#define USB_USBINTR_SRE                ((uint32_t)(1<<7))
#define USB_USBINTR_URE                ((uint32_t)(1<<6))
#define USB_USBINTR_AAE                ((uint32_t)(1<<5))
#define USB_USBINTR_SEE                ((uint32_t)(1<<4))
#define USB_USBINTR_FRE                ((uint32_t)(1<<3))
#define USB_USBINTR_PCE                ((uint32_t)(1<<2))
#define USB_USBINTR_UEE                ((uint32_t)(1<<1))
#define USB_USBINTR_UE                ((uint32_t)(1<<0))
#define USB_DEVICEADDR_USBADR(n)        ((uint32_t)(((n) & 0x7F) << 25))
#define USB_DEVICEADDR_USBADRA            ((uint32_t)(1<<24))
#define USB_PORTSC1_PTS_1(n)            ((uint32_t)(((n) & 0x03) << 30))
#define USB_PORTSC1_STS                ((uint32_t)(1<<29))
#define USB_PORTSC1_PTW                ((uint32_t)(1<<28))
#define USB_PORTSC1_PSPD(n)            ((uint32_t)(((n) & 0x03) << 26))
#define USB_PORTSC1_PTS_2            ((uint32_t)(1<<25))
#define USB_PORTSC1_PFSC            ((uint32_t)(1<<24))
#define USB_PORTSC1_PHCD            ((uint32_t)(1<<23))
#define USB_PORTSC1_WKOC            ((uint32_t)(1<<22))
#define USB_PORTSC1_WKDC            ((uint32_t)(1<<21))
#define USB_PORTSC1_WKCN            ((uint32_t)(1<<20))
#define USB_PORTSC1_PTC(n)            ((uint32_t)(((n) & 0x0F) << 16))
#define USB_PORTSC1_PIC(n)            ((uint32_t)(((n) & 0x03) << 14))
#define USB_PORTSC1_PO                ((uint32_t)(1<<13))
#define USB_PORTSC1_PP                ((uint32_t)(1<<12))
#define USB_PORTSC1_LS(n)            ((uint32_t)(((n) & 0x03) << 10))
#define USB_PORTSC1_HSP                ((uint32_t)(1<<9))
#define USB_PORTSC1_PR                ((uint32_t)(1<<8))
#define USB_PORTSC1_SUSP            ((uint32_t)(1<<7))
#define USB_PORTSC1_FPR                ((uint32_t)(1<<6))
#define USB_PORTSC1_OCC                ((uint32_t)(1<<5))
#define USB_PORTSC1_OCA                ((uint32_t)(1<<4))
#define USB_PORTSC1_PEC                ((uint32_t)(1<<3))
#define USB_PORTSC1_PE                ((uint32_t)(1<<2))
#define USB_PORTSC1_CSC                ((uint32_t)(1<<1))
#define USB_PORTSC1_CCS                ((uint32_t)(1<<0))
#define USB_USBMODE_SDIS            ((uint32_t)(1<<4))
#define USB_USBMODE_SLOM            ((uint32_t)(1<<3))
#define USB_USBMODE_ES                ((uint32_t)(1<<2))
#define USB_USBMODE_CM(n)            ((uint32_t)(((n) & 0x03) << 0))
#define USB_USBMODE_CM_MASK            USB_USBMODE_CM(3)
#define USB_ENDPTCTRL_TXE            ((uint32_t)(1<<23))
#define USB_ENDPTCTRL_TXR            ((uint32_t)(1<<22))
#define USB_ENDPTCTRL_TXI            ((uint32_t)(1<<21))
#define USB_ENDPTCTRL_TXT(n)            ((uint32_t)(((n) & 0x03) << 18))
#define USB_ENDPTCTRL_TXD            ((uint32_t)(1<<17))
#define USB_ENDPTCTRL_TXS            ((uint32_t)(1<<16))
#define USB_ENDPTCTRL_RXE            ((uint32_t)(1<<7))
#define USB_ENDPTCTRL_RXR            ((uint32_t)(1<<6))
#define USB_ENDPTCTRL_RXI            ((uint32_t)(1<<5))
#define USB_ENDPTCTRL_RXT(n)            ((uint32_t)(((n) & 0x03) << 2))
#define USB_ENDPTCTRL_RXD            ((uint32_t)(1<<1))
#define USB_ENDPTCTRL_RXS            ((uint32_t)(1<<0))
#define USB_GPTIMERCTRL_GPTRUN            ((uint32_t)(1<<31))
#define USB_GPTIMERCTRL_GPTRST            ((uint32_t)(1<<30))
#define USB_GPTIMERCTRL_GPTMODE            ((uint32_t)(1<<24))
#define USB_GPTIMERCTRL_GPTCNT(n)        ((uint32_t)(((n) & 0xFFFFFF) << 0))

// 43.3: page 2474
#define IMXRT_USBPHY1        (*(IMXRT_REGISTER32_t *)IMXRT_USBPHY1_ADDRESS)
#define USBPHY1_PWD            (IMXRT_USBPHY1.offset000)
#define USBPHY1_PWD_SET            (IMXRT_USBPHY1.offset004)
#define USBPHY1_PWD_CLR            (IMXRT_USBPHY1.offset008)
#define USBPHY1_PWD_TOG            (IMXRT_USBPHY1.offset00C)
#define USBPHY1_TX            (IMXRT_USBPHY1.offset010)
#define USBPHY1_TX_SET            (IMXRT_USBPHY1.offset014)
#define USBPHY1_TX_CLR            (IMXRT_USBPHY1.offset018)
#define USBPHY1_TX_TOG            (IMXRT_USBPHY1.offset01C)
#define USBPHY1_RX            (IMXRT_USBPHY1.offset020)
#define USBPHY1_RX_SET            (IMXRT_USBPHY1.offset024)
#define USBPHY1_RX_CLR            (IMXRT_USBPHY1.offset028)
#define USBPHY1_RX_TOG            (IMXRT_USBPHY1.offset02C)
#define USBPHY1_CTRL            (IMXRT_USBPHY1.offset030)
#define USBPHY1_CTRL_SET        (IMXRT_USBPHY1.offset034)
#define USBPHY1_CTRL_CLR        (IMXRT_USBPHY1.offset038)
#define USBPHY1_CTRL_TOG        (IMXRT_USBPHY1.offset03C)
#define USBPHY1_STATUS            (IMXRT_USBPHY1.offset040)
#define USBPHY1_DEBUG            (IMXRT_USBPHY1.offset050)
#define USBPHY1_DEBUG_SET        (IMXRT_USBPHY1.offset054)
#define USBPHY1_DEBUG_CLR        (IMXRT_USBPHY1.offset058)
#define USBPHY1_DEBUG_TOG        (IMXRT_USBPHY1.offset05C)
#define USBPHY1_DEBUG0_STATUS        (IMXRT_USBPHY1.offset060)
#define USBPHY1_DEBUG1            (IMXRT_USBPHY1.offset070)
#define USBPHY1_DEBUG1_SET        (IMXRT_USBPHY1.offset074)
#define USBPHY1_DEBUG1_CLR        (IMXRT_USBPHY1.offset078)
#define USBPHY1_DEBUG1_TOG        (IMXRT_USBPHY1.offset07C)
#define USBPHY1_VERSION            (IMXRT_USBPHY1.offset080)
#define IMXRT_USBPHY2        (*(IMXRT_REGISTER32_t *)IMXRT_USBPHY2_ADDRESS)
#define USBPHY2_PWD            (IMXRT_USBPHY2.offset000)
#define USBPHY2_PWD_SET            (IMXRT_USBPHY2.offset004)
#define USBPHY2_PWD_CLR            (IMXRT_USBPHY2.offset008)
#define USBPHY2_PWD_TOG            (IMXRT_USBPHY2.offset00C)
#define USBPHY2_TX            (IMXRT_USBPHY2.offset010)
#define USBPHY2_TX_SET            (IMXRT_USBPHY2.offset014)
#define USBPHY2_TX_CLR            (IMXRT_USBPHY2.offset018)
#define USBPHY2_TX_TOG            (IMXRT_USBPHY2.offset01C)
#define USBPHY2_RX            (IMXRT_USBPHY2.offset020)
#define USBPHY2_RX_SET            (IMXRT_USBPHY2.offset024)
#define USBPHY2_RX_CLR            (IMXRT_USBPHY2.offset028)
#define USBPHY2_RX_TOG            (IMXRT_USBPHY2.offset02C)
#define USBPHY2_CTRL            (IMXRT_USBPHY2.offset030)
#define USBPHY2_CTRL_SET        (IMXRT_USBPHY2.offset034)
#define USBPHY2_CTRL_CLR        (IMXRT_USBPHY2.offset038)
#define USBPHY2_CTRL_TOG        (IMXRT_USBPHY2.offset03C)
#define USBPHY2_STATUS            (IMXRT_USBPHY2.offset040)
#define USBPHY2_DEBUG            (IMXRT_USBPHY2.offset050)
#define USBPHY2_DEBUG_SET        (IMXRT_USBPHY2.offset054)
#define USBPHY2_DEBUG_CLR        (IMXRT_USBPHY2.offset058)
#define USBPHY2_DEBUG_TOG        (IMXRT_USBPHY2.offset05C)
#define USBPHY2_DEBUG0_STATUS        (IMXRT_USBPHY2.offset060)
#define USBPHY2_DEBUG1            (IMXRT_USBPHY2.offset070)
#define USBPHY2_DEBUG1_SET        (IMXRT_USBPHY2.offset074)
#define USBPHY2_DEBUG1_CLR        (IMXRT_USBPHY2.offset078)
#define USBPHY2_DEBUG1_TOG        (IMXRT_USBPHY2.offset07C)
#define USBPHY2_VERSION            (IMXRT_USBPHY2.offset080)
#define USBPHY_PWD_RXPWDRX            ((uint32_t)(1<<20))
#define USBPHY_PWD_RXPWDDIFF            ((uint32_t)(1<<19))
#define USBPHY_PWD_RXPWD1PT1            ((uint32_t)(1<<18))
#define USBPHY_PWD_RXPWDENV            ((uint32_t)(1<<17))
#define USBPHY_PWD_TXPWDV2I            ((uint32_t)(1<<12))
#define USBPHY_PWD_TXPWDIBIAS            ((uint32_t)(1<<11))
#define USBPHY_PWD_TXPWDFS            ((uint32_t)(1<<10))
#define USBPHY_TX_USBPHY_TX_EDGECTRL(n)        ((uint32_t)(((n) & 0x07) << 26))
#define USBPHY_TX_TXCAL45DP(n)            ((uint32_t)(((n) & 0x0F) << 16))
#define USBPHY_TX_TXCAL45DN(n)            ((uint32_t)(((n) & 0x0F) << 8))
#define USBPHY_TX_D_CAL(n)            ((uint32_t)(((n) & 0x0F) << 0))
#define USBPHY_RX_RXDBYPASS            ((uint32_t)(1<<22))
#define USBPHY_RX_DISCONADJ(n)            ((uint32_t)(((n) & 0x07) << 4))
#define USBPHY_RX_ENVADJ(n)            ((uint32_t)(((n) & 0x07) << 0))
#define USBPHY_CTRL_SFTRST            ((uint32_t)(1<<31))
#define USBPHY_CTRL_CLKGATE            ((uint32_t)(1<<30))
#define USBPHY_CTRL_UTMI_SUSPENDM        ((uint32_t)(1<<29))
#define USBPHY_CTRL_HOST_FORCE_LS_SE0        ((uint32_t)(1<<28))
#define USBPHY_CTRL_OTG_ID_VALUE        ((uint32_t)(1<<27))
#define USBPHY_CTRL_FSDLL_RST_EN        ((uint32_t)(1<<24))
#define USBPHY_CTRL_ENVBUSCHG_WKUP        ((uint32_t)(1<<23))
#define USBPHY_CTRL_ENIDCHG_WKUP        ((uint32_t)(1<<22))
#define USBPHY_CTRL_ENDPDMCHG_WKUP        ((uint32_t)(1<<21))
#define USBPHY_CTRL_ENAUTOCLR_PHY_PWD        ((uint32_t)(1<<20))
#define USBPHY_CTRL_ENAUTOCLR_CLKGATE        ((uint32_t)(1<<19))
#define USBPHY_CTRL_ENAUTO_PWRON_PLL        ((uint32_t)(1<<18))
#define USBPHY_CTRL_WAKEUP_IRQ            ((uint32_t)(1<<17))
#define USBPHY_CTRL_ENIRQWAKEUP            ((uint32_t)(1<<16))
#define USBPHY_CTRL_ENUTMILEVEL3        ((uint32_t)(1<<15))
#define USBPHY_CTRL_ENUTMILEVEL2        ((uint32_t)(1<<14))
#define USBPHY_CTRL_DATA_ON_LRADC        ((uint32_t)(1<<13))
#define USBPHY_CTRL_DEVPLUGIN_IRQ        ((uint32_t)(1<<12))
#define USBPHY_CTRL_ENIRQDEVPLUGIN        ((uint32_t)(1<<11))
#define USBPHY_CTRL_RESUME_IRQ            ((uint32_t)(1<<10))
#define USBPHY_CTRL_ENIRQRESUMEDETECT        ((uint32_t)(1<<9))
#define USBPHY_CTRL_RESUMEIRQSTICKY        ((uint32_t)(1<<8))
#define USBPHY_CTRL_ENOTGIDDETECT        ((uint32_t)(1<<7))
#define USBPHY_CTRL_OTG_ID_CHG_IRQ        ((uint32_t)(1<<6))
#define USBPHY_CTRL_DEVPLUGIN_POLARITY        ((uint32_t)(1<<5))
#define USBPHY_CTRL_ENDEVPLUGINDETECT        ((uint32_t)(1<<4))
#define USBPHY_CTRL_HOSTDISCONDETECT_IRQ    ((uint32_t)(1<<3))
#define USBPHY_CTRL_ENIRQHOSTDISCON        ((uint32_t)(1<<2))
#define USBPHY_CTRL_ENHOSTDISCONDETECT        ((uint32_t)(1<<1))
#define USBPHY_CTRL_ENOTG_ID_CHG_IRQ        ((uint32_t)(1<<0))

// 26.9.1.1: page 1553
#define IMXRT_USDHC1        (*(IMXRT_REGISTER32_t *)IMXRT_USDHC1_ADDRESS)
// USDHC1 requires CCM_CCGR6_USDHC1
#define USDHC1_DS_ADDR            (IMXRT_USDHC1.offset000)
#define USDHC1_BLK_ATT            (IMXRT_USDHC1.offset004)
#define USDHC1_CMD_ARG            (IMXRT_USDHC1.offset008)
#define USDHC1_CMD_XFR_TYP        (IMXRT_USDHC1.offset00C)
#define USDHC1_CMD_RSP0            (IMXRT_USDHC1.offset010)
#define USDHC1_CMD_RSP1            (IMXRT_USDHC1.offset014)
#define USDHC1_CMD_RSP2            (IMXRT_USDHC1.offset018)
#define USDHC1_CMD_RSP3            (IMXRT_USDHC1.offset01C)
#define USDHC1_DATA_BUFF_ACC_PORT    (IMXRT_USDHC1.offset020)
#define USDHC1_PRES_STATE        (IMXRT_USDHC1.offset024)
#define USDHC1_PROT_CTRL        (IMXRT_USDHC1.offset028)
#define USDHC1_SYS_CTRL            (IMXRT_USDHC1.offset02C)
#define USDHC1_INT_STATUS        (IMXRT_USDHC1.offset030)
#define USDHC1_INT_STATUS_EN        (IMXRT_USDHC1.offset034)
#define USDHC1_INT_SIGNAL_EN        (IMXRT_USDHC1.offset038)
#define USDHC1_AUTOCMD12_ERR_STATUS    (IMXRT_USDHC1.offset03C)
#define USDHC1_HOST_CTRL_CAP        (IMXRT_USDHC1.offset040)
#define USDHC1_WTMK_LVL            (IMXRT_USDHC1.offset044)
#define USDHC1_MIX_CTRL            (IMXRT_USDHC1.offset048)
#define USDHC1_FORCE_EVENT        (IMXRT_USDHC1.offset050)
#define USDHC1_ADMA_ERR_STATUS        (IMXRT_USDHC1.offset054)
#define USDHC1_ADMA_SYS_ADDR        (IMXRT_USDHC1.offset058)
#define USDHC1_DLL_CTRL            (IMXRT_USDHC1.offset060)
#define USDHC1_DLL_STATUS        (IMXRT_USDHC1.offset064)
#define USDHC1_CLK_TUNE_CTRL_STATUS    (IMXRT_USDHC1.offset068)
#define USDHC1_VEND_SPEC        (IMXRT_USDHC1.offset0C0)
#define USDHC1_MMC_BOOT            (IMXRT_USDHC1.offset0C4)
#define USDHC1_VEND_SPEC2        (IMXRT_USDHC1.offset0C8)
#define USDHC1_TUNING_CTRL        (IMXRT_USDHC1.offset0CC)
#define IMXRT_USDHC2        (*(IMXRT_REGISTER32_t *)IMXRT_USDHC2_ADDRESS)
// USDHC2 requires CCM_CCGR6_USDHC2
#define USDHC2_DS_ADDR            (IMXRT_USDHC2.offset000)
#define USDHC2_BLK_ATT            (IMXRT_USDHC2.offset004)
#define USDHC2_CMD_ARG            (IMXRT_USDHC2.offset008)
#define USDHC2_CMD_XFR_TYP        (IMXRT_USDHC2.offset00C)
#define USDHC2_CMD_RSP0            (IMXRT_USDHC2.offset010)
#define USDHC2_CMD_RSP1            (IMXRT_USDHC2.offset014)
#define USDHC2_CMD_RSP2            (IMXRT_USDHC2.offset018)
#define USDHC2_CMD_RSP3            (IMXRT_USDHC2.offset01C)
#define USDHC2_DATA_BUFF_ACC_PORT    (IMXRT_USDHC2.offset020)
#define USDHC2_PRES_STATE        (IMXRT_USDHC2.offset024)
#define USDHC2_PROT_CTRL        (IMXRT_USDHC2.offset028)
#define USDHC2_SYS_CTRL            (IMXRT_USDHC2.offset02C)
#define USDHC2_INT_STATUS        (IMXRT_USDHC2.offset030)
#define USDHC2_INT_STATUS_EN        (IMXRT_USDHC2.offset034)
#define USDHC2_INT_SIGNAL_EN        (IMXRT_USDHC2.offset038)
#define USDHC2_AUTOCMD12_ERR_STATUS    (IMXRT_USDHC2.offset03C)
#define USDHC2_HOST_CTRL_CAP        (IMXRT_USDHC2.offset040)
#define USDHC2_WTMK_LVL            (IMXRT_USDHC2.offset044)
#define USDHC2_MIX_CTRL            (IMXRT_USDHC2.offset048)
#define USDHC2_FORCE_EVENT        (IMXRT_USDHC2.offset050)
#define USDHC2_ADMA_ERR_STATUS        (IMXRT_USDHC2.offset054)
#define USDHC2_ADMA_SYS_ADDR        (IMXRT_USDHC2.offset058)
#define USDHC2_DLL_CTRL            (IMXRT_USDHC2.offset060)
#define USDHC2_DLL_STATUS        (IMXRT_USDHC2.offset064)
#define USDHC2_CLK_TUNE_CTRL_STATUS    (IMXRT_USDHC2.offset068)
#define USDHC2_VEND_SPEC        (IMXRT_USDHC2.offset0C0)
#define USDHC2_MMC_BOOT            (IMXRT_USDHC2.offset0C4)
#define USDHC2_VEND_SPEC2        (IMXRT_USDHC2.offset0C8)
#define USDHC2_TUNING_CTRL        (IMXRT_USDHC2.offset0CC)

#include "ticks.h"
//#include "tusb.h"
#include "led.h"
#include "pendsv.h"
#include "modmachine.h"

#if MICROPY_PY_LWIP
#include "lwip/init.h"
#include "lwip/apps/mdns.h"
#endif
#include "systick.h"
#include "extmod/modnetwork.h"

__attribute__((section(".startup"), optimize("no-tree-loop-distribute-patterns")))
void ResetHandler(void)
{
	unsigned int i;

#if defined(__IMXRT1062__)
	IOMUXC_GPR_GPR17 = (uint32_t)&_flexram_bank_config;
	IOMUXC_GPR_GPR16 = 0x00200007;
	IOMUXC_GPR_GPR14 = 0x00AA0000;
	__asm__ volatile("mov sp, %0" : : "r" ((uint32_t)&_estack) : );
	__asm__ volatile("dsb":::"memory");
	__asm__ volatile("isb":::"memory");
#endif
	startup_early_hook(); // must be in FLASHMEM, as ITCM is not yet initialized!
	PMU_MISC0_SET = 1<<3; //Use bandgap-based bias currents for best performance (Page 1175)
	// pin 13 - if startup crashes, use this to turn on the LED early for troubleshooting
	//IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_03 = 5;
	//IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_03 = IOMUXC_PAD_DSE(7);
	//IOMUXC_GPR_GPR27 = 0xFFFFFFFF;
	//GPIO7_GDIR |= (1<<3);
	//GPIO7_DR_SET = (1<<3); // digitalWrite(13, HIGH);

	// Initialize memory
	memory_copy(&_stext, &_stextload, &_etext);
	memory_copy(&_sdata, &_sdataload, &_edata);
	memory_clear(&_sbss, &_ebss);

	// enable FPU
	SCB_CPACR = 0x00F00000;

	// set up blank interrupt & exception vector table
	for (i=0; i < NVIC_NUM_INTERRUPTS + 16; i++) _VectorsRam[i] = &unused_interrupt_vector;
	for (i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
	SCB_VTOR = (uint32_t)_VectorsRam;

	reset_PFD();

	// enable exception handling
	SCB_SHCSR |= SCB_SHCSR_MEMFAULTENA | SCB_SHCSR_BUSFAULTENA | SCB_SHCSR_USGFAULTENA;
    
	// Configure clocks
	// TODO: make sure all affected peripherals are turned off!
	// PIT & GPT timers to run from 24 MHz clock (independent of CPU speed)
	CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL_orig;
	// UARTs run from 24 MHz clock (works if PLL3 off or bypassed)
	CCM_CSCDR1 = (CCM_CSCDR1 & ~CCM_CSCDR1_UART_CLK_PODF(0x3F)) | CCM_CSCDR1_UART_CLK_SEL_orig;

#if defined(__IMXRT1062__)
	// Use fast GPIO6, GPIO7, GPIO8, GPIO9
	IOMUXC_GPR_GPR26 = 0xFFFFFFFF;
	IOMUXC_GPR_GPR27 = 0xFFFFFFFF;
	IOMUXC_GPR_GPR28 = 0xFFFFFFFF;
	IOMUXC_GPR_GPR29 = 0xFFFFFFFF;
#endif

	// must enable PRINT_DEBUG_STUFF in debug/print.h
	printf_debug_init();
	printf("\n***********IMXRT Startup**********\n");
	printf("test %d %d %d\n", 1, -1234567, 3);

    board_init();
	configure_cache();
	configure_systick();
    
	usb_pll_start();	
	reset_PFD(); //TODO: is this really needed?
#ifdef F_CPU
	set_arm_clock(F_CPU);
#endif

	// Undo PIT timer usage by ROM startup
	CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	PIT_MCR = 0;
	PIT_TCTRL0 = 0;
	PIT_TCTRL1 = 0;
	PIT_TCTRL2 = 0;
	PIT_TCTRL3 = 0;

	// initialize RTC
	if (!(SNVS_LPCR & SNVS_LPCR_SRTC_ENV)) {
		// if SRTC isn't running, start it with default Jan 1, 2019
		SNVS_LPSRTCLR = 1546300800u << 15;
		SNVS_LPSRTCMR = 1546300800u >> 17;
		SNVS_LPCR |= SNVS_LPCR_SRTC_ENV;
	}
	SNVS_HPCR |= SNVS_HPCR_RTC_EN | SNVS_HPCR_HP_TS;

#ifdef ARDUINO_TEENSY41
	configure_external_ram();
#endif
    ticks_init();
    //tusb_init();
    led_init();
    pendsv_init();
	analog_init();
	pwm_init();
	tempmon_init();
	startup_middle_hook();

#if !defined(TEENSY_INIT_USB_DELAY_BEFORE)
        #define TEENSY_INIT_USB_DELAY_BEFORE 20
#endif
#if !defined(TEENSY_INIT_USB_DELAY_AFTER)
        #define TEENSY_INIT_USB_DELAY_AFTER 280
#endif
	// for background about this startup delay, please see these conversations
	// https://forum.pjrc.com/threads/36606?p=113980&viewfull=1#post113980
	// https://forum.pjrc.com/threads/31290?p=87273&viewfull=1#post87273

	while (millis() < TEENSY_INIT_USB_DELAY_BEFORE) ; // wait
	usb_init();
	while (millis() < TEENSY_INIT_USB_DELAY_AFTER + TEENSY_INIT_USB_DELAY_BEFORE) ; // wait
	//printf("before C++ constructors\n");
	startup_late_hook();
	__libc_init_array();
	//printf("after C++ constructors\n");
	//printf("before setup\n");
	main();
	
	while (1) asm("WFI");
}




// ARM SysTick is used for most Ardiuno timing functions, delay(), millis(),
// micros().  SysTick can run from either the ARM core clock, or from an
// "external" clock.  NXP documents it as "24 MHz XTALOSC can be the external
// clock source of SYSTICK" (RT1052 ref manual, rev 1, page 411).  However,
// NXP actually hid an undocumented divide-by-240 circuit in the hardware, so
// the external clock is really 100 kHz.  We use this clock rather than the
// ARM clock, to allow SysTick to maintain correct timing even when we change
// the ARM clock to run at different speeds.
#define SYSTICK_EXT_FREQ 100000

extern volatile uint32_t systick_cycle_count;
static void configure_systick(void)
{
	_VectorsRam[14] = pendablesrvreq_isr;
	_VectorsRam[15] = systick_isr;
	SYST_RVR = (SYSTICK_EXT_FREQ / 1000) - 1;
	SYST_CVR = 0;
	SYST_CSR = SYST_CSR_TICKINT | SYST_CSR_ENABLE;
	SCB_SHPR3 = 0x20200000;  // Systick, pendablesrvreq_isr = priority 32;
	ARM_DEMCR |= ARM_DEMCR_TRCENA;
	ARM_DWT_CTRL |= ARM_DWT_CTRL_CYCCNTENA; // turn on cycle counter
	systick_cycle_count = ARM_DWT_CYCCNT; // compiled 0, corrected w/1st systick
}

#define CCM_CSCMR1_PERCLK_CLK_SEL_orig        ((uint32_t)(1<<6))
#define CCM_CSCDR1_UART_CLK_SEL_orig            ((uint32_t)(1<<6))
//need to fix
#define CCM_ANALOG_PLL_USB1_DIV_SELECT_orig        ((uint32_t)(1<<1))
#define CCM_ANALOG_PLL_USB1_BYPASS_orig        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_USB1_POWER_orig        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_USB1_ENABLE_orig        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS_orig        ((uint32_t)(1<<6))
#define CCM_ANALOG_PLL_USB1_LOCK_orig        ((uint32_t)(1<<31))
// concise defines for SCB_MPU_RASR and SCB_MPU_RBAR, ARM DDI0403E, pg 696
#define NOEXEC		SCB_MPU_RASR_XN
#define READONLY	SCB_MPU_RASR_AP(7)
#define READWRITE	SCB_MPU_RASR_AP(3)
#define NOACCESS	SCB_MPU_RASR_AP(0)
#define MEM_CACHE_WT	SCB_MPU_RASR_TEX(0) | SCB_MPU_RASR_C
#define MEM_CACHE_WB	SCB_MPU_RASR_TEX(0) | SCB_MPU_RASR_C | SCB_MPU_RASR_B
#define MEM_CACHE_WBWA	SCB_MPU_RASR_TEX(1) | SCB_MPU_RASR_C | SCB_MPU_RASR_B
#define MEM_NOCACHE	SCB_MPU_RASR_TEX(1)
#define DEV_NOCACHE	SCB_MPU_RASR_TEX(2)
#define SIZE_32B	(SCB_MPU_RASR_SIZE(4) | SCB_MPU_RASR_ENABLE)
#define SIZE_64B	(SCB_MPU_RASR_SIZE(5) | SCB_MPU_RASR_ENABLE)
#define SIZE_128B	(SCB_MPU_RASR_SIZE(6) | SCB_MPU_RASR_ENABLE)
#define SIZE_256B	(SCB_MPU_RASR_SIZE(7) | SCB_MPU_RASR_ENABLE)
#define SIZE_512B	(SCB_MPU_RASR_SIZE(8) | SCB_MPU_RASR_ENABLE)
#define SIZE_1K		(SCB_MPU_RASR_SIZE(9) | SCB_MPU_RASR_ENABLE)
#define SIZE_2K		(SCB_MPU_RASR_SIZE(10) | SCB_MPU_RASR_ENABLE)
#define SIZE_4K		(SCB_MPU_RASR_SIZE(11) | SCB_MPU_RASR_ENABLE)
#define SIZE_8K		(SCB_MPU_RASR_SIZE(12) | SCB_MPU_RASR_ENABLE)
#define SIZE_16K	(SCB_MPU_RASR_SIZE(13) | SCB_MPU_RASR_ENABLE)
#define SIZE_32K	(SCB_MPU_RASR_SIZE(14) | SCB_MPU_RASR_ENABLE)
#define SIZE_64K	(SCB_MPU_RASR_SIZE(15) | SCB_MPU_RASR_ENABLE)
#define SIZE_128K	(SCB_MPU_RASR_SIZE(16) | SCB_MPU_RASR_ENABLE)
#define SIZE_256K	(SCB_MPU_RASR_SIZE(17) | SCB_MPU_RASR_ENABLE)
#define SIZE_512K	(SCB_MPU_RASR_SIZE(18) | SCB_MPU_RASR_ENABLE)
#define SIZE_1M		(SCB_MPU_RASR_SIZE(19) | SCB_MPU_RASR_ENABLE)
#define SIZE_2M		(SCB_MPU_RASR_SIZE(20) | SCB_MPU_RASR_ENABLE)
#define SIZE_4M		(SCB_MPU_RASR_SIZE(21) | SCB_MPU_RASR_ENABLE)
#define SIZE_8M		(SCB_MPU_RASR_SIZE(22) | SCB_MPU_RASR_ENABLE)
#define SIZE_16M	(SCB_MPU_RASR_SIZE(23) | SCB_MPU_RASR_ENABLE)
#define SIZE_32M	(SCB_MPU_RASR_SIZE(24) | SCB_MPU_RASR_ENABLE)
#define SIZE_64M	(SCB_MPU_RASR_SIZE(25) | SCB_MPU_RASR_ENABLE)
#define SIZE_128M	(SCB_MPU_RASR_SIZE(26) | SCB_MPU_RASR_ENABLE)
#define SIZE_256M	(SCB_MPU_RASR_SIZE(27) | SCB_MPU_RASR_ENABLE)
#define SIZE_512M	(SCB_MPU_RASR_SIZE(28) | SCB_MPU_RASR_ENABLE)
#define SIZE_1G		(SCB_MPU_RASR_SIZE(29) | SCB_MPU_RASR_ENABLE)
#define SIZE_2G		(SCB_MPU_RASR_SIZE(30) | SCB_MPU_RASR_ENABLE)
#define SIZE_4G		(SCB_MPU_RASR_SIZE(31) | SCB_MPU_RASR_ENABLE)
#define REGION(n)	(SCB_MPU_RBAR_REGION(n) | SCB_MPU_RBAR_VALID)

FLASHMEM void configure_cache(void)
{
	//printf("MPU_TYPE = %08lX\n", SCB_MPU_TYPE);
	//printf("CCR = %08lX\n", SCB_CCR);

	// TODO: check if caches already active - skip?

	SCB_MPU_CTRL = 0; // turn off MPU

	uint32_t i = 0;
	SCB_MPU_RBAR = 0x00000000 | REGION(i++); //https://developer.arm.com/docs/146793866/10/why-does-the-cortex-m7-initiate-axim-read-accesses-to-memory-addresses-that-do-not-fall-under-a-defined-mpu-region
	SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_4G;
	
	SCB_MPU_RBAR = 0x00000000 | REGION(i++); // ITCM
	SCB_MPU_RASR = MEM_NOCACHE | READWRITE | SIZE_512K;

	// TODO: trap regions should be created last, because the hardware gives
	//  priority to the higher number ones.
	SCB_MPU_RBAR = 0x00000000 | REGION(i++); // trap NULL pointer deref
	SCB_MPU_RASR =  DEV_NOCACHE | NOACCESS | SIZE_32B;

	SCB_MPU_RBAR = 0x00200000 | REGION(i++); // Boot ROM
	SCB_MPU_RASR = MEM_CACHE_WT | READONLY | SIZE_128K;

	SCB_MPU_RBAR = 0x20000000 | REGION(i++); // DTCM
	SCB_MPU_RASR = MEM_NOCACHE | READWRITE | NOEXEC | SIZE_512K;
	
	SCB_MPU_RBAR = ((uint32_t)&_ebss) | REGION(i++); // trap stack overflow
	SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_32B;

	SCB_MPU_RBAR = 0x20200000 | REGION(i++); // RAM (AXI bus)
	SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_1M;

	SCB_MPU_RBAR = 0x40000000 | REGION(i++); // Peripherals
	SCB_MPU_RASR = DEV_NOCACHE | READWRITE | NOEXEC | SIZE_64M;

	SCB_MPU_RBAR = 0x60000000 | REGION(i++); // QSPI Flash
	SCB_MPU_RASR = MEM_CACHE_WBWA | READONLY | SIZE_16M;

	SCB_MPU_RBAR = 0x70000000 | REGION(i++); // FlexSPI2
	SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_16M;

	// TODO: protect access to power supply config

	SCB_MPU_CTRL = SCB_MPU_CTRL_ENABLE;

	// cache enable, ARM DDI0403E, pg 628
	asm("dsb");
	asm("isb");
	SCB_CACHE_ICIALLU = 0;

	asm("dsb");
	asm("isb");
	SCB_CCR |= (SCB_CCR_IC | SCB_CCR_DC);
}

#ifdef ARDUINO_TEENSY41

#define LUT0(opcode, pads, operand) (FLEXSPI_LUT_INSTRUCTION((opcode), (pads), (operand)))
#define LUT1(opcode, pads, operand) (FLEXSPI_LUT_INSTRUCTION((opcode), (pads), (operand)) << 16)
#define CMD_SDR         FLEXSPI_LUT_OPCODE_CMD_SDR
#define ADDR_SDR        FLEXSPI_LUT_OPCODE_RADDR_SDR
#define READ_SDR        FLEXSPI_LUT_OPCODE_READ_SDR
#define WRITE_SDR       FLEXSPI_LUT_OPCODE_WRITE_SDR
#define DUMMY_SDR       FLEXSPI_LUT_OPCODE_DUMMY_SDR
#define PINS1           FLEXSPI_LUT_NUM_PADS_1
#define PINS4           FLEXSPI_LUT_NUM_PADS_4

FLASHMEM static void flexspi2_command(uint32_t index, uint32_t addr)
{
	FLEXSPI2_IPCR0 = addr;
	FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
}

FLASHMEM static uint32_t flexspi2_psram_id(uint32_t addr)
{
	FLEXSPI2_IPCR0 = addr;
	FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(3) | FLEXSPI_IPCR1_IDATSZ(4);
	FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	uint32_t id = FLEXSPI2_RFDR0;
	FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE | FLEXSPI_INTR_IPRXWA;
	return id & 0xFFFF;
}

FLASHMEM void configure_external_ram()
{
	// initialize pins
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_22 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_23 = 0x110F9; // keeper, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_24 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_25 = 0x100F9; // strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_26 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_27 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_28 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_29 = 0x170F9; // 47K pullup, strong drive, max speed, hyst

	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_22 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SS1_B (Flash)
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_23 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DQS
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_24 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SS0_B (RAM)
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_25 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SCLK
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_26 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA0
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_27 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA1
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_28 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA2
	IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_29 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA3

	IOMUXC_FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT = 1; // GPIO_EMC_23 for Mode: ALT8, pg 986
	IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT = 1; // GPIO_EMC_26 for Mode: ALT8
	IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT = 1; // GPIO_EMC_27 for Mode: ALT8
	IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT = 1; // GPIO_EMC_28 for Mode: ALT8
	IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT = 1; // GPIO_EMC_29 for Mode: ALT8
	IOMUXC_FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT = 1; // GPIO_EMC_25 for Mode: ALT8

	// turn on clock  (TODO: increase clock speed later, slow & cautious for first release)
	CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
		| CCM_CBCMR_FLEXSPI2_PODF(5) | CCM_CBCMR_FLEXSPI2_CLK_SEL(3); // 88 MHz
	CCM_CCGR7 |= CCM_CCGR7_FLEXSPI2(CCM_CCGR_ON);

	FLEXSPI2_MCR0 |= FLEXSPI_MCR0_MDIS;
	FLEXSPI2_MCR0 = (FLEXSPI2_MCR0 & ~(FLEXSPI_MCR0_AHBGRANTWAIT_MASK
		 | FLEXSPI_MCR0_IPGRANTWAIT_MASK | FLEXSPI_MCR0_SCKFREERUNEN
		 | FLEXSPI_MCR0_COMBINATIONEN | FLEXSPI_MCR0_DOZEEN
		 | FLEXSPI_MCR0_HSEN | FLEXSPI_MCR0_ATDFEN_orig | FLEXSPI_MCR0_ARDFEN_orig
		 | FLEXSPI_MCR0_RXCLKSRC_MASK | FLEXSPI_MCR0_SWRESET))
		| FLEXSPI_MCR0_AHBGRANTWAIT(0xFF) | FLEXSPI_MCR0_IPGRANTWAIT(0xFF)
		| FLEXSPI_MCR0_RXCLKSRC(1) | FLEXSPI_MCR0_MDIS;
	FLEXSPI2_MCR1 = FLEXSPI_MCR1_SEQWAIT(0xFFFF) | FLEXSPI_MCR1_AHBBUSWAIT(0xFFFF);
	FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
		 | FLEXSPI_MCR2_SCKBDIFFOPT | FLEXSPI_MCR2_SAMEDEVICEEN
		 | FLEXSPI_MCR2_CLRLEARNPHASE | FLEXSPI_MCR2_CLRAHBBUFOPT))
		| FLEXSPI_MCR2_RESUMEWAIT(0x20) /*| FLEXSPI_MCR2_SAMEDEVICEEN*/;

	FLEXSPI2_AHBCR = FLEXSPI2_AHBCR & ~(FLEXSPI_AHBCR_READADDROPT | FLEXSPI_AHBCR_PREFETCHEN
		| FLEXSPI_AHBCR_BUFFERABLEEN | FLEXSPI_AHBCR_CACHABLEEN);
	uint32_t mask = (FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_PRIORITY_MASK
		| FLEXSPI_AHBRXBUFCR0_MSTRID_MASK | FLEXSPI_AHBRXBUFCR0_BUFSZ_MASK);
	FLEXSPI2_AHBRXBUF0CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
		| FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_BUFSZ(64);
	FLEXSPI2_AHBRXBUF1CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
		| FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_BUFSZ(64);
	FLEXSPI2_AHBRXBUF2CR0 = mask;
	FLEXSPI2_AHBRXBUF3CR0 = mask;

	// RX watermark = one 64 bit line
	FLEXSPI2_IPRXFCR = (FLEXSPI_IPRXFCR & 0xFFFFFFC0) | FLEXSPI_IPRXFCR_CLRIPRXF;
	// TX watermark = one 64 bit line
	FLEXSPI2_IPTXFCR = (FLEXSPI_IPTXFCR & 0xFFFFFFC0) | FLEXSPI_IPTXFCR_CLRIPTXF;

	FLEXSPI2_INTEN = 0;
	FLEXSPI2_FLSHA1CR0 = 0x2000; // 8 MByte
	FLEXSPI2_FLSHA1CR1 = FLEXSPI_FLSHCR1_CSINTERVAL(2)
		| FLEXSPI_FLSHCR1_TCSH(3) | FLEXSPI_FLSHCR1_TCSS(3);
	FLEXSPI2_FLSHA1CR2 = FLEXSPI_FLSHCR2_AWRSEQID(6) | FLEXSPI_FLSHCR2_AWRSEQNUM(0)
		| FLEXSPI_FLSHCR2_ARDSEQID(5) | FLEXSPI_FLSHCR2_ARDSEQNUM(0);

	FLEXSPI2_FLSHA2CR0 = 0x2000; // 8 MByte
	FLEXSPI2_FLSHA2CR1 = FLEXSPI_FLSHCR1_CSINTERVAL(2)
		| FLEXSPI_FLSHCR1_TCSH(3) | FLEXSPI_FLSHCR1_TCSS(3);
	FLEXSPI2_FLSHA2CR2 = FLEXSPI_FLSHCR2_AWRSEQID(6) | FLEXSPI_FLSHCR2_AWRSEQNUM(0)
		| FLEXSPI_FLSHCR2_ARDSEQID(5) | FLEXSPI_FLSHCR2_ARDSEQNUM(0);

	FLEXSPI2_MCR0 &= ~FLEXSPI_MCR0_MDIS;

	FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	volatile uint32_t *luttable = &FLEXSPI2_LUT0;
	for (int i=0; i < 64; i++) luttable[i] = 0;
	FLEXSPI2_MCR0 |= FLEXSPI_MCR0_SWRESET;
	while (FLEXSPI2_MCR0 & FLEXSPI_MCR0_SWRESET) ; // wait

	FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;

	// cmd index 0 = exit QPI mode
	FLEXSPI2_LUT0 = LUT0(CMD_SDR, PINS4, 0xF5);
	// cmd index 1 = reset enable
	FLEXSPI2_LUT4 = LUT0(CMD_SDR, PINS1, 0x66);
	// cmd index 2 = reset
	FLEXSPI2_LUT8 = LUT0(CMD_SDR, PINS1, 0x99);
	// cmd index 3 = read ID bytes
	FLEXSPI2_LUT12 = LUT0(CMD_SDR, PINS1, 0x9F) | LUT1(DUMMY_SDR, PINS1, 24);
	FLEXSPI2_LUT13 = LUT0(READ_SDR, PINS1, 1);
	// cmd index 4 = enter QPI mode
	FLEXSPI2_LUT16 = LUT0(CMD_SDR, PINS1, 0x35);
	// cmd index 5 = read QPI
	FLEXSPI2_LUT20 = LUT0(CMD_SDR, PINS4, 0xEB) | LUT1(ADDR_SDR, PINS4, 24);
	FLEXSPI2_LUT21 = LUT0(DUMMY_SDR, PINS4, 6) | LUT1(READ_SDR, PINS4, 1);
	// cmd index 6 = write QPI
	FLEXSPI2_LUT24 = LUT0(CMD_SDR, PINS4, 0x38) | LUT1(ADDR_SDR, PINS4, 24);
	FLEXSPI2_LUT25 = LUT0(WRITE_SDR, PINS4, 1);

	// look for the first PSRAM chip
	flexspi2_command(0, 0); // exit quad mode
	flexspi2_command(1, 0); // reset enable
	flexspi2_command(2, 0); // reset (is this really necessary?)
	if (flexspi2_psram_id(0) == 0x5D0D) {
		// first PSRAM chip is present, look for a second PSRAM chip
		flexspi2_command(4, 0);
		flexspi2_command(0, 0x800000); // exit quad mode
		flexspi2_command(1, 0x800000); // reset enable
		flexspi2_command(2, 0x800000); // reset (is this really necessary?)
		if (flexspi2_psram_id(0x800000) == 0x5D0D) {
			flexspi2_command(4, 0x800000);
			// Two PSRAM chips are present, 16 MByte
			external_psram_size = 16;
		} else {
			// One PSRAM chip is present, 8 MByte
			external_psram_size = 8;
		}
		// TODO: zero uninitialized EXTMEM variables
		// TODO: copy from flash to initialize EXTMEM variables
		sm_set_pool(&extmem_smalloc_pool, &_extram_end,
			external_psram_size * 0x100000 -
			((uint32_t)&_extram_end - (uint32_t)&_extram_start),
			1, NULL);
	} else {
		// No PSRAM
		memset(&extmem_smalloc_pool, 0, sizeof(extmem_smalloc_pool));
	}
}

#endif // ARDUINO_TEENSY41


FLASHMEM void usb_pll_start()
{
	while (1) {
		uint32_t n = CCM_ANALOG_PLL_USB1; // pg 759
		printf("CCM_ANALOG_PLL_USB1=%08lX\n", n);
		if (n &CCM_ANALOG_PLL_USB1_DIV_SELECT_orig ) {
			printf("  ERROR, 528 MHz mode!\n"); // never supposed to use this mode!
			CCM_ANALOG_PLL_USB1_CLR = 0xC000;			// bypass 24 MHz
			CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_BYPASS_orig ;	// bypass
			CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_POWER_orig  |	// power down
				CCM_ANALOG_PLL_USB1_DIV_SELECT_orig |		// use 480 MHz
				CCM_ANALOG_PLL_USB1_ENABLE_orig  |			// disable
				CCM_ANALOG_PLL_USB1_EN_USB_CLKS_orig ;		// disable usb
			continue;
		}
		if (!(n & CCM_ANALOG_PLL_USB1_ENABLE_orig )) {
			printf("  enable PLL\n");
			// TODO: should this be done so early, or later??
			CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_ENABLE_orig ;
			continue;
		}
		if (!(n & CCM_ANALOG_PLL_USB1_POWER_orig )) {
			printf("  power up PLL\n");
			CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_POWER_orig ;
			continue;
		}
		if (!(n & CCM_ANALOG_PLL_USB1_LOCK_orig )) {
			printf("  wait for lock\n");
			continue;
		}
		if (n & CCM_ANALOG_PLL_USB1_BYPASS_orig ) {
			printf("  turn off bypass\n");
			CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_BYPASS_orig ;
			continue;
		}
		if (!(n & CCM_ANALOG_PLL_USB1_EN_USB_CLKS_orig )) {
			printf("  enable USB clocks\n");
			CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_EN_USB_CLKS_orig ;
			continue;
		}
		return; // everything is as it should be  :-)
	}
}

FLASHMEM void reset_PFD()
{	
	//Reset PLL2 PFDs, set default frequencies:
	CCM_ANALOG_PFD_528_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	CCM_ANALOG_PFD_528 = 0x2018101B; // PFD0:352, PFD1:594, PFD2:396, PFD3:297 MHz 	
	//PLL3:
	CCM_ANALOG_PFD_480_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);	
	CCM_ANALOG_PFD_480 = 0x13110D0C; // PFD0:720, PFD1:664, PFD2:508, PFD3:454 MHz
}

extern void usb_isr(void);

// Stack frame
//  xPSR
//  ReturnAddress
//  LR (R14) - typically FFFFFFF9 for IRQ or Exception
//  R12
//  R3
//  R2
//  R1
//  R0
// Code from :: https://community.nxp.com/thread/389002


__attribute__((naked))
void unused_interrupt_vector(void)
{
	uint32_t i, ipsr, crc, count;
	const uint32_t *stack;
	struct arm_fault_info_struct *info;
	const uint32_t *p, *end;

	// disallow any nested interrupts
	__disable_irq();
	// store crash report info
	asm volatile("mrs %0, ipsr\n" : "=r" (ipsr) :: "memory");
	info = (struct arm_fault_info_struct *)0x2027FF80;
	info->ipsr = ipsr;
	asm volatile("mrs %0, msp\n" : "=r" (stack) :: "memory");
	info->cfsr = SCB_CFSR;
	info->hfsr = SCB_HFSR;
	info->mmfar = SCB_MMFAR;
	info->bfar = SCB_BFAR;
	info->ret = stack[6];
	info->xpsr = stack[7];
	info->temp = tempmonGetTemp();
	info->time = rtc_get();
	info->len = sizeof(*info) / 4;
	// add CRC to crash report
	crc = 0xFFFFFFFF;
	p = (uint32_t *)info;
	end = p + (sizeof(*info) / 4 - 1);
	while (p < end) {
		crc ^= *p++;
		for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	}
	info->crc = crc;
	arm_dcache_flush_delete(info, sizeof(*info));

	// LED blink can show fault mode - by default we don't mess with pin 13
	//IOMUXC_SW_MUX_CTL_PAD_GPIO_B0_03 = 5; // pin 13
	//IOMUXC_SW_PAD_CTL_PAD_GPIO_B0_03 = IOMUXC_PAD_DSE(7);
	//GPIO7_GDIR |= (1 << 3);

	// reinitialize PIT timer and CPU clock
	CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	PIT_MCR = PIT_MCR_MDIS;
	CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL_orig;
  	if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	PIT_MCR = 0;
	PIT_TCTRL0 = 0;
	PIT_LDVAL0 = 2400000; // 2400000 = 100ms
	PIT_TCTRL0 = PIT_TCTRL_TEN;
	// disable all NVIC interrupts, as usb_isr() might use __enable_irq()
	NVIC_ICER0 = 0xFFFFFFFF;
	NVIC_ICER1 = 0xFFFFFFFF;
	NVIC_ICER2 = 0xFFFFFFFF;
	NVIC_ICER3 = 0xFFFFFFFF;
	NVIC_ICER4 = 0xFFFFFFFF;

	// keep USB running, so any unsent Serial.print() actually arrives in
	// the Arduino Serial Monitor, and we remain responsive to Upload
	// without requiring manual press of Teensy's pushbutton
	count = 0;
	while (1) {
		if (PIT_TFLG0) {
			//GPIO7_DR_TOGGLE = (1 << 3); // blink LED
			PIT_TFLG0 = 1;
			if (++count >= 80) break;  // reboot after 8 seconds
		}
		usb_isr();
		// TODO: should other data flush / cleanup tasks be done here?
		//   Transmit Serial1 - Serial8 data
		//   Complete writes to SD card
		//   Flush/sync LittleFS
	}
	// turn off USB
	USB1_USBCMD = USB_USBCMD_RST;
	USBPHY1_CTRL_SET = USBPHY_CTRL_SFTRST;
	while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	// reboot
	SRC_GPR5 = 0x0BAD00F1;
	SCB_AIRCR = 0x05FA0004;
	while (1) ;
}

__attribute__((section(".startup"), optimize("O1")))
static void memory_copy(uint32_t *dest, const uint32_t *src, uint32_t *dest_end)
{
	if (dest == src) return;
	while (dest < dest_end) {
		*dest++ = *src++;
	}
}

__attribute__((section(".startup"), optimize("O1")))
static void memory_clear(uint32_t *dest, uint32_t *dest_end)
{
	while (dest < dest_end) {
		*dest++ = 0;
	}
}



// syscall functions need to be in the same C file as the entry point "ResetVector"
// otherwise the linker will discard them in some cases.

#include <errno.h>

// from the linker script
extern unsigned long _heap_start;
extern unsigned long _heap_end;

char *__brkval = (char *)&_heap_start;

void * _sbrk(int incr)
{
        char *prev = __brkval;
        if (incr != 0) {
                if (prev + incr > (char *)&_heap_end) {
                        errno = ENOMEM;
                        return (void *)-1;
                }
                __brkval = prev + incr;
        }
        return prev;
}

__attribute__((weak))
int _read(int file, char *ptr, int len)
{
	return 0;
}

__attribute__((weak))
int _close(int fd)
{
	return -1;
}

#include <sys/stat.h>

__attribute__((weak))
int _fstat(int fd, struct stat *st)
{
	st->st_mode = S_IFCHR;
	return 0;
}

__attribute__((weak))
int _isatty(int fd)
{
	return 1;
}

__attribute__((weak))
int _lseek(int fd, long long offset, int whence)
{
	return -1;
}

__attribute__((weak))
void _exit(int status)
{
	while (1) asm ("WFI");
}

__attribute__((weak))
void __cxa_pure_virtual()
{
	while (1) asm ("WFI");
}

__attribute__((weak))
int __cxa_guard_acquire (char *g)
{
	return !(*g);
}

__attribute__((weak))
void __cxa_guard_release(char *g)
{
	*g = 1;
}

__attribute__((weak))
void abort(void)
{
	while (1) asm ("WFI");
}
