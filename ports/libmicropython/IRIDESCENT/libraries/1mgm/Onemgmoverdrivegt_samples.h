#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmoverdrivegt_ranges[] = {62, 66, 105, 127, };

extern const FLASHMEM sample_data Onemgmoverdrivegt_samples[4];
const FLASHMEM instrument_data Onemgmoverdrivegt = { 4, const_cast<uint8_t*>(Onemgmoverdrivegt_ranges), const_cast<sample_data*>(Onemgmoverdrivegt_samples) };

#include "sample_Onemgm_distgtra2_sample.h"
#include "sample_Onemgm_distgtre3_sample.h"
#include "sample_Onemgm_distgtra3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
