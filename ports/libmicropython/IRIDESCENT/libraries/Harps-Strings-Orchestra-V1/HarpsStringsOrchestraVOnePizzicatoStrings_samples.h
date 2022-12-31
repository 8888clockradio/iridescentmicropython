#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOnePizzicatoStrings_ranges[] = {41, 51, 61, 74, 84, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOnePizzicatoStrings_samples[6];
const FLASHMEM instrument_data HarpsStringsOrchestraVOnePizzicatoStrings = { 6, const_cast<uint8_t*>(HarpsStringsOrchestraVOnePizzicatoStrings_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOnePizzicatoStrings_samples) };

#include "sample_HarpsStringsOrchestraVOne_PizzStringsA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PizzStringsG3_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PizzStringsF4_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PizzStringsF5_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PizzStringsA2_sample.h"
#include "sample_HarpsStringsOrchestraVOne_PizzStringsF5_sample.h"
