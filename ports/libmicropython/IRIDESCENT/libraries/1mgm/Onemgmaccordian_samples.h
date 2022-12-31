#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmaccordian_ranges[] = {55, 66, 111, 127, };

extern const FLASHMEM sample_data Onemgmaccordian_samples[4];
const FLASHMEM instrument_data Onemgmaccordian = { 4, const_cast<uint8_t*>(Onemgmaccordian_ranges), const_cast<sample_data*>(Onemgmaccordian_samples) };

#include "sample_Onemgm_accordfx2_sample.h"
#include "sample_Onemgm_accordax2_sample.h"
#include "sample_Onemgm_accordfx3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
