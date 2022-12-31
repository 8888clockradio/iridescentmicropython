#!/bin/sh

#  qemugdb.sh
#  
#
#  Created by George Rosar on 12/2/22.
#  
/Users/iridescent/iridescent/iridescentCoconutSynth2/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-gdb --exec="build-SHAREDLIB/micropython.elf" --se="build-SHAREDLIB/micropython.elf" --ex="target remote localhost:51234" #--ex "load" #-ex "b micropython_thread"
