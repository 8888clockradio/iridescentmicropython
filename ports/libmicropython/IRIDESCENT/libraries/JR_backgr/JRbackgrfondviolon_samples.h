#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRbackgrfondviolon_ranges[] = {96, 127, };

extern const FLASHMEM sample_data JRbackgrfondviolon_samples[2];
const FLASHMEM instrument_data JRbackgrfondviolon = { 2, const_cast<uint8_t*>(JRbackgrfondviolon_ranges), const_cast<sample_data*>(JRbackgrfondviolon_samples) };

#include "sample_JRbackgr_fondviolonL_sample.h"
#include "sample_JRbackgr_fondviolonR_sample.h"
