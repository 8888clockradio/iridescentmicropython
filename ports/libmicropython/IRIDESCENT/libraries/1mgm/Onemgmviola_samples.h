#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t Onemgmviola_ranges[] = {65, 69, 73, 77, 123, 127, };

extern const FLASHMEM sample_data Onemgmviola_samples[6];
const FLASHMEM instrument_data Onemgmviola = { 6, const_cast<uint8_t*>(Onemgmviola_ranges), const_cast<sample_data*>(Onemgmviola_samples) };

#include "sample_Onemgm_arcoviolingx2_sample.h"
#include "sample_Onemgm_arcoviolinc3_sample.h"
#include "sample_Onemgm_arcovioline3_sample.h"
#include "sample_Onemgm_arcoviolingx3_sample.h"
#include "sample_Onemgm_arcoviolinc4_sample.h"
#include "sample_Onemgm_kpianob5_sample.h"
