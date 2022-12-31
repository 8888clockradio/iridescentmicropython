#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmbrassOne_ranges[] = {71, 116, 127, };

extern const FLASHMEM sample_data OnemgmbrassOne_samples[3];
const FLASHMEM instrument_data OnemgmbrassOne = { 3, const_cast<uint8_t*>(OnemgmbrassOne_ranges), const_cast<sample_data*>(OnemgmbrassOne_samples) };

#include "sample_Onemgm_brasssectc3_sample.h"
#include "sample_Onemgm_brasssectf5_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
