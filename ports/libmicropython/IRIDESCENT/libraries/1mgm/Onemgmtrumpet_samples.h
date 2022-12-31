#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmtrumpet_ranges[] = {64, 69, 74, 79, 125, 127, };

extern const FLASHMEM sample_data Onemgmtrumpet_samples[6];
const FLASHMEM instrument_data Onemgmtrumpet = { 6, const_cast<uint8_t*>(Onemgmtrumpet_ranges), const_cast<sample_data*>(Onemgmtrumpet_samples) };

#include "sample_Onemgm_htrumpetd2_sample.h"
#include "sample_Onemgm_htrumpetg2_sample.h"
#include "sample_Onemgm_htrumpetc3_sample.h"
#include "sample_Onemgm_htrumpetf3_sample.h"
#include "sample_Onemgm_htrumpetax3_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
