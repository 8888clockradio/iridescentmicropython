#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmfthsawwave_ranges[] = {109, 127, };

extern const FLASHMEM sample_data Onemgmfthsawwave_samples[2];
const FLASHMEM instrument_data Onemgmfthsawwave = { 2, const_cast<uint8_t*>(Onemgmfthsawwave_ranges), const_cast<sample_data*>(Onemgmfthsawwave_samples) };

#include "sample_Onemgm_sawstackwavems_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
