// Based on Robert Penner's easing functions: http://robertpenner.com/easing/
// and adapted from Warren Moore's C conversion: https://github.com/warrenm/AHEasing
// Easing algorithms can be visualized on http://easings.net/
//
// Robert Penner's easing functions are open-sourced under the BSD License:
// TERMS OF USE - EASING EQUATIONS
//
// Open source under the BSD License.
//
// Copyright ? 2001 Robert Penner
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
// following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this list of conditions and the following
// disclaimer.
// Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
// disclaimer in the documentation and/or other materials provided with the distribution.
// Neither the name of the author nor the names of contributors may be used to endorse or promote products derived
// from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
// INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef EXPONENTIAL_H_
#define EXPONENTIAL_H_

namespace Animately {
    class Exponential {
        public:
        float in(float p) {
            return (p == 0.0) ? p : pow(2, 10 * (p - 1));
        }
        
        float out(float p) {
            return (p == 1.0) ? p : 1 - pow(2, -10 * p);
        }
        
        float inOut(float p) {
            if(p == 0.0 || p == 1.0) { return p; };
            
            if(p < 0.5) {
                return 0.5 * pow(2, (20 * p) - 10);
            }
            return -0.5 * pow(2, (-20 * p) + 10) + 1;
        }
    };
}

#endif /* EXPONENTIAL_H_ */