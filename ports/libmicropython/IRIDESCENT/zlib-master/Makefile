# Teensyduino Core Library
# http://www.pjrc.com/teensy/
# Copyright (c) 2019 PJRC.COM, LLC.
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# 1. The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
#
# 2. If the Software is incorporated into a build system that allows
# selection among a list of target devices, then similar target
# devices manufactured by PJRC.COM must be included in the list of
# target devices and selectable in the same manner.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
# BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
# ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# Use these lines for Teensy 4.0
#MCU = IMXRT1062
#MCU_LD = imxrt1062.ld
#MCU_DEF = ARDUINO_TEENSY40
rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))
# Use these lines for Teensy 4.1
MCU = IMXRT1062
MCU_LD = imxrt1062_t41.ld
MCU_DEF = ARDUINO_TEENSY41

# The name of your project (used to name the compiled .hex file)
TARGET = libz

# configurable options
OPTIONS = -DF_CPU=600000000 -DLAYOUT_US_ENGLISH -DUSING_MAKEFILE -DUSB_MIDI_AUDIO_SERIAL
#
# USB Type configuration:
#   -DUSB_SERIAL
#   -DUSB_DUAL_SERIAL
#   -DUSB_TRIPLE_SERIAL
#   -DUSB_KEYBOARDONLY
#   -DUSB_TOUCHSCREEN
#   -DUSB_HID_TOUCHSCREEN
#   -DUSB_HID
#   -DUSB_SERIAL_HID
#   -DUSB_MIDI
#   -DUSB_MIDI4
#   -DUSB_MIDI16
#   -DUSB_MIDI_SERIAL
#   -DUSB_MIDI4_SERIAL
#   -DUSB_MIDI16_SERIAL
#   -DUSB_AUDIO
#   -DUSB_MIDI16_AUDIO_SERIAL
#   -DUSB_MTPDISK
#   -DUSB_RAWHID
#   -DUSB_FLIGHTSIM
#   -DUSB_FLIGHTSIM_JOYSTICK

# options needed by many Arduino libraries to configure for Teensy model
OPTIONS += -D__$(MCU)__ -DARDUINO=10813 -DTEENSYDUINO=154 -D$(MCU_DEF)

# for Cortex M7 with single & double precision FPU
CPUOPTIONS = -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -mthumb

# use this for a smaller, no-float printf
#SPECS = --specs=nano.specs

# Other Makefiles and project templates for Teensy
#
# https://forum.pjrc.com/threads/57251?p=213332&viewfull=1#post213332
# https://github.com/apmorton/teensy-template
# https://github.com/xxxajk/Arduino_Makefile_master
# https://github.com/JonHylands/uCee


#************************************************************************
# Location of Teensyduino utilities, Toolchain, and Arduino Libraries.
# To use this makefile without Arduino, copy the resources from these
# locations and edit the pathnames.  The rest of Arduino is not needed.
#************************************************************************

# Those that specify a NO_ARDUINO environment variable will
# be able to use this Makefile with no Arduino dependency.
# Please note that if ARDUINOPATH was set, it will override
# the NO_ARDUINO behaviour.
ifndef NO_ARDUINO
# Path to your arduino installation
ARDUINOPATH ?= ../../../../..
endif
IRIDESCENT_ROOT ?= $(abspath ..)
ifdef ARDUINOPATH

# path location for Teensy Loader, teensy_post_compile and teensy_reboot (on Linux)
TOOLSPATH = $(abspath $(ARDUINOPATH)/hardware/tools)

# path location for Arduino libraries (currently not used)
LIBRARYPATH = $(abspath $(ARDUINOPATH)/libraries)

# path location for the arm-none-eabi compiler
LIBPATHFILEDROP = $(abspath ../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../gcc-arm-none-eabi-10.3-2021.10/bin)
else
# Default to the normal GNU/Linux compiler path if NO_ARDUINO
# and ARDUINOPATH was not set.
LIBPATHFILEDROP = $(abspath ../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../gcc-arm-none-eabi-10.3-2021.10/bin)

endif
include $(abspath ../../../../toolchain.mk)

#************************************************************************
# Settings below this point usually do not need to be edited
#************************************************************************
INC += -I$(IRIDESCENT_ROOT)/cores-master/teensy4
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/Include
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/ComputeLibrary/Include
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/PrivateInclude
INC += -I$(IRIDESCENT_ROOT)/StreamLib-master/src

CFLAGS += -c -ggdb  # always include debug info in the ELF
CXXFLAGS += -c -ggdb  # always include debug info in the ELF
CPPFLAGS += -c -ggdb  # always include debug info in the ELF
ASFLAGS += -c -ggdb  # always include debug info in the ELF
ifeq ($(DEBUG),1)
CFLAGS += -O2
CXXFLAGS += -O2
CPPFLAGS += -O2
ASFLAGS += -O2
LDFLAGS = -O2 -Wl,--gc-sections,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS) -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
else
CFLAGS += -Os -DNDEBUG
CXXFLAGS += -Os -DNDEBUG
CPPFLAGS += -Os -DNDEBUG
ASFLAGS += -Os -DNDEBUG
LDFLAGS = -Os -Wl,--gc-sections,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS) -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
endif

# CPPFLAGS = compiler options for C and C++
CPPFLAGS = -c -ggdb -Wall -D__GNUC_PYTHON__ $(CPUOPTIONS) -MMD $(OPTIONS) -I. $(INC) -ffunction-sections -fdata-sections -fasynchronous-unwind-tables

# compiler options for C++ only
CXXFLAGS = -D__GNUC_PYTHON__ -std=gnu++14 -felide-constructors -fno-exceptions -I. $(INC) -fpermissive -fno-rtti -Wno-error=narrowing
#/Users/georgerosar/GitHub/iridescentCoconutSynth/iridescentCoconut_micropythonMakefile/ports/mimxrt/IRIDESCENT/cores-master/teensy4/arm_math.h
# compiler options for C only
CFLAGS =
# linker options
#LDFLAGS = -Os -Wl,--gc-sections,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS) -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
#LDFLAGS = -Os -Wl,--gc-sections,--relax $(SPECS) $(CPUOPTIONS) -T$(MCU_LD)
# names for the compiler programs
CC = $(COMPILERPATH)/arm-none-eabi-gcc
CXX = $(COMPILERPATH)/arm-none-eabi-g++
OBJCOPY = $(COMPILERPATH)/arm-none-eabi-objcopy
SIZE = $(COMPILERPATH)/arm-none-eabi-size
AR = $(COMPILERPATH)/arm-none-eabi-ar
# additional libraries to link
LIBS = 
#LIBS = -larm_cortexM7lfsp_math -lm -lstdc++

IRIDESCENT_libz_C=$(call rwildcard,.,*.c)
IRIDESCENT_libz_CPP=$(call rwildcard,.,*.cpp)
IRIDESCENT_libz_S=$(call rwildcard,.,*.S)

SRC_C += $(IRIDESCENT_libz_C)
SRC_CPP += $(IRIDESCENT_libz_CPP)
SRC_SS += $(IRIDESCENT_libz_S)

OBJS = $(SRC_C:.c=.o) $(SRC_CC:.cc=.o) $(SRC_CPP:.cpp=.o) $(SRC_S:.s=.o) $(SRC_SS:.S=.o) $(SRC_MOD:.c=.o)



# the actual makefile rules (all .o files built by GNU make's default implicit rules)
.PHONY: install
all: $(TARGET).a install

$(TARGET).a: $(OBJS)
	$(foreach OBJS_single,$(OBJS),$(shell $(AR) rcs $(TARGET).a $(OBJS_single)))
	#$(CXX) -shared -fPIC --specs=nosys.specs $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

install:
	cp $(TARGET).a $(LIBPATHFILEDROP)/$(TARGET).a

#%.hex: %.elf
#	$(SIZE) $<
#	$(OBJCOPY) -O ihex -R .eeprom $< $@
#ifneq (,$(wildcard $(TOOLSPATH)))
#	$(TOOLSPATH)/teensy_post_compile -file=$(basename $@) -path=$(shell pwd) -tools=$(TOOLSPATH)
#	-$(TOOLSPATH)/teensy_reboot
#endif

# compiler generated dependency info
-include $(OBJS:.o=.d)

clean:
	find . -name '*.o' -type f -delete
	find . -name '*.d' -type f -delete
	rm -f *.o *.d $(TARGET).a
