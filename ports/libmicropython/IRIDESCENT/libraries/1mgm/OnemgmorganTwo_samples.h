#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmorganTwo_ranges[] = {75, 121, 127, };

extern const FLASHMEM sample_data OnemgmorganTwo_samples[3];
const FLASHMEM instrument_data OnemgmorganTwo = { 3, const_cast<uint8_t*>(OnemgmorganTwo_ranges), const_cast<sample_data*>(OnemgmorganTwo_samples) };

#include "sample_Onemgm_organwave_sample.h"
#include "sample_Onemgm_organwavea3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
