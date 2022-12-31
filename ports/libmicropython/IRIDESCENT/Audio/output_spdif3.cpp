/* Hardware-SPDIF for Teensy 4
 * Copyright (c) 2019, Frank Bösing, f.boesing@gmx.de
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, development funding notice, and this permission
 * notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
/*
 http://www.hardwarebook.info/S/PDIF
 https://www.mikrocontroller.net/articles/S/PDIF
 https://en.wikipedia.org/wiki/S/PDIF
*/
#include <Arduino.h>
#include "output_spdif3.h"

#if defined(__IMXRT1062__)

#include "utility/imxrt_hw.h"
#include "memcpy_audio.h"
#include <math.h>

audio_block_t * AudioOutputSPDIF3::block_left_1st = nullptr;
audio_block_t * AudioOutputSPDIF3::block_right_1st = nullptr;
audio_block_t * AudioOutputSPDIF3::block_left_2nd = nullptr;
audio_block_t * AudioOutputSPDIF3::block_right_2nd = nullptr;
bool AudioOutputSPDIF3::update_responsibility = false;
DMAChannel AudioOutputSPDIF3::dma(false);

DMAMEM  __attribute__((aligned(32)))
static int32_t SPDIF_tx_buffer[AUDIO_BLOCK_SAMPLES * 4];
DMAMEM  __attribute__((aligned(32)))
audio_block_t AudioOutputSPDIF3::block_silent;

#define SPDIF_DPLL_GAIN24 0
#define SPDIF_DPLL_GAIN16 1
#define SPDIF_DPLL_GAIN12 2
#define SPDIF_DPLL_GAIN8 3
#define SPDIF_DPLL_GAIN6 4
#define SPDIF_DPLL_GAIN4 5
#define SPDIF_DPLL_GAIN3 6
#define SPDIF_DPLL_GAIN1 7

#define SPDIF_DPLL_GAIN SPDIF_DPLL_GAIN8 //Actual Gain
static const uint8_t spdif_gain[8] = {24, 16, 12, 8, 6, 4, 3, 1};

FLASHMEM
void AudioOutputSPDIF3::begin(void)
{
#define I2S_RCR1_RFW(n)            ((uint32_t)n & 0x1f)    // Receive FIFO watermark
#define I2S_RCR2_DIV(n)            ((uint32_t)n & 0xff)    // Bit clock divide by (DIV+1)*2
#define I2S_RCR2_BCD            ((uint32_t)1<<24)    // Bit clock direction
#define I2S_RCR2_MSEL(n)        ((uint32_t)(n & 3)<<26)    // MCLK select, 0=bus clock, 1=I2S0_MCLK
#define I2S_RCR2_SYNC(n)        ((uint32_t)(n & 3)<<30)    // 0=async 1=sync with trasmitter
#define I2S_RCR3_RCE            ((uint32_t)0x10000)    // receive channel enable
#define I2S_RCR3_RCE_2CH        ((uint32_t)0x30000)
#define I2S_RCR3_RCE_3CH        ((uint32_t)0x70000)
#define I2S_RCR3_RCE_4CH        ((uint32_t)0xF0000)
#define I2S_RCR4_FSD            ((uint32_t)1)        // Frame Sync Direction
#define I2S_RCR4_FSP            ((uint32_t)1<<1)
#define I2S_RCR4_FSE            ((uint32_t)8)        // Frame Sync Early
#define I2S_RCR4_MF            ((uint32_t)0x10)    // MSB First
#define I2S_RCR4_SYWD(n)        ((uint32_t)(n & 0x1f)<<8)    // Sync Width
#define I2S_RCR4_FRSZ(n)        ((uint32_t)(n & 0x0f)<<16)    // Frame Size
#define I2S_RCR4_FCONT            ((uint32_t)1<<28)    // FIFO Continue on Error
#define I2S_RCR5_FBT(n)            ((uint32_t)(n & 0x1f)<<8)    // First Bit Shifted
#define I2S_RCR5_W0W(n)            ((uint32_t)(n & 0x1f)<<16)    // Word 0 Width
#define I2S_RCR5_WNW(n)            ((uint32_t)(n & 0x1f)<<24)    // Word N Width
#define I2S_RCR2_BCP            ((uint32_t)1<<25)
#define I2S_RCSR_RE            ((uint32_t)0x80000000)    // Receiver Enable
#define I2S_RCSR_FR            ((uint32_t)0x02000000)    // FIFO Reset
#define I2S_RCSR_FRDE            ((uint32_t)0x00000001)    // FIFO Request DMA Enable
#define I2S_RCSR_BCE            ((uint32_t)0x10000000)    // Bit Clock Enable
#define I2S_TCR1_RFW(n)            ((uint32_t)n & 0x1f)    // Receive FIFO watermark
#define I2S_TCR2_DIV(n)            ((uint32_t)n & 0xff)    // Bit clock divide by (DIV+1)*2
#define I2S_TCR2_BCD            ((uint32_t)1<<24)    // Bit clock direction
#define I2S_TCR2_MSEL(n)        ((uint32_t)(n & 3)<<26)    // MCLK select, 0=bus clock, 1=I2S0_MCLK
#define I2S_TCR2_SYNC(n)        ((uint32_t)(n & 3)<<30)    // 0=async 1=sync with receiver
#define I2S_TCR3_TCE            ((uint32_t)0x10000)    // receive channel enable
#define I2S_TCR3_TCE_2CH        ((uint32_t)0x30000)
#define I2S_TCR3_TCE_3CH        ((uint32_t)0x70000)
#define I2S_TCR3_TCE_4CH        ((uint32_t)0xF0000)
#define I2S_TCR4_FSD            ((uint32_t)1)        // Frame Sync Direction
#define I2S_TCR4_FSP            ((uint32_t)1<<1)
#define I2S_TCR4_FSE            ((uint32_t)8)        // Frame Sync Early
#define I2S_TCR4_MF            ((uint32_t)0x10)    // MSB First
#define I2S_TCR4_SYWD(n)        ((uint32_t)(n & 0x1f)<<8)    // Sync Width
#define I2S_TCR4_FRSZ(n)        ((uint32_t)(n & 0x0f)<<16)    // Frame Size
#define I2S_TCR4_FCONT            ((uint32_t)1<<28)    // FIFO Continue on Error
#define I2S_TCR5_FBT(n)            ((uint32_t)(n & 0x1f)<<8)     // First Bit Shifted
#define I2S_TCR5_W0W(n)            ((uint32_t)(n & 0x1f)<<16)    // Word 0 Width
#define I2S_TCR5_WNW(n)            ((uint32_t)(n & 0x1f)<<24)    // Word N Width
#define I2S_TCR2_BCP            ((uint32_t)1<<25)
#define I2S_TCSR_TE            ((uint32_t)0x80000000)        // Receiver Enable
#define I2S_TCSR_BCE            ((uint32_t)0x10000000)    // Bit Clock Enable
#define I2S_TCSR_FR            ((uint32_t)0x02000000)    // FIFO Reset
#define I2S_TCSR_FRDE            ((uint32_t)0x00000001)    // FIFO Request DMA Enable
    
#define IMXRT_IOMUXC_GPR    (*(IMXRT_REGISTER32_t *)IMXRT_IOMUXC_GPR_ADDRESS)
#define IOMUXC_GPR_GPR0            (IMXRT_IOMUXC_GPR.offset000)
#define IOMUXC_GPR_GPR1            (IMXRT_IOMUXC_GPR.offset004)
#define IOMUXC_GPR_GPR2            (IMXRT_IOMUXC_GPR.offset008)
#define IOMUXC_GPR_GPR3            (IMXRT_IOMUXC_GPR.offset00C)
#define IOMUXC_GPR_GPR4            (IMXRT_IOMUXC_GPR.offset010)
#define IOMUXC_GPR_GPR5            (IMXRT_IOMUXC_GPR.offset014)
#define IOMUXC_GPR_GPR6            (IMXRT_IOMUXC_GPR.offset018)
#define IOMUXC_GPR_GPR7            (IMXRT_IOMUXC_GPR.offset01C)
#define IOMUXC_GPR_GPR8            (IMXRT_IOMUXC_GPR.offset020)
#define IOMUXC_GPR_GPR9            (IMXRT_IOMUXC_GPR.offset024)
#define IOMUXC_GPR_GPR10        (IMXRT_IOMUXC_GPR.offset028)
#define IOMUXC_GPR_GPR11        (IMXRT_IOMUXC_GPR.offset02C)
#define IOMUXC_GPR_GPR12        (IMXRT_IOMUXC_GPR.offset030)
#define IOMUXC_GPR_GPR13        (IMXRT_IOMUXC_GPR.offset034)
#define IOMUXC_GPR_GPR14        (IMXRT_IOMUXC_GPR.offset038)
#define IOMUXC_GPR_GPR15        (IMXRT_IOMUXC_GPR.offset03C)
#define IOMUXC_GPR_GPR16        (IMXRT_IOMUXC_GPR.offset040)
#define IOMUXC_GPR_GPR17        (IMXRT_IOMUXC_GPR.offset044)
#define IOMUXC_GPR_GPR18        (IMXRT_IOMUXC_GPR.offset048)
#define IOMUXC_GPR_GPR19        (IMXRT_IOMUXC_GPR.offset04C)
#define IOMUXC_GPR_GPR20        (IMXRT_IOMUXC_GPR.offset050)
#define IOMUXC_GPR_GPR21        (IMXRT_IOMUXC_GPR.offset054)
#define IOMUXC_GPR_GPR22        (IMXRT_IOMUXC_GPR.offset058)
#define IOMUXC_GPR_GPR23        (IMXRT_IOMUXC_GPR.offset05C)
#define IOMUXC_GPR_GPR24        (IMXRT_IOMUXC_GPR.offset060)
#define IOMUXC_GPR_GPR25        (IMXRT_IOMUXC_GPR.offset064)
#define IOMUXC_GPR_GPR26        (IMXRT_IOMUXC_GPR.offset068)
#define IOMUXC_GPR_GPR27        (IMXRT_IOMUXC_GPR.offset06C)
#define IOMUXC_GPR_GPR28        (IMXRT_IOMUXC_GPR.offset070)
#define IOMUXC_GPR_GPR29        (IMXRT_IOMUXC_GPR.offset074)
#define IOMUXC_GPR_GPR30        (IMXRT_IOMUXC_GPR.offset078)
#define IOMUXC_GPR_GPR31        (IMXRT_IOMUXC_GPR.offset07C)
#define IOMUXC_GPR_GPR32        (IMXRT_IOMUXC_GPR.offset080)
#define IOMUXC_GPR_GPR33        (IMXRT_IOMUXC_GPR.offset084)
#define IOMUXC_GPR_GPR34        (IMXRT_IOMUXC_GPR.offset088)
#define IOMUXC_GPR_GPR1_CM7_FORCE_HCLK_EN    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR1_ENET_IPG_CLK_S_EN    ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR1_EXC_MON            ((uint32_t)(1<<22))
#define IOMUXC_GPR_GPR1_SAI3_MCLK_DIR        ((uint32_t)(1<<21))
#define IOMUXC_GPR_GPR1_SAI2_MCLK_DIR        ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR1_SAI1_MCLK_DIR        ((uint32_t)(1<<19))
#define IOMUXC_GPR_GPR1_ENET2_TX_CLK_DIR    ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR1_ENET1_TX_CLK_DIR    ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR1_USB_EXP_MODE        ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR1_ENET2_CLK_SEL        ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR1_ENET1_CLK_SEL        ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR1_GINT            ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL(n)    ((uint32_t)(((n) & 0x03) << 10))
#define IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL(n)    ((uint32_t)(((n) & 0x03) << 8))
#define IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL(n)    ((uint32_t)(((n) & 0x03) << 6))
#define IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL(n)    ((uint32_t)(((n) & 0x07) << 3))
#define IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL(n)    ((uint32_t)(((n) & 0x07) << 0))
#define IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL_MASK    IOMUXC_GPR_GPR1_SAI3_MCLK3_SEL(3)
#define IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL_MASK    IOMUXC_GPR_GPR1_SAI2_MCLK3_SEL(3)
#define IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL_MASK    IOMUXC_GPR_GPR1_SAI1_MCLK3_SEL(3)
#define IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL_MASK    IOMUXC_GPR_GPR1_SAI1_MCLK2_SEL(7)
#define IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_MASK    IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL(7)
#define IOMUXC_GPR_GPR2_QTIMER4_TMR_CNTS_FREEZE    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR2_QTIMER3_TMR_CNTS_FREEZE    ((uint32_t)(1<<30))
#define IOMUXC_GPR_GPR2_QTIMER2_TMR_CNTS_FREEZE    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR2_QTIMER1_TMR_CNTS_FREEZE    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR2_MQS_OVERSAMPLE        ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR2_MQS_EN            ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR2_MQS_SW_RST        ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV(n)        ((uint32_t)(((n) & 0xFF) << 16))
#define IOMUXC_GPR_GPR2_L2_MEM_DEEPSLEEP    ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR2_RAM_AUTO_CLK_GATING_EN    ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR2_L2_MEM_EN_POWERSAVING    ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR2_CANFD_FILTER_BYPASS    ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR2_AXBS_P_FORCE_ROUND_ROBIN ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR2_AXBS_P_M1_HIGH_PRIORITY    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR2_AXBS_P_M0_HIGH_PRIORITY    ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR2_AXBS_L_FORCE_ROUND_ROBIN ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR2_AXBS_L_DMA_HIGH_PRIORITY ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR2_AXBS_L_AHBXL_HIGH_PRIORITY ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR2_MQS_CLK_DIV_MASK    IOMUXC_GPR_GPR2_MQS_CLK_DIV(255)
#define IOMUXC_GPR_GPR3_AXBS_L_HALTED        ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR3_OCRAM2_STATUS(n)    ((uint32_t)(((n) & 0x0F) << 24))
#define IOMUXC_GPR_GPR3_OCRAM_STATUS(n)        ((uint32_t)(((n) & 0x0F) << 16))
#define IOMUXC_GPR_GPR3_AXBS_L_HALT_REQ        ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR3_OCRAM2_CTL(n)        ((uint32_t)(((n) & 0x0F) << 8))
#define IOMUXC_GPR_GPR3_DCP_KEY_SEL        ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR3_OCRAM_CTL(n)        ((uint32_t)(((n) & 0x0F) << 0))
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_ACK    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_ACK    ((uint32_t)(1<<30))
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_ACK    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_ACK    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_ACK    ((uint32_t)(1<<27))
#define IOMUXC_GPR_GPR4_PIT_STOP_ACK        ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR4_SEMC_STOP_ACK        ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR4_SAI3_STOP_ACK        ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR4_SAI2_STOP_ACK        ((uint32_t)(1<<22))
#define IOMUXC_GPR_GPR4_SAI1_STOP_ACK        ((uint32_t)(1<<21))
#define IOMUXC_GPR_GPR4_ENET_STOP_ACK        ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR4_TRNG_STOP_ACK        ((uint32_t)(1<<19))
#define IOMUXC_GPR_GPR4_CAN2_STOP_ACK        ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR4_CAN1_STOP_ACK        ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR4_EDMA_STOP_ACK        ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR4_FLEXSPI2_STOP_REQ    ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR4_FLEXIO3_STOP_REQ    ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR4_FLEXIO2_STOP_REQ    ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR4_FLEXIO1_STOP_REQ    ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR4_FLEXSPI_STOP_REQ    ((uint32_t)(1<<11))
#define IOMUXC_GPR_GPR4_PIT_STOP_REQ        ((uint32_t)(1<<10))
#define IOMUXC_GPR_GPR4_SEMC_STOP_REQ        ((uint32_t)(1<<9))
#define IOMUXC_GPR_GPR4_SAI3_STOP_REQ        ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR4_SAI2_STOP_REQ        ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR4_SAI1_STOP_REQ        ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR4_ENET_STOP_REQ        ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR4_TRNG_STOP_REQ        ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR4_CAN2_STOP_REQ        ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR4_CAN1_STOP_REQ        ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR4_EDMA_STOP_REQ        ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT2    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR5_VREF_1M_CLK_GPT1    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR5_ENET2_EVENT3IN_SEL    ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR5_ENET_EVENT3IN_SEL    ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR5_GPT2_CAPIN2_SEL        ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR5_GPT2_CAPIN1_SEL        ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR5_WDOG2_MASK        ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR5_WDOG1_MASK        ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_19    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_18    ((uint32_t)(1<<30))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_17    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_16    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_15    ((uint32_t)(1<<27))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_14    ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_13    ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_12    ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_11    ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_10    ((uint32_t)(1<<22))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_9    ((uint32_t)(1<<21))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_8    ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_7    ((uint32_t)(1<<19))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6    ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_5    ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4    ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR6_QTIMER4_TRM3_INPUT_SEL    ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR6_QTIMER4_TRM2_INPUT_SEL    ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR6_QTIMER4_TRM1_INPUT_SEL    ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR6_QTIMER4_TRM0_INPUT_SEL    ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR6_QTIMER3_TRM3_INPUT_SEL    ((uint32_t)(1<<11))
#define IOMUXC_GPR_GPR6_QTIMER3_TRM2_INPUT_SEL    ((uint32_t)(1<<10))
#define IOMUXC_GPR_GPR6_QTIMER3_TRM1_INPUT_SEL    ((uint32_t)(1<<9))
#define IOMUXC_GPR_GPR6_QTIMER3_TRM0_INPUT_SEL    ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR6_QTIMER2_TRM3_INPUT_SEL    ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR6_QTIMER2_TRM2_INPUT_SEL    ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR6_QTIMER2_TRM1_INPUT_SEL    ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR6_QTIMER2_TRM0_INPUT_SEL    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR6_QTIMER1_TRM3_INPUT_SEL    ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR6_QTIMER1_TRM2_INPUT_SEL    ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR6_QTIMER1_TRM1_INPUT_SEL    ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR6_QTIMER1_TRM0_INPUT_SEL    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR7_LPUART8_STOP_ACK    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR7_LPUART7_STOP_ACK    ((uint32_t)(1<<30))
#define IOMUXC_GPR_GPR7_LPUART6_STOP_ACK    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR7_LPUART5_STOP_ACK    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR7_LPUART4_STOP_ACK    ((uint32_t)(1<<27))
#define IOMUXC_GPR_GPR7_LPUART3_STOP_ACK    ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR7_LPUART2_STOP_ACK    ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR7_LPUART1_STOP_ACK    ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_ACK        ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_ACK        ((uint32_t)(1<<22))
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_ACK        ((uint32_t)(1<<21))
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_ACK        ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_ACK        ((uint32_t)(1<<19))
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_ACK        ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_ACK        ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_ACK        ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR7_LPUART8_STOP_REQ    ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR7_LPUART7_STOP_REQ    ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR7_LPUART6_STOP_REQ    ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR7_LPUART5_STOP_REQ    ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR7_LPUART4_STOP_REQ    ((uint32_t)(1<<11))
#define IOMUXC_GPR_GPR7_LPUART3_STOP_REQ    ((uint32_t)(1<<10))
#define IOMUXC_GPR_GPR7_LPUART2_STOP_REQ    ((uint32_t)(1<<9))
#define IOMUXC_GPR_GPR7_LPUART1_STOP_REQ    ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR7_LPSPI4_STOP_REQ        ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR7_LPSPI3_STOP_REQ        ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR7_LPSPI2_STOP_REQ        ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR7_LPSPI1_STOP_REQ        ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR7_LPI2C4_STOP_REQ        ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR7_LPI2C3_STOP_REQ        ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR7_LPI2C2_STOP_REQ        ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR7_LPI2C1_STOP_REQ        ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR8_LPUART8_IPG_DOZE    ((uint32_t)(1<<31))
#define IOMUXC_GPR_GPR8_LPUART8_IPG_STOP_MODE    ((uint32_t)(1<<30))
#define IOMUXC_GPR_GPR8_LPUART7_IPG_DOZE    ((uint32_t)(1<<29))
#define IOMUXC_GPR_GPR8_LPUART7_IPG_STOP_MODE    ((uint32_t)(1<<28))
#define IOMUXC_GPR_GPR8_LPUART6_IPG_DOZE    ((uint32_t)(1<<27))
#define IOMUXC_GPR_GPR8_LPUART6_IPG_STOP_MODE    ((uint32_t)(1<<26))
#define IOMUXC_GPR_GPR8_LPUART5_IPG_DOZE    ((uint32_t)(1<<25))
#define IOMUXC_GPR_GPR8_LPUART5_IPG_STOP_MODE    ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR8_LPUART4_IPG_DOZE    ((uint32_t)(1<<23))
#define IOMUXC_GPR_GPR8_LPUART4_IPG_STOP_MODE    ((uint32_t)(1<<22))
#define IOMUXC_GPR_GPR8_LPUART3_IPG_DOZE    ((uint32_t)(1<<21))
#define IOMUXC_GPR_GPR8_LPUART3_IPG_STOP_MODE    ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR8_LPUART2_IPG_DOZE    ((uint32_t)(1<<19))
#define IOMUXC_GPR_GPR8_LPUART2_IPG_STOP_MODE    ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR8_LPUART1_IPG_DOZE    ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR8_LPUART1_IPG_STOP_MODE    ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_DOZE        ((uint32_t)(1<<15))
#define IOMUXC_GPR_GPR8_LPSPI4_IPG_STOP_MODE    ((uint32_t)(1<<14))
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_DOZE        ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR8_LPSPI3_IPG_STOP_MODE    ((uint32_t)(1<<12))
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_DOZE        ((uint32_t)(1<<11))
#define IOMUXC_GPR_GPR8_LPSPI2_IPG_STOP_MODE    ((uint32_t)(1<<10))
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_DOZE        ((uint32_t)(1<<9))
#define IOMUXC_GPR_GPR8_LPSPI1_IPG_STOP_MODE    ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_DOZE        ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR8_LPI2C4_IPG_STOP_MODE    ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_DOZE        ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR8_LPI2C3_IPG_STOP_MODE    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_DOZE        ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR8_LPI2C2_IPG_STOP_MODE    ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_DOZE        ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR8_LPI2C1_IPG_STOP_MODE    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_ADDR(n)    ((uint32_t)(((n) & 0x7F) << 25))
#define IOMUXC_GPR_GPR10_LOCK_OCRAM_TZ_EN    ((uint32_t)(1<<24))
#define IOMUXC_GPR_GPR10_LOCK_DCPKEY_OCOTP_OR_KEYMUX    ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR10_LOCK_SEC_ERR_RESP    ((uint32_t)(1<<18))
#define IOMUXC_GPR_GPR10_LOCK_DBG_EN        ((uint32_t)(1<<17))
#define IOMUXC_GPR_GPR10_LOCK_NIDEN        ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR10_OCRAM_TZ_ADDR(n)    ((uint32_t)(((n) & 0x7F) << 9))
#define IOMUXC_GPR_GPR10_OCRAM_TZ_EN        ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR10_DCPKEY_OCOTP_OR_KEYMUX    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR10_SEC_ERR_RESP        ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR10_DBG_EN            ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR10_NIDEN            ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR11_LOCK_BEE_DE_RX_EN(n)    ((uint32_t)(((n) & 0x0F) << 24))
#define IOMUXC_GPR_GPR11_LOCK_M7_APC_AC_R3_CTRL(n)    ((uint32_t)(((n) & 0x03) << 22))
#define IOMUXC_GPR_GPR11_LOCK_M7_APC_AC_R2_CTRL(n)    ((uint32_t)(((n) & 0x03) << 20))
#define IOMUXC_GPR_GPR11_LOCK_M7_APC_AC_R1_CTRL(n)    ((uint32_t)(((n) & 0x03) << 18))
#define IOMUXC_GPR_GPR11_LOCK_M7_APC_AC_R0_CTRL(n)    ((uint32_t)(((n) & 0x03) << 16))
#define IOMUXC_GPR_GPR11_BEE_DE_RX_EN(n)    ((uint32_t)(((n) & 0x0F) << 8))
#define IOMUXC_GPR_GPR11_M7_APC_AC_R3_CTRL(n)    ((uint32_t)(((n) & 0x03) << 6))
#define IOMUXC_GPR_GPR11_M7_APC_AC_R2_CTRL(n)    ((uint32_t)(((n) & 0x03) << 4))
#define IOMUXC_GPR_GPR11_M7_APC_AC_R1_CTRL(n)    ((uint32_t)(((n) & 0x03) << 2))
#define IOMUXC_GPR_GPR11_M7_APC_AC_R0_CTRL(n)    ((uint32_t)(((n) & 0x03) << 0))
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_DOZE    ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR12_FLEXIO3_IPG_STOP_MODE    ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR12_ACMP_IPG_STOP_MODE    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_DOZE    ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR12_FLEXIO2_IPG_STOP_MODE    ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_DOZE    ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR12_FLEXIO1_IPG_STOP_MODE    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR13_CANFD_STOP_ACK        ((uint32_t)(1<<20))
#define IOMUXC_GPR_GPR13_CACHE_USB        ((uint32_t)(1<<13))
#define IOMUXC_GPR_GPR13_CACHE_ENET        ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR13_CANFD_STOP_REQ        ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR13_AWCACHE_USDHC        ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR13_ARCACHE_USDHC        ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR14_CM7_MX6RT_CFGDTCMSZ(n)    ((uint32_t)(((n) & 0x0F) << 20))
#define IOMUXC_GPR_GPR14_CM7_MX6RT_CFGITCMSZ(n)    ((uint32_t)(((n) & 0x0F) << 16))
#define IOMUXC_GPR_GPR14_ACMP4_SAMPLE_SYNC_EN    ((uint32_t)(1<<11))
#define IOMUXC_GPR_GPR14_ACMP3_SAMPLE_SYNC_EN    ((uint32_t)(1<<10))
#define IOMUXC_GPR_GPR14_ACMP2_SAMPLE_SYNC_EN    ((uint32_t)(1<<9))
#define IOMUXC_GPR_GPR14_ACMP1_SAMPLE_SYNC_EN    ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_UP    ((uint32_t)(1<<7))
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_UP    ((uint32_t)(1<<6))
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_UP    ((uint32_t)(1<<5))
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_UP    ((uint32_t)(1<<4))
#define IOMUXC_GPR_GPR14_ACMP4_CMP_IGEN_TRIM_DN    ((uint32_t)(1<<3))
#define IOMUXC_GPR_GPR14_ACMP3_CMP_IGEN_TRIM_DN    ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR14_ACMP2_CMP_IGEN_TRIM_DN    ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR14_ACMP1_CMP_IGEN_TRIM_DN    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR16_CM7_INIT_VTOR(n)    ((uint32_t)(((n) & 0x1FFFFFF) << 7))
#define IOMUXC_GPR_GPR16_FLEXRAM_BANK_CFG_SEL    ((uint32_t)(1<<2))
#define IOMUXC_GPR_GPR16_INIT_DTCM_EN        ((uint32_t)(1<<1))
#define IOMUXC_GPR_GPR16_INIT_ITCM_EN        ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR18_M7_APC_AC_R0_BOT(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR18_LOCK_M7_APC_AC_R0_BOT    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR19_M7_APC_AC_R0_TOP(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR19_LOCK_M7_APC_AC_R0_TOP    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR20_M7_APC_AC_R1_BOT(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR20_LOCK_M7_APC_AC_R1_BOT    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR21_M7_APC_AC_R1_TOP(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR21_LOCK_M7_APC_AC_R1_TOP    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR22_M7_APC_AC_R2_BOT(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR22_LOCK_M7_APC_AC_R2_BOT    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR23_M7_APC_AC_R2_TOP(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR23_LOCK_M7_APC_AC_R2_TOP    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR24_M7_APC_AC_R3_BOT(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR24_LOCK_M7_APC_AC_R3_BOT    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR25_M7_APC_AC_R3_TOP(n)    ((uint32_t)(((n) & 0x1FFFFFFF) << 3))
#define IOMUXC_GPR_GPR25_LOCK_M7_APC_AC_R3_TOP    ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_ADDR(n)    ((uint32_t)(((n) & 0x7F) << 17))
#define IOMUXC_GPR_GPR33_LOCK_OCRAM2_TZ_EN    ((uint32_t)(1<<16))
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_ADDR(n)    ((uint32_t)(((n) & 0x7F) << 1))
#define IOMUXC_GPR_GPR33_OCRAM2_TZ_EN        ((uint32_t)(1<<0))
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_QSPI_SIP_EN ((uint32_t)(1<<8))
#define IOMUXC_GPR_GPR34_SIP_TEST_MUX_BOOT_PIN_SEL(n) ((uint32_t)(((n) & 0xFF) << 0))
    
#define IMXRT_SPDIF        (*(IMXRT_REGISTER32_t *)IMXRT_SPDIF_ADDRESS)
#define SPDIF_SCR            (IMXRT_SPDIF.offset000)
#define SPDIF_SRCD            (IMXRT_SPDIF.offset004)
#define SPDIF_SRPC            (IMXRT_SPDIF.offset008)
#define SPDIF_SIE            (IMXRT_SPDIF.offset00C)
#define SPDIF_SIS            (IMXRT_SPDIF.offset010)
#define SPDIF_SIC            (IMXRT_SPDIF.offset010)
#define SPDIF_SRL            (IMXRT_SPDIF.offset014)
#define SPDIF_SRR            (IMXRT_SPDIF.offset018)
#define SPDIF_SRCSH            (IMXRT_SPDIF.offset01C)
#define SPDIF_SRCSL            (IMXRT_SPDIF.offset020)
#define SPDIF_SRU            (IMXRT_SPDIF.offset024)
#define SPDIF_SRQ            (IMXRT_SPDIF.offset028)
#define SPDIF_STL            (IMXRT_SPDIF.offset02C)
#define SPDIF_STR            (IMXRT_SPDIF.offset030)
#define SPDIF_STCSCH            (IMXRT_SPDIF.offset034)
#define SPDIF_STCSCL            (IMXRT_SPDIF.offset038)
#define SPDIF_SRFM            (IMXRT_SPDIF.offset044)
#define SPDIF_STC            (IMXRT_SPDIF.offset050)
#define SPDIF_SCR_RXFIFO_CTR        ((uint32_t)(1 << 23))
#define SPDIF_SCR_RXFIFO_OFF_ON        ((uint32_t)(1 << 22))
#define SPDIF_SCR_RXFIFO_RST        ((uint32_t)(1 << 21))
#define SPDIF_SCR_RXFIFOFULL_SEL(n)    ((uint32_t)(((n) & 0x03) << 19))
#define SPDIF_SCR_RXAUTOSYNC        ((uint32_t)(1 << 18))
#define SPDIF_SCR_TXAUTOSYNC        ((uint32_t)(1 << 17))
#define SPDIF_SCR_TXFIFOEMPTY_SEL(n)    ((uint32_t)(((n) & 0x03) << 15))
#define SPDIF_SCR_LOW_POWER        ((uint32_t)(1 << 13))
#define SPDIF_SCR_SOFT_RESET        ((uint32_t)(1 << 12))
#define SPDIF_SCR_TXFIFO_CTRL(n)    ((uint32_t)(((n) & 0x03) << 10))
#define SPDIF_SCR_DMA_RX_EN        ((uint32_t)(1 << 9))
#define SPDIF_SCR_DMA_TX_EN        ((uint32_t)(1 << 8))
#define SPDIF_SCR_VALCTRL        ((uint32_t)(1 << 5))
#define SPDIF_SCR_TXSEL(n)        ((uint32_t)(((n) & 0x07) << 2))
#define SPDIF_SCR_USRC_SEL(n)        ((uint32_t)(((n) & 0x03) << 0))
#define SPDIF_SRCD_USYNCMODE        ((uint32_t)(1 << 1))
#define SPDIF_SRPC_CLKSRC_SEL(n)    ((uint32_t)(((n) & 0x0f) << 7))
#define SPDIF_SRPC_LOCK            ((uint32_t)(1 << 6))
#define SPDIF_SRPC_GAINSEL(n)        ((uint32_t)(((n) & 0x07) << 3))
#define SPDIF_SIE_LOCK            ((uint32_t)(1 << 20))
#define SPDIF_SIE_TXUNOV        ((uint32_t)(1 << 19))
#define SPDIF_SIE_TXRESYN        ((uint32_t)(1 << 18))
#define SPDIF_SIE_CNEW            ((uint32_t)(1 << 17))
#define SPDIF_SIE_VALNOGOOD        ((uint32_t)(1 << 16))
#define SPDIF_SIE_SYMERR        ((uint32_t)(1 << 15))
#define SPDIF_SIE_BITERR        ((uint32_t)(1 << 14))
#define SPDIF_SIE_URXFUL        ((uint32_t)(1 << 10))
#define SPDIF_SIE_URXOV            ((uint32_t)(1 << 9))
#define SPDIF_SIE_QRXFUL        ((uint32_t)(1 << 8))
#define SPDIF_SIE_QRXOV            ((uint32_t)(1 << 7))
#define SPDIF_SIE_UQSYNC        ((uint32_t)(1 << 6))
#define SPDIF_SIE_UQERR            ((uint32_t)(1 << 5))
#define SPDIF_SIE_RXFIFOUNOV        ((uint32_t)(1 << 4))
#define SPDIF_SIE_RXFIFORESYN        ((uint32_t)(1 << 3))
#define SPDIF_SIE_LOCKLOSS        ((uint32_t)(1 << 2))
#define SPDIF_SIE_TXEM            ((uint32_t)(1 << 1))
#define SPDIF_SIE_RXFIFOFUL        ((uint32_t)(1 << 0))
#define SPDIF_SIS_LOCK            ((uint32_t)(1 << 20))
#define SPDIF_SIS_TXUNOV        ((uint32_t)(1 << 19))
#define SPDIF_SIS_TXRESYN        ((uint32_t)(1 << 18))
#define SPDIF_SIS_CNEW            ((uint32_t)(1 << 17))
#define SPDIF_SIS_VALNOGOOD        ((uint32_t)(1 << 16))
#define SPDIF_SIS_SYMERR        ((uint32_t)(1 << 15))
#define SPDIF_SIS_BITERR        ((uint32_t)(1 << 14))
#define SPDIF_SIS_URXFUL        ((uint32_t)(1 << 10))
#define SPDIF_SIS_URXOV            ((uint32_t)(1 << 9))
#define SPDIF_SIS_QRXFUL        ((uint32_t)(1 << 8))
#define SPDIF_SIS_QRXOV            ((uint32_t)(1 << 7))
#define SPDIF_SIS_UQSYNC        ((uint32_t)(1 << 6))
#define SPDIF_SIS_UQERR            ((uint32_t)(1 << 5))
#define SPDIF_SIS_RXFIFOUNOV        ((uint32_t)(1 << 4))
#define SPDIF_SIS_RXFIFORESYN        ((uint32_t)(1 << 3))
#define SPDIF_SIS_LOCKLOSS        ((uint32_t)(1 << 2))
#define SPDIF_SIS_TXEM            ((uint32_t)(1 << 1))
#define SPDIF_SIS_RXFIFOFUL        ((uint32_t)(1 << 0))
#define SPDIF_SIC_LOCK            ((uint32_t)(1 << 20))
#define SPDIF_SIC_TXUNOV        ((uint32_t)(1 << 19))
#define SPDIF_SIC_TXRESYN        ((uint32_t)(1 << 18))
#define SPDIF_SIC_CNEW            ((uint32_t)(1 << 17))
#define SPDIF_SIC_VALNOGOOD        ((uint32_t)(1 << 16))
#define SPDIF_SIC_SYMERR        ((uint32_t)(1 << 15))
#define SPDIF_SIC_BITERR        ((uint32_t)(1 << 14))
#define SPDIF_SIC_URXFUL        ((uint32_t)(1 << 10))
#define SPDIF_SIC_URXOV            ((uint32_t)(1 << 9))
#define SPDIF_SIC_QRXOV            ((uint32_t)(1 << 7))
#define SPDIF_SIC_UQSYNC        ((uint32_t)(1 << 6))
#define SPDIF_SIC_UQERR            ((uint32_t)(1 << 5))
#define SPDIF_SIC_RXFIFOUNOV        ((uint32_t)(1 << 4))
#define SPDIF_SIC_RXFIFORESYN        ((uint32_t)(1 << 3))
#define SPDIF_SIC_LOCKLOSS        ((uint32_t)(1 << 2))
#define SPDIF_STC_SYSCLK_DF(n)        ((uint32_t)(((n) & 0x1ff) << 11))
#define SPDIF_STC_TXCLK_SOURCE(n)    ((uint32_t)(((n) & 0x07) << 8))
#define SPDIF_STC_TX_ALL_CLK_EN        ((uint32_t)(1 << 7))
#define SPDIF_STC_TXCLK_DF(n)        ((uint32_t)(((n) & 0x7f) << 0))
	dma.begin(true); // Allocate the DMA channel first

	block_left_1st = nullptr;
	block_right_1st = nullptr;
	memset(&block_silent, 0, sizeof(block_silent));

	config_spdif3();
	const int nbytes_mlno = 2 * 4; // 8 Bytes per minor loop

	dma.TCD->SADDR = SPDIF_tx_buffer;
	dma.TCD->SOFF = 4;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(2) | DMA_TCD_ATTR_DSIZE(2);
	dma.TCD->NBYTES_MLNO = DMA_TCD_NBYTES_MLOFFYES_NBYTES(nbytes_mlno) | DMA_TCD_NBYTES_DMLOE |
                         DMA_TCD_NBYTES_MLOFFYES_MLOFF(-8);
	dma.TCD->SLAST = -sizeof(SPDIF_tx_buffer);
	dma.TCD->DADDR = &SPDIF_STL;
	dma.TCD->DOFF = 4;
	dma.TCD->DLASTSGA = -8;
	//dma.TCD->ATTR_DST = ((31 - __builtin_clz(8)) << 3);
	dma.TCD->CITER_ELINKNO = sizeof(SPDIF_tx_buffer) / nbytes_mlno;
	dma.TCD->BITER_ELINKNO = sizeof(SPDIF_tx_buffer) / nbytes_mlno;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;

	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_SPDIF_TX);

	update_responsibility = update_setup();
	dma.enable();
	dma.attachInterrupt(isr);

	CORE_PIN14_CONFIG = 3;  //3:SPDIF_OUT
	SPDIF_SCR |= SPDIF_SCR_DMA_TX_EN;
	SPDIF_STC |= SPDIF_STC_TX_ALL_CLK_EN;
//	pinMode(13, OUTPUT);
}

void AudioOutputSPDIF3::isr(void)
{

	const int16_t *src_left, *src_right;
	const int32_t *end;
	int32_t *dest;
	audio_block_t *block_left, *block_right;
	uint32_t saddr;

	saddr = (uint32_t)(dma.TCD->SADDR);
	dma.clearInterrupt();
	if (saddr < (uint32_t)SPDIF_tx_buffer + sizeof(SPDIF_tx_buffer) / 2) {
		// DMA is transmitting the first half of the buffer
		// so we must fill the second half
		dest = SPDIF_tx_buffer + AUDIO_BLOCK_SAMPLES*2;
		end = SPDIF_tx_buffer + AUDIO_BLOCK_SAMPLES*4;
	} else {
		// DMA is transmitting the second half of the buffer
		// so we must fill the first half
		dest = SPDIF_tx_buffer;
		end = SPDIF_tx_buffer + AUDIO_BLOCK_SAMPLES*2;
	}
	block_left = block_left_1st;
	if (!block_left) block_left = &block_silent;
	block_right = block_right_1st;
	if (!block_right) block_right = &block_silent;

	src_left = (const int16_t *)(block_left->data);
	src_right = (const int16_t *)(block_right->data);

	do {
		#if IMXRT_CACHE_ENABLED >= 2
		SCB_CACHE_DCCIMVAC = (uintptr_t) dest;
		asm volatile("dsb");
		#endif
		
		*dest++ = (*src_left++) << 8;
		*dest++ = (*src_right++) << 8;

		*dest++ = (*src_left++) << 8;
		*dest++ = (*src_right++) << 8;

		*dest++ = (*src_left++) << 8;
		*dest++ = (*src_right++) << 8;

		*dest++ = (*src_left++) << 8;
		*dest++ = (*src_right++) << 8;

	} while (dest < end);

	if (block_left != &block_silent) {
		release(block_left);
		block_left_1st = block_left_2nd;
		block_left_2nd = nullptr;
	}
	if (block_right != &block_silent) {
		release(block_right);
		block_right_1st = block_right_2nd;
		block_right_2nd = nullptr;
	}

	if (update_responsibility) update_all();
	//digitalWriteFast(13,!digitalReadFast(13));
}

void AudioOutputSPDIF3::update(void)
{
	audio_block_t *block_left, *block_right;

	block_left = receiveReadOnly(0);  // input 0
	block_right = receiveReadOnly(1); // input 1
	__disable_irq();
	if (block_left) {
		if (block_left_1st == nullptr) {
			block_left_1st = block_left;
			block_left = nullptr;
		} else if (block_left_2nd == nullptr) {
			block_left_2nd = block_left;
			block_left = nullptr;
		} else {
			audio_block_t *tmp = block_left_1st;
			block_left_1st = block_left_2nd;
			block_left_2nd = block_left;
			block_left = tmp;
		}
	}
	if (block_right) {
		if (block_right_1st == nullptr) {
			block_right_1st = block_right;
			block_right = nullptr;
		} else if (block_right_2nd == nullptr) {
			block_right_2nd = block_right;
			block_right = nullptr;
		} else {
			audio_block_t *tmp = block_right_1st;
			block_right_1st = block_right_2nd;
			block_right_2nd = block_right;
			block_right = tmp;
		}
	}
	__enable_irq();
	if (block_left) {
		release(block_left);
	}
	if (block_right) {
		release(block_right);
	}

}

void AudioOutputSPDIF3::mute_PCM(const bool mute)
{
	if (mute)
		SPDIF_SCR |= SPDIF_SCR_VALCTRL;
	else
		SPDIF_SCR &= ~SPDIF_SCR_VALCTRL;
}

uint32_t AudioOutputSPDIF3::dpll_Gain(void)
{
	return spdif_gain[SPDIF_DPLL_GAIN];
}

FLASHMEM
void AudioOutputSPDIF3::config_spdif3(void)
{
	delay(1); //WHY IS THIS NEEDED?

	uint32_t fs = AUDIO_SAMPLE_RATE_EXACT;
	// PLL between 27*24 = 648MHz und 54*24=1296MHz
	// n1, n2 choosen for compatibility with I2S (same PLL frequency) :
	int n1 = 4; //SAI prescaler 4 => (n1*n2) = multiple of 4
	int n2 = 1 + (24000000 * 27) / (fs * 256 * n1);
	double C = ((double)fs * 256 * n1 * n2) / 24000000;
	int c0 = C;
	int c2 = 10000;
	int c1 = C * c2 - (c0 * c2);
	set_audioClock(c0, c1, c2);

	//use new pred/podf values
	n1 = 7; //0: divide by 1 (do not use with high input frequencies), 1:/2, 2: /3, 7:/8
	n2 = 0; //0: divide by 1, 7: divide by 8

	CCM_CCGR5 &= ~CCM_CCGR5_SPDIF(CCM_CCGR_ON); //Clock gate off

	CCM_CDCDR = (CCM_CDCDR & ~(CCM_CDCDR_SPDIF0_CLK_SEL_MASK | CCM_CDCDR_SPDIF0_CLK_PRED_MASK | CCM_CDCDR_SPDIF0_CLK_PODF_MASK))
		| CCM_CDCDR_SPDIF0_CLK_SEL(0) // 0 PLL4, 1 PLL3 PFD2, 2 PLL5, 3 pll3_sw_clk
		| CCM_CDCDR_SPDIF0_CLK_PRED(n1)
		| CCM_CDCDR_SPDIF0_CLK_PODF(n2);

	CCM_CCGR5 |= CCM_CCGR5_SPDIF(CCM_CCGR_ON); //Clock gate on

	if (!(SPDIF_SCR & (SPDIF_SCR_DMA_RX_EN | SPDIF_SCR_DMA_TX_EN))) {
		//Serial.print("Reset SPDIF3");
		SPDIF_SCR = SPDIF_SCR_SOFT_RESET;		//Reset SPDIF
		while (SPDIF_SCR & SPDIF_SCR_SOFT_RESET) {;}	//Wait for Reset (takes 8 cycles)
	} else return;

	SPDIF_SCR =
		SPDIF_SCR_RXFIFOFULL_SEL(0) |	// Full interrupt if at least 1 sample in Rx left and right FIFOs
		SPDIF_SCR_RXAUTOSYNC |
		SPDIF_SCR_TXAUTOSYNC |
		SPDIF_SCR_TXFIFOEMPTY_SEL(2) |	// Empty interrupt if at most 8 samples in Tx left and right FIFOs
		SPDIF_SCR_TXFIFO_CTRL(1) |	// 0:Send zeros 1: normal operation
		SPDIF_SCR_VALCTRL |		// Outgoing Validity always clear
		SPDIF_SCR_TXSEL(5) |		// 0:off and output 0, 1:Feed-though SPDIFIN, 5:Tx Normal operation
		SPDIF_SCR_USRC_SEL(3);

	SPDIF_SRPC =
		SPDIF_SRPC_CLKSRC_SEL(1) |	//if (DPLL Locked) SPDIF_RxClk else tx_clk (SPDIF0_CLK_ROOT)
		SPDIF_SRPC_GAINSEL(SPDIF_DPLL_GAIN);

	uint32_t pllclock = (c0 + (float)c1 / c2) * 24000000ULL; //677376000 Hz
	uint32_t clock = pllclock / (1 + n1) / (1 + n2);
	uint32_t clkdiv = clock / (fs * 64); // 1 .. 128
	uint32_t mod = clock % (fs * 64);
	if (mod > ((fs * 64) / 2)) clkdiv += 1; //nearest divider

#if 0
	Serial.printf("PLL: %d\n",  pllclock);
	Serial.printf("clock: %d\n", clock);
	Serial.printf("clkdiv: %d\n", clkdiv);
#endif

	SPDIF_STC =
		SPDIF_STC_TXCLK_SOURCE(1) |	//tx_clk input (from SPDIF0_CLK_ROOT)
		SPDIF_STC_TXCLK_DF(clkdiv - 1);
}

#endif // __IMXRT1062__


#if defined(__MK66FX1M0__) || defined(__MK64FX512__) || defined(__MK20DX256__) || defined(__MKL26Z64__)
// empty code to allow compile (but no sound output) on other Teensy models

void AudioOutputSPDIF3::update(void) { }
void AudioOutputSPDIF3::begin(void) { }
void AudioOutputSPDIF3::mute_PCM(const bool mute) { }
bool AudioOutputSPDIF3::pll_locked(void) { return false; }

#endif
