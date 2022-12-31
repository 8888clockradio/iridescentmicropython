#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneHardTrumpetNC_ranges[] = {47, 52, 53, 57, 62, 67, 71, 72, 76, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneHardTrumpetNC_samples[10];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneHardTrumpetNC = { 10, const_cast<uint8_t*>(HarpsStringsOrchestraVOneHardTrumpetNC_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneHardTrumpetNC_samples) };

#include "sample_HarpsStringsOrchestraVOne_HardTrumpetA1_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetD2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetG2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetG2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetC3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetF3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetA3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetD4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_HardTrumpetD4_sample.h"
