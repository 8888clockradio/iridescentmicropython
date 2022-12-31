/*
** ###################################################################
** Linker script inspired by NXP linker script for MIMXRT10xx
** 
** Copyright for original linker script:
**     Copyright 2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2018 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
** Integrated ideas from CircuitPython:
** SPDX-License-Identifier: The MIT License (MIT)
** SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft (tannewt)
**
** Copyright (c) 2021 Philipp Ebensberger
**
** ###################################################################
*/

/* Entry Point */
/*ENTRY(Reset_Handler)*/
ENTRY(ImageVectorTable)

HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x0400;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x0400;

/* Reserved Area
 * Users can create a reserved area at the end of the flash memory via 
 * 'reserved_size' variable. The size of the reserved area should be a multiple
 * of the sector size of the flash memory!
 */
reserved_size = DEFINED(reserved_size) ? reserved_size : 0k;
/* 52428 = 0xCCCC 1/10 of 512K */
/* Specify the memory areas */
MEMORY
{
  m_flash_config (RX) : ORIGIN = flash_config_start,    LENGTH = flash_config_size
  m_ivt          (RX) : ORIGIN = ivt_start,             LENGTH = ivt_size
  m_interrupts   (RX) : ORIGIN = interrupts_start,      LENGTH = interrupts_size
  m_text         (RX) : ORIGIN = text_start,            LENGTH = text_size
  m_vfs          (RX) : ORIGIN = vfs_start,             LENGTH = vfs_size
  /* Teensy uses the last bit of flash for recovery. */
  m_reserved     (RX) : ORIGIN = (vfs_start + vfs_size), LENGTH = reserved_size  
  ITCM (rwx):  ORIGIN = 0x00000000, LENGTH = 512K
  DTCM (rwx):  ORIGIN = 0x20000000, LENGTH = 512K
  RAM (rwx):   ORIGIN = 0x20200000, LENGTH = 510K
  /*  RAM (rwx):   ORIGIN = 0x20200000, LENGTH = 0x00070000*/
  m_ocrm         (RW) : ORIGIN = 0x2027F800,            LENGTH = 2K
  ERAM (rwx): ORIGIN = 0x70000000, LENGTH = 16384K
  #if MICROPY_HW_SDRAM_AVAIL
  m_sdram        (RX) : ORIGIN = sdram_start,           LENGTH = sdram_size
  #endif
}

/* Define output sections */
SECTIONS
{
  __flash_start = flash_start;
  #if MICROPY_HW_SDRAM_AVAIL
  __sdram_start = sdram_start;
  #endif
  __vfs_start = ORIGIN(m_vfs);
  __vfs_end = __vfs_start + LENGTH(m_vfs);  
  
  .flash_config :
  {
    . = ALIGN(4);
    __FLASH_BASE = .;
    KEEP(* (.boot_hdr.conf))     /* flash config section */
    . = ALIGN(4);
  } > m_flash_config

  ivt_begin = ORIGIN(m_flash_config) + LENGTH(m_flash_config);

  .ivt : AT(ivt_begin)
  {
    . = ALIGN(4);
    KEEP(* (.boot_hdr.ivt))           /* ivt section */
    KEEP(* (.boot_hdr.boot_data))     /* boot section */
    KEEP(* (.boot_hdr.dcd_data))      /* dcd section */
    . = ALIGN(4);
  } > m_ivt

  /* The startup code goes first into internal RAM */
  .interrupts :
  {
    __VECTOR_TABLE = .;
    __Vectors = .;
    __isr_vector = .;
    . = ALIGN(4);
    KEEP(*(.isr_vector))
        
    . = ALIGN(4);
  } > m_interrupts

  __VECTOR_RAM = __VECTOR_TABLE;
  __RAM_VECTOR_TABLE_SIZE_BYTES = 0x0;
  
  .text.headers : ALIGN(4) {
    FILL(0xFF)
    KEEP(*(.flashconfig))
    . = 0x1000;
    KEEP(*(.ivt))
    . = 0x1020;
    KEEP(*(.bootdata))
    . = ALIGN(1024);
  } > m_text

  /* The program code and other data goes into internal RAM */
  .text :
  {
    . = ALIGN(4);
    *(EXCLUDE_FILE(*fsl_flexspi.o *gc*.o *vm.o *parse.o *runtime*.o *mpirq.o *map.o) .text*) /* .text* sections (code) */
    *(.rodata)               /* .rodata sections (constants, strings, etc.) */
    *(.rodata*)              /* .rodata* sections (constants, strings, etc.) */
    *(.glue_7)               /* glue arm to thumb code */
    *(.glue_7t)              /* glue thumb to arm code */
    *(.eh_frame)
    KEEP (*(.init))
    KEEP (*(.fini))
    . = ALIGN(4);
  } > m_text

  .text.code : ALIGN(4) {
      *(.flashmem*)
      KEEP(*(.startup))
      . = ALIGN(4);
      KEEP(*(.init))
      __preinit_array_start = .;
      KEEP (*(.preinit_array))
      __preinit_array_end = .;
      __init_array_start = .;
      KEEP (*(.init_array))
      __init_array_end = .;
      . = ALIGN(4);
  } > m_text

  .text.progmem : ALIGN(4) {
    *(.progmem*)
    . = ALIGN(4);
  } > m_text
    
  .data.func : ALIGN(4) {
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.*__func__*)))
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.*__PRETTY_FUNCTION__*)))
    . = ALIGN(4);
  } > m_text
    
  .ctors :
  {
    __CTOR_LIST__ = .;
    /* gcc uses crtbegin.o to find the start of
       the constructors, so we make sure it is
       first.  Because this is a wildcard, it
       doesn't matter if the user does not
       actually link against crtbegin.o; the
       linker won't look for a file to match a
       wildcard.  The wildcard also means that it
       doesn't matter which directory crtbegin.o
       is in.  */
    KEEP (*crtbegin.o(.ctors))
    KEEP (*crtbegin?.o(.ctors))
    /* We don't want to include the .ctor section from
       from the crtend.o file until after the sorted ctors.
       The .ctor section from the crtend file contains the
       end of ctors marker and it must be last */
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors))
    KEEP (*(SORT(.ctors.*)))
    KEEP (*(.ctors))
    __CTOR_END__ = .;
  } > m_text

  .dtors :
  {
    __DTOR_LIST__ = .;
    KEEP (*crtbegin.o(.dtors))
    KEEP (*crtbegin?.o(.dtors))
    KEEP (*(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors))
    KEEP (*(SORT(.dtors.*)))
    KEEP (*(.dtors))
    __DTOR_END__ = .;
  } > m_text

  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array*))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  } > m_text

  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array*))
    PROVIDE_HIDDEN (__init_array_end = .);
  } > m_text

  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(SORT(.fini_array.*)))
    KEEP (*(.fini_array*))
    PROVIDE_HIDDEN (__fini_array_end = .);
  } > m_text
  
  .text.itcm : ALIGN(32) {
    . = . + 32; /* MPU to trap NULL pointer deref */
    *(.fastrun*)
    *(.text*)
    . = ALIGN(4);
  /* } AT> m_text */
  } > ITCM  AT> m_text  /* was this, but move functions to flash ram */ /* maybe go back */

  __etext = .;    /* define a global symbol at end of code */
  __DATA_ROM = .; /* Symbol is used by startup for data initialization */
    
  .data : ALIGN(4) {
    . = ALIGN(4);
    __DATA_RAM = .;
    __data_start__ = .;      /* create a global symbol at data start */
    __data_section_table = .;
    *(m_usb_dma_init_data)
    *(.endpoint_queue)
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata*)))
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.data*)))
    KEEP(*(.vectorsram))
    KEEP(*(.jcr*))
    . = ALIGN(4);
    __data_end__ = .;        /* define a global symbol at data end */
    __data_section_table_end = .;
  } > DTCM  AT> m_text

  __RAM_FUNCTIONS_ROM = __DATA_ROM + (__data_end__ - __data_start__);
  
  .ram_functions : AT(__RAM_FUNCTIONS_ROM)
  {
    . = ALIGN(4);
    __ram_function_start__ = .;
    *(.ram_functions*)
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata)))
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata.*)))
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.data*)))
    /* remaining .text and .rodata; i.e. stuff we exclude above because we want it in RAM */
    *(.text*)
    *(.got.plt) *(.got)
    *(.vectorsram)
    . = ALIGN(4);
    __ram_function_end__ = .;
  } > RAM

  __NDATA_ROM = __DATA_ROM + (__ram_function_end__ - __data_start__);
  .ncache.init : AT(__NDATA_ROM)
  {
    __noncachedata_start__ = .;   /* create a global symbol at ncache data start */
    *(NonCacheable.init)
    . = ALIGN(4);
    __noncachedata_init_end__ = .;   /* create a global symbol at initialized ncache data end */
  } > RAM
  . = __noncachedata_init_end__;
  .ncache :
  {
    *(NonCacheable)
    . = ALIGN(4);
    __noncachedata_end__ = .;     /* define a global symbol at ncache data end */
  } > RAM

  __DATA_END = __NDATA_ROM + (__noncachedata_init_end__ - __noncachedata_start__);
  text_end = ORIGIN(m_text) + LENGTH(m_text);
  ASSERT(__DATA_END <= text_end, "region m_text overflowed with text and data")

  /* Uninitialized data section */
  .bss :
  {
    /* This is used by the startup in order to initialize the .bss section */
    . = ALIGN(4);
    __START_BSS = .;
    __bss_start__ = .;
    __bss_section_table = .;
    *(m_usb_dma_noninit_data)
    *(.bss)
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    . = ALIGN(32);
    . = . + 32; /* MPU to trap stack overflow */
    __bss_end__ = .;
    __bss_section_table_end = .;
    __END_BSS = .;
  } > RAM

  .ARM.exidx : ALIGN(4) {
    __exidx_start = .;
    . = ALIGN(4);
    __exidx_end = .;
    . = ALIGN(4);
  } > RAM  AT> m_text

  .bss.dma (NOLOAD) : {
    *(.hab_log)
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.dmabuffers)))
    . = ALIGN(32);
  } > RAM


  .bss.extram (NOLOAD) : ALIGN(32) {
    *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.externalram)))
    . = ALIGN(32);
  } > ERAM

  .heap :
  {
    . = ALIGN(8);
    __end__ = .;
    PROVIDE(end = .);
    __HeapBase = .;
    . += HEAP_SIZE;
    __HeapLimit = .;
    __heap_limit = .; /* Add for _sbrk */
  } > RAM

  .stack :
  {
    . = ALIGN(8);
    . += STACK_SIZE;
  } > RAM
  
  /DISCARD/ :
  {
    /* some of these need to probably be back in */
    
    *(.ARM.exidx*)
    
    /* not the one above */
    
    /* *(.interp*) */
    
    /* these are not useful */
    /* *(.ram_functions*) */
    /* *(.got*) */
    /* *(.rel.dyn*) */
  }
    
  .text.csf : ALIGN(4) {
    FILL(0xFF)
    KEEP(*(.csf))
    __text_csf_end = .;
  } > m_text
  
  /* Initializes stack on the end of block */
  __StackTop   = ORIGIN(RAM) + LENGTH(RAM);
  __StackLimit = __StackTop - STACK_SIZE;
  _vStackTop = __StackTop;
  
  PROVIDE(__stack = __StackTop);

  .ARM.attributes 0 : { *(.ARM.attributes) }

  _stext = ADDR(.text.itcm);
  _etext = ADDR(.text.itcm) + SIZEOF(.text.itcm);
  _stextload = LOADADDR(.text.itcm);

  _sdata = ADDR(.data);
  _edata = ADDR(.data) + SIZEOF(.data);
  _sdataload = LOADADDR(.data);

  _sexidx = ADDR(.ARM.exidx);
  _eexidx = ADDR(.ARM.exidx) + SIZEOF(.ARM.exidx);
  _sexidxload = LOADADDR(.ARM.exidx);

  _sbss = ADDR(.bss);
  _ebss = ADDR(.bss) + SIZEOF(.bss);

  _heap_start = ADDR(.bss.dma) + SIZEOF(.bss.dma);
  _heap_end = ORIGIN(RAM) + LENGTH(RAM);

  _extram_start = ADDR(.bss.extram);
  _extram_end = ADDR(.bss.extram) + SIZEOF(.bss.extram);

  _itcm_block_count = (SIZEOF(.text.itcm) + 0x7FFF) >> 15;
  _flexram_bank_config = 0xAAAAAAAA | ((1 << (_itcm_block_count * 2)) - 1);
  _estack = ORIGIN(RAM) + ((16 - _itcm_block_count) << 15);

  _flashimagelen = __noncachedata_end__ - ORIGIN(m_text);
  _teensy_model_identifier = 0x25;

  .debug_info     0 : { *(.debug_info) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }

  ASSERT(__StackLimit >= __HeapLimit, "region m_dtcm overflowed with stack and heap")
}

