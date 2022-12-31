#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t CandyBeeCandyBee_ranges[] = {51, 51, 57, 57, 63, 63, 69, 69, 75, 75, 81, 81, 127, 127, };

extern const FLASHMEM sample_data CandyBeeCandyBee_samples[14];
const FLASHMEM instrument_data CandyBeeCandyBee = { 14, const_cast<uint8_t*>(CandyBeeCandyBee_ranges), const_cast<sample_data*>(CandyBeeCandyBee_samples) };

#include "sample_CandyBee_CandyBee048L_sample.h"
#include "sample_CandyBee_CandyBee048R_sample.h"
#include "sample_CandyBee_CandyBee054L_sample.h"
#include "sample_CandyBee_CandyBee054R_sample.h"
#include "sample_CandyBee_CandyBee060L_sample.h"
#include "sample_CandyBee_CandyBee060R_sample.h"
#include "sample_CandyBee_CandyBee066L_sample.h"
#include "sample_CandyBee_CandyBee066R_sample.h"
#include "sample_CandyBee_CandyBee072L_sample.h"
#include "sample_CandyBee_CandyBee072R_sample.h"
#include "sample_CandyBee_CandyBee078L_sample.h"
#include "sample_CandyBee_CandyBee078R_sample.h"
#include "sample_CandyBee_CandyBee084L_sample.h"
#include "sample_CandyBee_CandyBee084R_sample.h"
