#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmxylophone_ranges[] = {127, 127, };

extern const FLASHMEM sample_data Onemgmxylophone_samples[2];
const FLASHMEM instrument_data Onemgmxylophone = { 2, const_cast<uint8_t*>(Onemgmxylophone_ranges), const_cast<sample_data*>(Onemgmxylophone_samples) };

#include "sample_Onemgm_xyloe4unlooped_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
