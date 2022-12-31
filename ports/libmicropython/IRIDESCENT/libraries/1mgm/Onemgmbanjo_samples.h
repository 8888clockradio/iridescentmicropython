#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbanjo_ranges[] = {66, 107, 127, };

extern const FLASHMEM sample_data Onemgmbanjo_samples[3];
const FLASHMEM instrument_data Onemgmbanjo = { 3, const_cast<uint8_t*>(Onemgmbanjo_ranges), const_cast<sample_data*>(Onemgmbanjo_samples) };

#include "sample_Onemgm_banjog2_sample.h"
#include "sample_Onemgm_banjod3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
