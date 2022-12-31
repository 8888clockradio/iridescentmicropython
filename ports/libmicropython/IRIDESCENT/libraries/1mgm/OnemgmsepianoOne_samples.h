#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsepianoOne_ranges[] = {60, 98, 127, };

extern const FLASHMEM sample_data OnemgmsepianoOne_samples[3];
const FLASHMEM instrument_data OnemgmsepianoOne = { 3, const_cast<uint8_t*>(OnemgmsepianoOne_ranges), const_cast<sample_data*>(OnemgmsepianoOne_samples) };

#include "sample_Onemgm_rhodeschime_sample.h"
#include "sample_Onemgm_sinewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
