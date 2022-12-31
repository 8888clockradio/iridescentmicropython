#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t HarpsStringsOrchestraVOneGroupOneSixF_ranges[] = {49, 49, 52, 52, 55, 55, 58, 58, 61, 61, 64, 64, 67, 67, 70, 70, 73, 73, 76, 76, 79, 79, 81, 127, };

extern const FLASHMEM sample_data HarpsStringsOrchestraVOneGroupOneSixF_samples[24];
const FLASHMEM instrument_data HarpsStringsOrchestraVOneGroupOneSixF = { 24, const_cast<uint8_t*>(HarpsStringsOrchestraVOneGroupOneSixF_ranges), const_cast<sample_data*>(HarpsStringsOrchestraVOneGroupOneSixF_samples) };

#include "sample_HarpsStringsOrchestraVOne_flutessusc3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusc3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa3L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa3R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusc4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusc4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa4L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa4R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusc5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusc5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusd5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusf5R_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa5L_sample.h"
#include "sample_HarpsStringsOrchestraVOne_flutessusa5R_sample.h"
