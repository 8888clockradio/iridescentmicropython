#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmepianoOne_ranges[] = {48, 60, 80, 103, 127, };

extern const FLASHMEM sample_data OnemgmepianoOne_samples[5];
const FLASHMEM instrument_data OnemgmepianoOne = { 5, const_cast<uint8_t*>(OnemgmepianoOne_ranges), const_cast<sample_data*>(OnemgmepianoOne_samples) };

#include "sample_Onemgm_coldglass7wave_sample.h"
#include "sample_Onemgm_coldglass7wave_sample.h"
#include "sample_Onemgm_coldglass7wave_sample.h"
#include "sample_Onemgm_epiano2ms_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
