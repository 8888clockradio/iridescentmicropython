#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmclav_ranges[] = {103, 127, };

extern const FLASHMEM sample_data Onemgmclav_samples[2];
const FLASHMEM instrument_data Onemgmclav = { 2, const_cast<uint8_t*>(Onemgmclav_ranges), const_cast<sample_data*>(Onemgmclav_samples) };

#include "sample_Onemgm_clavc2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
