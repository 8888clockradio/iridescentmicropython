iridescentmicropython
ANY COMMERCIAL USE OF ANY IRIDESCENT FILES REQUIRES LICENSING contact george@georgerosar.com

Copyright 2022 George Charles Rosar II

You need Teensyduino installed prior, you don't need to open the app but you need the tools that come with

installing
```
mkdir iridescentBUILD; cd iridescentBUILD
git checkout https://github.com/8888clockradio/iridescentmicropython.git
```

edit iridescentBUILD/iridescentmicropython/toolchain.mk

change
```
LIBPATHFILEDROP = /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard
COMPILERPATH = /Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin
TOOLSPATH = /Applications/Teensyduino.app/Contents/Java/hardware/tools
```

to the path of your arm-none-eabi gcc and g++ toolchain, try and use current versions not the Teensyduino.app included one
download arm-gnu-toolchain-12.2.rel1-darwin-arm64-arm-none-eabi.tar.xz or similar from

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
LIBPATHFILEDROP = $(abspath ~/iridescentBUILD/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ~/iridescentBUILD/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin)
```

to build:
```
cd iridescentmicropython/ports/libmicropython
make clean; make DEBUG V=1 DEBUG=1
```

