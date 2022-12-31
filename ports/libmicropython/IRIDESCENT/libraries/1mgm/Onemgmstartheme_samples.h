#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmstartheme_ranges[] = {127, };

extern const FLASHMEM sample_data Onemgmstartheme_samples[1];
const FLASHMEM instrument_data Onemgmstartheme = { 1, const_cast<uint8_t*>(Onemgmstartheme_ranges), const_cast<sample_data*>(Onemgmstartheme_samples) };

#include "sample_Onemgm_elguitard2_sample.h"
