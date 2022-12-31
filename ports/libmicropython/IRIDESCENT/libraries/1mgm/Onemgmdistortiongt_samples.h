#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmdistortiongt_ranges[] = {62, 66, 72, 113, 127, };

extern const FLASHMEM sample_data Onemgmdistortiongt_samples[5];
const FLASHMEM instrument_data Onemgmdistortiongt = { 5, const_cast<uint8_t*>(Onemgmdistortiongt_ranges), const_cast<sample_data*>(Onemgmdistortiongt_samples) };

#include "sample_Onemgm_distgtra2_sample.h"
#include "sample_Onemgm_distgtre3_sample.h"
#include "sample_Onemgm_distgtra3_sample.h"
#include "sample_Onemgm_distgtrd4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
