#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbandneon_ranges[] = {59, 111, 127, };

extern const FLASHMEM sample_data Onemgmbandneon_samples[3];
const FLASHMEM instrument_data Onemgmbandneon = { 3, const_cast<uint8_t*>(Onemgmbandneon_ranges), const_cast<sample_data*>(Onemgmbandneon_samples) };

#include "sample_Onemgm_accordfx2_sample.h"
#include "sample_Onemgm_accordfx3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
