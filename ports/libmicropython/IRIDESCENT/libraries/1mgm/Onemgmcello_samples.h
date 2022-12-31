#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmcello_ranges[] = {53, 105, 127, };

extern const FLASHMEM sample_data Onemgmcello_samples[3];
const FLASHMEM instrument_data Onemgmcello = { 3, const_cast<uint8_t*>(Onemgmcello_ranges), const_cast<sample_data*>(Onemgmcello_samples) };

#include "sample_Onemgm_arcocellod2_sample.h"
#include "sample_Onemgm_arcocelloax2_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
