#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsynthbassOne_ranges[] = {65, 109, 102, 127, 127, };

extern const FLASHMEM sample_data OnemgmsynthbassOne_samples[5];
const FLASHMEM instrument_data OnemgmsynthbassOne = { 5, const_cast<uint8_t*>(OnemgmsynthbassOne_ranges), const_cast<sample_data*>(OnemgmsynthbassOne_samples) };

#include "sample_Onemgm_synthbassloop_sample.h"
#include "sample_Onemgm_sawstackwavems_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_bsawtoothwavea3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
