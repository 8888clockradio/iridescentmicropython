#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbirds_ranges[] = {99, 91, 127, 127, };

extern const FLASHMEM sample_data Onemgmbirds_samples[4];
const FLASHMEM instrument_data Onemgmbirds = { 4, const_cast<uint8_t*>(Onemgmbirds_ranges), const_cast<sample_data*>(Onemgmbirds_samples) };

#include "sample_Onemgm_sinewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_sinewave_sample.h"
#include "sample_Onemgm_sinewave_sample.h"
