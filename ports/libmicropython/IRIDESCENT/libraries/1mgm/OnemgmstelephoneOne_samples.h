#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmstelephoneOne_ranges[] = {107, 127, };

extern const FLASHMEM sample_data OnemgmstelephoneOne_samples[2];
const FLASHMEM instrument_data OnemgmstelephoneOne = { 2, const_cast<uint8_t*>(OnemgmstelephoneOne_ranges), const_cast<sample_data*>(OnemgmstelephoneOne_samples) };

#include "sample_Onemgm_lefone_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
