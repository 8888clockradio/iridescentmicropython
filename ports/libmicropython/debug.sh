#!/bin/bash
echo "target remote /dev/cu.usbmodem104133601"
echo "disconnect"
echo "quit"
echo ""

#open -a XQuartz
#socat TCP-LISTEN:6000,reuseaddr,fork UNIX-CLIENT:\"${DISPLAY}\" &

#ddd -display 192.168.1.150

/usr/local/bin/gdbgui_0.15.1.0 -g "/Users/georgerosar/GitHub/iridescentCoconutSynth/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-gdb -ex 'target extended-remote /dev/cu.usbmodem104133601'" `pwd`/build-SHAREDLIB/micropython.elf

#../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-gdb -ex "target remote /dev/cu.usbmodem104133601" build-SHAREDLIB/micropython.elf
