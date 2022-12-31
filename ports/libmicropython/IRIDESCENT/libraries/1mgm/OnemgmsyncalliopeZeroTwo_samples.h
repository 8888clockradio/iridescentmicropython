#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsyncalliopeZeroTwo_ranges[] = {91, 127, };

extern const FLASHMEM sample_data OnemgmsyncalliopeZeroTwo_samples[2];
const FLASHMEM instrument_data OnemgmsyncalliopeZeroTwo = { 2, const_cast<uint8_t*>(OnemgmsyncalliopeZeroTwo_ranges), const_cast<sample_data*>(OnemgmsyncalliopeZeroTwo_samples) };

#include "sample_Onemgm_sikue2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
