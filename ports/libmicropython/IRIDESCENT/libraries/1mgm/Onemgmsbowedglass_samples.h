#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsbowedglass_ranges[] = {98, 127, };

extern const FLASHMEM sample_data Onemgmsbowedglass_samples[2];
const FLASHMEM instrument_data Onemgmsbowedglass = { 2, const_cast<uint8_t*>(Onemgmsbowedglass_ranges), const_cast<sample_data*>(Onemgmsbowedglass_samples) };

#include "sample_Onemgm_resynth4d4wave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
