#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmgunshot_ranges[] = {114, 117, 127, 127, };

extern const FLASHMEM sample_data Onemgmgunshot_samples[4];
const FLASHMEM instrument_data Onemgmgunshot = { 4, const_cast<uint8_t*>(Onemgmgunshot_ranges), const_cast<sample_data*>(Onemgmgunshot_samples) };

#include "sample_Onemgm_gunshot_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_gunshot_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
