#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <string.h>
#include <Arduino.h>
#include <teensy_sample_data.h>

const FLASHMEM uint8_t PNSDrumKitAcoustDryKit_ranges[] = {32, 33, 34, 34, 35, 35, 35, 36, 36, 36, 37, 38, 38, 38, 38, 39, 39, 40, 40, 40, 40, 41, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47, 47, 48, 49, 50, 51, 52, 54, 56, 58, 127, };

extern const FLASHMEM sample_data PNSDrumKitAcoustDryKit_samples[45];
const FLASHMEM instrument_data PNSDrumKitAcoustDryKit = { 45, const_cast<uint8_t*>(PNSDrumKitAcoustDryKit_ranges), const_cast<sample_data*>(PNSDrumKitAcoustDryKit_samples) };

#include "sample_PNSDrumKit_35CompK1_sample.h"
#include "sample_PNSDrumKit_35RealDryK1_sample.h"
#include "sample_PNSDrumKit_36CompK2_sample.h"
#include "sample_PNSDrumKit_36CompK3_sample.h"
#include "sample_PNSDrumKit_36RealDryK2_sample.h"
#include "sample_PNSDrumKit_36RealDryK3_sample.h"
#include "sample_PNSDrumKit_36StompK_sample.h"
#include "sample_PNSDrumKit_37NaturalStick_sample.h"
#include "sample_PNSDrumKit_38SlmDryhrdSn_sample.h"
#include "sample_PNSDrumKit_38DryhrdSn_sample.h"
#include "sample_PNSDrumKit_38DryrolSn_sample.h"
#include "sample_PNSDrumKit_38DrySftSn_sample.h"
#include "sample_PNSDrumKit_38DryFatflmSn_sample.h"
#include "sample_PNSDrumKit_38DryFathrdSn_sample.h"
#include "sample_PNSDrumKit_38DryFatrolSn_sample.h"
#include "sample_PNSDrumKit_38DryFatsftSn_sample.h"
#include "sample_PNSDrumKit_38SlmDrysftSn_sample.h"
#include "sample_PNSDrumKit_39DryflmSn_sample.h"
#include "sample_PNSDrumKit_4116MP_hrdTm_sample.h"
#include "sample_PNSDrumKit_4116MP_sftTm_sample.h"
#include "sample_PNSDrumKit_41SoftLoTom_sample.h"
#include "sample_PNSDrumKit_4216Hatcls1_sample.h"
#include "sample_PNSDrumKit_4216Hatcls2_sample.h"
#include "sample_PNSDrumKit_4313MP_hrdTm_sample.h"
#include "sample_PNSDrumKit_4313MP_sftTm_sample.h"
#include "sample_PNSDrumKit_4416Hathlf1_sample.h"
#include "sample_PNSDrumKit_4416Hathlf2_sample.h"
#include "sample_PNSDrumKit_4416Hatpdl_sample.h"
#include "sample_PNSDrumKit_4418Hatpdl_sample.h"
#include "sample_PNSDrumKit_4512MP_hrdTm_sample.h"
#include "sample_PNSDrumKit_4512MP_sftTm_sample.h"
#include "sample_PNSDrumKit_4616Hatopn1_sample.h"
#include "sample_PNSDrumKit_4616Hatopn2_sample.h"
#include "sample_PNSDrumKit_4710MP_hrdTm_sample.h"
#include "sample_PNSDrumKit_4710MP_sftTm_sample.h"
#include "sample_PNSDrumKit_48SoftHiTom_sample.h"
#include "sample_PNSDrumKit_49LongCrash1_sample.h"
#include "sample_PNSDrumKit_51LongRide1_sample.h"
#include "sample_PNSDrumKit_52LongRide2_sample.h"
#include "sample_PNSDrumKit_53LngRideBell_sample.h"
#include "sample_PNSDrumKit_57LongCrash2_sample.h"
#include "sample_PNSDrumKit_52ChinaCym_sample.h"
#include "sample_PNSDrumKit_49LongCrash1_sample.h"
#include "sample_PNSDrumKit_48SoftHiTom_sample.h"
#include "sample_PNSDrumKit_35Soft_Kick1_sample.h"
