#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmseashore_ranges[] = {109, 120, 127, 127, };

extern const FLASHMEM sample_data Onemgmseashore_samples[4];
const FLASHMEM instrument_data Onemgmseashore = { 4, const_cast<uint8_t*>(Onemgmseashore_ranges), const_cast<sample_data*>(Onemgmseashore_samples) };

#include "sample_Onemgm_whitenoisewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_whitenoisewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
