#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t SolarWindPDSolarwind_ranges[] = {41, 47, 53, 59, 65, 71, 77, 83, 127, };

extern const FLASHMEM sample_data SolarWindPDSolarwind_samples[9];
const FLASHMEM instrument_data SolarWindPDSolarwind = { 9, const_cast<uint8_t*>(SolarWindPDSolarwind_ranges), const_cast<sample_data*>(SolarWindPDSolarwind_samples) };

#include "sample_SolarWind_PDSolarwind_C1_sample.h"
#include "sample_SolarWind_PDSolarwind_F1_sample.h"
#include "sample_SolarWind_PDSolarwind_C2_sample.h"
#include "sample_SolarWind_PDSolarwind_F2_sample.h"
#include "sample_SolarWind_PDSolarwind_C3_sample.h"
#include "sample_SolarWind_PDSolarwind_F3_sample.h"
#include "sample_SolarWind_PDSolarwind_C4_sample.h"
#include "sample_SolarWind_PDSolarwind_F4_sample.h"
#include "sample_SolarWind_PDSolarwind_C5_sample.h"
