#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsynthbrassTwo_ranges[] = {108, 127, };

extern const FLASHMEM sample_data OnemgmsynthbrassTwo_samples[2];
const FLASHMEM instrument_data OnemgmsynthbrassTwo = { 2, const_cast<uint8_t*>(OnemgmsynthbrassTwo_ranges), const_cast<sample_data*>(OnemgmsynthbrassTwo_samples) };

#include "sample_Onemgm_sawstackwavems_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
