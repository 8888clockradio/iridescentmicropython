#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmreedorgan_ranges[] = {84, 98, 127, };

extern const FLASHMEM sample_data Onemgmreedorgan_samples[3];
const FLASHMEM instrument_data Onemgmreedorgan = { 3, const_cast<uint8_t*>(Onemgmreedorgan_ranges), const_cast<sample_data*>(Onemgmreedorgan_samples) };

#include "sample_Onemgm_harmonicaa3_sample.h"
#include "sample_Onemgm_octavewave_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
