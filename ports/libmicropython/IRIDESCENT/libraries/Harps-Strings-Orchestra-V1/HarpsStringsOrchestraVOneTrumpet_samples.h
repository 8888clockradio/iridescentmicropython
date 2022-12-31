#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneTrumpet_ranges[] = {60, 66, 71, 75, 79, 81, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneTrumpet_samples[7];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneTrumpet = { 7, const_cast<uint8_t*>(HarpsStringsOrchestraVOneTrumpet_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneTrumpet_samples) };

#include "sample_HarpsStringsOrchestraVOne_TrumpetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetE4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetA4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetD5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetF6_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetG5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_TrumpetB5_sample.h"
