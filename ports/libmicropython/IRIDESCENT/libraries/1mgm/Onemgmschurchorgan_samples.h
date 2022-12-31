#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmschurchorgan_ranges[] = {60, 87, 127, };

extern const FLASHMEM sample_data Onemgmschurchorgan_samples[3];
const FLASHMEM instrument_data Onemgmschurchorgan = { 3, const_cast<uint8_t*>(Onemgmschurchorgan_ranges), const_cast<sample_data*>(Onemgmschurchorgan_samples) };

#include "sample_Onemgm_flutec4_sample.h"
#include "sample_Onemgm_flutec4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
