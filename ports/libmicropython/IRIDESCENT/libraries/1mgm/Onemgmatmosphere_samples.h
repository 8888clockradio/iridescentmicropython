#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmatmosphere_ranges[] = {72, 97, 127, };

extern const FLASHMEM sample_data Onemgmatmosphere_samples[3];
const FLASHMEM instrument_data Onemgmatmosphere = { 3, const_cast<uint8_t*>(Onemgmatmosphere_ranges), const_cast<sample_data*>(Onemgmatmosphere_samples) };

#include "sample_Onemgm_acgtrg2_sample.h"
#include "sample_Onemgm_acgtrb3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
