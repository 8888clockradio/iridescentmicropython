/* Audio Library for Teensy 3.X
 * Copyright (c) 2014, Paul Stoffregen, paul@pjrc.com
 *
 * Development of this audio library was funded by PJRC.COM, LLC by sales of
 * Teensy and Audio Adaptor boards.  Please support PJRC's efforts to develop
 * open source software by purchasing Teensy or other PJRC products.
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

#include <Arduino.h>
#include "output_i2s.h"



#if !defined(KINETISL)

#include "memcpy_audio.h"


// high-level explanation of how this I2S & DMA code works:
// https://forum.pjrc.com/threads/65229?p=263104&viewfull=1#post263104


audio_block_t * AudioOutputI2S::block_left_1st = NULL;
audio_block_t * AudioOutputI2S::block_right_1st = NULL;
audio_block_t * AudioOutputI2S::block_left_2nd = NULL;
audio_block_t * AudioOutputI2S::block_right_2nd = NULL;
uint16_t  AudioOutputI2S::block_left_offset = 0;
uint16_t  AudioOutputI2S::block_right_offset = 0;
bool AudioOutputI2S::update_responsibility = false;
DMAChannel AudioOutputI2S::dma(false);
DMAMEM __attribute__((aligned(32))) static uint32_t i2s_tx_buffer[AUDIO_BLOCK_SAMPLES];

#if defined(__IMXRT1062__)
#include "utility/imxrt_hw.h"
#endif




void AudioOutputI2S::begin(void)
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
	dma.begin(true); // Allocate the DMA channel first

	block_left_1st = NULL;
	block_right_1st = NULL;

	config_i2s();

#if defined(KINETISK)
	CORE_PIN22_CONFIG = PORT_PCR_MUX(6); // pin 22, PTC1, I2S0_TXD0

	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1);
	dma.TCD->NBYTES_MLNO = 2;
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DADDR = (void *)((uint32_t)&I2S0_TDR0 + 2);
	dma.TCD->DOFF = 0;
	dma.TCD->CITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->DLASTSGA = 0;
	dma.TCD->BITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma.enable();

	I2S0_TCSR = I2S_TCSR_SR;
	I2S0_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;

#elif defined(__IMXRT1062__)
	CORE_PIN7_CONFIG  = 3;  //1:TX_DATA0
	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1);
	dma.TCD->NBYTES_MLNO = 2;
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DOFF = 0;
	dma.TCD->CITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->DLASTSGA = 0;
	dma.TCD->BITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.TCD->DADDR = (void *)((uint32_t)&I2S1_TDR0 + 2);
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_SAI1_TX);
	dma.enable();

	I2S1_RCSR |= I2S_RCSR_RE | I2S_RCSR_BCE;
	I2S1_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;
#endif
	update_responsibility = update_setup();
	dma.attachInterrupt(isr);
}


void AudioOutputI2S::isr(void)
{
#if defined(KINETISK) || defined(__IMXRT1062__)


	int16_t *dest;
	audio_block_t *blockL, *blockR;
	uint32_t saddr, offsetL, offsetR;

	saddr = (uint32_t)(dma.TCD->SADDR);
	dma.clearInterrupt();
	if (saddr < (uint32_t)i2s_tx_buffer + sizeof(i2s_tx_buffer) / 2) {
		// DMA is transmitting the first half of the buffer
		// so we must fill the second half
		dest = (int16_t *)&i2s_tx_buffer[AUDIO_BLOCK_SAMPLES/2];
		if (AudioOutputI2S::update_responsibility) AudioStream::update_all();
	} else {
		// DMA is transmitting the second half of the buffer
		// so we must fill the first half
		dest = (int16_t *)i2s_tx_buffer;
	}

	blockL = AudioOutputI2S::block_left_1st;
	blockR = AudioOutputI2S::block_right_1st;
	offsetL = AudioOutputI2S::block_left_offset;
	offsetR = AudioOutputI2S::block_right_offset;

	if (blockL && blockR) {
		memcpy_tointerleaveLR(dest, blockL->data + offsetL, blockR->data + offsetR);
		offsetL += AUDIO_BLOCK_SAMPLES / 2;
		offsetR += AUDIO_BLOCK_SAMPLES / 2;
	} else if (blockL) {
		memcpy_tointerleaveL(dest, blockL->data + offsetL);
		offsetL += AUDIO_BLOCK_SAMPLES / 2;
	} else if (blockR) {
		memcpy_tointerleaveR(dest, blockR->data + offsetR);
		offsetR += AUDIO_BLOCK_SAMPLES / 2;
	} else {
		memset(dest,0,AUDIO_BLOCK_SAMPLES * 2);
	}

	arm_dcache_flush_delete(dest, sizeof(i2s_tx_buffer) / 2 );

	if (offsetL < AUDIO_BLOCK_SAMPLES) {
		AudioOutputI2S::block_left_offset = offsetL;
	} else {
		AudioOutputI2S::block_left_offset = 0;
		AudioStream::release(blockL);
		AudioOutputI2S::block_left_1st = AudioOutputI2S::block_left_2nd;
		AudioOutputI2S::block_left_2nd = NULL;
	}
	if (offsetR < AUDIO_BLOCK_SAMPLES) {
		AudioOutputI2S::block_right_offset = offsetR;
	} else {
		AudioOutputI2S::block_right_offset = 0;
		AudioStream::release(blockR);
		AudioOutputI2S::block_right_1st = AudioOutputI2S::block_right_2nd;
		AudioOutputI2S::block_right_2nd = NULL;
	}
#else
	const int16_t *src, *end;
	int16_t *dest;
	audio_block_t *block;
	uint32_t saddr, offset;

	saddr = (uint32_t)(dma.CFG->SAR);
	dma.clearInterrupt();
	if (saddr < (uint32_t)i2s_tx_buffer + sizeof(i2s_tx_buffer) / 2) {
		// DMA is transmitting the first half of the buffer
		// so we must fill the second half
		dest = (int16_t *)&i2s_tx_buffer[AUDIO_BLOCK_SAMPLES/2];
		end = (int16_t *)&i2s_tx_buffer[AUDIO_BLOCK_SAMPLES];
		if (AudioOutputI2S::update_responsibility) AudioStream::update_all();
	} else {
		// DMA is transmitting the second half of the buffer
		// so we must fill the first half
		dest = (int16_t *)i2s_tx_buffer;
		end = (int16_t *)&i2s_tx_buffer[AUDIO_BLOCK_SAMPLES/2];
	}

	block = AudioOutputI2S::block_left_1st;
	if (block) {
		offset = AudioOutputI2S::block_left_offset;
		src = &block->data[offset];
		do {
			*dest = *src++;
			dest += 2;
		} while (dest < end);
		offset += AUDIO_BLOCK_SAMPLES/2;
		if (offset < AUDIO_BLOCK_SAMPLES) {
			AudioOutputI2S::block_left_offset = offset;
		} else {
			AudioOutputI2S::block_left_offset = 0;
			AudioStream::release(block);
			AudioOutputI2S::block_left_1st = AudioOutputI2S::block_left_2nd;
			AudioOutputI2S::block_left_2nd = NULL;
		}
	} else {
		do {
			*dest = 0;
			dest += 2;
		} while (dest < end);
	}
	dest -= AUDIO_BLOCK_SAMPLES - 1;
	block = AudioOutputI2S::block_right_1st;
	if (block) {
		offset = AudioOutputI2S::block_right_offset;
		src = &block->data[offset];
		do {
			*dest = *src++;
			dest += 2;
		} while (dest < end);
		offset += AUDIO_BLOCK_SAMPLES/2;
		if (offset < AUDIO_BLOCK_SAMPLES) {
			AudioOutputI2S::block_right_offset = offset;
		} else {
			AudioOutputI2S::block_right_offset = 0;
			AudioStream::release(block);
			AudioOutputI2S::block_right_1st = AudioOutputI2S::block_right_2nd;
			AudioOutputI2S::block_right_2nd = NULL;
		}
	} else {
		do {
			*dest = 0;
			dest += 2;
		} while (dest < end);
	}
#endif
}




void AudioOutputI2S::update(void)
{
	// null audio device: discard all incoming data
	//if (!active) return;
	//audio_block_t *block = receiveReadOnly();
	//if (block) release(block);

	audio_block_t *block;
	block = receiveReadOnly(0); // input 0 = left channel
	if (block) {
		__disable_irq();
		if (block_left_1st == NULL) {
			block_left_1st = block;
			block_left_offset = 0;
			__enable_irq();
		} else if (block_left_2nd == NULL) {
			block_left_2nd = block;
			__enable_irq();
		} else {
			audio_block_t *tmp = block_left_1st;
			block_left_1st = block_left_2nd;
			block_left_2nd = block;
			block_left_offset = 0;
			__enable_irq();
			release(tmp);
		}
	}
	block = receiveReadOnly(1); // input 1 = right channel
	if (block) {
		__disable_irq();
		if (block_right_1st == NULL) {
			block_right_1st = block;
			block_right_offset = 0;
			__enable_irq();
		} else if (block_right_2nd == NULL) {
			block_right_2nd = block;
			__enable_irq();
		} else {
			audio_block_t *tmp = block_right_1st;
			block_right_1st = block_right_2nd;
			block_right_2nd = block;
			block_right_offset = 0;
			__enable_irq();
			release(tmp);
		}
	}
}

#if defined(KINETISK)
// MCLK needs to be 48e6 / 1088 * 256 = 11.29411765 MHz -> 44.117647 kHz sample rate
//
#if F_CPU == 96000000 || F_CPU == 48000000 || F_CPU == 24000000
  // PLL is at 96 MHz in these modes
  #define MCLK_MULT 2
  #define MCLK_DIV  17
#elif F_CPU == 72000000
  #define MCLK_MULT 8
  #define MCLK_DIV  51
#elif F_CPU == 120000000
  #define MCLK_MULT 8
  #define MCLK_DIV  85
#elif F_CPU == 144000000
  #define MCLK_MULT 4
  #define MCLK_DIV  51
#elif F_CPU == 168000000
  #define MCLK_MULT 8
  #define MCLK_DIV  119
#elif F_CPU == 180000000
  #define MCLK_MULT 16
  #define MCLK_DIV  255
  #define MCLK_SRC  0
#elif F_CPU == 192000000
  #define MCLK_MULT 1
  #define MCLK_DIV  17
#elif F_CPU == 216000000
  #define MCLK_MULT 12
  #define MCLK_DIV  17
  #define MCLK_SRC  1
#elif F_CPU == 240000000
  #define MCLK_MULT 2
  #define MCLK_DIV  85
  #define MCLK_SRC  0
#elif F_CPU == 256000000
  #define MCLK_MULT 12
  #define MCLK_DIV  17
  #define MCLK_SRC  1
#elif F_CPU == 16000000
  #define MCLK_MULT 12
  #define MCLK_DIV  17
#else
  #error "This CPU Clock Speed is not supported by the Audio library";
#endif

#ifndef MCLK_SRC
#if F_CPU >= 20000000
  #define MCLK_SRC  3  // the PLL
#else
  #define MCLK_SRC  0  // system clock
#endif
#endif
#endif


void AudioOutputI2S::config_i2s(bool only_bclk)
{
#if defined(KINETISK)
	SIM_SCGC6 |= SIM_SCGC6_I2S;
	SIM_SCGC7 |= SIM_SCGC7_DMA;
	SIM_SCGC6 |= SIM_SCGC6_DMAMUX;

	// if either transmitter or receiver is enabled, do nothing
	if ((I2S0_TCSR & I2S_TCSR_TE) != 0 || (I2S0_RCSR & I2S_RCSR_RE) != 0)
	{
	  if (!only_bclk) // if previous transmitter/receiver only activated BCLK, activate the other clock pins now
	  {
	    CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	    CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK
	  }
	  return ;
	}

	// enable MCLK output
	I2S0_MCR = I2S_MCR_MICS(MCLK_SRC) | I2S_MCR_MOE;
	while (I2S0_MCR & I2S_MCR_DUF) ;
	I2S0_MDR = I2S_MDR_FRACT((MCLK_MULT-1)) | I2S_MDR_DIVIDE((MCLK_DIV-1));

	// configure transmitter
	I2S0_TMR = 0;
	I2S0_TCR1 = I2S_TCR1_TFW(1);  // watermark at half fifo size
	I2S0_TCR2 = I2S_TCR2_SYNC(0) | I2S_TCR2_BCP | I2S_TCR2_MSEL(1)
		| I2S_TCR2_BCD | I2S_TCR2_DIV(1);
	I2S0_TCR3 = I2S_TCR3_TCE;
	I2S0_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(31) | I2S_TCR4_MF
		| I2S_TCR4_FSE | I2S_TCR4_FSP | I2S_TCR4_FSD;
	I2S0_TCR5 = I2S_TCR5_WNW(31) | I2S_TCR5_W0W(31) | I2S_TCR5_FBT(31);

	// configure receiver (sync'd to transmitter clocks)
	I2S0_RMR = 0;
	I2S0_RCR1 = I2S_RCR1_RFW(1);
	I2S0_RCR2 = I2S_RCR2_SYNC(1) | I2S_TCR2_BCP | I2S_RCR2_MSEL(1)
		| I2S_RCR2_BCD | I2S_RCR2_DIV(1);
	I2S0_RCR3 = I2S_RCR3_RCE;
	I2S0_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(31) | I2S_RCR4_MF
		| I2S_RCR4_FSE | I2S_RCR4_FSP | I2S_RCR4_FSD;
	I2S0_RCR5 = I2S_RCR5_WNW(31) | I2S_RCR5_W0W(31) | I2S_RCR5_FBT(31);

	// configure pin mux for 3 clock signals
	if (!only_bclk)
	{
	  CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	  CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK
	}
	CORE_PIN9_CONFIG  = PORT_PCR_MUX(6); // pin  9, PTC3, I2S0_TX_BCLK

#elif defined(__IMXRT1062__)

	CCM_CCGR5 |= CCM_CCGR5_SAI1(CCM_CCGR_ON);

	// if either transmitter or receiver is enabled, do nothing
	if ((I2S1_TCSR & I2S_TCSR_TE) != 0 || (I2S1_RCSR & I2S_RCSR_RE) != 0)
	{
	  if (!only_bclk) // if previous transmitter/receiver only activated BCLK, activate the other clock pins now
	  {
	    CORE_PIN23_CONFIG = 3;  //1:MCLK
	    CORE_PIN20_CONFIG = 3;  //1:RX_SYNC (LRCLK)
	  }
	  return ;
	}

	//PLL:
	int fs = AUDIO_SAMPLE_RATE_EXACT;
	// PLL between 27*24 = 648MHz und 54*24=1296MHz
	int n1 = 4; //SAI prescaler 4 => (n1*n2) = multiple of 4
	int n2 = 1 + (24000000 * 27) / (fs * 256 * n1);

	double C = ((double)fs * 256 * n1 * n2) / 24000000;
	int c0 = C;
	int c2 = 10000;
	int c1 = C * c2 - (c0 * c2);
	set_audioClock(c0, c1, c2);

	// clear SAI1_CLK register locations
	CCM_CSCMR1 = (CCM_CSCMR1 & ~(CCM_CSCMR1_SAI1_CLK_SEL_MASK))
		   | CCM_CSCMR1_SAI1_CLK_SEL(2); // &0x03 // (0,1,2): PLL3PFD0, PLL5, PLL4
	CCM_CS1CDR = (CCM_CS1CDR & ~(CCM_CS1CDR_SAI1_CLK_PRED_MASK | CCM_CS1CDR_SAI1_CLK_PODF_MASK))
		   | CCM_CS1CDR_SAI1_CLK_PRED(n1-1) // &0x07
		   | CCM_CS1CDR_SAI1_CLK_PODF(n2-1); // &0x3f

	// Select MCLK
	IOMUXC_GPR_GPR1 = (IOMUXC_GPR_GPR1
		& ~(IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL_MASK))
		| (IOMUXC_GPR_GPR1_SAI1_MCLK_DIR | IOMUXC_GPR_GPR1_SAI1_MCLK1_SEL(0));

	if (!only_bclk)
	{
	  CORE_PIN23_CONFIG = 3;  //1:MCLK
	  CORE_PIN20_CONFIG = 3;  //1:RX_SYNC  (LRCLK)
	}
	CORE_PIN21_CONFIG = 3;  //1:RX_BCLK

	int rsync = 0;
	int tsync = 1;

	I2S1_TMR = 0;
	//I2S1_TCSR = (1<<25); //Reset
	I2S1_TCR1 = I2S_TCR1_RFW(1);
	I2S1_TCR2 = I2S_TCR2_SYNC(tsync) | I2S_TCR2_BCP // sync=0; tx is async;
		    | (I2S_TCR2_BCD | I2S_TCR2_DIV((1)) | I2S_TCR2_MSEL(1));
	I2S1_TCR3 = I2S_TCR3_TCE;
	I2S1_TCR4 = I2S_TCR4_FRSZ((2-1)) | I2S_TCR4_SYWD((32-1)) | I2S_TCR4_MF
		    | I2S_TCR4_FSD | I2S_TCR4_FSE | I2S_TCR4_FSP;
	I2S1_TCR5 = I2S_TCR5_WNW((32-1)) | I2S_TCR5_W0W((32-1)) | I2S_TCR5_FBT((32-1));

	I2S1_RMR = 0;
	//I2S1_RCSR = (1<<25); //Reset
	I2S1_RCR1 = I2S_RCR1_RFW(1);
	I2S1_RCR2 = I2S_RCR2_SYNC(rsync) | I2S_RCR2_BCP  // sync=0; rx is async;
		    | (I2S_RCR2_BCD | I2S_RCR2_DIV((1)) | I2S_RCR2_MSEL(1));
	I2S1_RCR3 = I2S_RCR3_RCE;
	I2S1_RCR4 = I2S_RCR4_FRSZ((2-1)) | I2S_RCR4_SYWD((32-1)) | I2S_RCR4_MF
		    | I2S_RCR4_FSE | I2S_RCR4_FSP | I2S_RCR4_FSD;
	I2S1_RCR5 = I2S_RCR5_WNW((32-1)) | I2S_RCR5_W0W((32-1)) | I2S_RCR5_FBT((32-1));

#endif
}


/******************************************************************/

void AudioOutputI2Sslave::begin(void)
{

	dma.begin(true); // Allocate the DMA channel first

	block_left_1st = NULL;
	block_right_1st = NULL;

	AudioOutputI2Sslave::config_i2s();

#if defined(KINETISK)
	CORE_PIN22_CONFIG = PORT_PCR_MUX(6); // pin 22, PTC1, I2S0_TXD0
	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1);
	dma.TCD->NBYTES_MLNO = 2;
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DADDR = (void *)((uint32_t)&I2S0_TDR0 + 2);
	dma.TCD->DOFF = 0;
	dma.TCD->CITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->DLASTSGA = 0;
	dma.TCD->BITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma.enable();

	I2S0_TCSR = I2S_TCSR_SR;
	I2S0_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;

#elif defined(__IMXRT1062__)
	CORE_PIN7_CONFIG  = 3;  //1:TX_DATA0
	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1);
	dma.TCD->NBYTES_MLNO = 2;
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DOFF = 0;
	dma.TCD->CITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->DLASTSGA = 0;
	dma.TCD->BITER_ELINKNO = sizeof(i2s_tx_buffer) / 2;
	dma.TCD->DADDR = (void *)((uint32_t)&I2S1_TDR0 + 2);
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_SAI1_TX);
	dma.enable();

	I2S1_RCSR |= I2S_RCSR_RE | I2S_RCSR_BCE;
	I2S1_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;
#endif

	update_responsibility = update_setup();
	dma.attachInterrupt(isr);
}

void AudioOutputI2Sslave::config_i2s(void)
{
#if defined(KINETISK)
	SIM_SCGC6 |= SIM_SCGC6_I2S;
	SIM_SCGC7 |= SIM_SCGC7_DMA;
	SIM_SCGC6 |= SIM_SCGC6_DMAMUX;

	// if either transmitter or receiver is enabled, do nothing
	if (I2S0_TCSR & I2S_TCSR_TE) return;
	if (I2S0_RCSR & I2S_RCSR_RE) return;

	// Select input clock 0
	// Configure to input the bit-clock from pin, bypasses the MCLK divider
	I2S0_MCR = I2S_MCR_MICS(0);
	I2S0_MDR = 0;

	// configure transmitter
	I2S0_TMR = 0;
	I2S0_TCR1 = I2S_TCR1_TFW(1);  // watermark at half fifo size
	I2S0_TCR2 = I2S_TCR2_SYNC(0) | I2S_TCR2_BCP;

	I2S0_TCR3 = I2S_TCR3_TCE;
	I2S0_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(31) | I2S_TCR4_MF
		| I2S_TCR4_FSE | I2S_TCR4_FSP;

	I2S0_TCR5 = I2S_TCR5_WNW(31) | I2S_TCR5_W0W(31) | I2S_TCR5_FBT(31);

	// configure receiver (sync'd to transmitter clocks)
	I2S0_RMR = 0;
	I2S0_RCR1 = I2S_RCR1_RFW(1);
	I2S0_RCR2 = I2S_RCR2_SYNC(1) | I2S_TCR2_BCP;

	I2S0_RCR3 = I2S_RCR3_RCE;
	I2S0_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(31) | I2S_RCR4_MF
		| I2S_RCR4_FSE | I2S_RCR4_FSP | I2S_RCR4_FSD;

	I2S0_RCR5 = I2S_RCR5_WNW(31) | I2S_RCR5_W0W(31) | I2S_RCR5_FBT(31);

	// configure pin mux for 3 clock signals
	CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	CORE_PIN9_CONFIG  = PORT_PCR_MUX(6); // pin  9, PTC3, I2S0_TX_BCLK
	CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK

#elif defined(__IMXRT1062__)

	CCM_CCGR5 |= CCM_CCGR5_SAI1(CCM_CCGR_ON);

	// if either transmitter or receiver is enabled, do nothing
	if (I2S1_TCSR & I2S_TCSR_TE) return;
	if (I2S1_RCSR & I2S_RCSR_RE) return;

	// not using MCLK in slave mode - hope that's ok?
	//CORE_PIN23_CONFIG = 3;  // AD_B1_09  ALT3=SAI1_MCLK
	CORE_PIN21_CONFIG = 3;  // AD_B1_11  ALT3=SAI1_RX_BCLK
	CORE_PIN20_CONFIG = 3;  // AD_B1_10  ALT3=SAI1_RX_SYNC
	IOMUXC_SAI1_RX_BCLK_SELECT_INPUT = 1; // 1=GPIO_AD_B1_11_ALT3, page 868
	IOMUXC_SAI1_RX_SYNC_SELECT_INPUT = 1; // 1=GPIO_AD_B1_10_ALT3, page 872

	// configure transmitter
	I2S1_TMR = 0;
	I2S1_TCR1 = I2S_TCR1_RFW(1);  // watermark at half fifo size
	I2S1_TCR2 = I2S_TCR2_SYNC(1) | I2S_TCR2_BCP;
	I2S1_TCR3 = I2S_TCR3_TCE;
	I2S1_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(31) | I2S_TCR4_MF
		| I2S_TCR4_FSE | I2S_TCR4_FSP | I2S_RCR4_FSD;
	I2S1_TCR5 = I2S_TCR5_WNW(31) | I2S_TCR5_W0W(31) | I2S_TCR5_FBT(31);

	// configure receiver
	I2S1_RMR = 0;
	I2S1_RCR1 = I2S_RCR1_RFW(1);
	I2S1_RCR2 = I2S_RCR2_SYNC(0) | I2S_TCR2_BCP;
	I2S1_RCR3 = I2S_RCR3_RCE;
	I2S1_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(31) | I2S_RCR4_MF
		| I2S_RCR4_FSE | I2S_RCR4_FSP;
	I2S1_RCR5 = I2S_RCR5_WNW(31) | I2S_RCR5_W0W(31) | I2S_RCR5_FBT(31);

#endif
}


#elif defined(KINETISL)

/**************************************************************************************
*       Teensy LC
***************************************************************************************/

// added jan 2021, Frank Bösing

audio_block_t * AudioOutputI2S::block_left = NULL;
audio_block_t * AudioOutputI2S::block_right = NULL;
bool AudioOutputI2S::update_responsibility = false;

#define NUM_SAMPLES (AUDIO_BLOCK_SAMPLES / 2)

DMAMEM static int16_t i2s_tx_buffer1[NUM_SAMPLES * 2];
DMAMEM static int16_t i2s_tx_buffer2[NUM_SAMPLES * 2];
DMAChannel AudioOutputI2S::dma1(false);
DMAChannel AudioOutputI2S::dma2(false);

void AudioOutputI2S::begin(void)
{

	memset(i2s_tx_buffer1, 0, sizeof( i2s_tx_buffer1 ) );
	memset(i2s_tx_buffer2, 0, sizeof( i2s_tx_buffer2 ) );

	dma1.begin(true); // Allocate the DMA channel first
	dma2.begin(true);

	config_i2s();
	CORE_PIN22_CONFIG = PORT_PCR_MUX(6); // pin 22, PTC1, I2S0_TXD0

	//configure both DMA channels
	dma1.sourceBuffer(i2s_tx_buffer1, sizeof(i2s_tx_buffer1));
	dma1.CFG->DAR = (void *)((uint32_t)&I2S0_TDR0);
	dma1.CFG->DCR = (dma1.CFG->DCR & 0xF0F0F0FF) | DMA_DCR_DSIZE(2);
	dma1.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma1.interruptAtCompletion();
	dma1.disableOnCompletion();
	dma1.attachInterrupt(isr1);


	dma2.sourceBuffer(i2s_tx_buffer2, sizeof(i2s_tx_buffer2));
	dma2.CFG->DAR = dma1.CFG->DAR;
	dma2.CFG->DCR = dma1.CFG->DCR;
	dma2.interruptAtCompletion();
	dma2.disableOnCompletion();
	dma2.attachInterrupt(isr2);

	update_responsibility = update_setup();
	dma1.enable();

	I2S0_TCSR = I2S_TCSR_SR;
	I2S0_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FWDE;

}

void AudioOutputI2S::config_i2s(void)
{

	SIM_SCGC6 |= SIM_SCGC6_I2S;//Enable I2S periphal

	// enable MCLK, 16MHZ
	I2S0_MCR = I2S_MCR_MICS(0) | I2S_MCR_MOE;
	//MDR is not available on Teensy LC

	// configure transmitter
	I2S0_TMR = 0;
	I2S0_TCR2 = I2S_TCR2_SYNC(0) | I2S_TCR2_BCP | I2S_TCR2_MSEL(1) | I2S_TCR2_BCD | I2S_TCR2_DIV(16);
	I2S0_TCR3 = I2S_TCR3_TCE;
	I2S0_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(15) | I2S_TCR4_MF | I2S_TCR4_FSE | I2S_TCR4_FSP | I2S_TCR4_FSD;
	I2S0_TCR5 = I2S_TCR5_WNW(15) | I2S_TCR5_W0W(15) | I2S_TCR5_FBT(15);

	// configure receiver (sync'd to transmitter clocks)
	I2S0_RMR = 0;
	I2S0_RCR2 = I2S_RCR2_SYNC(1) | I2S_TCR2_BCP;
	I2S0_RCR3 = I2S_RCR3_RCE;
	I2S0_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(15) | I2S_RCR4_MF | I2S_RCR4_FSE | I2S_RCR4_FSP | I2S_RCR4_FSD;
	I2S0_RCR5 = I2S_RCR5_WNW(15) | I2S_RCR5_W0W(15) | I2S_RCR5_FBT(15);

	// configure pin mux	
	CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	CORE_PIN9_CONFIG  = PORT_PCR_MUX(6); // pin  9, PTC3, I2S0_TX_BCLK	
	//No Mclk here - it would be 16MHz
	//CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK
}

void AudioOutputI2S::update(void)
{
	if (!block_left)  block_left  = receiveReadOnly(0);// input 0 = left channel
	if (!block_right) block_right = receiveReadOnly(1);// input 1 = right channel
}

inline __attribute__((always_inline, hot))
static void interleave(const int16_t *dest,const audio_block_t *block_left, const audio_block_t *block_right, const size_t offset)
{
//return;
	uint32_t *p = (uint32_t*)dest;
	uint32_t *end = p + NUM_SAMPLES;

	if (block_left != nullptr && block_right != nullptr) {
		uint16_t *l = (uint16_t*)&block_left->data[offset];
		uint16_t *r = (uint16_t*)&block_right->data[offset];
		do {
			*p++ = (((uint32_t)(*l++)) << 16)  | (uint32_t)(*r++);
			*p++ = (((uint32_t)(*l++)) << 16)  | (uint32_t)(*r++);
			*p++ = (((uint32_t)(*l++)) << 16)  | (uint32_t)(*r++);
			*p++ = (((uint32_t)(*l++)) << 16)  | (uint32_t)(*r++);
		} while (p < end);
		return;
	}

	if (block_left != nullptr) {
		uint16_t *l = (uint16_t*)&block_left->data[offset];
		do {
			*p++ = (uint32_t)(*l++) << 16;
			*p++ = (uint32_t)(*l++) << 16;
			*p++ = (uint32_t)(*l++) << 16;
			*p++ = (uint32_t)(*l++) << 16;
		} while (p < end);
		return;
	}

	if (block_right != nullptr) {
		uint16_t *r = (uint16_t*)&block_right->data[offset];
		do {
			*p++ =(uint32_t)(*r++);
			*p++ =(uint32_t)(*r++);
			*p++ =(uint32_t)(*r++);
			*p++ =(uint32_t)(*r++);
		} while (p < end);
		return;
	}

	do {
		*p++ = 0;
		*p++ = 0;
	} while (p < end);

}

void AudioOutputI2S::isr1(void)
{	//DMA Channel 1 Interrupt

	//Start Channel 2:
	dma2.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma2.enable();

	//Reset & Copy Data Channel 1
	dma1.clearInterrupt();
	dma1.sourceBuffer(i2s_tx_buffer1, sizeof(i2s_tx_buffer1));
	interleave(&i2s_tx_buffer1[0], AudioOutputI2S::block_left, AudioOutputI2S::block_right, 0);
}

void __attribute__((interrupt("IRQ"))) AudioOutputI2S::isr2(void)
{	//DMA Channel 2 Interrupt

	//Start Channel 1:
	dma1.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma1.enable();

	//Reset & Copy Data Channel 2
	dma2.clearInterrupt();
	dma2.sourceBuffer(i2s_tx_buffer2, sizeof(i2s_tx_buffer2));

	audio_block_t *block_left = AudioOutputI2S::block_left;
	audio_block_t *block_right = AudioOutputI2S::block_right;

	interleave(&i2s_tx_buffer2[0], block_left, block_right, NUM_SAMPLES);

	if (block_left) AudioStream::release(block_left);
	if (block_right) AudioStream::release(block_right);

	AudioOutputI2S::block_left = nullptr;
	AudioOutputI2S::block_right = nullptr;

	if (AudioOutputI2S::update_responsibility) AudioStream::update_all();
}

void AudioOutputI2Sslave::begin(void)
{
	memset(i2s_tx_buffer1, 0, sizeof( i2s_tx_buffer1 ) );
	memset(i2s_tx_buffer2, 0, sizeof( i2s_tx_buffer2 ) );

	dma1.begin(true); // Allocate the DMA channels first
	dma2.begin(true);
	
	config_i2s();
	CORE_PIN22_CONFIG = PORT_PCR_MUX(6); // pin 22, PTC1, I2S0_TXD0
	
	//configure both DMA channels
	dma1.sourceBuffer(i2s_tx_buffer1, sizeof(i2s_tx_buffer1));
	dma1.CFG->DAR = (void *)((uint32_t)&I2S0_TDR0 + 2);
	dma1.CFG->DCR = (dma1.CFG->DCR & 0xF0F0F0FF) | DMA_DCR_DSIZE(2);
	dma1.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	dma1.interruptAtCompletion();
	dma1.disableOnCompletion();
	dma1.attachInterrupt(isr1);

	dma2.sourceBuffer(i2s_tx_buffer2, sizeof(i2s_tx_buffer2));
	dma2.CFG->DAR = dma1.CFG->DAR;
	dma2.CFG->DCR = dma1.CFG->DCR;
	dma2.interruptAtCompletion();
	dma2.disableOnCompletion();
	dma2.attachInterrupt(isr2);

	update_responsibility = update_setup();
	dma1.enable();

	I2S0_TCSR = I2S_TCSR_SR;
	I2S0_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FWDE;

}
void AudioOutputI2Sslave::config_i2s(void)
{
	SIM_SCGC6 |= SIM_SCGC6_I2S;//Enable I2S periphal
	
	// enable MCLK, 16MHZ
	I2S0_MCR = I2S_MCR_MICS(1) | I2S_MCR_MOE;
	//MDR is not available on Teensy LC

	// configure transmitter
	I2S0_TMR = 0;
	I2S0_TCR2 = I2S_TCR2_SYNC(0) | I2S_TCR2_BCP;
	I2S0_TCR3 = I2S_TCR3_TCE;
	I2S0_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(31) | I2S_TCR4_MF | I2S_TCR4_FSE | I2S_TCR4_FSP;
	I2S0_TCR5 = I2S_TCR5_WNW(31) | I2S_TCR5_W0W(31) | I2S_TCR5_FBT(31);

	// configure receiver (sync'd to transmitter clocks)
	I2S0_RMR = 0;	
	I2S0_RCR2 = I2S_RCR2_SYNC(1) | I2S_TCR2_BCP;
	I2S0_RCR3 = I2S_RCR3_RCE;
	I2S0_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(31) | I2S_RCR4_MF | I2S_RCR4_FSE | I2S_RCR4_FSP;
	I2S0_RCR5 = I2S_RCR5_WNW(31) | I2S_RCR5_W0W(31) | I2S_RCR5_FBT(31);
	
	// configure pin mux
	CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	CORE_PIN9_CONFIG  = PORT_PCR_MUX(6); // pin  9, PTC3, I2S0_TX_BCLK
	CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK  	!!16MHz!!
	
}

#endif

