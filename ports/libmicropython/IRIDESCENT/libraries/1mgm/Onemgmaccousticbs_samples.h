#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmaccousticbs_ranges[] = {87, 110, 127, };

extern const FLASHMEM sample_data Onemgmaccousticbs_samples[3];
const FLASHMEM instrument_data Onemgmaccousticbs = { 3, const_cast<uint8_t*>(Onemgmaccousticbs_ranges), const_cast<sample_data*>(Onemgmaccousticbs_samples) };

#include "sample_Onemgm_acbasse1_sample.h"
#include "sample_Onemgm_pluckharp_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
