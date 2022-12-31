/* Audio Library for Teensy 3.X
 * Copyright (c) 2017, TeensyAudio PSU Team
 *
 * Development of this audio library was sponsored by PJRC.COM, LLC.
 * Please support PJRC's efforts to develop open source
 * software by purchasing Teensy or other PJRC products.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice, development funding notice, and this permission
 * notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef AudioSynthWavetableIridescent_h_include
#define AudioSynthWavetableIridescent_h_include

#include <Arduino.h>
#include <math.h>
#include <stdint.h>
#include <Audio.h>
#include "./teensy_sample_data.h"


class AudioSynthWavetableIridescent : public AudioStream
{
public:
    
    /**
	 * Class constructor.
	 */
	AudioSynthWavetableIridescent(void) : AudioStream(0, NULL) {}

	/**
	 * @brief Set the instrument_data struct to be used as the playback instrument.
	 *
	 * A wavetable uses a set of samples to generate sound.
	 * This function is used to set the instrument samples.
	 * @param instrument a struct of type instrument_data, commonly prodced from a
	 * decoded SoundFont file using the SoundFont Decoder Script which accompanies this library.
	 */
    void setInstrument(instrument_data* instrument);

    void amplitude(float v) {
        v = (v < 0.0f) ? 0.0f : (v > 1.0f) ? 1.0f : v;
        tone_amp = (uint16_t)(UINT16_MAX*v);
    }

    /**
     * @brief Scale midi_amp to a value between 0.0 and 1.0
     * using a logarithmic tranformation.
     *
     * @param midi_amp a value between 0 and 127
     * @return a value between 0.0 to 1.0
     */
    static float midi_volume_transform(int midi_amp) {
        // scale midi_amp which is 0 t0 127 to be between
        // 0 and 1 using a logarithmic transformation
        return powf(midi_amp / 127.0f, 4);
    }

    /**
     * @brief Convert a MIDI note value to
     * its corresponding frequency.
     *
     * @param note a value between 0 and 127
     * @return a frequency
     */
    static float noteToFreq(int note) {
        float exp = note * (1.0f / 12.0f) + 3.0313597f;
        return powf(2.0f, exp);
    }

    /**
     * @brief Convert a frequency to the corressponding
     * MIDI note value.
     *
     * @param freq the frequency value as a float to convert
     * @return a MIDI note (between 0 - 127)
     */
    static int freqToNote(float freq) {
        return 12*log2f(freq) - 35.8763164f;
    }
	/**
	 * @brief Changes the amplitude to 'v'
	 *
	 * A value of 0 will set the synth output to minimum amplitude
	 * (i.e., no output). A value of 1 will set the output to the
	 * maximum amplitude. Amplitude is set linearly with intermediate
	 * values.
	 * @param v a value between 0.0 and 1.0
	 */
	/**
	 * @brief Scale midi_amp to a value between 0.0 and 1.0
	 * using a logarithmic tranformation.
	 *
	 * @param midi_amp a value between 0 and 127
	 * @return a value between 0.0 to 1.0
	 */
    bool isPlaying(void) { return env_state != STATE_IDLE; }
	// Defined in AudioSynthWavetableIridescent.cpp
    void stop(void);
	// TODO: amplitude should be 0 to 1.0 scale
	void playFrequency(float freq, int amp = DEFAULT_AMPLITUDE);
	void playNote(int note, int amp = DEFAULT_AMPLITUDE);
	void setFrequency(float freq);
	virtual void update(void);
    envelopeStateEnum getEnvState(void);

private:
	void setState(int note, int amp, float freq);
	volatile bool state_change = false;

	volatile const instrument_data* instrument = NULL;
	volatile const sample_data* current_sample = NULL;

	//sample output state
	volatile uint32_t tone_phase = 0;
	volatile uint32_t tone_incr = 0;
	volatile uint16_t tone_amp = 0;

	//volume environment state
	volatile envelopeStateEnum  env_state = STATE_IDLE;
	volatile int32_t env_count = 0;
	volatile int32_t env_mult = 0;
	volatile int32_t env_incr = 0;

	//vibrato LFO state
	volatile uint32_t vib_count = 0;
	volatile uint32_t vib_phase = 0;
	volatile int32_t vib_pitch_offset_init = 0;
	volatile int32_t vib_pitch_offset_scnd = 0;

	//modulation LFO state
	volatile uint32_t mod_count = 0;
	volatile uint32_t mod_phase = TRIANGLE_INITIAL_PHASE;
	volatile int32_t mod_pitch_offset_init = 0;
	volatile int32_t mod_pitch_offset_scnd = 0;
};

#endif
