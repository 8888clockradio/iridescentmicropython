#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsmusicbox_ranges[] = {60, 86, 127, };

extern const FLASHMEM sample_data Onemgmsmusicbox_samples[3];
const FLASHMEM instrument_data Onemgmsmusicbox = { 3, const_cast<uint8_t*>(Onemgmsmusicbox_ranges), const_cast<sample_data*>(Onemgmsmusicbox_samples) };

#include "sample_Onemgm_octavewave_sample.h"
#include "sample_Onemgm_octavewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
