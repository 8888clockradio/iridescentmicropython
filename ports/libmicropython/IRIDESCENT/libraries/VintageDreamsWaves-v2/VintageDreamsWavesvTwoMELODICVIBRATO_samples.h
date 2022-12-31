#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t VintageDreamsWavesvTwoMELODICVIBRATO_ranges[] = {69, 81, 93, 127, };

extern const FLASHMEM sample_data VintageDreamsWavesvTwoMELODICVIBRATO_samples[4];
const FLASHMEM instrument_data VintageDreamsWavesvTwoMELODICVIBRATO = { 4, const_cast<uint8_t*>(VintageDreamsWavesvTwoMELODICVIBRATO_ranges), const_cast<sample_data*>(VintageDreamsWavesvTwoMELODICVIBRATO_samples) };

#include "sample_VintageDreamsWavesvTwo_W12_1_sample.h"
#include "sample_VintageDreamsWavesvTwo_W12_2_sample.h"
#include "sample_VintageDreamsWavesvTwo_W13_3_sample.h"
#include "sample_VintageDreamsWavesvTwo_W12_4_sample.h"
