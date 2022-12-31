#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t JRvoiceTwoInstrumentOne_ranges[] = {127, 127, };

extern const FLASHMEM sample_data JRvoiceTwoInstrumentOne_samples[2];
const FLASHMEM instrument_data JRvoiceTwoInstrumentOne = { 2, const_cast<uint8_t*>(JRvoiceTwoInstrumentOne_ranges), const_cast<sample_data*>(JRvoiceTwoInstrumentOne_samples) };

#include "sample_JRvoiceTwo_choeur1R_sample.h"
#include "sample_JRvoiceTwo_choeur1R_sample.h"
