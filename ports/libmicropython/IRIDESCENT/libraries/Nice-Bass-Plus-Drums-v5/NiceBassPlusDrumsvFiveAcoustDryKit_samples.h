#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t NiceBassPlusDrumsvFiveAcoustDryKit_ranges[] = {32, 33, 34, 34, 35, 35, 35, 36, 36, 36, 37, 38, 38, 38, 38, 39, 39, 40, 40, 40, 40, 41, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47, 47, 48, 49, 50, 51, 52, 54, 56, 58, 127, };

extern const FLASHMEM sample_data NiceBassPlusDrumsvFiveAcoustDryKit_samples[45];
const FLASHMEM instrument_data NiceBassPlusDrumsvFiveAcoustDryKit = { 45, const_cast<uint8_t*>(NiceBassPlusDrumsvFiveAcoustDryKit_ranges), const_cast<sample_data*>(NiceBassPlusDrumsvFiveAcoustDryKit_samples) };

#include "sample_NiceBassPlusDrumsvFive_35CompK1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_35RealDryK1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_36CompK2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_36CompK3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_36RealDryK2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_36RealDryK3_sample.h"
#include "sample_NiceBassPlusDrumsvFive_36StompK_sample.h"
#include "sample_NiceBassPlusDrumsvFive_37NaturalStick_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38SlmDryhrdSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryhrdSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryrolSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DrySftSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryFatflmSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryFathrdSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryFatrolSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38DryFatsftSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_38SlmDrysftSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_39DryflmSn_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4116MP_hrdTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4116MP_sftTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_41SoftLoTom_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4216Hatcls1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4216Hatcls2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4313MP_hrdTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4313MP_sftTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4416Hathlf1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4416Hathlf2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4416Hatpdl_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4418Hatpdl_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4512MP_hrdTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4512MP_sftTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4616Hatopn1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4616Hatopn2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4710MP_hrdTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_4710MP_sftTm_sample.h"
#include "sample_NiceBassPlusDrumsvFive_48SoftHiTom_sample.h"
#include "sample_NiceBassPlusDrumsvFive_49LongCrash1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_51LongRide1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_52LongRide2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_53LngRideBell_sample.h"
#include "sample_NiceBassPlusDrumsvFive_57LongCrash2_sample.h"
#include "sample_NiceBassPlusDrumsvFive_52ChinaCym_sample.h"
#include "sample_NiceBassPlusDrumsvFive_49LongCrash1_sample.h"
#include "sample_NiceBassPlusDrumsvFive_48SoftHiTom_sample.h"
#include "sample_NiceBassPlusDrumsvFive_35Soft_Kick1_sample.h"
