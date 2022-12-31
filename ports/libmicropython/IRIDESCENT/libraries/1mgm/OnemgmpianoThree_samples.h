#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmpianoThree_ranges[] = {56, 63, 72, 82, 94, 127, };

extern const FLASHMEM sample_data OnemgmpianoThree_samples[6];
const FLASHMEM instrument_data OnemgmpianoThree = { 6, const_cast<uint8_t*>(OnemgmpianoThree_ranges), const_cast<sample_data*>(OnemgmpianoThree_samples) };

#include "sample_Onemgm_kpianob1_sample.h"
#include "sample_Onemgm_kpianog2_sample.h"
#include "sample_Onemgm_kpianocx4_sample.h"
#include "sample_Onemgm_kpianob4_sample.h"
#include "sample_Onemgm_kpianodx5_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
