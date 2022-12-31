#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmmetalpad_ranges[] = {85, 97, 127, };

extern const FLASHMEM sample_data Onemgmmetalpad_samples[3];
const FLASHMEM instrument_data Onemgmmetalpad = { 3, const_cast<uint8_t*>(Onemgmmetalpad_ranges), const_cast<sample_data*>(Onemgmmetalpad_samples) };

#include "sample_Onemgm_contraviobass_sample.h"
#include "sample_Onemgm_rhodeschime_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
