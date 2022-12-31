#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRelepianopianoelectrique_ranges[] = {67, 67, 127, 127, };

extern const FLASHMEM sample_data JRelepianopianoelectrique_samples[4];
const FLASHMEM instrument_data JRelepianopianoelectrique = { 4, const_cast<uint8_t*>(JRelepianopianoelectrique_ranges), const_cast<sample_data*>(JRelepianopianoelectrique_samples) };

#include "sample_JRelepiano_1electonicpianoL_sample.h"
#include "sample_JRelepiano_1electonicpianoR_sample.h"
#include "sample_JRelepiano_3electonicpianoL_sample.h"
#include "sample_JRelepiano_3electonicpianoR_sample.h"
