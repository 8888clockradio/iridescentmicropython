
reserved_size = 0x070000;


__stack_size__ = 0x8000;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x0400;


flash_start = 0x60000000;





flash_size = 0x800000;
flash_end = DEFINED(reserved_size) ? ((flash_start) + (flash_size - reserved_size)) : ((flash_start) + (flash_size));
flash_config_start = flash_start;
flash_config_size = 0x00001000;


text_start = flash_start + 0x00002400;
vfs_start = flash_start + 0x00600000;
text_size = ((vfs_start) - (text_start));
vfs_size = ((flash_end) - (vfs_start));


MEMORY
{
    ITCM (rwx): ORIGIN = 0x00000000, LENGTH = 512K
    DTCM (rwx): ORIGIN = 0x20000000, LENGTH = 512K
    RAM (rwx): ORIGIN = 0x20200000, LENGTH = 512K
    FLASH (rwx): ORIGIN = flash_start, LENGTH = text_size
  m_vfs (rwx) : ORIGIN = vfs_start, LENGTH = vfs_size

  m_reserved (rx) : ORIGIN = (vfs_start + vfs_size), LENGTH = reserved_size
    ERAM (rwx): ORIGIN = 0x70000000, LENGTH = 16384K
}

ENTRY(ImageVectorTable)

SECTIONS
{
  __flash_start = flash_start;



  __vfs_start = ORIGIN(m_vfs);
  __vfs_end = __vfs_start + LENGTH(m_vfs);

    .text.headers : {
        KEEP(*(.flashconfig))
        FILL(0xFF)
        . = ORIGIN(FLASH) + 0x1000;
        KEEP(*(.ivt))

        __VECTOR_TABLE = .;
        __Vectors = .;
        __isr_vector = .;
        KEEP(*(.bootdata))
        . = ALIGN(1024);
    } > FLASH

  __VECTOR_RAM = __VECTOR_TABLE;
  __RAM_VECTOR_TABLE_SIZE_BYTES = 0x0;

    .text.code : {
        KEEP(*(.startup))
        *(.flashmem*)
        *(.text*)

        . = ALIGN(4);
        KEEP(*(.init))
        __preinit_array_start = .;
        KEEP (*(.preinit_array))
        __preinit_array_end = .;
        __init_array_start = .;
        KEEP (*(.init_array))
        __init_array_end = .;
        . = ALIGN(4);
    } > FLASH

    .text.progmem : {
        *(.progmem*)
        *(.ram_functions*)
        . = ALIGN(4);
    } > FLASH

    .text.itcm : {
        . = . + 32;
        *(.fastrun)

        . = ALIGN(16);
    } > ITCM AT> FLASH

    .ARM.exidx : {
        __exidx_start = .;
        *(.gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > ITCM AT> FLASH

    /DISCARD/ : {
        *(.ARM.exidx* .ARM.extab.text*)
    }

    .data : {
        *(.endpoint_queue)
        KEEP(*(.vectorsram))
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.data*)))
    } > DTCM AT> FLASH

    .bss ALIGN(4) : {
        . = ALIGN(4);
        __START_BSS = .;
        __bss_start__ = .;
        __bss_section_table = .;

            *(SORT_BY_ALIGNMENT(SORT_BY_NAME(COMMON)))
            *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.bss*)))

            . = ALIGN(32);
            . = . + 32;
        __bss_end__ = .;
        __bss_section_table_end = .;
        __END_BSS = .;
    } > DTCM

    .bss.dma (NOLOAD) : {
        *(.hab_log)
        *(.dmabuffers)
        . = ALIGN(32);
    } > RAM

    .bss.RAM (NOLOAD) : {
        *(.bss.RAM*)
    } > RAM

    .bss.extram (NOLOAD) : {
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.externalram)))
        . = ALIGN(32);
    } > ERAM

    NonCacheable : {

        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(NonCacheable*)))



    } > FLASH

    .rodata : {
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata*)))
    } > FLASH

    .text.csf : {
        FILL(0xFF)
        . = ALIGN(1024);
        KEEP(*(.csf))
        __text_csf_end = .;
    } > FLASH

  __StackTop = ORIGIN(DTCM) + LENGTH(DTCM);
  __StackLimit = __StackTop - STACK_SIZE;
  _vStackTop = __StackTop;
  PROVIDE(__stack = __StackTop);

    _stext = ADDR(.text.itcm);
    _etext = ADDR(.text.itcm) + SIZEOF(.text.itcm) + SIZEOF(.ARM.exidx);
    _stextload = LOADADDR(.text.itcm);

    _sdata = ADDR(.data);
    _edata = ADDR(.data) + SIZEOF(.data);
    _sdataload = LOADADDR(.data);

    _sbss = ADDR(.bss);
    _ebss = ADDR(.bss) + SIZEOF(.bss);

    _heap_start = ADDR(.bss.dma) + SIZEOF(.bss.dma);
    _heap_end = ORIGIN(RAM) + LENGTH(RAM);

    _extram_start = ADDR(.bss.extram);
    _extram_end = ADDR(.bss.extram) + SIZEOF(.bss.extram);

    _itcm_block_count = (SIZEOF(.text.itcm) + SIZEOF(.ARM.exidx) + 0x7FFF) >> 15;
    _flexram_bank_config = 0xAAAAAAAA | ((1 << (_itcm_block_count * 2)) - 1);
    _estack = ORIGIN(DTCM) + ((16 - _itcm_block_count) << 15);

    _flashimagelen = __text_csf_end - ORIGIN(FLASH);
    _teensy_model_identifier = 0x25;

    .debug_info 0 : { *(.debug_info) }
    .debug_abbrev 0 : { *(.debug_abbrev) }
    .debug_line 0 : { *(.debug_line) }
    .debug_frame 0 : { *(.debug_frame) }
    .debug_str 0 : { *(.debug_str) }
    .debug_loc 0 : { *(.debug_loc) }

  .ARM.attributes 0 : { *(.ARM.attributes) }

}

_mp_estack = __StackTop;
_mp_sstack = __StackLimit;
