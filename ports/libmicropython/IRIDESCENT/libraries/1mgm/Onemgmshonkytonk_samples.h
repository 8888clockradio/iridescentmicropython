#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmshonkytonk_ranges[] = {50, 57, 68, 76, 81, 88, 91, 127, };

extern const FLASHMEM sample_data Onemgmshonkytonk_samples[8];
const FLASHMEM instrument_data Onemgmshonkytonk = { 8, const_cast<uint8_t*>(Onemgmshonkytonk_ranges), const_cast<sample_data*>(Onemgmshonkytonk_samples) };

#include "sample_Onemgm_kpianob1_sample.h"
#include "sample_Onemgm_kpianog2_sample.h"
#include "sample_Onemgm_kpianocx4_sample.h"
#include "sample_Onemgm_kpianob4_sample.h"
#include "sample_Onemgm_kpianof5_sample.h"
#include "sample_Onemgm_kpianodx5_sample.h"
#include "sample_Onemgm_kpianof502_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
