#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmmutedtrumpet_ranges[] = {65, 112, 127, };

extern const FLASHMEM sample_data Onemgmmutedtrumpet_samples[3];
const FLASHMEM instrument_data Onemgmmutedtrumpet = { 3, const_cast<uint8_t*>(Onemgmmutedtrumpet_ranges), const_cast<sample_data*>(Onemgmmutedtrumpet_samples) };

#include "sample_Onemgm_hrmnmutec3_sample.h"
#include "sample_Onemgm_hrmnmutec4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
