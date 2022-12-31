#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveAcPercusMid_ranges[] = {54, 54, 54, 55, 57, 127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveAcPercusMid_samples[6];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveAcPercusMid = { 6, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveAcPercusMid_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveAcPercusMid_samples) };

#include "sample_NiceBassPlusDrumsvFive_53Tambrn1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_54Tambrn_pp_sample.h"
#include "sample_NiceBassPlusDrumsvFive_54Tambrn2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_55Tambrn3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_56CowBell_sample.h"
#include "sample_NiceBassPlusDrumsvFive_58Ratloop_sample.h"
