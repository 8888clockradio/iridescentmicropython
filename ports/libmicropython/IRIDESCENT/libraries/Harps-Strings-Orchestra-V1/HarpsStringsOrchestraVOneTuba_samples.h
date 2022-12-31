#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneTuba_ranges[] = {34, 40, 44, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneTuba_samples[4];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneTuba = { 4, const_cast<uint8_t*>(HarpsStringsOrchestraVOneTuba_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneTuba_samples) };

#include "sample_HarpsStringsOrchestraVOne_TubaF0_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TubaD1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TubaF1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TubaA1_sample.h"
