iridescentmicropython
ANY COMMERCIAL USE OF ANY IRIDESCENT FILES REQUIRES LICENSING contact george@georgerosar.com

please email george@georgerosar.com if you want to be a contributer


Copyright 2022 George Charles Rosar II

Teensy 4.1 should have at least 16MB or more of external RAM soldered into Teensy 4.1 PSRAM pads. Should either be soldered or connected to the Teensy Audio Adapter Card, also Teensy Audio Adapter Card should have an additional 2Gbit of Flash RAM soldered in the Audio Adapter.

The MOST IMPORTANT development issue is getting micropython to recieve and send text to Serial.print() or Serial.read(), mphalport.cpp is not functioning properly.


installing
```
mkdir iridescentBUILD; cd iridescentBUILD
git clone https://github.com/8888clockradio/iridescentmicropython.git
```

edit iridescentBUILD/iridescentmicropython/toolchain.mk

change
```
# path location for the arm-none-eabi compiler
LIBPATHFILEDROP := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard
COMPILERPATH := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin
TOOLSPATH := /Applications/Teensyduino.app/Contents/Java/hardware/tools
CROSSCOMPILEPREFIX := arm-none-eabi

# path location for the arm-unknown-linux-gnueabi compiler (NOT TESTED)
#LIBPATHFILEDROP := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-unknown-linux-gnueabi/lib/gcc/arm-unknown-linux-gnueabi/8.3.0/thumb/v7e-m+dp/hard
#COMPILERPATH := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-unknown-linux-gnueabi/bin
#TOOLSPATH := /Applications/Teensyduino.app/Contents/Java/hardware/tools
#CROSSCOMPILEPREFIX := arm-unknown-linux-gnueabi
```

to the path of your arm-none-eabi gcc and g++ toolchain, try and use current versions not the Teensyduino.app included one download arm-gnu-toolchain-12.2.rel1-darwin-arm64-arm-none-eabi.tar.xz or similar from

keep thumb/v7e-m+dp/hard in the LIBPATHFILEDROP and make sure you add /bin to COMPILERPATH

change /Applications/Teensyduino.app in TOOLSPATH if Teensyduino is installed in a non-standard location
```
https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads
```

copy the .xz file to iridescentBUILD/
extract the .xz file in iridescentBUILD/
should look like
```
iridescentBUILD/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/...
```

example:
```
LIBPATHFILEDROP := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard
COMPILERPATH := /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin
TOOLSPATH := /Applications/Teensyduino.app/Contents/Java/hardware/tools
CROSSCOMPILEPREFIX := arm-none-eabi
```

to build:
```
cd iridescentmicropython/ports/libmicropython
make clean; make V=1 DEBUG=1
```

oh i forgot, i need to implement the /Applications/Teensyduino.app of which is required to load the firmware

if you want to get daring copy the python modules for kivy, virtual environment, numpy, intelbinhex, pygame, matplotlib, music21, et cetera :
```
cp -R iridescentBUILD/iridescentmicropython/ports/libmicropython/modulesTakenOut/* iridescentBUILD/iridescentmicropython/ports/libmicropython/modules/
```
and build again
doubtful there's any hardware that will support it at the moment, however due to tiny flash ram size on hardware

a board is in development for this firmware/OS

if you have kdbg installed through brew
you can run to debug in a very basic way
```
cd iridescentmicropython/ports/libmicropython; ./kdbg.sh
```

NOTE: need to add FLASHMEM to all micropython boot up steps and modify startup.c to run boot clock start
```
iridescentBUILD/iridescentmicropython/ports/libmicropython/IRIDESCENT/cores-master/teensy4/startup.c
```
generate extern blocks on FLASHMEM with #include <avr/pgmspace.h> from:
```
iridescentBUILD/iridescentmicropython/ports/libmicropython/board_init.c
```
AND THESE:
```
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/system_MIMXRT1062.c
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/system_MIMXRT1062.h
iridescentBUILD/iridescentmicropython/ports/libmicropython/boards/MIMXRT1062_clock_config.c
iridescentBUILD/iridescentmicropython/ports/libmicropython/boards/MIMXRT1062_clock_config.h
```
By inserting in: iridescentBUILD/iridescentmicropython/ports/libmicropython/IRIDESCENT/cores-master/teensy4/startup.c in function void ResetHandler(void)

ALSO THESE FILES PROBABLY NEED FLASHMEM TOO (just in .h files) on functions (plus #include <avr/pgmspace.h>):
```
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/fsl_device_registers.h
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/drivers/fsl_gpio.h
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/drivers/fsl_iomuxc.h
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/drivers/fsl_clock.h
iridescentBUILD/iridescentmicropython/lib/nxp_driver/sdk/devices/MIMXRT1062/drivers/fsl_lpuart.h
```

LD Script is located:
```
iridescentBUILD/iridescentmicropython/ports/libmicropython/IRIDESCENT/imxmrt_ld/imxrt1062_t41.ld
```
****


Most of the desktop OS will be based off this concept, as matlibplot and kivy will work together with music21:
So either build GUI with matlibplot through kivy or just through kivy
```
iridescentBUILD/iridescentmicropython/ports/libmicropython/modulesTakenOut/kivy/garden/garden/matplotlib/examples
```

I'm going to try one of the arch linux compilers and see if it boots along with the teensy core in arch linux, brb- mostly for loading external libraries and modules. Not sure it's going to work, lol. But we'll see.
