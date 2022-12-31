rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))
MCU = IMXRT1062
MCU_LD = imxrt1062_t41.ld
MCU_DEF = ARDUINO_TEENSY41

TARGET = libTeensyIRIDESCENTJRorgan

OPTIONS = -DF_CPU=600000000 -DLAYOUT_US_ENGLISH -DUSING_MAKEFILE -DUSB_MIDI_AUDIO_SERIAL
OPTIONS += -D__$(MCU)__ -DARDUINO=10813 -DTEENSYDUINO=154 -D$(MCU_DEF)
CPUOPTIONS = -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -mthumb
ifndef NO_ARDUINO
ARDUINOPATH ?= ../../../../..
endif
IRIDESCENT_ROOT ?= $(abspath ../..)
ifdef ARDUINOPATH
TOOLSPATH = $(abspath $(ARDUINOPATH)/hardware/tools)
LIBRARYPATH = $(abspath $(ARDUINOPATH)/libraries)
LIBPATHFILEDROP = $(abspath ../../../../../../gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../../gcc-arm-none-eabi-10.3-2021.10/bin)
else
LIBPATHFILEDROP = $(abspath ../../../../../../gcc-arm-none-eabi-10.3-2021.10/lib/gcc/arm-none-eabi/10.3.1/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../../../../../../gcc-arm-none-eabi-10.3-2021.10/bin)
endif
INC += -I$(IRIDESCENT_ROOT)/cores-master/teensy4
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/Include
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/ComputeLibrary/Include
INC += -I$(IRIDESCENT_ROOT)/CMSIS-DSP-main/PrivateInclude
INC += -I$(IRIDESCENT_ROOT)/StreamLib-master/src
INC += -I$(IRIDESCENT_ROOT)/Wire
INC += -I$(IRIDESCENT_ROOT)/SPI
INC += -I$(IRIDESCENT_ROOT)/SerialFlash
INC += -I$(IRIDESCENT_ROOT)/Audio
INC += -I$(IRIDESCENT_ROOT)/AudioSynthWavetableIridescent
CPPFLAGS = -Wall -D__GNUC_PYTHON__ -g -O2 $(CPUOPTIONS) -MMD $(OPTIONS) -I. $(INC) -ffunction-sections -fdata-sections -fasynchronous-unwind-tables
CXXFLAGS = -D__GNUC_PYTHON__ -std=gnu++14 -felide-constructors -fno-exceptions -I. -fpermissive -fno-rtti -Wno-error=narrowing
CFLAGS =
LDFLAGS = -Os -Wl,--gc-sections,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS) -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
CC = $(COMPILERPATH)/arm-none-eabi-gcc
CXX = $(COMPILERPATH)/arm-none-eabi-g++
OBJCOPY = $(COMPILERPATH)/arm-none-eabi-objcopy
SIZE = $(COMPILERPATH)/arm-none-eabi-size
LIBS = $(shell $(CXX) $(CPPFLAGS) -print-libgcc-file-name) -larm_cortexM7lfsp_math -lm -lstdc++ -lmicropythonTeensy -lTeensyStreamLib -lTeensy41Core -lTeensyWire -lTeensySPI -lTeensySerialFlash -lTeensyAudio
IRIDESCENT_libTeensyIRIDESCENTJRorgan_C=$(call rwildcard,.,*.c)

IRIDESCENT_libTeensyIRIDESCENTJRorgan_CPP=$(call rwildcard,.,*.cpp)

IRIDESCENT_libTeensyIRIDESCENTJRorgan_S=$(call rwildcard,.,*.S)

SRC_C += $(IRIDESCENT_libTeensyIRIDESCENTJRorgan_C)

SRC_CPP += $(IRIDESCENT_libTeensyIRIDESCENTJRorgan_CPP)

SRC_SS += $(IRIDESCENT_libTeensyIRIDESCENTJRorgan_S)

OBJS = $(SRC_C:.c=.o) $(SRC_CC:.cc=.o) $(SRC_CPP:.cpp=.o) $(SRC_S:.s=.o) $(SRC_SS:.S=.o) $(SRC_MOD:.c=.o)

.PHONY: install
all: $(TARGET).a install
$(TARGET).a: $(OBJS)
	$(CXX) -shared -fPIC $(LDFLAGS) -o $@ $(OBJS) $(LIBS)
install:
	cp $(TARGET).a $(LIBPATHFILEDROP)/$(TARGET).a
-include $(OBJS:.o=.d)
clean:
	find . -name '*.o' -type f -delete
	find . -name '*.d' -type f -delete
	rm -f *.o *.d $(TARGET).a
