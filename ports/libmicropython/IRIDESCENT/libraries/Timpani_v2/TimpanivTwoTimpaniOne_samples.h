#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t TimpanivTwoTimpaniOne_ranges[] = {89, 89, 89, 89, 89, 89, 89, 127, };

extern const FLASHMEM sample_data TimpanivTwoTimpaniOne_samples[8];
const FLASHMEM instrument_data TimpanivTwoTimpaniOne = { 8, const_cast<uint8_t*>(TimpanivTwoTimpaniOne_ranges), const_cast<sample_data*>(TimpanivTwoTimpaniOne_samples) };

#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
#include "sample_TimpanivTwo_TimpaniSoft_sample.h"
