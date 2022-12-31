#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t AcousticGuitarsJNvTwoNylonGuitarOne_ranges[] = {40, 40, 40, 40, 45, 45, 45, 45, 51, 51, 51, 51, 56, 56, 56, 56, 62, 62, 62, 62, 68, 68, 68, 68, 75, 75, 75, 75, 91, 91, 91, 127, };

extern const FLASHMEM sample_data AcousticGuitarsJNvTwoNylonGuitarOne_samples[32];
const FLASHMEM instrument_data AcousticGuitarsJNvTwoNylonGuitarOne = { 32, const_cast<uint8_t*>(AcousticGuitarsJNvTwoNylonGuitarOne_ranges), const_cast<sample_data*>(AcousticGuitarsJNvTwoNylonGuitarOne_samples) };

#include "sample_AcousticGuitarsJNvTwo_NGtr1E1SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1E1SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtrE1HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtrE1HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1G1SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1G1SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1G1HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1G1HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C2SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C2SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C2HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C2HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F2SofL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F2SofL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F2HarL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F2HarL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1B2SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1B2SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1B2HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1B2HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F3SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F3SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F3HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F3HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C4SoftL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C4SoftL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C4HardL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1C4HardL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F4SofL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F4SofL1R_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F4HarL1L_sample.h"
#include "sample_AcousticGuitarsJNvTwo_NGtr1F4HarL1R_sample.h"
