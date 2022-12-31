#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmoboe_ranges[] = {63, 68, 109, 127, };

extern const FLASHMEM sample_data Onemgmoboe_samples[4];
const FLASHMEM instrument_data Onemgmoboe = { 4, const_cast<uint8_t*>(Onemgmoboe_ranges), const_cast<sample_data*>(Onemgmoboe_samples) };

#include "sample_Onemgm_oboecx3_sample.h"
#include "sample_Onemgm_oboefx3_sample.h"
#include "sample_Onemgm_oboeax3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
