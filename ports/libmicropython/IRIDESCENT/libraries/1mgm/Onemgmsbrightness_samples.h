#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsbrightness_ranges[] = {115, 127, };

extern const FLASHMEM sample_data Onemgmsbrightness_samples[2];
const FLASHMEM instrument_data Onemgmsbrightness = { 2, const_cast<uint8_t*>(Onemgmsbrightness_ranges), const_cast<sample_data*>(Onemgmsbrightness_samples) };

#include "sample_Onemgm_synthstringsc4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
