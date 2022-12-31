#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmslapbassOne_ranges[] = {72, 110, 127, };

extern const FLASHMEM sample_data OnemgmslapbassOne_samples[3];
const FLASHMEM instrument_data OnemgmslapbassOne = { 3, const_cast<uint8_t*>(OnemgmslapbassOne_ranges), const_cast<sample_data*>(OnemgmslapbassOne_samples) };

#include "sample_Onemgm_slapbass1c3_sample.h"
#include "sample_Onemgm_clavc2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
