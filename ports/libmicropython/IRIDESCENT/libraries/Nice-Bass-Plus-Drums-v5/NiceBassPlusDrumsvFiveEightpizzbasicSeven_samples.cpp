#include "NiceBassPlusDrumsvFiveEightpizzbasicSeven_samples.h"
const sample_data NiceBassPlusDrumsvFiveEightpizzbasicSeven_samples[1] = {
	{
		(int16_t*)sample_NiceBassPlusDrumsvFive_c1_vl2_rr1, // sample
		true, // LOOP
		18, // LENGTH_BITS
		(1 << (32 - 18)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(36) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)165383 - 1) << (32 - 18), // MAX_PHASE
		((uint32_t)165375 - 1) << (32 - 18), // LOOP_PHASE_END
		(((uint32_t)165375 - 1) << (32 - 18)) - (((uint32_t)109874 - 1) << (32 - 18)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(2998.35 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7498.84 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(500.29 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-20.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
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
