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
#include "output_i2s_quad.h"
#include "output_i2s.h"
#include "memcpy_audio.h"

#if defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__) || defined(__IMXRT1062__)

#if defined(__IMXRT1062__)
#include "utility/imxrt_hw.h"
#endif

audio_block_t * AudioOutputI2SQuad::block_ch1_1st = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch2_1st = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch3_1st = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch4_1st = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch1_2nd = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch2_2nd = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch3_2nd = NULL;
audio_block_t * AudioOutputI2SQuad::block_ch4_2nd = NULL;
uint16_t  AudioOutputI2SQuad::ch1_offset = 0;
uint16_t  AudioOutputI2SQuad::ch2_offset = 0;
uint16_t  AudioOutputI2SQuad::ch3_offset = 0;
uint16_t  AudioOutputI2SQuad::ch4_offset = 0;
bool AudioOutputI2SQuad::update_responsibility = false;
DMAMEM __attribute__((aligned(32))) static uint32_t i2s_tx_buffer[AUDIO_BLOCK_SAMPLES*2];
DMAChannel AudioOutputI2SQuad::dma(false);

static const uint32_t zerodata[AUDIO_BLOCK_SAMPLES/4] = {0};

void AudioOutputI2SQuad::begin(void)
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

	block_ch1_1st = NULL;
	block_ch2_1st = NULL;
	block_ch3_1st = NULL;
	block_ch4_1st = NULL;

#if defined(KINETISK)
	// TODO: can we call normal config_i2s, and then just enable the extra output?
	config_i2s();
	CORE_PIN22_CONFIG = PORT_PCR_MUX(6); // pin 22, PTC1, I2S0_TXD0 -> ch1 & ch2
	CORE_PIN15_CONFIG = PORT_PCR_MUX(6); // pin 15, PTC0, I2S0_TXD1 -> ch3 & ch4

	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1) | DMA_TCD_ATTR_DMOD(3);
	dma.TCD->NBYTES_MLNO = 4;
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DADDR = &I2S0_TDR0;
	dma.TCD->DOFF = 4;
	dma.TCD->CITER_ELINKNO = sizeof(i2s_tx_buffer) / 4;
	dma.TCD->DLASTSGA = 0;
	dma.TCD->BITER_ELINKNO = sizeof(i2s_tx_buffer) / 4;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_I2S0_TX);
	update_responsibility = update_setup();
	dma.enable();

	I2S0_TCSR = I2S_TCSR_SR;
	I2S0_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;
	dma.attachInterrupt(isr);

#elif defined(__IMXRT1062__)
	const int pinoffset = 0; // TODO: make this configurable...
	memset(i2s_tx_buffer, 0, sizeof(i2s_tx_buffer));
	AudioOutputI2S::config_i2s();
	I2S1_TCR3 = I2S_TCR3_TCE_2CH << pinoffset;
	switch (pinoffset) {
	  case 0:
		CORE_PIN7_CONFIG  = 3;
		CORE_PIN32_CONFIG = 3;
		break;
	  case 1:
		CORE_PIN32_CONFIG = 3;
		CORE_PIN9_CONFIG  = 3;
		break;
	  case 2:
		CORE_PIN9_CONFIG  = 3;
		CORE_PIN6_CONFIG  = 3;
	}
	dma.TCD->SADDR = i2s_tx_buffer;
	dma.TCD->SOFF = 2;
	dma.TCD->ATTR = DMA_TCD_ATTR_SSIZE(1) | DMA_TCD_ATTR_DSIZE(1);
	dma.TCD->NBYTES_MLOFFYES = DMA_TCD_NBYTES_DMLOE |
		DMA_TCD_NBYTES_MLOFFYES_MLOFF(-8) |
		DMA_TCD_NBYTES_MLOFFYES_NBYTES(4);
	dma.TCD->SLAST = -sizeof(i2s_tx_buffer);
	dma.TCD->DADDR = (void *)((uint32_t)&I2S1_TDR0 + 2 + pinoffset * 4);
	dma.TCD->DOFF = 4;
	dma.TCD->CITER_ELINKNO = AUDIO_BLOCK_SAMPLES * 2;
	dma.TCD->DLASTSGA = -8;
	dma.TCD->BITER_ELINKNO = AUDIO_BLOCK_SAMPLES * 2;
	dma.TCD->CSR = DMA_TCD_CSR_INTHALF | DMA_TCD_CSR_INTMAJOR;
	dma.triggerAtHardwareEvent(DMAMUX_SOURCE_SAI1_TX);
	dma.enable();
	I2S1_RCSR |= I2S_RCSR_RE | I2S_RCSR_BCE;
	I2S1_TCSR = I2S_TCSR_TE | I2S_TCSR_BCE | I2S_TCSR_FRDE;
	I2S1_TCR3 = I2S_TCR3_TCE_2CH << pinoffset;
	update_responsibility = update_setup();
	dma.attachInterrupt(isr);
#endif
}

void AudioOutputI2SQuad::isr(void)
{
	uint32_t saddr;
	const int16_t *src1, *src2, *src3, *src4;
	const int16_t *zeros = (const int16_t *)zerodata;
	int16_t *dest;

	saddr = (uint32_t)(dma.TCD->SADDR);
	dma.clearInterrupt();
	if (saddr < (uint32_t)i2s_tx_buffer + sizeof(i2s_tx_buffer) / 2) {
		// DMA is transmitting the first half of the buffer
		// so we must fill the second half
		dest = (int16_t *)&i2s_tx_buffer[AUDIO_BLOCK_SAMPLES];
		if (update_responsibility) update_all();
	} else {
		dest = (int16_t *)i2s_tx_buffer;
	}

	src1 = (block_ch1_1st) ? block_ch1_1st->data + ch1_offset : zeros;
	src2 = (block_ch2_1st) ? block_ch2_1st->data + ch2_offset : zeros;
	src3 = (block_ch3_1st) ? block_ch3_1st->data + ch3_offset : zeros;
	src4 = (block_ch4_1st) ? block_ch4_1st->data + ch4_offset : zeros;

#if 1
	memcpy_tointerleaveQuad(dest, src1, src2, src3, src4);
#else
	// about this code: https://forum.pjrc.com/threads/64508
	for (int i=0; i < AUDIO_BLOCK_SAMPLES/2; i++) {
		*dest++ = *src1++;
		*dest++ = *src3++;
		*dest++ = *src2++;
		*dest++ = *src4++;
	}
#endif
	arm_dcache_flush_delete(dest, sizeof(i2s_tx_buffer) / 2 );

	if (block_ch1_1st) {
		if (ch1_offset == 0) {
			ch1_offset = AUDIO_BLOCK_SAMPLES/2;
		} else {
			ch1_offset = 0;
			release(block_ch1_1st);
			block_ch1_1st = block_ch1_2nd;
			block_ch1_2nd = NULL;
		}
	}
	if (block_ch2_1st) {
		if (ch2_offset == 0) {
			ch2_offset = AUDIO_BLOCK_SAMPLES/2;
		} else {
			ch2_offset = 0;
			release(block_ch2_1st);
			block_ch2_1st = block_ch2_2nd;
			block_ch2_2nd = NULL;
		}
	}
	if (block_ch3_1st) {
		if (ch3_offset == 0) {
			ch3_offset = AUDIO_BLOCK_SAMPLES/2;
		} else {
			ch3_offset = 0;
			release(block_ch3_1st);
			block_ch3_1st = block_ch3_2nd;
			block_ch3_2nd = NULL;
		}
	}
	if (block_ch4_1st) {
		if (ch4_offset == 0) {
			ch4_offset = AUDIO_BLOCK_SAMPLES/2;
		} else {
			ch4_offset = 0;
			release(block_ch4_1st);
			block_ch4_1st = block_ch4_2nd;
			block_ch4_2nd = NULL;
		}
	}
}


void AudioOutputI2SQuad::update(void)
{
	audio_block_t *block, *tmp;

	block = receiveReadOnly(0); // channel 1
	if (block) {
		__disable_irq();
		if (block_ch1_1st == NULL) {
			block_ch1_1st = block;
			ch1_offset = 0;
			__enable_irq();
		} else if (block_ch1_2nd == NULL) {
			block_ch1_2nd = block;
			__enable_irq();
		} else {
			tmp = block_ch1_1st;
			block_ch1_1st = block_ch1_2nd;
			block_ch1_2nd = block;
			ch1_offset = 0;
			__enable_irq();
			release(tmp);
		}
	}
	block = receiveReadOnly(1); // channel 2
	if (block) {
		__disable_irq();
		if (block_ch2_1st == NULL) {
			block_ch2_1st = block;
			ch2_offset = 0;
			__enable_irq();
		} else if (block_ch2_2nd == NULL) {
			block_ch2_2nd = block;
			__enable_irq();
		} else {
			tmp = block_ch2_1st;
			block_ch2_1st = block_ch2_2nd;
			block_ch2_2nd = block;
			ch2_offset = 0;
			__enable_irq();
			release(tmp);
		}
	}
	block = receiveReadOnly(2); // channel 3
	if (block) {
		__disable_irq();
		if (block_ch3_1st == NULL) {
			block_ch3_1st = block;
			ch3_offset = 0;
			__enable_irq();
		} else if (block_ch3_2nd == NULL) {
			block_ch3_2nd = block;
			__enable_irq();
		} else {
			tmp = block_ch3_1st;
			block_ch3_1st = block_ch3_2nd;
			block_ch3_2nd = block;
			ch3_offset = 0;
			__enable_irq();
			release(tmp);
		}
	}
	block = receiveReadOnly(3); // channel 4
	if (block) {
		__disable_irq();
		if (block_ch4_1st == NULL) {
			block_ch4_1st = block;
			ch4_offset = 0;
			__enable_irq();
		} else if (block_ch4_2nd == NULL) {
			block_ch4_2nd = block;
			__enable_irq();
		} else {
			tmp = block_ch4_1st;
			block_ch4_1st = block_ch4_2nd;
			block_ch4_2nd = block;
			ch4_offset = 0;
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

void AudioOutputI2SQuad::config_i2s(void)
{
	SIM_SCGC6 |= SIM_SCGC6_I2S;
	SIM_SCGC7 |= SIM_SCGC7_DMA;
	SIM_SCGC6 |= SIM_SCGC6_DMAMUX;

	// if either transmitter or receiver is enabled, do nothing
	if (I2S0_TCSR & I2S_TCSR_TE) return;
	if (I2S0_RCSR & I2S_RCSR_RE) return;

	// enable MCLK output
	I2S0_MCR = I2S_MCR_MICS(MCLK_SRC) | I2S_MCR_MOE;
	while (I2S0_MCR & I2S_MCR_DUF) ;
	I2S0_MDR = I2S_MDR_FRACT((MCLK_MULT-1)) | I2S_MDR_DIVIDE((MCLK_DIV-1));

	// configure transmitter
	I2S0_TMR = 0;
	I2S0_TCR1 = I2S_TCR1_TFW(1);  // watermark at half fifo size
	I2S0_TCR2 = I2S_TCR2_SYNC(0) | I2S_TCR2_BCP | I2S_TCR2_MSEL(1)
		| I2S_TCR2_BCD | I2S_TCR2_DIV(3);
	I2S0_TCR3 = I2S_TCR3_TCE_2CH;
	I2S0_TCR4 = I2S_TCR4_FRSZ(1) | I2S_TCR4_SYWD(15) | I2S_TCR4_MF
		| I2S_TCR4_FSE | I2S_TCR4_FSP | I2S_TCR4_FSD;
	I2S0_TCR5 = I2S_TCR5_WNW(15) | I2S_TCR5_W0W(15) | I2S_TCR5_FBT(15);

	// configure receiver (sync'd to transmitter clocks)
	I2S0_RMR = 0;
	I2S0_RCR1 = I2S_RCR1_RFW(1);
	I2S0_RCR2 = I2S_RCR2_SYNC(1) | I2S_TCR2_BCP | I2S_RCR2_MSEL(1)
		| I2S_RCR2_BCD | I2S_RCR2_DIV(3);
	I2S0_RCR3 = I2S_RCR3_RCE_2CH;
	I2S0_RCR4 = I2S_RCR4_FRSZ(1) | I2S_RCR4_SYWD(15) | I2S_RCR4_MF
		| I2S_RCR4_FSE | I2S_RCR4_FSP | I2S_RCR4_FSD;
	I2S0_RCR5 = I2S_RCR5_WNW(15) | I2S_RCR5_W0W(15) | I2S_RCR5_FBT(15);

	// configure pin mux for 3 clock signals
	CORE_PIN23_CONFIG = PORT_PCR_MUX(6); // pin 23, PTC2, I2S0_TX_FS (LRCLK)
	CORE_PIN9_CONFIG  = PORT_PCR_MUX(6); // pin  9, PTC3, I2S0_TX_BCLK
	CORE_PIN11_CONFIG = PORT_PCR_MUX(6); // pin 11, PTC6, I2S0_MCLK
}
#endif // KINETISK


#else // not supported

void AudioOutputI2SQuad::begin(void)
{
}

void AudioOutputI2SQuad::update(void)
{
	audio_block_t *block;

	block = receiveReadOnly(0);
	if (block) release(block);
	block = receiveReadOnly(1);
	if (block) release(block);
	block = receiveReadOnly(2);
	if (block) release(block);
	block = receiveReadOnly(3);
	if (block) release(block);
}

#endif
