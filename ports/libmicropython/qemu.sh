#!/bin/sh
/usr/local/bin/qemu-system-arm -cpu cortex-m7 -machine mps2-an500 -nographic -monitor null -serial null -semihosting -kernel ./build-SHAREDLIB/micropython.elf -gdb tcp::51234 -S
