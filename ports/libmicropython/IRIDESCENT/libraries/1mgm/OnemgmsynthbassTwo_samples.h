#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsynthbassTwo_ranges[] = {81, 110, 127, };

extern const FLASHMEM sample_data OnemgmsynthbassTwo_samples[3];
const FLASHMEM instrument_data OnemgmsynthbassTwo = { 3, const_cast<uint8_t*>(OnemgmsynthbassTwo_ranges), const_cast<sample_data*>(OnemgmsynthbassTwo_samples) };

#include "sample_Onemgm_fretlessa2_sample.h"
#include "sample_Onemgm_pluckharp_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
