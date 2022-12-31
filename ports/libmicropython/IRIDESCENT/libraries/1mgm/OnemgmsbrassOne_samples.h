#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t OnemgmsbrassOne_ranges[] = {71, 116, 127, };

extern const FLASHMEM sample_data OnemgmsbrassOne_samples[3];
const FLASHMEM instrument_data OnemgmsbrassOne = { 3, const_cast<uint8_t*>(OnemgmsbrassOne_ranges), const_cast<sample_data*>(OnemgmsbrassOne_samples) };

#include "sample_Onemgm_brasssectc3_sample.h"
#include "sample_Onemgm_brasssectf5_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
