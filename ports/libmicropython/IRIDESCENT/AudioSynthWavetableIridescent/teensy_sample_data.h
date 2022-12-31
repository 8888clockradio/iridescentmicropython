//
//  teensy_sample_data.h
//  
//
//  Created by George Rosar on 9/3/22.
//

#ifndef teensy_sample_data_h
#define teensy_sample_data_h

#include "Arduino.h"
#include <math.h>
#include <stdint.h>

enum { DEFAULT_AMPLITUDE = 90 };
enum { TRIANGLE_INITIAL_PHASE = -0x40000000 };
enum envelopeStateEnum { STATE_IDLE, STATE_DELAY, STATE_ATTACK, STATE_HOLD, STATE_DECAY, STATE_SUSTAIN, STATE_RELEASE };

static const int32_t UNITY_GAIN = INT32_MAX;
static constexpr float SAMPLES_PER_MSEC = (AUDIO_SAMPLE_RATE_EXACT/1000.0f);
static const int32_t LFO_SMOOTHNESS = 3;
static constexpr float LFO_PERIOD = (AUDIO_BLOCK_SAMPLES/(1 << (LFO_SMOOTHNESS-1)));
static const int32_t ENVELOPE_PERIOD = 8;

#define WAVETABLE_CENTS_SHIFT(C) (pow(2.0, (C)/1200.0))
#define WAVETABLE_NOTE_TO_FREQUENCY(N) (440.0 * pow(2.0, ((N) - 69) / 12.0))
#define WAVETABLE_DECIBEL_SHIFT(dB) (pow(10.0, (dB)/20.0))

//#define CENTS_SHIFT(C) (pow(2.0, C/1200.0))
//#define NOTE(N) (440.0 * pow(2.0, (N - 69) / 12.0))
//#define DECIBEL_SHIFT(dB) (pow(10.0, dB/20.0))


#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
struct sample_data {
    // SAMPLE VALUES
    int16_t* sample;
    bool LOOP;
    int INDEX_BITS;
    float PER_HERTZ_PHASE_INCREMENT;
    uint32_t MAX_PHASE;
    uint32_t LOOP_PHASE_END;
    uint32_t LOOP_PHASE_LENGTH;
    uint16_t INITIAL_ATTENUATION_SCALAR;

    // VOLUME ENVELOPE VALUES
    uint32_t DELAY_COUNT;
    uint32_t ATTACK_COUNT;
    uint32_t HOLD_COUNT;
    uint32_t DECAY_COUNT;
    uint32_t RELEASE_COUNT;
    int32_t SUSTAIN_MULT;

    // VIRBRATO VALUES
    uint32_t VIBRATO_DELAY;
    uint32_t VIBRATO_INCREMENT;
    float VIBRATO_PITCH_COEFFICIENT_INITIAL;
    float VIBRATO_PITCH_COEFFICIENT_SECOND;

    // MODULATION VALUES
    uint32_t MODULATION_DELAY;
    uint32_t MODULATION_INCREMENT;
    float MODULATION_PITCH_COEFFICIENT_INITIAL;
    float MODULATION_PITCH_COEFFICIENT_SECOND;
    int32_t MODULATION_AMPLITUDE_INITIAL_GAIN;
    int32_t MODULATION_AMPLITUDE_SECOND_GAIN;
};
struct instrument_data {
    uint8_t sample_count;
    uint8_t* sample_note_ranges;
    sample_data* samples;
};

#endif /* teensy_sample_data_h */
