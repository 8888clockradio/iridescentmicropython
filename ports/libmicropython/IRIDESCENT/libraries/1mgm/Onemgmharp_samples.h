#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmharp_ranges[] = {110, 127, };

extern const FLASHMEM sample_data Onemgmharp_samples[2];
const FLASHMEM instrument_data Onemgmharp = { 2, const_cast<uint8_t*>(Onemgmharp_ranges), const_cast<sample_data*>(Onemgmharp_samples) };

#include "sample_Onemgm_pluckharp_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
