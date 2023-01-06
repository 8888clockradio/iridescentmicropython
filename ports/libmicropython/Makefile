# =============================================================================
# Parameter Configuration
# =============================================================================
BOARD ?= TEENSY41
BOARD_DIR ?= boards/$(BOARD)
BUILD ?= build-SHAREDLIB
PORT ?= /dev/ttyACM0
CROSS_COMPILE ?= arm-none-eabi-
GIT_SUBMODULES += lib/tinyusb lib/nxp_driver lib/lwip lib/mbedtls
#LIBPATHFILEDROP = $(abspath ../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
# MicroPython feature configurations
FROZEN_MANIFEST ?= boards/manifest.py
MICROPY_VFS_LFS2 ?= 1
MICROPY_VFS_FAT ?= 1
#COMPILER_ROOT = $(abspath ../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi)

ADD_BIN = bin
#COMPILERPATH = $(COMPILER_ROOT)/bin
include $(abspath ../../toolchain.mk)
CROSS_COMPILE = $(COMPILERPATH)/arm-none-eabi-
PATH := $(COMPILER_ROOT)/$(ADD_BIN):$(PATH)
MICROPY_PY_LWIP = 1
MPY_CROSS_FLAGS = -march=armv7emdp
# -msmall-int-bits=8
#TOOLSPATH = /Applications/Teensyduino.app/Contents/Java/hardware/tools

define newline


endef


#&_mp_sstack: 0x20278000 &_mp_estack: 0x20280000
# Set default values for optional variables
#MICROPY_HW_FLASH_SIZE ?= 0x790000
MICROPY_HW_FLASH_SIZE ?= 0x790000
MICROPY_HW_FLASH_RESERVED ?= 0x070000
MICROPY_HW_SDRAM_AVAIL ?= 1
MICROPY_HW_SDRAM_SIZE ?= 0x400000
MICROPY_PY_MACHINE_SDCARD ?= 1
MICROPY_HW_FLASH_TYPE = qspi_nor_flash

REMOVE_UNUSED = 0
CC=$(COMPILER_ROOT)/bin/$(CROSS_COMPILE)gcc
# Reset variables
SUPPORTS_HARDWARE_FP_SINGLE = 1
SUPPORTS_HARDWARE_FP_DOUBLE = 1

TARGET := micropython
# qstr definitions (must come before including py.mk)
QSTR_DEFS = qstrdefsport.h
QSTR_GLOBAL_DEPENDENCIES = $(BOARD_DIR)/mpconfigboard.h

# Generation scripts
MAKE_PINS = boards/make-pins.py
MAKE_FLEXRAM_LD = boards/make-flexram-config.py

# Include py make environment
include ../../py/mkenv.mk

# Include micropython configuration board makefile
ifeq ($(wildcard $(BOARD_DIR)/.),)
    $(error Invalid BOARD specified: $(BOARD_DIR))
endif
include $(BOARD_DIR)/mpconfigboard.mk

# Include py core make definitions
include $(TOP)/py/py.mk
include $(TOP)/extmod/extmod.mk

# Set SDK directory based on MCU_SERIES
MCU_DIR = lib/nxp_driver/sdk/devices/$(MCU_SERIES)

# Select linker scripts based on MCU_SERIES
#LD_FILES = $(BUILD)/imxrt1062_t41_bin.ld
#LD_FILES = boards/common.ld boards/MIMXRT1062_bin.ld
LD_FILES = IRIDESCENT/imxmrt_ld/imxrt1062_t41.ld

# Parameter configurations for generation
AF_FILE = boards/$(MCU_SERIES)_af.csv
BOARD_PINS = $(BOARD_DIR)/pins.csv
PREFIX_FILE = boards/mimxrt_prefix.c
GEN_FLEXRAM_CONFIG_SRC = $(BUILD)/flexram_config.s
GEN_PINS_AF_CONST = $(HEADER_BUILD)/pins_af_const.h
GEN_PINS_AF_PY = $(BUILD)/pins_af.py
GEN_PINS_HDR = $(HEADER_BUILD)/pins.h
GEN_PINS_QSTR = $(BUILD)/pins_qstr.h
GEN_PINS_SRC = $(BUILD)/pins_gen.c

# =============================================================================
# Includes
# =============================================================================

INC += -I.
INC += -IIRIDESCENT/cores-master/teensy4
INC += -I$(BOARD_DIR)
INC += -I$(BUILD)
INC += -I$(TOP)
INC += -I$(TOP)/$(MCU_DIR)
INC += -I$(TOP)/$(MCU_DIR)/drivers
INC += -I$(TOP)/lib/cmsis/inc
INC += -I$(TOP)/lib/oofatfs
INC += -I$(TOP)/lib/tinyusb/hw
INC += -I$(TOP)/lib/tinyusb/hw/bsp/teensy_40
INC += -I$(TOP)/lib/tinyusb/src
INC += -Ihal
INC += -IIRIDESCENT/SPI
INC += -IIRIDESCENT/SPIFlash
INC += -IIRIDESCENT/SerialFlash
INC += -IIRIDESCENT/Wire
INC += -IIRIDESCENT/TeensyDebug-master/src
INC += -IIRIDESCENT/StreamLib-master/src
INC += -IIRIDESCENT/TeensyThreads-master
INC += -IIRIDESCENT/FNET-master/src
INC += -IIRIDESCENT/FNET-master
INC += -IIRIDESCENT/FNET-master/third_party/mbedtls/src
INC += -IIRIDESCENT/NativeEthernet-master/src
INC += -IIRIDESCENT/freertos-teensy-master/src
INC += -IIRIDESCENT/freertos-teensy-master/lib/cpp/src
INC += -IIRIDESCENT/qhull-inc
INC += -IIRIDESCENT/sdl
INC += -IIRIDESCENT/RA8875-0.70b11
INC += -IIRIDESCENT/TeensyOpenGL_t4-master

# All settings for Ethernet support are controller by the value of MICROPY_PY_LWIP
ifeq ($(MICROPY_PY_LWIP),1)
INC += -Ilwip_inc
INC += -Ihal/phy
endif

# =============================================================================
# Sources
# =============================================================================

# TinyUSB Stack source
#SRC_TINYUSB_C += \
#	lib/tinyusb/src/class/cdc/cdc_device.c \
#	lib/tinyusb/src/class/dfu/dfu_rt_device.c \
#	lib/tinyusb/src/class/hid/hid_device.c \
#	lib/tinyusb/src/class/midi/midi_device.c \
#	lib/tinyusb/src/class/msc/msc_device.c \
#	lib/tinyusb/src/class/usbtmc/usbtmc_device.c \
#	lib/tinyusb/src/class/vendor/vendor_device.c \
#	lib/tinyusb/src/common/tusb_fifo.c \
#	lib/tinyusb/src/device/usbd.c \
#	lib/tinyusb/src/device/usbd_control.c \
#	lib/tinyusb/src/portable/chipidea/ci_hs/dcd_ci_hs.c \
#	lib/tinyusb/src/tusb.c

# All settings for Ethernet support are controller by the value of MICROPY_PY_LWIP
ifeq ($(MICROPY_PY_LWIP),1)
SRC_ETH_C += \
	$(MCU_DIR)/drivers/fsl_enet.c \
	hal/phy/device/phydp83825/fsl_phydp83825.c \
	hal/phy/device/phydp83848/fsl_phydp83848.c \
	hal/phy/device/phyksz8081/fsl_phyksz8081.c \
	hal/phy/device/phylan8720/fsl_phylan8720.c \
	hal/phy/mdio/enet/fsl_enet_mdio.c
endif

# NXP SDK sources
SRC_HAL_IMX_C += \
	$(MCU_DIR)/drivers/fsl_adc.c \
	$(MCU_DIR)/drivers/fsl_cache.c \
	$(MCU_DIR)/drivers/fsl_clock.c \
	$(MCU_DIR)/drivers/fsl_common.c \
	$(MCU_DIR)/drivers/fsl_dmamux.c \
	$(MCU_DIR)/drivers/fsl_edma.c \
	$(MCU_DIR)/drivers/fsl_flexram.c \
	$(MCU_DIR)/drivers/fsl_flexspi.c \
	$(MCU_DIR)/drivers/fsl_gpio.c \
	$(MCU_DIR)/drivers/fsl_gpt.c \
	$(MCU_DIR)/drivers/fsl_lpi2c.c \
	$(MCU_DIR)/drivers/fsl_lpspi.c \
	$(MCU_DIR)/drivers/fsl_lpspi_edma.c \
	$(MCU_DIR)/drivers/fsl_lpuart.c \
	$(MCU_DIR)/drivers/fsl_pit.c \
	$(MCU_DIR)/drivers/fsl_pwm.c \
	$(MCU_DIR)/drivers/fsl_sai.c \
	$(MCU_DIR)/drivers/fsl_snvs_lp.c \
	$(MCU_DIR)/drivers/fsl_trng.c \
	$(MCU_DIR)/drivers/fsl_wdog.c \
	$(MCU_DIR)/system_$(MCU_SERIES).c \
	$(MCU_DIR)/xip/fsl_flexspi_nor_boot.c \

ifeq ($(MICROPY_HW_SDRAM_AVAIL),1)
SRC_HAL_IMX_C += $(MCU_DIR)/drivers/fsl_semc.c
endif

ifeq ($(MICROPY_PY_MACHINE_SDCARD),1)
SRC_HAL_IMX_C += $(MCU_DIR)/drivers/fsl_usdhc.c
endif

ifeq ($(MCU_SERIES),$(filter $(MCU_SERIES), MIMXRT1015 MIMXRT1021 MIMXRT1052 MIMXRT1062 MIMXRT1064))
SRC_HAL_IMX_C += \
	$(MCU_DIR)/drivers/fsl_qtmr.c
endif

# C source files
#took out main.cpp for linker to use a .o file
SRC_CPP += main.cpp mphalport.cpp mpthreadport.cpp
#mpthreadport.cpp

SRC_C += \
	boards/$(MCU_SERIES)_clock_config.c \
	board_init.c \
	dma_manager.c \
	drivers/bus/softspi.c \
	drivers/dht/dht.c \
	eth.c \
	extmod/modnetwork.c \
	extmod/modonewire.c \
	extmod/modusocket.c \
	fatfs_port.c \
	hal/pwm_backport.c \
	led.c \
	machine_adc.c \
	machine_bitstream.c \
	machine_i2c.c \
	machine_i2s.c \
	machine_led.c \
	machine_pin.c \
	machine_rtc.c \
	machine_sdcard.c \
	machine_spi.c \
	machine_timer.c \
	machine_uart.c \
	machine_wdt.c \
	mbedtls/mbedtls_port.c \
	mimxrt_flash.c \
	modmachine.c \
	modmimxrt.c \
	modutime.c \
	mpnetworkport.c \
	network_lan.c \
	pendsv.c \
	pin.c \
	sdcard.c \
	shared/readline/readline.c \
	shared/runtime/gchelper_native.c \
	shared/runtime/interrupt_char.c \
	shared/runtime/mpirq.c \
	shared/runtime/pyexec.c \
	shared/runtime/stdout_helpers.c \
	shared/runtime/sys_stdio_mphal.c \
	shared/timeutils/timeutils.c \
	systick.c \
	ticks.c \
	shared/netutils/dhcpserver.c \
	shared/netutils/trace.c
#	mimxrt_sdram.c
#	shared/netutils/netutils.c
#	extmod/uos_dupterm.c

#	tusb_port.c

#	shared/libc/printf.c
#	shared/libc/string0.c
#	shared/netutils/dhcpserver.c
#	shared/netutils/netutils.c
#	shared/netutils/trace.c



#SRC_TINYUSB_LIB_C = $(SRC_TINYUSB_C)
SRC_HAL_IMX_LIB_C = $(SRC_HAL_IMX_C)
SRC_ETH_LIB_C = $(SRC_ETH_C)

#SRC_TINYUSB_OBJ += $(addprefix $(BUILD)/, $(SRC_TINYUSB_LIB_C:.c=.o))
SRC_HAL_IMX_OBJ += $(addprefix $(BUILD)/, $(SRC_HAL_IMX_LIB_C:.c=.o))
SRC_ETH_OBJ += $(addprefix $(BUILD)/, $(SRC_ETH_LIB_C:.c=.o))

# Add sources for respective board flash type
ifeq ($(MICROPY_HW_FLASH_TYPE),$(filter $(MICROPY_HW_FLASH_TYPE),qspi_nor_flash qspi_hyper_flash))
    # Add hal/flexspi_nor_flash.c or hal/flashspi_hyper_flash.c respectively
    SRC_C += hal/flexspi_$(subst qspi_,,$(MICROPY_HW_FLASH_TYPE)).c
    #
    # Add custom (board specific) or default configuration
    ifeq ($(MICROPY_HW_BOARD_FLASH_FILES),1)
        SRC_C += $(BOARD_DIR)/$(MICROPY_HW_FLASH_TYPE)_config.c
    else
        SRC_C += hal/$(MICROPY_HW_FLASH_TYPE)_config.c
    endif
else
    $(error Error: Unknown board flash type $(MICROPY_HW_FLASH_TYPE))
endif

# Math library source files
ifeq ($(MICROPY_FLOAT_IMPL),double)
    LIBM_SRC_C += $(addprefix lib/libm_dbl/,\
        __cos.c __expo2.c __fpclassify.c __rem_pio2.c __rem_pio2_large.c __signbit.c __sin.c __tan.c acos.c acosh.c \
        asin.c asinh.c atan.c atan2.c atanh.c ceil.c copysign.c cos.c cosh.c erf.c exp.c expm1.c floor.c fmod.c \
        frexp.c ldexp.c lgamma.c log.c log10.c log1p.c modf.c nearbyint.c pow.c rint.c round.c scalbn.c sin.c \
        sinh.c tan.c tanh.c tgamma.c trunc.c)
    #
    ifeq ($(SUPPORTS_HARDWARE_FP_DOUBLE),1)
        LIBM_SRC_C += lib/libm_dbl/thumb_vfp_sqrt.c
    else
        LIBM_SRC_C += lib/libm_dbl/sqrt.c
    endif
else
    LIBM_SRC_C += $(addprefix lib/libm/,\
        acoshf.c asinfacosf.c asinhf.c atan2f.c atanf.c atanhf.c ef_rem_pio2.c erf_lgamma.c fmodf.c kf_cos.c \
        kf_rem_pio2.c kf_sin.c kf_tan.c log1pf.c math.c nearbyintf.c roundf.c sf_cos.c sf_erf.c sf_frexp.c sf_ldexp.c \
        sf_modf.c sf_sin.c sf_tan.c wf_lgamma.c wf_tgamma.c)
    ifeq ($(SUPPORTS_HARDWARE_FP_SINGLE),1)
        LIBM_SRC_C += lib/libm/thumb_vfp_sqrtf.c
    else
        LIBM_SRC_C += lib/libm/ef_sqrt.c
    endif
endif


# Assembly source files
SRC_SS = \
	$(MCU_DIR)/gcc/startup_$(MCU_SERIES).S
	#hal/resethandler_MIMXRT10xx.S
	#hal/resethandler_MIMXRT10xx.S

SRC_S += shared/runtime/gchelper_m3.s
SRC_S += $(GEN_FLEXRAM_CONFIG_SRC)

# =============================================================================
# QSTR Sources
# =============================================================================

# All settings for Ethernet support are controller by the value of MICROPY_PY_LWIP
ifeq ($(MICROPY_PY_LWIP),1)
SRC_QSTR += \
	extmod/modlwip.c \
	extmod/modnetwork.c \
	extmod/modusocket.c \
	extmod/moduwebsocket.c \
	network_lan.c
endif

# List of sources for qstr extraction
SRC_QSTR += \
	extmod/modonewire.c \
	extmod/uos_dupterm.c \
	machine_adc.c \
	machine_i2s.c \
	machine_led.c \
	machine_pin.c \
	machine_pwm.c \
	machine_rtc.c \
	machine_sdcard.c \
	machine_spi.c \
	machine_timer.c \
	machine_uart.c \
	machine_wdt.c \
	mimxrt_flash.c \
	modmachine.c \
	modmimxrt.c \
	modutime.c \
	pin.c \
	shared/readline/readline.c \
	shared/runtime/mpirq.c \
	shared/runtime/sys_stdio_mphal.c \
	$(GEN_PINS_SRC)

# =============================================================================
# Compiler Flags
# =============================================================================

CFLAGS += -c  	# always include debug info in the ELF
CXXFLAGS += -c  # always include debug info in the ELF
CPPFLAGS += -c  # always include debug info in the ELF
ASFLAGS += -c   # always include debug info in the ELF
ifeq ($(DEBUG),1)
CFLAGS += -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables
CXXFLAGS += -ggdb -O2 -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS)
CPPFLAGS += -ggdb -O2 -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS)
ASFLAGS += -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables
else
CFLAGS += -Os -DNDEBUG -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables
CXXFLAGS += -Os -DNDEBUG -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS)
CPPFLAGS += -Os -DNDEBUG -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS)
ASFLAGS += -Os -DNDEBUG -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables
endif


# Configure default compiler flags
CFLAGS += \
	$(INC) \
	-DMBEDTLS_CERTS_C \
	-D__START=setup \
	-DBOARD_$(BOARD) \
	-DBOARD_FLASH_SIZE=$(MICROPY_HW_FLASH_SIZE) \
	-DCFG_TUSB_MCU=OPT_MCU_MIMXRT10XX \
	-DCLOCK_CONFIG_H='<boards/$(MCU_SERIES)_clock_config.h>' \
	-DCPU_$(MCU_SERIES) \
	-DCPU_$(MCU_VARIANT) \
	-DCPU_HEADER_H='<$(MCU_SERIES).h>' \
	-DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1 \
	-DI2C_RETRY_TIMES=1000000 \
	-DMICROPY_HW_FLASH_SIZE=$(MICROPY_HW_FLASH_SIZE) \
	-DMICROPY_HW_SDRAM_AVAIL=$(MICROPY_HW_SDRAM_AVAIL) \
	-DMICROPY_HW_SDRAM_SIZE=$(MICROPY_HW_SDRAM_SIZE) \
	-DMICROPY_PY_MACHINE_SDCARD=$(MICROPY_PY_MACHINE_SDCARD) \
	-DSPI_RETRY_TIMES=1000000 \
	-DUART_RETRY_TIMES=1000000 \
	-DXIP_BOOT_HEADER_ENABLE=1 \
	-DXIP_EXTERNAL_FLASH=1 \
	-DFLASHMEM_MPYCROSS_HACK \
	-DUSB_MIDI_AUDIO_SERIAL \
	-D__IMXRT1062__ \
	-DARDUINO_TEENSY41 \
	-fdata-sections \
	-ffunction-sections \
	-mcpu=cortex-m7 \
	-mthumb \
	-mtune=cortex-m7 \
	-std=c99 \
	-Wall \
	-Wdouble-promotion \
	-Wfloat-conversion \
	-Wno-error=unused-parameter \
	-fPIC \
	-fno-exceptions \
	-fasynchronous-unwind-tables \
	-mlong-calls \
	-Wno-overflow \
	-DSKIP_SYSCLK_INIT \
	-D_POSIX_THREADS
#	-D__STARTUP_CLEAR_BSS \
#	-D__STARTUP_INITIALIZE_RAMFUNCTION \

# Configure respective board flash type
ifeq ($(MICROPY_HW_FLASH_TYPE),$(filter $(MICROPY_HW_FLASH_TYPE),qspi_nor_flash qspi_hyper_flash))
    # Add hal/flexspi_nor_flash.h or hal/flexspi_hyper_flash.h respectively
    CFLAGS += -DBOARD_FLASH_OPS_HEADER_H=\"hal/flexspi_$(subst qspi_,,$(MICROPY_HW_FLASH_TYPE)).h\"
    #
    # Add custom (board specific) or default configuration
    ifeq ($(MICROPY_HW_BOARD_FLASH_FILES),1)
        CFLAGS += -DBOARD_FLASH_CONFIG_HEADER_H=\"$(BOARD)_flexspi_flash_config.h\"
    else
        CFLAGS += -DBOARD_FLASH_CONFIG_HEADER_H=\"hal/flexspi_flash_config.h\"
    endif
else
    $(error Error: Unknown board flash type $(MICROPY_HW_FLASH_TYPE))
endif

# Configure floating point support
ifeq ($(MICROPY_FLOAT_IMPL),single)
    CFLAGS += \
        -DMICROPY_FLOAT_IMPL=MICROPY_FLOAT_IMPL_FLOAT \
        -fsingle-precision-constant \
        -mfloat-abi=softfp \
        -mfpu=fpv5-sp-d16
else ifeq ($(MICROPY_FLOAT_IMPL),double)
    CFLAGS += \
        \
        -mfloat-abi=hard \
        -mfpu=fpv5-d16
else ifeq ($(MICROPY_FLOAT_IMPL),none)
    CFLAGS += \
        -DMICROPY_FLOAT_IMPL=MICROPY_FLOAT_IMPL_NONE
else
    $(error Error: Unknown floating point implementation $(MICROPY_FLOAT_IMPL))
endif


# All settings for Ethernet support are controller by the value of MICROPY_PY_LWIP
ifeq ($(MICROPY_PY_LWIP),1)
CFLAGS += \
	-DFSL_FEATURE_PHYKSZ8081_USE_RMII50M_MODE=1 \
	-DMBEDTLS_CONFIG_FILE='"mbedtls/mbedtls_config.h"'
endif

CFLAGS += $(CFLAGS_MOD) $(CFLAGS_EXTRA)

#vfs
#https://docs.micropython.org/en/latest/reference/filesystem.html#vfs
#vfs
# =============================================================================
# Linker Flags
# =============================================================================
CPUOPTIONS = -mcpu=cortex-m7 -mfloat-abi=hard -mfpu=fpv5-d16 -mthumb
ifeq ($(DEBUG),1)
LDFLAGS = -O2 \
	-Wl,--cref,--gc-sections,--copy-dt-needed-entries,--print-memory-usage,--no-warn-rwx-segments,-Map=$@.map -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
LINKFLAGS = -O2 -Wl,--cref,--gc-sections,--copy-dt-needed-entries,--print-memory-usage,-Map=$@.map -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard) $(CFLAGS)
else
	LDFLAGS = -O2 \
	-Wl,--cref,--gc-sections,--copy-dt-needed-entries,--print-memory-usage,--no-warn-rwx-segments,-Map=$@.map -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard)
LINKFLAGS = -O2 -Wl,--cref,--gc-sections,--copy-dt-needed-entries,--print-memory-usage,-Map=$@.map -L$(LIBPATHFILEDROP) -L$(abspath $(LIBPATHFILEDROP)/../../../../arm-none-eabi/lib/thumb/v7e-m+dp/hard) $(CFLAGS)
endif
#LDFLAGS = -Os -Wl,--gc-sections,--copy-dt-needed-entries,--relax,-Map=$@.map $(SPECS) $(CPUOPTIONS)

# LDDEFINES are used for link time adaptation of linker scripts, utilizing
#	the C preprocessor. Therefore keep LDDEFINES separated from LDFLAGS!

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

# =============================================================================
# Library and Object files
# =============================================================================

LIBM_O = $(addprefix $(BUILD)/, $(LIBM_SRC_C:.c=.o))

# Too many warnings in libm_dbl, disable for now.
ifeq ($(MICROPY_FLOAT_IMPL),double)
$(LIBM_O): CFLAGS := $(filter-out -Wdouble-promotion -Wfloat-conversion, $(CFLAGS))
endif

CXXFLAGS += \
	$(INC) \
	-DMBEDTLS_CERTS_C \
	-DLAYOUT_US_ENGLISH \
	-DF_CPU=600000000 \
	-DARDUINO=10819 \
	-DARDUINO_TEENSY41 \
	-DCPU_MIMXRT1062DVL6A \
	-D__IMXRT1062__ -DTEENSYDUINO=156 \
	-DARDUINO_TEENSY41 \
	-D__START=main \
	-D__arm__ \
	-D__FPU_PRESENT=1U \
	-DBOARD_$(BOARD) \
	-DBOARD_FLASH_SIZE=$(MICROPY_HW_FLASH_SIZE) \
	-DCFG_TUSB_MCU=OPT_MCU_MIMXRT10XX \
	-DCLOCK_CONFIG_H='<boards/$(MCU_SERIES)_clock_config.h>' \
	-DCPU_$(MCU_SERIES) \
	-DCPU_$(MCU_VARIANT) \
	-DARM_MATH_CM7 \
	-D__GNUC_PYTHON__ \
	-DUSING_MAKEFILE \
	-DCPU_HEADER_H='<$(MCU_SERIES).h>' \
	-DFSL_SDK_ENABLE_DRIVER_CACHE_CONTROL=1 \
	-DI2C_RETRY_TIMES=1000000 \
	-DMICROPY_HW_FLASH_SIZE=$(MICROPY_HW_FLASH_SIZE) \
	-DMICROPY_HW_SDRAM_AVAIL=$(MICROPY_HW_SDRAM_AVAIL) \
	-DMICROPY_HW_SDRAM_SIZE=$(MICROPY_HW_SDRAM_SIZE) \
	-DMICROPY_PY_MACHINE_SDCARD=$(MICROPY_PY_MACHINE_SDCARD) \
	-DSPI_RETRY_TIMES=1000000 \
	-DUART_RETRY_TIMES=1000000 \
	-DXIP_BOOT_HEADER_ENABLE=1 \
	-DXIP_EXTERNAL_FLASH=1 \
	-DFLASHMEM_MPYCROSS_HACK \
	-mcpu=cortex-m7 \
	-mthumb \
	-mtune=cortex-m7 \
	-fno-rtti -fno-threadsafe-statics -felide-constructors -Wno-error=narrowing \
	-funsafe-math-optimizations -mfp16-format=ieee \
	-Wall \
	-MMD \
	-fno-exceptions \
	-fpermissive \
	-DUSB_MIDI_AUDIO_SERIAL \
	-Wno-error=builtin-macro-redefined \
	-Wno-error=unused-variable
	-Wno-error=sign-conversion \
	-Wno-error=conversion \
	-Wno-error=unused-parameter \
	-stdlib=libc++ \
	-mfloat-abi=hard -mfpu=fpv5-d16 \
	-fdata-sections \
	-ffunction-sections \
	-Wall \
	-Wdouble-promotion \
	-Wfloat-conversion \
	-Wno-error=unused-parameter \
	-fno-exceptions \
	-fasynchronous-unwind-tables \
	-mlong-calls \
	-Wno-overflow \
	-DSKIP_SYSCLK_INIT \
	-D_POSIX_THREADS
#	-D__STARTUP_CLEAR_BSS
#	-D__STARTUP_INITIALIZE_RAMFUNCTION
ASFLAGS += \
	$(INC) \
	-DMBEDTLS_CERTS_C \
	-x assembler-with-cpp \
	-DARDUINO=10819 \
	-DARDUINO_TEENSY41 \
	-DCPU_MIMXRT1062DVL6A \
	-DARM_MATH_CM7 \
	-D__GNUC_PYTHON__ \
	-DUSING_MAKEFILE \
	-D__arm__ \
	-D__FPU_PRESENT=1U \
	-DLAYOUT_US_ENGLISH \
	-D__IMXRT1062__ -DTEENSYDUINO=156 \
	-DF_CPU=600000000 \
	-DFLASHMEM_MPYCROSS_HACK \
	-DUSB_MIDI_AUDIO_SERIAL \
	-mthumb \
	-Wno-builtin-macro-redefined \
	-Wno-unused-variable \
	-fpermissive \
	-Wno-traditional \
	-Wno-error=builtin-macro-redefined \
	-Wno-error=unused-variable
	-Wno-error=sign-conversion \
	-Wno-error=conversion \
	-Wno-error=unused-parameter \
	-fno-exceptions \
	-fasynchronous-unwind-tables \
	-mlong-calls \
	-Wno-overflow \
	-DSKIP_SYSCLK_INIT \
	-D_POSIX_THREADS
#OBJ += $(PY_O)
OBJ += $(LIBM_O)
#OBJ += $(SRC_TINYUSB_OBJ)
OBJ += $(SRC_HAL_IMX_OBJ)
OBJ += $(SRC_ETH_OBJ)
OBJ += $(addprefix $(BUILD)/, $(SRC_C:.c=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_CPP:.cpp=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_S:.s=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_SS:.S=.o))
OBJ += $(addprefix $(BUILD)/, $(SRC_MOD:.c=.o))
OBJ += $(BUILD)/pins_gen.o

CC = $(COMPILERPATH)/arm-none-eabi-gcc
CXX = $(COMPILERPATH)/arm-none-eabi-g++
OBJCOPY = $(COMPILERPATH)/arm-none-eabi-objcopy
SIZE = $(COMPILERPATH)/arm-none-eabi-size
AS = $(COMPILERPATH)/arm-none-eabi-gcc $(ASFLAGS)

QUADLIBS = -larm_cortexM7lfsp_math -lm -lstdc++

LIBS += -Llib -lTeensyfreeRTOS -lTeensyStreamLib -lTeensyWire -lTeensySerialFlash -lTeensySPI -lTeensyDebug -lTeensyMBEDTLS -lTeensyThreads -lRA8875 -lTeensyOpenGL -lqhull_r
#-lTeensyThreads
CORE = -lTeensy41Core
# Workaround for bug in older gcc, warning on "static usbd_device_t _usbd_dev = { 0 };"
#$(BUILD)/lib/tinyusb/src/device/usbd.o: CFLAGS += -Wno-missing-braces

RUST := $(OBJ)
# =============================================================================
# Build targets
# =============================================================================

#all: $(BUILD)/firmware.hex $(BUILD)/firmware.bin
.PHONY: all clean makedirs copylibmicropython libTeensyStreamLib libTeensyStreamLibClean libTeensy41Core libTeensy41CoreClean libTeensyWire libTeensyWireClean libTeensySerialFlash libTeensySerialFlashClean libTeensySPI libTeensySPIClean libTeensyDebug libTeensyDebugClean libTeensyThreads libTeensyThreadsClean libTeensyMBEDTLS libTeensyMBEDTLSClean libTeensyFNET libTeensyFNETClean libTeensyNativeEthernet libTeensyNativeEthernetClean libz libzClean libRA8875 libRA8875Clean libSDL3 libSDL3Clean libSDL2Compat libSDL2CompatClean libqhull libqhullClean libTeensyOpenGL libTeensyOpenGLClean libgstreamer libgstreamerClean libglew libglewClean

libRA8875:
	cd IRIDESCENT/RA8875-0.70b11 && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	cp IRIDESCENT/RA8875-0.70b11/libRA8875.a $(LIBPATHFILEDROP)/
	
libRA8875Clean:


libSDL3:
	mkdir -p IRIDESCENT/SDL3-main/BUILD && cd IRIDESCENT/SDL3-main/BUILD && cmake .. -DLIBPATHFILEDROP=$(LIBPATHFILEDROP) -DCOMPILERPATH=$(COMPILERPATH) --toolchain ../toolchain.cmake -B . --install-prefix $(abspath ../../SDL) && $(MAKE) DEBUG=$(DEBUG) VERBOSE=$(V) V=$(V) LIBPATHFILEDROP=$(LIBPATHFILEDROP) COMPILERPATH=$(COMPILERPATH) && $(MAKE) install
	cp -R $(abspath ../../SDL/include)/* IRIDESCENT/SDL/
	cp -R $(abspath ../../SDL/lib)/*.a $(LIBPATHFILEDROP)/
	#cp -R IRIDESCENT/SDL3-main/BUILD/CMakeFiles/SDL3.dir/src/dynapi/SDL_dynapi.c.obj $(LIBPATHFILEDROP)/
	#cp -R IRIDESCENT/SDL3-main/BUILD/CMakeFiles/SDL3-static.dir/src/thread/SDL_thread.c.obj $(LIBPATHFILEDROP)/

libSDL3Clean:
	cd IRIDESCENT/SDL3-main/BUILD && $(MAKE) clean && rm -rf ./*


libSDL2Compat:
	mkdir -p IRIDESCENT/sdl2-compat-main/BUILD && cd IRIDESCENT/sdl2-compat-main/BUILD && cmake .. -DLIBPATHFILEDROP=$(LIBPATHFILEDROP) -DCOMPILERPATH=$(COMPILERPATH) --toolchain ../toolchain.cmake -B . --install-prefix `pwd`../../../../../../SDL -DSDL3_INCLUDE_DIRS=`pwd`/../../../../../SDL/include && $(MAKE) DEBUG=${DEBUG} V=${V} VERBOSE=${V} LIBPATHFILEDROP=$(LIBPATHFILEDROP) COMPILERPATH=$(COMPILERPATH) && $(MAKE) install
	cp -R $(abspath ../../SDL/include)/* IRIDESCENT/SDL/
	cp -R $(abspath ../../SDL/lib)/*.a $(LIBPATHFILEDROP)/
	
libSDL2CompatClean:
	cd IRIDESCENT/sdl2-compat-main/BUILD && rm -rf ./*

libqhull:
	cd IRIDESCENT/qhull-2020.2 && $(MAKE) DEBUG=$(DEBUG) V=$(V) && $(MAKE) install
	cp ../../qtshare/lib/*.a $(LIBPATHFILEDROP)/
	
libqhullClean:
	cd IRIDESCENT/qhull-2020.2 && $(MAKE) clean

libTeensyOpenGL:
	cd IRIDESCENT/TeensyOpenGL_t4-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	cp IRIDESCENT/TeensyOpenGL_t4-master/libTeensyOpenGL.a $(LIBPATHFILEDROP)/
	
libTeensyOpenGLClean:
	cd IRIDESCENT/TeensyOpenGL_t4-master && $(MAKE) clean


libgstreamer:

libgstreamerClean:


libglew:

libglewClean:


all: libSDL3 libSDL2Compat makedirs $(BUILD)/libmicropython.a copylibmicropython libTeensyStreamLib libTeensyWire libTeensySerialFlash libTeensySPI libTeensyDebug libTeensyThreads libTeensyMBEDTLS libTeensyFNET libTeensyNativeEthernet libz libRA8875 libTeensyOpenGL libqhull libTeensy41Core $(BUILD)/$(TARGET).elf $(BUILD)/$(TARGET).hex

libTeensyStreamLib:
	cd IRIDESCENT/StreamLib-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensyStreamLibClean:
	cd IRIDESCENT/StreamLib-master && $(MAKE) clean

libTeensy41Core:
	cd IRIDESCENT/cores-master/teensy4 && $(MAKE) DEBUG=$(DEBUG) V=$(V) TOOLSPATH=$(TOOLSPATH)
	
libTeensy41CoreClean:
	cd IRIDESCENT/cores-master/teensy4 && $(MAKE) clean
	
libTeensyWire:
	cd IRIDESCENT/Wire && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensyWireClean:
	cd IRIDESCENT/Wire && $(MAKE) clean
	
libTeensySerialFlash:
	cd IRIDESCENT/SerialFlash && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensySerialFlashClean:
	cd IRIDESCENT/SerialFlash && $(MAKE) clean
	
libTeensySPI:
	cd IRIDESCENT/SPI && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensySPIClean:
	cd IRIDESCENT/SPI && $(MAKE) clean
	
libTeensyDebug:
	cd IRIDESCENT/TeensyDebug-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensyDebugClean:
	cd IRIDESCENT/TeensyDebug-master && $(MAKE) clean

libTeensyThreads:
	cd IRIDESCENT/TeensyThreads-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensyThreadsClean:
	cd IRIDESCENT/TeensyThreads-master && $(MAKE) clean

libTeensyMBEDTLS:
	cd IRIDESCENT/FNET-master/third_party/mbedtls && $(MAKE) DEBUG=$(DEBUG) V=$(V)

libTeensyMBEDTLSClean:
	cd IRIDESCENT/FNET-master/third_party/mbedtls && $(MAKE) clean

libTeensyFNET:
	cd IRIDESCENT/FNET-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)

libTeensyFNETClean:
	cd IRIDESCENT/FNET-master && $(MAKE) clean
	
libTeensyNativeEthernet:
	cd IRIDESCENT/NativeEthernet-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libTeensyNativeEthernetClean:
	cd IRIDESCENT/NativeEthernet-master && $(MAKE) clean
	
libz:
	cd IRIDESCENT/zlib-master && $(MAKE) DEBUG=$(DEBUG) V=$(V)
	
libzClean:
	cd IRIDESCENT/zlib-master && $(MAKE) clean

makedirs: $(OBJ)
	mkdir -p $(dir $<) >/dev/null
	#rm -f $(BUILD)/libtinyusb.a $(BUILD)/libhalIMX.a $(BUILD)/libETH.a
# Process linker scripts with C preprocessor to exchange LDDEFINES and
#	aggregate output of preprocessor in a single linker script `link.ld`

$(BUILD)/shared/runtime/%.o: %.s
	$(CROSS_COMPILE)gcc $(CPUOPTIONS) $(ASFLAGS) -ggdb -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables  -o $@ $<

$(BUILD)/shared/runtime/%.o: %.S
	$(CROSS_COMPILE)gcc $(CPUOPTIONS) $(ASFLAGS) -ggdb -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables -o $@ $<

$(BUILD)/hal/%.o: %.cpp
	$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -o $@ $<

#$(BUILD)/%.o: %.cpp
#	$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -o $@ $<

#$(BUILD)/main.o: main.cpp
#	$(CROSS_COMPILE)g++ -c -ggdb -O2 -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -o $@ $<

$(BUILD)/mphalport.o: mphalport.cpp
	$(CROSS_COMPILE)g++ -c -ggdb -O2 -std=gnu++20 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -o $@ $<

$(BUILD)/hal/%.o: %.s
	$(CROSS_COMPILE)gcc $(CPUOPTIONS) $(ASFLAGS) -ggdb -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables -o $@ $<
	
$(BUILD)/hal/%.o: %.S
	$(CROSS_COMPILE)gcc $(CPUOPTIONS) $(ASFLAGS) -ggdb -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables -o $@ $<

$(BUILD)/mpthreadport.o:
	$(CROSS_COMPILE)g++ -c -ggdb -O2 -std=c++11 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) mpthreadport.cpp -o $(BUILD)/mpthreadport.o

$(BUILD)/micropython_main.o:
	rm -f $(BUILD)/micropython_main.o micropython_main.d
	$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -std=gnu++20 micropython_main.cpp -o $(BUILD)/micropython_main.o
	cp $(BUILD)/micropython_main.o $(LIBPATHFILEDROP)/micropython_main.o

$(BUILD)/mphalport.o:
	$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) mphalport.cpp -o $(BUILD)/mphalport.o
	cp $(BUILD)/mphalport.o $(LIBPATHFILEDROP)/mphalport.o

$(BUILD)/shared/runtime/gchelper_m3.o:
	$(CROSS_COMPILE)gcc -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(ASFLAGS) $(abspath ../../shared/runtime/gchelper_m3.s) -o $(BUILD)/shared/runtime/gchelper_m3.o
	cp $(BUILD)/shared/runtime/gchelper_m3.o $(LIBPATHFILEDROP)/gchelper_m3.o
	
$(BUILD)/libmicropython.a: $(RUST)
	$(ECHO) "LINK $@"
	#rm -f $(BUILD)/mphalport.o mphalport.d
	#$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) mphalport.cpp -o $(BUILD)/mphalport.o
	#rm -f $(BUILD)/board_init.o board_init.d
	#$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) board_init.cpp -o $(BUILD)/board_init.o
	#rm -f $(BUILD)/shared/runtime/gchelper_m3.o gchelper_m3.d
	#$(CROSS_COMPILE)gcc -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(ASFLAGS) $(abspath ../../shared/runtime/gchelper_m3.s) -o $(BUILD)/shared/runtime/gchelper_m3.o
	$(AR) rcs $(BUILD)/libmicropython.a $<
	$(CROSS_COMPILE)size $@
	
$(BUILD)/$(TARGET).elf: $(RUST)
	#rm -f $(BUILD)/mphalport.o mphalport.d
	#$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) mphalport.cpp -o $(BUILD)/mphalport.o
	#rm -f $(BUILD)/board_init.o board_init.d
	#$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) board_init.cpp -o $(BUILD)/board_init.o
	#rm -f $(BUILD)/main.o main.d
	#$(CROSS_COMPILE)g++ -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(CXXFLAGS) -std=gnu++20 main.cpp -o $(BUILD)/main.o
	#rm -f $(BUILD)/shared/runtime/gchelper_m3.o gchelper_m3.d
	#$(CROSS_COMPILE)gcc -c -ggdb -O2 -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables $(CPUOPTIONS) $(ASFLAGS) $(abspath ../../shared/runtime/gchelper_m3.s) -o $(BUILD)/shared/runtime/gchelper_m3.o
	
	$(ECHO) "PREPROCESS LINK $@"
	#cp IRIDESCENT/imxmrt_ld/imxrt1062_t41_bin.ld $(BUILD)/imxrt1062_t41_bin.ld
	$(CROSS_COMPILE)c++ -E -x c++ -DhasMainFunction_loader_in $(LDDEFINES) $(LD_FILES) | grep -v '^#' > $(BUILD)/link.ld
	$(ECHO) "LINK $@"
	#$(CROSS_COMPILE)g++ $(CPUOPTIONS) -fPIC -T$(BUILD)/link.ld $(OBJ) $(LIBS) -o $(BUILD)/$(TARGET).elf
	#$(CROSS_COMPILE)g++ -ggdb $(LDFLAGS) -T$(BUILD)/link.ld $(CPUOPTIONS) -DhasMainFunction_loader_in -fno-exceptions -ffunction-sections -fdata-sections -fasynchronous-unwind-tables -Wl,--whole-archive $(RUST)  $(LIBS) -Wl,--no-whole-archive $(CORE) $(QUADLIBS) -o $(BUILD)/$(TARGET).elf
	$(CROSS_COMPILE)g++ -ggdb -DhasMainFunction_loader_in $(CPUOPTIONS) -T$(BUILD)/link.ld -Wl,--whole-archive $(LIBS) $(RUST) -Wl,--no-whole-archive $(CORE) $(QUADLIBS) -o $(BUILD)/$(TARGET).elf
	$(CROSS_COMPILE)size $@
	
copylibmicropython:
	cp $(BUILD)/libmicropython.a $(LIBPATHFILEDROP)/libmicropython.a
	
$(BUILD)/$(TARGET).bin: $(BUILD)/$(TARGET).elf
	$(CROSS_COMPILE)objcopy -O binary $^ $@

$(BUILD)/$(TARGET).hex: $(BUILD)/$(TARGET).elf
	$(SIZE) $<
	$(OBJCOPY) -O ihex -R .eeprom $< $@
	-$(TOOLSPATH)/teensy_post_compile -file=$(TARGET) -path=$(shell pwd)/$(BUILD) -tools=$(TOOLSPATH)
	#-$(TOOLSPATH)/teensy_size $(BUILD)/$(TARGET).elf
	#-$(TOOLSPATH)/teensy_secure encrypthex TEENSY41 $(BUILD)/$(TARGET).hex
	#-$(TOOLSPATH)/teensy_reboot
clean: libTeensyStreamLibClean libTeensy41CoreClean libTeensyWireClean libTeensySerialFlashClean libTeensySPIClean libTeensyDebugClean libTeensyThreadsClean libTeensyMBEDTLSClean libTeensyFNETClean libTeensyNativeEthernetClean libzClean libRA8875Clean libSDL3Clean libSDL2CompatClean libqhullClean libTeensyOpenGLClean libgstreamerClean libglewClean
	find . -name '*.o' -type f -delete
	find . -name '*.d' -type f -delete
	rm -f *.o *.d libmicropython.a $(BUILD)

# Making OBJ use an order-only dependency on the generated pins.h file
# has the side effect of making the pins.h file before we actually compile
# any of the objects. The normal dependency generation will deal with the
# case when pins.h is modified. But when it doesn't exist, we don't know
# which source files might need it.
$(OBJ): | $(GEN_PINS_HDR) $(GEN_FLEXRAM_CONFIG_SRC)

# With conditional pins, we may need to regenerate qstrdefs.h when config
# options change.
$(HEADER_BUILD)/qstrdefs.generated.h: $(BOARD_DIR)/mpconfigboard.h

$(GEN_FLEXRAM_CONFIG_SRC):
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(MAKE_FLEXRAM_LD) -d $(TOP)/$(MCU_DIR)/$(MCU_SERIES).h \
		-f $(TOP)/$(MCU_DIR)/$(MCU_SERIES)_features.h -l boards/$(MCU_SERIES).ld -c $(MCU_SERIES) > $(GEN_FLEXRAM_CONFIG_SRC)


# Use a pattern rule here so that make will only call make-pins.py once to make
# both pins_gen.c and pins.h
$(BUILD)/%_gen.c $(HEADER_BUILD)/%.h: $(BOARD_PINS) $(MAKE_PINS) $(AF_FILE) $(PREFIX_FILE) | $(HEADER_BUILD)
	$(ECHO) "Create $@"
	$(Q)$(PYTHON) $(MAKE_PINS) --board $(BOARD_PINS) --af $(AF_FILE)\
		--iomux $(abspath $(TOP)/$(MCU_DIR)/drivers/fsl_iomuxc.h) \
		--prefix $(PREFIX_FILE) --hdr $(GEN_PINS_HDR) > $(GEN_PINS_SRC)

$(BUILD)/pins_gen.o: $(BUILD)/pins_gen.c
	$(call compile_c)

include $(TOP)/py/mkrules.mk
