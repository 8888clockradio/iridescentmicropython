#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbreathnoise_ranges[] = {91, 127, };

extern const FLASHMEM sample_data Onemgmbreathnoise_samples[2];
const FLASHMEM instrument_data Onemgmbreathnoise = { 2, const_cast<uint8_t*>(Onemgmbreathnoise_ranges), const_cast<sample_data*>(Onemgmbreathnoise_samples) };

#include "sample_Onemgm_sikue2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
