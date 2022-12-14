#include "HarpsStringsOrchestraVOnePanFluteOne_samples.h"
const sample_data HarpsStringsOrchestraVOnePanFluteOne_samples[6] = {
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(55) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)65234 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)65234 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)65234 - 1) << (32 - 16)) - (((uint32_t)44997 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(60) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)61308 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)61308 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)61308 - 1) << (32 - 16)) - (((uint32_t)39237 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(67) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)57082 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)57082 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)57082 - 1) << (32 - 16)) - (((uint32_t)35494 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(72) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)42825 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)42825 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)42825 - 1) << (32 - 16)) - (((uint32_t)28508 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteG, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(79) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)47269 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)47269 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)47269 - 1) << (32 - 16)) - (((uint32_t)28496 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
	{
		(int16_t*)sample_HarpsStringsOrchestraVOne_KorgM1PanFluteC, // sample
		true, // LOOP
		16, // LENGTH_BITS
		(1 << (32 - 16)) * WAVETABLE_CENTS_SHIFT(0) * 44100.0 / WAVETABLE_NOTE_TO_FREQUENCY(84) / AUDIO_SAMPLE_RATE_EXACT + 0.5, // PER_HERTZ_PHASE_INCREMENT
		((uint32_t)37109 - 1) << (32 - 16), // MAX_PHASE
		((uint32_t)37109 - 1) << (32 - 16), // LOOP_PHASE_END
		(((uint32_t)37109 - 1) << (32 - 16)) - (((uint32_t)22712 - 1) << (32 - 16)), // LOOP_PHASE_LENGTH
		uint16_t(UINT16_MAX * WAVETABLE_DECIBEL_SHIFT(0)), // INITIAL_ATTENUATION_SCALAR
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DELAY_COUNT
		uint32_t(12.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // ATTACK_COUNT
		uint32_t(0.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // HOLD_COUNT
		uint32_t(1.00 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // DECAY_COUNT
		uint32_t(1459.86 * SAMPLES_PER_MSEC / ENVELOPE_PERIOD + 0.5), // RELEASE_COUNT
		int32_t((1.0 - WAVETABLE_DECIBEL_SHIFT(0.0)) * UNITY_GAIN), // SUSTAIN_MULT
		uint32_t(10.00 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // VIBRATO_DELAY
		uint32_t(8.2 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // VIBRATO_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // VIBRATO_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // VIBRATO_COEFFICIENT_SECONDARY
		uint32_t(657.85 * SAMPLES_PER_MSEC / (2 * LFO_PERIOD)), // MODULATION_DELAY
		uint32_t(4.4 * LFO_PERIOD * (UINT32_MAX / AUDIO_SAMPLE_RATE_EXACT)), // MODULATION_INCREMENT
		(WAVETABLE_CENTS_SHIFT(0) - 1.0) * 4, // MODULATION_PITCH_COEFFICIENT_INITIAL
		(1.0 - WAVETABLE_CENTS_SHIFT(0)) * 4, // MODULATION_PITCH_COEFFICIENT_SECOND
		int32_t(UINT16_MAX * (WAVETABLE_DECIBEL_SHIFT(0) - 1.0)) * 4, // MODULATION_AMPLITUDE_INITIAL_GAIN
		int32_t(UINT16_MAX * (1.0 - WAVETABLE_DECIBEL_SHIFT(0))) * 4, // MODULATION_AMPLITUDE_FINAL_GAIN
	},
};
