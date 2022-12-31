#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmaltosax_ranges[] = {53, 57, 62, 69, 73, 81, 115, 127, };

extern const FLASHMEM sample_data Onemgmaltosax_samples[8];
const FLASHMEM instrument_data Onemgmaltosax = { 8, const_cast<uint8_t*>(Onemgmaltosax_ranges), const_cast<sample_data*>(Onemgmaltosax_samples) };

#include "sample_Onemgm_asaxc2_sample.h"
#include "sample_Onemgm_asaxe2_sample.h"
#include "sample_Onemgm_asaxg2_sample.h"
#include "sample_Onemgm_asaxd3_sample.h"
#include "sample_Onemgm_asaxf3_sample.h"
#include "sample_Onemgm_asaxc4_sample.h"
#include "sample_Onemgm_ssaxdx4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
