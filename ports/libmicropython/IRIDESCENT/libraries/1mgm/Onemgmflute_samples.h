#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmflute_ranges[] = {111, 127, };

extern const FLASHMEM sample_data Onemgmflute_samples[2];
const FLASHMEM instrument_data Onemgmflute = { 2, const_cast<uint8_t*>(Onemgmflute_ranges), const_cast<sample_data*>(Onemgmflute_samples) };

#include "sample_Onemgm_flutec4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
