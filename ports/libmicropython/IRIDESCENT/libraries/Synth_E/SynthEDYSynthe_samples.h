#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t SynthEDYSynthe_ranges[] = {41, 47, 53, 59, 65, 71, 77, 83, 127, };

extern const FLASHMEM sample_data SynthEDYSynthe_samples[9];
const FLASHMEM instrument_data SynthEDYSynthe = { 9, const_cast<uint8_t*>(SynthEDYSynthe_ranges), const_cast<sample_data*>(SynthEDYSynthe_samples) };

#include "sample_SynthE_DYSynthe_C1_sample.h"
#include "sample_SynthE_DYSynthe_F1_sample.h"
#include "sample_SynthE_DYSynthe_C2_sample.h"
#include "sample_SynthE_DYSynthe_F2_sample.h"
#include "sample_SynthE_DYSynthe_C3_sample.h"
#include "sample_SynthE_DYSynthe_F3_sample.h"
#include "sample_SynthE_DYSynthe_C4_sample.h"
#include "sample_SynthE_DYSynthe_F4_sample.h"
#include "sample_SynthE_DYSynthe_C5_sample.h"
