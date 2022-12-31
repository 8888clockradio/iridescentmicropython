#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmtimpani_ranges[] = {47, 48, 51, 55, 59, 71, 101, 127, };

extern const FLASHMEM sample_data Onemgmtimpani_samples[8];
const FLASHMEM instrument_data Onemgmtimpani = { 8, const_cast<uint8_t*>(Onemgmtimpani_ranges), const_cast<sample_data*>(Onemgmtimpani_samples) };

#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_timpani_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
