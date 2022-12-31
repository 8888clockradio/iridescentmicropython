#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmtuba_ranges[] = {86, 111, 127, };

extern const FLASHMEM sample_data Onemgmtuba_samples[3];
const FLASHMEM instrument_data Onemgmtuba = { 3, const_cast<uint8_t*>(Onemgmtuba_ranges), const_cast<sample_data*>(Onemgmtuba_samples) };

#include "sample_Onemgm_tubaax1_sample.h"
#include "sample_Onemgm_tromg4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
