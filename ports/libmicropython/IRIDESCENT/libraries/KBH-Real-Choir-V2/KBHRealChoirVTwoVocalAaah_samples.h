#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t KBHRealChoirVTwoVocalAaah_ranges[] = {55, 55, 57, 57, 59, 59, 60, 60, 62, 62, 64, 64, 65, 65, 67, 67, 69, 69, 71, 71, 72, 72, 74, 74, 84, 127, };

extern const FLASHMEM sample_data KBHRealChoirVTwoVocalAaah_samples[26];
const FLASHMEM instrument_data KBHRealChoirVTwoVocalAaah = { 26, const_cast<uint8_t*>(KBHRealChoirVTwoVocalAaah_ranges), const_cast<sample_data*>(KBHRealChoirVTwoVocalAaah_samples) };

#include "sample_KBHRealChoirVTwo_A200L_sample.h"
#include "sample_KBHRealChoirVTwo_A200R_sample.h"
#include "sample_KBHRealChoirVTwo_A202L_sample.h"
#include "sample_KBHRealChoirVTwo_A202R_sample.h"
#include "sample_KBHRealChoirVTwo_B205L_sample.h"
#include "sample_KBHRealChoirVTwo_B205R_sample.h"
#include "sample_KBHRealChoirVTwo_B208L_sample.h"
#include "sample_KBHRealChoirVTwo_B208R_sample.h"
#include "sample_KBHRealChoirVTwo_C209L_sample.h"
#include "sample_KBHRealChoirVTwo_C209R_sample.h"
#include "sample_KBHRealChoirVTwo_C211L_sample.h"
#include "sample_KBHRealChoirVTwo_C211R_sample.h"
#include "sample_KBHRealChoirVTwo_D214L_sample.h"
#include "sample_KBHRealChoirVTwo_D214R_sample.h"
#include "sample_KBHRealChoirVTwo_D216L_sample.h"
#include "sample_KBHRealChoirVTwo_D216R_sample.h"
#include "sample_KBHRealChoirVTwo_E218L_sample.h"
#include "sample_KBHRealChoirVTwo_E218R_sample.h"
#include "sample_KBHRealChoirVTwo_E222L_sample.h"
#include "sample_KBHRealChoirVTwo_E222R_sample.h"
#include "sample_KBHRealChoirVTwo_F223L_sample.h"
#include "sample_KBHRealChoirVTwo_F223R_sample.h"
#include "sample_KBHRealChoirVTwo_G225L_sample.h"
#include "sample_KBHRealChoirVTwo_G225R_sample.h"
#include "sample_KBHRealChoirVTwo_G227L_sample.h"
#include "sample_KBHRealChoirVTwo_G227R_sample.h"
