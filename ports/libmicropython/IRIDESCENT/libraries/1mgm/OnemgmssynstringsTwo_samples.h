#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmssynstringsTwo_ranges[] = {116, 127, };

extern const FLASHMEM sample_data OnemgmssynstringsTwo_samples[2];
const FLASHMEM instrument_data OnemgmssynstringsTwo = { 2, const_cast<uint8_t*>(OnemgmssynstringsTwo_ranges), const_cast<sample_data*>(OnemgmssynstringsTwo_samples) };

#include "sample_Onemgm_synthstringsc4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
