#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmnylonstrgtr_ranges[] = {56, 77, 97, 127, };

extern const FLASHMEM sample_data Onemgmnylonstrgtr_samples[4];
const FLASHMEM instrument_data Onemgmnylonstrgtr = { 4, const_cast<uint8_t*>(Onemgmnylonstrgtr_ranges), const_cast<sample_data*>(Onemgmnylonstrgtr_samples) };

#include "sample_Onemgm_nguitrf2_sample.h"
#include "sample_Onemgm_nguitb2_sample.h"
#include "sample_Onemgm_acgtrb3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
