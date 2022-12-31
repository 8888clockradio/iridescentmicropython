#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmapplause_ranges[] = {111, 124, 127, 127, };

extern const FLASHMEM sample_data Onemgmapplause_samples[4];
const FLASHMEM instrument_data Onemgmapplause = { 4, const_cast<uint8_t*>(Onemgmapplause_ranges), const_cast<sample_data*>(Onemgmapplause_samples) };

#include "sample_Onemgm_applause_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_applause_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
