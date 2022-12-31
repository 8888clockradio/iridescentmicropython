#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmhelicopter_ranges[] = {59, 106, 127, 127, };

extern const FLASHMEM sample_data Onemgmhelicopter_samples[4];
const FLASHMEM instrument_data Onemgmhelicopter = { 4, const_cast<uint8_t*>(Onemgmhelicopter_ranges), const_cast<sample_data*>(Onemgmhelicopter_samples) };

#include "sample_Onemgm_whitenoisewave_sample.h"
#include "sample_Onemgm_whitenoisewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
#include "sample_Onemgm_femalevoiceg2_sample.h"
