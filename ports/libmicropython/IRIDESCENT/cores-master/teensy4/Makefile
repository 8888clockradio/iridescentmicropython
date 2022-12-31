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

# Use these lines for Teensy 4.1
MCU = IMXRT1062
MCU_LD = imxrt1062_t41.ld
MCU_DEF = ARDUINO_TEENSY41
TOOLSPATH ?= /Applications/Teensyduino.app/Contents/Java/hardware/tools
# The name of your project (used to name the compiled .hex file)
TARGET = libTeensy41Core

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
IRIDESCENT_ROOT ?= $(abspath ../..)

# options needed by many Arduino libraries to configure for Teensy model
OPTIONS += -D__$(MCU)__ -DARDUINO=10813 -DTEENSYDUINO=154 -D$(MCU_DEF)

# for Cortex M7 with single & double precision FPU
CPUOPTIONS = -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -mthumb

MICROPY_HW_FLASH_SIZE ?= 0x790000
MICROPY_HW_FLASH_RESERVED ?= 0x070000
MICROPY_HW_SDRAM_AVAIL ?= 0
MICROPY_HW_SDRAM_SIZE ?= 0x1000000
MICROPY_PY_MACHINE_SDCARD ?= 1
MICROPY_HW_FLASH_TYPE = qspi_nor_flash

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

ifdef ARDUINOPATH

# path location for Teensy Loader, teensy_post_compile and teensy_reboot (on Linux)
#TOOLSPATH = $(abspath $(ARDUINOPATH)/hardware/tools)

# path location for Arduino libraries (currently not used)
#LIBRARYPATH = $(abspath $(ARDUINOPATH)/libraries)

# path location for the arm-none-eabi compiler
LIBPATHFILEDROP = $(abspath ../../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin)

LDFLAGS = -O2 \
	-Wl,--cref,--gc-sections,--copy-dt-needed-entries,--print-memory-usage,-Map=$@.map -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)

else
# Default to the normal GNU/Linux compiler path if NO_ARDUINO
# and ARDUINOPATH was not set.
LIBPATHFILEDROP = $(abspath ../../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin)

endif

include $(abspath ../../../../../../toolchain.mk)

INC += -I$(IRIDESCENT_ROOT)/StreamLib-master/src -I$(abspath $(IRIDESCENT_ROOT)/..) -I$(abspath $(IRIDESCENT_ROOT)../../../../../micropython) -I$(abspath $(IRIDESCENT_ROOT)../../../../../micropython/ports/libmicropython/boards/TEENSY41) -I$(abspath $(IRIDESCENT_ROOT)../../../../../micropython/lib/nxp_driver/sdk/devices/MIMXRT1062)  -I$(abspath $(IRIDESCENT_ROOT)../../../../../micropython/lib/nxp_driver/sdk/devices/MIMXRT1062/drivers)

#************************************************************************
# Settings below this point usually do not need to be edited
#************************************************************************

# CPPFLAGS = compiler options for C and C++
CPPFLAGS = -c -ggdb -O2 -Wall -ffunction-sections -fdata-sections -fno-exceptions -MMD

# compiler options for C++ only
CXXFLAGS = -std=gnu++14 -fno-exceptions -fpermissive -fno-rtti -fno-threadsafe-statics -felide-constructors -Wno-error=narrowing -mthumb -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -D__IMXRT1062__ -DARDUINO_TEENSY41 -DF_CPU=600000000 -DUSB_MIDI_AUDIO_SERIAL -DLAYOUT_US_ENGLISH $(OPTIONS) -fno-rtti -I. $(INC)

# compiler options for C only
CFLAGS = -c -ggdb -mthumb -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -D__IMXRT1062__ -DARDUINO_TEENSY41 -DF_CPU=600000000 -DUSB_MIDI_AUDIO_SERIAL -DLAYOUT_US_ENGLISH $(OPTIONS) -I. $(INC)

# linker options
LDFLAGS = -ggdb -Wl,--gc-sections,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS) -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
#LDFLAGS = -Os -Wl,--gc-sections,--relax $(SPECS) $(CPUOPTIONS) -T$(MCU_LD)

# additional libraries to link
#LIBS = -larm_cortexM7lfsp_math -lm -lstdc++

# names for the compiler programs
CC = $(COMPILERPATH)/arm-none-eabi-gcc
CXX = $(COMPILERPATH)/arm-none-eabi-g++
OBJCOPY = $(COMPILERPATH)/arm-none-eabi-objcopy
SIZE = $(COMPILERPATH)/arm-none-eabi-size
AR = $(COMPILERPATH)/arm-none-eabi-ar

LIBS = -lmicropython -lm -larm_cortexM7lfsp_math -lstdc++

LDDEFINES = \
	-DMICROPY_HW_FLASH_TYPE=$(MICROPY_HW_FLASH_TYPE) \
	-DMICROPY_HW_FLASH_SIZE=$(MICROPY_HW_FLASH_SIZE)

ifdef MICROPY_HW_FLASH_RESERVED
LDDEFINES += -DMICROPY_HW_FLASH_RESERVED=$(MICROPY_HW_FLASH_RESERVED)
endif

ifdef MICROPY_HW_SDRAM_AVAIL
LDDEFINES += \
	-DMICROPY_HW_SDRAM_AVAIL=$(MICROPY_HW_SDRAM_AVAIL) \
	-DMICROPY_HW_SDRAM_SIZE=$(MICROPY_HW_SDRAM_SIZE)
endif


# automatically create lists of the sources and objects
# TODO: this does not handle Arduino libraries yet...
C_FILES := $(wildcard *.c)
CPP_FILES := $(wildcard *.cpp)
S_FILES := $(wildcard *.S)
OBJS := $(S_FILES:.S=.o) $(C_FILES:.c=.o) $(CPP_FILES:.cpp=.o)


# the actual makefile rules (all .o files built by GNU make's default implicit rules)
.PHONY: install
all: $(TARGET).a install $(TARGET).elf $(TARGET).hex

$(TARGET).a: $(OBJS) $(MCU_LD)
	#rm -f $(TARGET).a
	$(foreach OBJS_single,$(OBJS),$(shell $(AR) rcs $(TARGET).a $(OBJS_single)))
	#$(CXX) -shared -fPIC $(LDFLAGS) -o $@ $(OBJS) $(LIBS)

$(TARGET).elf: $(OBJS) $(MCU_LD)
	$(CXX) -E -x c $(LDDEFINES) ../../imxmrt_ld/imxrt1062_t41.ld | grep -v '^#' > link.ld
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(CPUOPTIONS) -DMELTYMAIN_H_EXTERN main.cpp -o main.o
	$(CXX) -Tlink.ld $(CPUOPTIONS) $(OBJS) -o $(TARGET).elf
	#$(CPUOPTIONS) $(LDFLAGS) -T$(BUILD)/link.ld -o $@ $(OBJS) $(LIBS)
install:
	cp $(TARGET).a $(LIBPATHFILEDROP)/$(TARGET).a

#%.hex: %.elf
#	$(SIZE) $<
#	$(OBJCOPY) -O ihex -R .eeprom $< $@
#ifneq (,$(wildcard $(TOOLSPATH)))
#	$(TOOLSPATH)/teensy_post_compile -file=$(basename $@) -path=$(shell pwd) -tools=$(TOOLSPATH)
#	-$(TOOLSPATH)/teensy_reboot
#endif

%.hex: %.elf
	$(SIZE) $<
	$(OBJCOPY) -O ihex -R .eeprom $< $@
#ifneq (,$(wildcard $(TOOLSPATH)))
	-$(TOOLSPATH)/teensy_post_compile -file=$(basename $@) -path=$(shell pwd) -tools=$(TOOLSPATH)
	#-$(TOOLSPATH)/teensy_reboot
#endif


# compiler generated dependency info
-include $(OBJS:.o=.d)

clean:
	find . -name '*.o' -type f -delete
	find . -name '*.d' -type f -delete
	rm -f *.o *.d $(TARGET).a
