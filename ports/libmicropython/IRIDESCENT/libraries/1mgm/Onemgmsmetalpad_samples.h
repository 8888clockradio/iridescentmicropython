#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmsmetalpad_ranges[] = {64, 76, 85, 98, 127, };

extern const FLASHMEM sample_data Onemgmsmetalpad_samples[5];
const FLASHMEM instrument_data Onemgmsmetalpad = { 5, const_cast<uint8_t*>(Onemgmsmetalpad_ranges), const_cast<sample_data*>(Onemgmsmetalpad_samples) };

#include "sample_Onemgm_acgtrb3_sample.h"
#include "sample_Onemgm_acgtrb3_sample.h"
#include "sample_Onemgm_acgtrb3_sample.h"
#include "sample_Onemgm_resynth4d4wave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
