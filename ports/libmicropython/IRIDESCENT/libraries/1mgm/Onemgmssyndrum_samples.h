#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmssyndrum_ranges[] = {111, 127, };

extern const FLASHMEM sample_data Onemgmssyndrum_samples[2];
const FLASHMEM instrument_data Onemgmssyndrum = { 2, const_cast<uint8_t*>(Onemgmssyndrum_ranges), const_cast<sample_data*>(Onemgmssyndrum_samples) };

#include "sample_Onemgm_sinewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
