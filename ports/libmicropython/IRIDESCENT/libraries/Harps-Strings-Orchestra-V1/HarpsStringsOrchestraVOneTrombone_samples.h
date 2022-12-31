#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneTrombone_ranges[] = {41, 49, 54, 59, 64, 69, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneTrombone_samples[7];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneTrombone = { 7, const_cast<uint8_t*>(HarpsStringsOrchestraVOneTrombone_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneTrombone_samples) };

#include "sample_HarpsStringsOrchestraVOne_TromboneC1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneB1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneE2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneD3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneG3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TromboneC4_sample.h"
