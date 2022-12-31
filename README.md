iridescentmicropython
ANY COMMERCIAL USE OF ANY IRIDESCENT FILES REQUIRES LICENSING contact george@georgerosar.com

Copyright 2022 George Charles Rosar II

installing
```
mkdir iridescentBUILD; cd iridescentBUILD
git checkout https://github.com/8888clockradio/iridescentmicropython.git
```

edit iridescentmicropython/toolchain.mk

change
```
LIBPATHFILEDROP = $(abspath ../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard)
COMPILERPATH = $(abspath ../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin)
```

to the path of your arm-none-eabi gcc and g++ toolchain, try and use current versions not the Teensyduino.app included one
download arm-gnu-toolchain-12.2.rel1-darwin-arm64-arm-none-eabi.tar.xz or similar from
```
https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads
```

example:
```
LIBPATHFILEDROP = $(abspath ~//lib/gcc/arm-none-eabi/12.2.0/thumb/v7e-m+dp/hard
COMPILERPATH = /Applications/ARM/bin)
```


iridescentmicropython/ports/libmicropython
make clean; make DEBUG V=1 DEBUG=1
