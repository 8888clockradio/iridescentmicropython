#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t KBHRealChoirVTwoVocalOooh_ranges[] = {58, 58, 59, 59, 61, 61, 63, 63, 65, 65, 68, 68, 70, 70, 71, 71, 72, 72, 74, 74, 84, 127, };

extern const FLASHMEM sample_data KBHRealChoirVTwoVocalOooh_samples[22];
const FLASHMEM instrument_data KBHRealChoirVTwoVocalOooh = { 22, const_cast<uint8_t*>(KBHRealChoirVTwoVocalOooh_ranges), const_cast<sample_data*>(KBHRealChoirVTwoVocalOooh_samples) };

#include "sample_KBHRealChoirVTwo_AouhL_sample.h"
#include "sample_KBHRealChoirVTwo_AouhL_sample.h"
#include "sample_KBHRealChoirVTwo_AouhR_sample.h"
#include "sample_KBHRealChoirVTwo_AouhR_sample.h"
#include "sample_KBHRealChoirVTwo_BouhL_sample.h"
#include "sample_KBHRealChoirVTwo_BouhL_sample.h"
#include "sample_KBHRealChoirVTwo_BouhR_sample.h"
#include "sample_KBHRealChoirVTwo_BouhR_sample.h"
#include "sample_KBHRealChoirVTwo_CouhL_sample.h"
#include "sample_KBHRealChoirVTwo_CouhL_sample.h"
#include "sample_KBHRealChoirVTwo_CouhR_sample.h"
#include "sample_KBHRealChoirVTwo_CouhR_sample.h"
#include "sample_KBHRealChoirVTwo_DouhL_sample.h"
#include "sample_KBHRealChoirVTwo_DouhL_sample.h"
#include "sample_KBHRealChoirVTwo_DouhR_sample.h"
#include "sample_KBHRealChoirVTwo_DouhR_sample.h"
#include "sample_KBHRealChoirVTwo_EouhL_sample.h"
#include "sample_KBHRealChoirVTwo_EouhL_sample.h"
#include "sample_KBHRealChoirVTwo_EouhR_sample.h"
#include "sample_KBHRealChoirVTwo_EouhR_sample.h"
#include "sample_KBHRealChoirVTwo_GouhL_sample.h"
#include "sample_KBHRealChoirVTwo_GouhR_sample.h"
