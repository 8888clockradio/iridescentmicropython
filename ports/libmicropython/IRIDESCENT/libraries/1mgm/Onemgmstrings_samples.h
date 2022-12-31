#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmstrings_ranges[] = {59, 72, 115, 127, };

extern const FLASHMEM sample_data Onemgmstrings_samples[4];
const FLASHMEM instrument_data Onemgmstrings = { 4, const_cast<uint8_t*>(Onemgmstrings_ranges), const_cast<sample_data*>(Onemgmstrings_samples) };

#include "sample_Onemgm_stringsg2_sample.h"
#include "sample_Onemgm_stringsf3_sample.h"
#include "sample_Onemgm_stringsdx4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
