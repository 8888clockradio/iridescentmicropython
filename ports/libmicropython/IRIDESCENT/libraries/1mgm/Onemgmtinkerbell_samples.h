#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmtinkerbell_ranges[] = {76, 110, 127, };

extern const FLASHMEM sample_data Onemgmtinkerbell_samples[3];
const FLASHMEM instrument_data Onemgmtinkerbell = { 3, const_cast<uint8_t*>(Onemgmtinkerbell_ranges), const_cast<sample_data*>(Onemgmtinkerbell_samples) };

#include "sample_Onemgm_coldglass7wave_sample.h"
#include "sample_Onemgm_coldglass12wave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
