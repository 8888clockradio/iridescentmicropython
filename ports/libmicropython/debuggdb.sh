#!/bin/bash
echo "target remote /dev/cu.usbmodem104133601"
echo "disconnect"
echo "quit"
echo ""

#open -a XQuartz
#socat TCP-LISTEN:6000,reuseaddr,fork UNIX-CLIENT:\"${DISPLAY}\" &

#ddd -display 192.168.1.150

#/usr/local/bin/gdbgui_0.15.1.0 -g "/Users/georgerosar/GitHub/iridescentCoconutSynth/arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-gdb -ex 'target remote /dev/cu.usbmodem104133601' `pwd`/build-SHAREDLIB/micropython.elf" `pwd`/build-SHAREDLIB/micropython.elf

../../../arm-gnu-toolchain-12.2.mpacbti-bet1-darwin-x86_64-arm-none-eabi/bin/arm-none-eabi-gdb -ex "target extended-remote /dev/cu.usbmodem104133601" `pwd`/build-SHAREDLIB/micropython.elf

#IS42SM16320E-75BLI
#DRAM 512Mb 32Mx16 166MHz Mobile SDRAM
#https://www.mouser.com/ProductDetail/ISSI/IS42SM16320E-75BLI?qs=HXFqYaX1Q2xAymvrQktwpQ%3D%3D

#IS25LX512M-JHLA3
#NOR Flash 512Mb, Octal Flash, 3V, 240ball TFBGA, RoHS, IT, Auto Grade
#https://www.mouser.com/ProductDetail/ISSI/IS25LX512M-JHLA3?qs=sGAEpiMZZMutXGli8Ay4kD%252BfS5RTQdHySVS87sHly8Y%3D

#IS25LX512M-JHA3-TR
#NOR Flash 512Mb, Octal Flash, 3V, 240ball TFBGA, RoHS, IT, T&R, Auto Grade
#https://www.mouser.com/ProductDetail/ISSI/IS25LX512M-JHA3-TR?qs=sGAEpiMZZMutXGli8Ay4kD%252BfS5RTQdHyGiFKUwFJUIg%3D

#IS25LX512M-JHA3-TR
#NOR Flash 512Mb, Octal Flash, 3V, 240ball TFBGA, RoHS, IT, T&R, Auto Grade
#https://www.mouser.com/ProductDetail/ISSI/IS25LX512M-JHA3-TR?qs=sGAEpiMZZMutXGli8Ay4kD%252BfS5RTQdHyGiFKUwFJUIg%3D

#Octal Memory
#ISSI Octal Memory is a portfolio of high-speed, low pin count memory products that utilize the JEDEC xSPI interface. The Octal (xSPI) interface enhances system performance, simplifies design, and reduces system cost. ISSI’s Octal products include Octal (xSPI) Flash, Octal RAM, and Octal MCP solutions.
#Octal (xSPI) Flash memory delivers the performance from embedded systems requiring fast instant boot times. ISSI’s Octal flash provides 400MB/s of read bandwidth, which is over 4x times faster than a Quad SPI Flash. Octal RAM memory also delivers 400MB/s of read throughput in a space savings package. These devices are ideal for SoCs with limited onboard RAM and provide the system with fast read and write operations.
#Octal MCP solutions that implement Octal (xSPI) Flash and Octal RAM devices are available from ISSI. The combined solution further shrinks the necessary footprint by having two separate devices combined into one on the board. The integrated devices share a single xSPI bus and are available in a space savings 24-BGA package.
#The Octal Bus family of xSPI compliant devices meet the demand for instant-on high-performance applications required by the automotive, industrial, medical, networking, and consumer markets. AEC-Q100 support with temperatures up to 125ºC is available.
