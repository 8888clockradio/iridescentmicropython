#include "HarpsStringsOrchestraVOneHarpsichordTwo_samples.h"
const sample_data HarpsStringsOrchestraVOneHarpsichordTwo_samples[6] = {
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordAb1, // sample
		true, // LOOP
		11, // LENGTH_BITS
		(1 << (32 - 11)) * WAVETABLE_CENTS_SHIFT(-46) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(52) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)1083 - 1) << (32 - 11), // MAX_PHASE
		((uint32_t)1075 - 1) << (32 - 11), // LOOP_PHASE_END
		(((uint32_t)1075 - 1) << (32 - 11)) - (((uint32_t)815 - 1) << (32 - 11)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-25.5)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(350.10 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordE2, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * WAVETABLE_CENTS_SHIFT(44) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(64) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)653 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)645 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)645 - 1) << (32 - 10)) - (((uint32_t)508 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.5)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(319.93 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordC3, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * WAVETABLE_CENTS_SHIFT(-42) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(71) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)918 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)910 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)910 - 1) << (32 - 10)) - (((uint32_t)823 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-21.5)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(300.06 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordA3, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * WAVETABLE_CENTS_SHIFT(-33) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(80) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)703 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)695 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)695 - 1) << (32 - 10)) - (((uint32_t)643 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(258.07 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordBb4, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * WAVETABLE_CENTS_SHIFT(-1) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(93) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)802 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)794 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)794 - 1) << (32 - 10)) - (((uint32_t)769 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-21.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(19.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(258.07 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_HarpsichordC6, // sample
		true, // LOOP
		10, // LENGTH_BITS
		(1 << (32 - 10)) * WAVETABLE_CENTS_SHIFT(29) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(106) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)659 - 1) << (32 - 10), // MAX_PHASE
		((uint32_t)651 - 1) << (32 - 10), // LOOP_PHASE_END
		(((uint32_t)651 - 1) << (32 - 10)) - (((uint32_t)639 - 1) << (32 - 10)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(-23.0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(100.02 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(7000.70 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(258.07 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(-100.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(0.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(5.1 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
};
