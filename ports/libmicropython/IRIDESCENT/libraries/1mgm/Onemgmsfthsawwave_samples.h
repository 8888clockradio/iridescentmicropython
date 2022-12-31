#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsfthsawwave_ranges[] = {107, 127, };

extern const FLASHMEM sample_data Onemgmsfthsawwave_samples[2];
const FLASHMEM instrument_data Onemgmsfthsawwave = { 2, const_cast<uint8_t*>(Onemgmsfthsawwave_ranges), const_cast<sample_data*>(Onemgmsfthsawwave_samples) };

#include "sample_Onemgm_bsawtoothwavea3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
