#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmbassoon_ranges[] = {88, 101, 127, };

extern const FLASHMEM sample_data Onemgmbassoon_samples[3];
const FLASHMEM instrument_data Onemgmbassoon = { 3, const_cast<uint8_t*>(Onemgmbassoon_ranges), const_cast<sample_data*>(Onemgmbassoon_samples) };

#include "sample_Onemgm_bassoonc2_sample.h"
#include "sample_Onemgm_enghorndx3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
