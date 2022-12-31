#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmssynthbassTwo_ranges[] = {89, 110, 127, };

extern const FLASHMEM sample_data OnemgmssynthbassTwo_samples[3];
const FLASHMEM instrument_data OnemgmssynthbassTwo = { 3, const_cast<uint8_t*>(OnemgmssynthbassTwo_ranges), const_cast<sample_data*>(OnemgmssynthbassTwo_samples) };

#include "sample_Onemgm_bassguitloop_sample.h"
#include "sample_Onemgm_pluckharp_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
