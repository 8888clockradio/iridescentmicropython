#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRmaleMalechoir_ranges[] = {61, 61, 84, 127, };

extern const FLASHMEM sample_data JRmaleMalechoir_samples[4];
const FLASHMEM instrument_data JRmaleMalechoir = { 4, const_cast<uint8_t*>(JRmaleMalechoir_ranges), const_cast<sample_data*>(JRmaleMalechoir_samples) };

#include "sample_JRmale_malechoir2L_sample.h"
#include "sample_JRmale_malechoir2R_sample.h"
#include "sample_JRmale_malechoirR_sample.h"
#include "sample_JRmale_malechoirL_sample.h"
