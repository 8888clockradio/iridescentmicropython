#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t PolySpecialMonoLDPolySpecialMono_ranges[] = {41, 47, 53, 59, 65, 71, 77, 83, 127, };

extern const FLASHMEM sample_data PolySpecialMonoLDPolySpecialMono_samples[9];
const FLASHMEM instrument_data PolySpecialMonoLDPolySpecialMono = { 9, const_cast<uint8_t*>(PolySpecialMonoLDPolySpecialMono_ranges), const_cast<sample_data*>(PolySpecialMonoLDPolySpecialMono_samples) };

#include "sample_PolySpecialMono_LDPolySpecialMono_C_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_F_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_C_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_F_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_C_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_F_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_C_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_F_sample.h"
#include "sample_PolySpecialMono_LDPolySpecialMono_C_sample.h"
