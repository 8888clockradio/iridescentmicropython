#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneSoftTrumpetNC_ranges[] = {47, 52, 57, 62, 67, 71, 76, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneSoftTrumpetNC_samples[8];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneSoftTrumpetNC = { 8, const_cast<uint8_t*>(HarpsStringsOrchestraVOneSoftTrumpetNC_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneSoftTrumpetNC_samples) };

#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetA1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetG2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetF3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_SoftTrumpetA3_sample.h"
