#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneBassoon_ranges[] = {36, 38, 44, 49, 51, 56, 58, 61, 64, 67, 69, 71, 73, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneBassoon_samples[14];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneBassoon = { 14, const_cast<uint8_t*>(HarpsStringsOrchestraVOneBassoon_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneBassoon_samples) };

#include "sample_HarpsStringsOrchestraVOne_BassoonD5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonC5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonB4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonG4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonF4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonD4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonC4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonE3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonD3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonE2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_BassoonC2_sample.h"
