#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmvibraphone_ranges[] = {94, 94, 127, };

extern const FLASHMEM sample_data Onemgmvibraphone_samples[3];
const FLASHMEM instrument_data Onemgmvibraphone = { 3, const_cast<uint8_t*>(Onemgmvibraphone_ranges), const_cast<sample_data*>(Onemgmvibraphone_samples) };

#include "sample_Onemgm_vibese2_sample.h"
#include "sample_Onemgm_vibese2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
