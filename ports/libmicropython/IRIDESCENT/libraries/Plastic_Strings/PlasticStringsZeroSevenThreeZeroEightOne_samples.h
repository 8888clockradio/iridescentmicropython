#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t PlasticStringsZeroSevenThreeZeroEightOne_ranges[] = {41, 41, 47, 47, 53, 53, 59, 59, 65, 65, 71, 71, 77, 77, 83, 83, 127, 127, };

extern const FLASHMEM sample_data PlasticStringsZeroSevenThreeZeroEightOne_samples[18];
const FLASHMEM instrument_data PlasticStringsZeroSevenThreeZeroEightOne = { 18, const_cast<uint8_t*>(PlasticStringsZeroSevenThreeZeroEightOne_ranges), const_cast<sample_data*>(PlasticStringsZeroSevenThreeZeroEightOne_samples) };

#include "sample_PlasticStrings_073_rsmus7C2L_sample.h"
#include "sample_PlasticStrings_073_rsmus7C2R_sample.h"
#include "sample_PlasticStrings_074_rsmus7C3L_sample.h"
#include "sample_PlasticStrings_074_rsmus7C3R_sample.h"
#include "sample_PlasticStrings_075_rsmus7C4L_sample.h"
#include "sample_PlasticStrings_075_rsmus7C4R_sample.h"
#include "sample_PlasticStrings_076_rsmus7C5L_sample.h"
#include "sample_PlasticStrings_076_rsmus7C5R_sample.h"
#include "sample_PlasticStrings_077_rsmus7C6L_sample.h"
#include "sample_PlasticStrings_077_rsmus7C6R_sample.h"
#include "sample_PlasticStrings_078_rsmus7F2L_sample.h"
#include "sample_PlasticStrings_078_rsmus7F2R_sample.h"
#include "sample_PlasticStrings_079_rsmus7F3L_sample.h"
#include "sample_PlasticStrings_079_rsmus7F3R_sample.h"
#include "sample_PlasticStrings_080_rsmus7F4L_sample.h"
#include "sample_PlasticStrings_080_rsmus7F4R_sample.h"
#include "sample_PlasticStrings_081_rsmus7F5L_sample.h"
#include "sample_PlasticStrings_081_rsmus7F5R_sample.h"
