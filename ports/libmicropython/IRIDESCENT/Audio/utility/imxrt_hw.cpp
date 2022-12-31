/* Audio Library for Teensy 3.X
 * Copyright (c) 2019, Paul Stoffregen, paul@pjrc.com
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
/*
 (c) Frank B
*/

#if defined(__IMXRT1052__) || defined(__IMXRT1062__)
#include "imxrt_hw.h"

FLASHMEM
void set_audioClock(int nfact, int32_t nmult, uint32_t ndiv, bool force) // sets PLL4
{
#define IMXRT_CCM_ANALOG    (*(IMXRT_REGISTER32_t *)IMXRT_CCM_ANALOG_ADDRESS)
#define CCM_ANALOG_PLL_ARM        (IMXRT_CCM_ANALOG.offset000)
#define CCM_ANALOG_PLL_ARM_SET        (IMXRT_CCM_ANALOG.offset004)
#define CCM_ANALOG_PLL_ARM_CLR        (IMXRT_CCM_ANALOG.offset008)
#define CCM_ANALOG_PLL_ARM_TOG        (IMXRT_CCM_ANALOG.offset00C)
#define CCM_ANALOG_PLL_USB1        (IMXRT_CCM_ANALOG.offset010)
#define CCM_ANALOG_PLL_USB1_SET        (IMXRT_CCM_ANALOG.offset014)
#define CCM_ANALOG_PLL_USB1_CLR        (IMXRT_CCM_ANALOG.offset018)
#define CCM_ANALOG_PLL_USB1_TOG        (IMXRT_CCM_ANALOG.offset01C)
#define CCM_ANALOG_PLL_USB2        (IMXRT_CCM_ANALOG.offset020)
#define CCM_ANALOG_PLL_USB2_SET        (IMXRT_CCM_ANALOG.offset024)
#define CCM_ANALOG_PLL_USB2_CLR        (IMXRT_CCM_ANALOG.offset028)
#define CCM_ANALOG_PLL_USB2_TOG        (IMXRT_CCM_ANALOG.offset02C)
#define CCM_ANALOG_PLL_SYS        (IMXRT_CCM_ANALOG.offset030)
#define CCM_ANALOG_PLL_SYS_SET        (IMXRT_CCM_ANALOG.offset034)
#define CCM_ANALOG_PLL_SYS_CLR        (IMXRT_CCM_ANALOG.offset038)
#define CCM_ANALOG_PLL_SYS_TOG        (IMXRT_CCM_ANALOG.offset03C)
#define CCM_ANALOG_PLL_SYS_SS        (IMXRT_CCM_ANALOG.offset040)
#define CCM_ANALOG_PLL_SYS_NUM        (IMXRT_CCM_ANALOG.offset050)
#define CCM_ANALOG_PLL_SYS_DENOM    (IMXRT_CCM_ANALOG.offset060)
#define CCM_ANALOG_PLL_AUDIO        (IMXRT_CCM_ANALOG.offset070)
#define CCM_ANALOG_PLL_AUDIO_SET    (IMXRT_CCM_ANALOG.offset074)
#define CCM_ANALOG_PLL_AUDIO_CLR    (IMXRT_CCM_ANALOG.offset078)
#define CCM_ANALOG_PLL_AUDIO_TOG    (IMXRT_CCM_ANALOG.offset07C)
#define CCM_ANALOG_PLL_AUDIO_NUM    (IMXRT_CCM_ANALOG.offset080)
#define CCM_ANALOG_PLL_AUDIO_DENOM    (IMXRT_CCM_ANALOG.offset090)
#define CCM_ANALOG_PLL_VIDEO        (IMXRT_CCM_ANALOG.offset0A0)
#define CCM_ANALOG_PLL_VIDEO_SET    (IMXRT_CCM_ANALOG.offset0A4)
#define CCM_ANALOG_PLL_VIDEO_CLR    (IMXRT_CCM_ANALOG.offset0A8)
#define CCM_ANALOG_PLL_VIDEO_TOG    (IMXRT_CCM_ANALOG.offset0AC)
#define CCM_ANALOG_PLL_VIDEO_NUM    (IMXRT_CCM_ANALOG.offset0B0)
#define CCM_ANALOG_PLL_VIDEO_DENOM    (IMXRT_CCM_ANALOG.offset0C0)
//#define CCM_ANALOG_PLL_ENET        (IMXRT_CCM_ANALOG.offset0EC)
#define CCM_ANALOG_PLL_ENET_SET        (IMXRT_CCM_ANALOG.offset0E4)
#define CCM_ANALOG_PLL_ENET_CLR        (IMXRT_CCM_ANALOG.offset0E8)
#define CCM_ANALOG_PLL_ENET_TOG        (IMXRT_CCM_ANALOG.offset0EC)
#define CCM_ANALOG_PFD_480        (IMXRT_CCM_ANALOG.offset0F0)
#define CCM_ANALOG_PFD_480_SET        (IMXRT_CCM_ANALOG.offset0F4)
#define CCM_ANALOG_PFD_480_CLR        (IMXRT_CCM_ANALOG.offset0F8)
#define CCM_ANALOG_PFD_480_TOG        (IMXRT_CCM_ANALOG.offset0FC)
#define CCM_ANALOG_PFD_528        (IMXRT_CCM_ANALOG.offset100)
#define CCM_ANALOG_PFD_528_SET        (IMXRT_CCM_ANALOG.offset104)
#define CCM_ANALOG_PFD_528_CLR        (IMXRT_CCM_ANALOG.offset108)
#define CCM_ANALOG_PFD_528_TOG        (IMXRT_CCM_ANALOG.offset10C)
#define CCM_ANALOG_MISC0        (IMXRT_CCM_ANALOG.offset150)
#define CCM_ANALOG_MISC0_SET        (IMXRT_CCM_ANALOG.offset154)
#define CCM_ANALOG_MISC0_CLR        (IMXRT_CCM_ANALOG.offset158)
#define CCM_ANALOG_MISC0_TOG        (IMXRT_CCM_ANALOG.offset15C)
#define CCM_ANALOG_MISC1        (IMXRT_CCM_ANALOG.offset160)
#define CCM_ANALOG_MISC1_SET        (IMXRT_CCM_ANALOG.offset164)
#define CCM_ANALOG_MISC1_CLR        (IMXRT_CCM_ANALOG.offset168)
#define CCM_ANALOG_MISC1_TOG        (IMXRT_CCM_ANALOG.offset16C)
#define CCM_ANALOG_MISC2        (IMXRT_CCM_ANALOG.offset170)
#define CCM_ANALOG_MISC2_SET        (IMXRT_CCM_ANALOG.offset174)
#define CCM_ANALOG_MISC2_CLR        (IMXRT_CCM_ANALOG.offset178)
#define CCM_ANALOG_MISC2_TOG        (IMXRT_CCM_ANALOG.offset17C)
#define CCM_ANALOG_PLL_ARM_LOCK            ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_ARM_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_ARM_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_ARM_POWERDOWN        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_ARM_DIV_SELECT(n)    ((uint32_t)(((n) & 0x7F) << 0))
#define CCM_ANALOG_PLL_ARM_DIV_SELECT_MASK    ((uint32_t)(0x7F << 0))
#define CCM_ANALOG_PLL_USB1_LOCK        ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_USB1_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_USB1_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_USB1_POWER        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_USB1_EN_USB_CLKS        ((uint32_t)(1<<6))
#define CCM_ANALOG_PLL_USB1_DIV_SELECT        ((uint32_t)(1<<1))
#define CCM_ANALOG_PLL_USB2_LOCK        ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_USB2_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_USB2_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_USB2_POWER        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_USB2_EN_USB_CLKS        ((uint32_t)(1<<6))
#define CCM_ANALOG_PLL_USB2_DIV_SELECT        ((uint32_t)(1<<1))
#define CCM_ANALOG_PLL_SYS_LOCK            ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_SYS_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_SYS_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_SYS_POWERDOWN        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_SYS_DIV_SELECT        ((uint32_t)(1<<1))
#define CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(n)    ((uint32_t)(((n) & 0x03) <<19))
#define CCM_ANALOG_PLL_AUDIO_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_AUDIO_BYPASS_CLK_SRC(n)    ((uint32_t)(((n) & 0x03) <<14))
#define CCM_ANALOG_PLL_AUDIO_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_AUDIO_POWERDOWN        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_AUDIO_DIV_SELECT(n)    ((uint32_t)((n) & ((1<<6)-1)))
#define CCM_ANALOG_PLL_VIDEO_LOCK        ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_VIDEO_POST_DIV_SELECT(n)    ((uint32_t)(((n) & 0x03) << 19))
#define CCM_ANALOG_PLL_VIDEO_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_VIDEO_BYPASS_CLK_SRC(n)    ((uint32_t)(((n) & 0x03) << 14))
#define CCM_ANALOG_PLL_VIDEO_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_VIDEO_POWERDOWN        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_VIDEO_DIV_SELECT(n)    ((uint32_t)(((n) & 0x7F) << 0))
#define CCM_ANALOG_PLL_ENET_LOCK        ((uint32_t)(1<<31))
#define CCM_ANALOG_PLL_ENET_ENET_25M_REF_EN    ((uint32_t)(1<<21))
#define CCM_ANALOG_PLL_ENET_ENET2_REF_EN    ((uint32_t)(1<<20))
#define CCM_ANALOG_PLL_ENET_BYPASS        ((uint32_t)(1<<16))
#define CCM_ANALOG_PLL_ENET_BYPASS_CLK_SRC(n)    ((uint32_t)(((n) & 0x03) << 14))
#define CCM_ANALOG_PLL_ENET_ENABLE        ((uint32_t)(1<<13))
#define CCM_ANALOG_PLL_ENET_POWERDOWN        ((uint32_t)(1<<12))
#define CCM_ANALOG_PLL_ENET_ENET2_DIV_SELECT(n)    ((uint32_t)(((n) & 0x03) << 2))
#define CCM_ANALOG_PLL_ENET_DIV_SELECT(n)    ((uint32_t)(((n) & 0x03) << 0))
#define CCM_ANALOG_MISC0_XTAL_24M_PWD        ((uint32_t)(1<<30))
#define CCM_ANALOG_MISC0_RTC_XTAL_SOURCE    ((uint32_t)(1<<29))
#define CCM_ANALOG_MISC0_CLKGATE_DELAY(n)    ((uint32_t)(((n) & 0x07) << 26))
#define CCM_ANALOG_MISC0_CLKGATE_CTRL        ((uint32_t)(1<<25))
#define CCM_ANALOG_MISC0_OSC_XTALOK_EN        ((uint32_t)(1<<16))
#define CCM_ANALOG_MISC0_OSC_XTALOK        ((uint32_t)(1<<15))
#define CCM_ANALOG_MISC0_OSC_I(n)        ((uint32_t)(((n) & 0x03) << 13))
#define CCM_ANALOG_MISC0_DISCON_HIGH_SNVS    ((uint32_t)(1<<12))
#define CCM_ANALOG_MISC0_STOP_MODE_CONFIG(n)    ((uint32_t)(((n) & 0x03) << 10))
#define CCM_ANALOG_MISC0_REFTOP_VBGUP        ((uint32_t)(1<<7))
#define CCM_ANALOG_MISC0_REFTOP_VBGADJ(n)    ((uint32_t)(((n) & 0x07) << 4))
#define CCM_ANALOG_MISC0_REFTOP_SELFBIASOFF    ((uint32_t)(1<<3))
#define CCM_ANALOG_MISC0_REFTOP_PWD        ((uint32_t)(1<<0))
#define CCM_ANALOG_MISC1_IRQ_DIG_BO        ((uint32_t)(1<<31))
#define CCM_ANALOG_MISC1_IRQ_ANA_BO        ((uint32_t)(1<<30))
#define CCM_ANALOG_MISC1_IRQ_TEMPHIGH        ((uint32_t)(1<<29))
#define CCM_ANALOG_MISC1_IRQ_TEMPLOW        ((uint32_t)(1<<28))
#define CCM_ANALOG_MISC1_IRQ_TEMPPANIC        ((uint32_t)(1<<27))
#define CCM_ANALOG_MISC1_PFD_528_AUTOGATE_EN    ((uint32_t)(1<<17))
#define CCM_ANALOG_MISC1_PFD_480_AUTOGATE_EN    ((uint32_t)(1<<16))
#define CCM_ANALOG_MISC1_LVDSCLK1_IBEN        ((uint32_t)(1<<12))
#define CCM_ANALOG_MISC1_LVDSCLK1_OBEN        ((uint32_t)(1<<10))
#define CCM_ANALOG_MISC1_LVDS1_CLK_SEL(n)    ((uint32_t)(((n) & 0x1F) << 0))
#define CCM_ANALOG_MISC2_VIDEO_DIV(n)        ((uint32_t)(((n) & 0x03) << 30))
#define CCM_ANALOG_MISC2_REG2_STEP_TIME(n)    ((uint32_t)(((n) & 0x03) << 28))
#define CCM_ANALOG_MISC2_REG1_STEP_TIME(n)    ((uint32_t)(((n) & 0x03) << 26))
#define CCM_ANALOG_MISC2_REG0_STEP_TIME(n)    ((uint32_t)(((n) & 0x03) << 24))
#define CCM_ANALOG_MISC2_DIV_MSB        ((uint32_t)(1<<23))
#define CCM_ANALOG_MISC2_AUDIO_DIV_MSB        ((uint32_t)(1<<23))
#define CCM_ANALOG_MISC2_REG2_OK        ((uint32_t)(1<<22))
#define CCM_ANALOG_MISC2_REG2_ENABLE_BO        ((uint32_t)(1<<21))
#define CCM_ANALOG_MISC2_REG2_BO_STATUS        ((uint32_t)(1<<19))
#define CCM_ANALOG_MISC2_REG2_BO_OFFSET(n)    ((uint32_t)(((n) & 0x07) << 16))
#define CCM_ANALOG_MISC2_DIV_LSB        ((uint32_t)(1<<15))
#define CCM_ANALOG_MISC2_AUDIO_DIV_LSB        ((uint32_t)(1<<15))
#define CCM_ANALOG_MISC2_REG1_OK        ((uint32_t)(1<<14))
#define CCM_ANALOG_MISC2_REG1_ENABLE_BO        ((uint32_t)(1<<13))
#define CCM_ANALOG_MISC2_REG1_BO_STATUS        ((uint32_t)(1<<11))
#define CCM_ANALOG_MISC2_REG1_BO_OFFSET(n)    ((uint32_t)(((n) & 0x07) << 8))
#define CCM_ANALOG_MISC2_PLL3_DISABLE        ((uint32_t)(1<<7))
#define CCM_ANALOG_MISC2_REG0_OK        ((uint32_t)(1<<6))
#define CCM_ANALOG_MISC2_REG0_ENABLE_BO        ((uint32_t)(1<<5))
#define CCM_ANALOG_MISC2_REG0_BO_STATUS        ((uint32_t)(1<<3))
#define CCM_ANALOG_MISC2_REG0_BO_OFFSET(n)    ((uint32_t)(((n) & 0x07) << 0))
#define CCM_ANALOG_PLL_AUDIO_NUM_MASK        (((1<<29)-1))
#define CCM_ANALOG_PLL_AUDIO_DENOM_MASK        (((1<<29)-1))
#define CCM_ANALOG_PLL_AUDIO_LOCK        ((uint32_t)(1<<31))

	if (!force && (CCM_ANALOG_PLL_AUDIO & CCM_ANALOG_PLL_AUDIO_ENABLE)) return;

	CCM_ANALOG_PLL_AUDIO = CCM_ANALOG_PLL_AUDIO_BYPASS | CCM_ANALOG_PLL_AUDIO_ENABLE
			     | CCM_ANALOG_PLL_AUDIO_POST_DIV_SELECT(2) // 2: 1/4; 1: 1/2; 0: 1/1
			     | CCM_ANALOG_PLL_AUDIO_DIV_SELECT(nfact);

	CCM_ANALOG_PLL_AUDIO_NUM   = nmult & CCM_ANALOG_PLL_AUDIO_NUM_MASK;
	CCM_ANALOG_PLL_AUDIO_DENOM = ndiv & CCM_ANALOG_PLL_AUDIO_DENOM_MASK;
	
	CCM_ANALOG_PLL_AUDIO &= ~CCM_ANALOG_PLL_AUDIO_POWERDOWN;//Switch on PLL
	while (!(CCM_ANALOG_PLL_AUDIO & CCM_ANALOG_PLL_AUDIO_LOCK)) {}; //Wait for pll-lock
	
	const int div_post_pll = 1; // other values: 2,4
	CCM_ANALOG_MISC2 &= ~(CCM_ANALOG_MISC2_DIV_MSB | CCM_ANALOG_MISC2_DIV_LSB);
	if(div_post_pll>1) CCM_ANALOG_MISC2 |= CCM_ANALOG_MISC2_DIV_LSB;
	if(div_post_pll>3) CCM_ANALOG_MISC2 |= CCM_ANALOG_MISC2_DIV_MSB;
	
	CCM_ANALOG_PLL_AUDIO &= ~CCM_ANALOG_PLL_AUDIO_BYPASS;//Disable Bypass
}

#endif
