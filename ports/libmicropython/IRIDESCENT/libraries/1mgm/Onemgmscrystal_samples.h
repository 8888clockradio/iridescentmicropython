#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmscrystal_ranges[] = {118, 127, };

extern const FLASHMEM sample_data Onemgmscrystal_samples[2];
const FLASHMEM instrument_data Onemgmscrystal = { 2, const_cast<uint8_t*>(Onemgmscrystal_ranges), const_cast<sample_data*>(Onemgmscrystal_samples) };

#include "sample_Onemgm_tbelld4wave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
