set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
include("/Users/iridescent/iridescent/iridescentCoconutSynth2/iridescentmicropython/toolchainSetup.cmake")


set(CMAKE_C_COMPILER "${COMPILERPATH}/arm-none-eabi-gcc")
set(CMAKE_CXX_COMPILER "${COMPILERPATH}/arm-none-eabi-g++")

set(CMAKE_EXE_LINKER_FLAGS "-specs=nosys.specs" CACHE INTERNAL "")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
