#include "HarpsStringsOrchestraVOneBRSFatSectOnedS_samples.h"
const sample_data HarpsStringsOrchestraVOneBRSFatSectOnedS_samples[10] = {
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsG2L, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(-9) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(44) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)78518 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)78518 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)78518 - 1) << (32 - 17)) - (((uint32_t)29661 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-26.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsG2R, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(-9) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(44) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)115877 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)115877 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)115877 - 1) << (32 - 17)) - (((uint32_t)60317 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-26.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsA2L, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(0) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(46) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)81126 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)81126 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)81126 - 1) << (32 - 17)) - (((uint32_t)38074 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-25.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsA2R, // sample
		true, // LOOP
		18, // LENGTH_BITS
		(1 << (32 - 18)) * WAVETABLE_CENTS_SHIFT(0) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(46) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)134273 - 1) << (32 - 18), // MAX_PHASE
		((uint32_t)134273 - 1) << (32 - 18), // LOOP_PHASE_END
		(((uint32_t)134273 - 1) << (32 - 18)) - (((uint32_t)60373 - 1) << (32 - 18)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-25.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsF_3L, // sample
		true, // LOOP
		18, // LENGTH_BITS
		(1 << (32 - 18)) * WAVETABLE_CENTS_SHIFT(-10) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(53) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)150894 - 1) << (32 - 18), // MAX_PHASE
		((uint32_t)150894 - 1) << (32 - 18), // LOOP_PHASE_END
		(((uint32_t)150894 - 1) << (32 - 18)) - (((uint32_t)98577 - 1) << (32 - 18)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-22.8)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsF_3R, // sample
		true, // LOOP
		18, // LENGTH_BITS
		(1 << (32 - 18)) * WAVETABLE_CENTS_SHIFT(-10) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(53) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)146260 - 1) << (32 - 18), // MAX_PHASE
		((uint32_t)146260 - 1) << (32 - 18), // LOOP_PHASE_END
		(((uint32_t)146260 - 1) << (32 - 18)) - (((uint32_t)68177 - 1) << (32 - 18)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-22.8)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsA_3AL, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(-1) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(57) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)90310 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)90310 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)90310 - 1) << (32 - 17)) - (((uint32_t)49816 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.7)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsA_3AR, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(-1) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(57) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)97506 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)97506 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)97506 - 1) << (32 - 17)) - (((uint32_t)60464 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.7)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsD4BL, // sample
		true, // LOOP
		18, // LENGTH_BITS
		(1 << (32 - 18)) * WAVETABLE_CENTS_SHIFT(-9) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(63) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)136264 - 1) << (32 - 18), // MAX_PHASE
		((uint32_t)136264 - 1) << (32 - 18), // LOOP_PHASE_END
		(((uint32_t)136264 - 1) << (32 - 18)) - (((uint32_t)64526 - 1) << (32 - 18)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-22.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_BRS_LoBrsD4BR, // sample
		true, // LOOP
		17, // LENGTH_BITS
		(1 << (32 - 17)) * WAVETABLE_CENTS_SHIFT(-9) * 48000.0 / WAVETABLE_NOTE_TO_FREQUENCY(63) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)89058 - 1) << (32 - 17), // MAX_PHASE
		((uint32_t)89058 - 1) << (32 - 17), // LOOP_PHASE_END
		(((uint32_t)89058 - 1) << (32 - 17)) - (((uint32_t)38705 - 1) << (32 - 17)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-22.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(6.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(253.05 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.0 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
};
