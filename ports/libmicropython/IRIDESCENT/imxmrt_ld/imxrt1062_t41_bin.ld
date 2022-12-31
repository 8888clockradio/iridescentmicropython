ENTRY(ImageVectorTable)

/* Memory configuration */
#if MICROPY_HW_FLASH_RESERVED
reserved_size = MICROPY_HW_FLASH_RESERVED;
#endif

#if MICROPY_HW_FLASH_TYPE == qspi_nor_flash
flash_start         = 0x60000000;
#elif MICROPY_HW_FLASH_TYPE == qspi_hyper_flash
flash_start         = 0x60000000;
#else
#error Unknown MICROPY_HW_FLASH_TYPE
#endif

#if MICROPY_HW_SDRAM_AVAIL
sdram_start         = 0x80000000;
sdram_size          = MICROPY_HW_SDRAM_SIZE;
#endif

flash_size = 0x800000;
flash_end = DEFINED(reserved_size) ? ((flash_start) + (flash_size - reserved_size)) : ((flash_start) + (flash_size));
flash_config_start = flash_start;
flash_config_size = 0x00001000;
ivt_start = flash_start + 0x00001000;
ivt_size = 0x00001000;
interrupts_start = flash_start + 0x00002000;
interrupts_size = 0x00000400;
text_start = flash_start + 0x00002400;
vfs_start = flash_start + 0x00500000;
text_size = ((vfs_start) - (text_start));
vfs_size = ((flash_end) - (vfs_start));
itcm_start = 0x00000000;
itcm_size = 0x00020000;
dtcm_start = 0x20000000;
dtcm_size = 0x00020000;
ocrm_start = 0x20200000;
ocrm_size = 0x000C0000;

HEAP_SIZE = DEFINED(__heap_size__) ? __heap_size__ : 0x0400;
STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x0400;






reserved_size = DEFINED(reserved_size) ? reserved_size : 0k;


MEMORY
{
    m_flash_config (RX) : ORIGIN = flash_config_start,      LENGTH = flash_config_size
    m_ivt (RX)          : ORIGIN = ivt_start,               LENGTH = ivt_size
    m_interrupts (RX)   : ORIGIN = interrupts_start,        LENGTH = interrupts_size
    m_text (RX)         : ORIGIN = text_start,              LENGTH = text_size
    m_vfs (RX)          : ORIGIN = vfs_start,               LENGTH = vfs_size

    m_reserved  (RX)    : ORIGIN = (vfs_start + vfs_size),  LENGTH = reserved_size
    m_itcm      (RX)    : ORIGIN = itcm_start,              LENGTH = itcm_size
    m_dtcm      (RW)    : ORIGIN = dtcm_start,              LENGTH = dtcm_size
    m_ocrm      (RW)    : ORIGIN = ocrm_start,              LENGTH = ocrm_size
    
    ERAM (rwx): ORIGIN = 0x70000000, LENGTH = 16384K
    #if MICROPY_HW_SDRAM_AVAIL
    /*m_sdram (RWX): ORIGIN = sdram_start,    LENGTH = sdram_size*/
    #endif
}


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
        KEEP(* (.boot_hdr.conf))
        . = ALIGN(4);
    } > m_flash_config

    ivt_begin = ORIGIN(m_flash_config) + LENGTH(m_flash_config);

    .ivt : AT(ivt_begin)
    {
        . = ALIGN(4);
        KEEP(* (.boot_hdr.ivt))
        KEEP(* (.boot_hdr.boot_data))
        KEEP(* (.boot_hdr.dcd_data))
        . = ALIGN(4);
    } > m_ivt


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

    .text :
    {
        . = ALIGN(4);
        *(EXCLUDE_FILE(*fsl_flexspi.o *gc*.o *vm.o *parse.o *runtime*.o *mpirq.o *map.o) .text*)
        
        /* read only data, this could be part of the issue, if something with the write flag is set here it might break */
        *(.rodata)
        *(.rodata*)
        /* read only data, this could be part of the issue, if something with the write flag is set here it might break */
                
        *(.glue_7)
        *(.glue_7t)
        *(.eh_frame)
        KEEP (*(.init))
        KEEP (*(.fini))
        KEEP(*(.vectorsram))
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
    
    .text.progmem : {
        *(.progmem*)
        . = ALIGN(4);
    } > m_text
    
    .text.itcm : {
        . = . + 32;
        *(.fastrun)
        *(.text*)
        . = ALIGN(16);
    } > m_itcm AT> m_text


    .ARM.exidx : ALIGN(4) {
        __exidx_start = .;
/*        *(.gnu.linkonce.armexidx.*)
        *(.ARM.exidx.fastrun*)
        *(.ARM.exidx.text*)
        *(.ARM.exidx)
        *(.ARM.exidx.startup*)
        . = ALIGN(4);
        __exidx_end = .;
        *(.ARM.extab* .gnu.linkonce.armextab.*) */
        . = ALIGN(4);
        __exidx_end = .;
        . = ALIGN(4);
    } > m_ocrm  AT > m_text
    
    .ARM.exidx.flashmem : ALIGN(4) {
        *(.ARM.exidx.flashmem*)
        . = ALIGN(4);
    } > ERAM
    
    
/* .ARM.exidx :
{
__exidx_start = .;

KEEP(*(.ARM.exidx* .gnu.linkonce.armexidx.*))

__exidx_end = .;
} > FLASH =0xFF
*/
    
    .text.csf : {
        __text_csf_beg = .;
        FILL(0xFF)
        . = ALIGN(1024);
        KEEP(*(.csf))
        __text_csf_end = .;
    } > m_text


    .ctors :
    {
        __CTOR_LIST__ = .;
        KEEP (*crtbegin.o(.ctors))
        KEEP (*crtbegin?.o(.ctors))


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
    
    __etext = .;    /* define a global symbol at end of code */
    __DATA_ROM = .; /* Symbol is used by startup for data initialization */

    .data : AT(__DATA_ROM)
    {
        . = ALIGN(4);
        __DATA_RAM = .;
        __data_start__ = .;
        __data_section_table = .;
        *(m_usb_dma_init_data)
        *(.endpoint_queue)
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.rodata*)))
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.data*)))
        KEEP(*(.vectorsram))
        KEEP(*(.jcr*))
        . = ALIGN(4);
        /* this might cause problems */
        /* __data_end__ = .;
        __data_section_table_end = .; */
    } > m_text
    
    .data.func : ALIGN(4) {
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.*__func__*)))
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.*__PRETTY_FUNCTION__*)))
        . = ALIGN(4);
        __data_end__ = .;
        __data_section_table_end = .;
    } > m_text
    __RAM_FUNCTIONS_ROM = __DATA_ROM + (__data_end__ - __data_start__);
    /*__RAM_FUNCTIONS_ROM = .; */
    .ram_functions : AT(__RAM_FUNCTIONS_ROM)
    {
        . = ALIGN(4);
        __ram_function_start__ = .;
        *(.ram_functions*)
        *(.text*)
        *(.got*)
        *(.dynamic*)
        
        /* from here below were in DISCARD */
        *(.hash*)
        *(.dynstr*)
        *(.dynsym*)
        /* from here above were in DISCARD */
        
        /* from discard pile below */
        *(.interp*)
        /* from discard pile above */
        
        . = ALIGN(4);
        __ram_function_end__ = .;
    } > m_itcm
    __NDATA_ROM = __DATA_ROM + (__ram_function_end__ - __data_start__);
    /* __RAM_FUNCTIONS_ROM = __DATA_ROM + (__data_end__ - __data_start__); */
    /* __NDATA_ROM = .; */
    /* problem in ram_functions */
    /*__NDATA_ROM = __DATA_ROM + (__ram_function_end__ - __data_start__); */
    .ncache.init : AT(__NDATA_ROM)
    {
        __noncachedata_start__ = .;
        *(NonCacheable.init)
        . = ALIGN(4);
        __noncachedata_init_end__ = .;
    } > m_dtcm
    . = __noncachedata_init_end__;
    .ncache :
    {
        *(NonCacheable)
        . = ALIGN(4);
        __noncachedata_end__ = .;
    } > m_dtcm
    __DATA_END = .;
    
    /* __DATA_END = __NDATA_ROM + (__noncachedata_init_end__ - __noncachedata_start__); */
    text_end = ORIGIN(m_text) + LENGTH(m_text);
    ASSERT(__DATA_END <= text_end, "region m_text overflowed with text and data")

    .bss :
    {

        . = ALIGN(4);
        __START_BSS = .;
        __bss_start__ = .;
        __bss_section_table = .;
        *(m_usb_dma_noninit_data)
        *(.bss)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        __bss_end__ = .;
        __bss_section_table_end = .;
        __END_BSS = .;
    } > m_dtcm

    .bss.dma (NOLOAD) : {
        *(.hab_log)
        *(SORT_BY_ALIGNMENT(SORT_BY_NAME(.dmabuffers)))
        . = ALIGN(32);
    } > m_ocrm

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
        __heap_limit = .;
    } > m_dtcm

    .stack :
    {
        . = ALIGN(8);
        . += STACK_SIZE;
    } > m_dtcm

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


    __StackTop = ORIGIN(m_dtcm) + LENGTH(m_dtcm);
    __StackLimit = __StackTop - STACK_SIZE;
    _vStackTop = __StackTop;
    PROVIDE(__stack = __StackTop);

    .ARM.attributes 0 : { *(.ARM.attributes) }

    ASSERT(__StackLimit >= __HeapLimit, "region m_dtcm overflowed with stack and heap")

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
    _heap_end = ORIGIN(m_ocrm) + LENGTH(m_ocrm);

    _extram_start = ADDR(.bss.extram);
    _extram_end = ADDR(.bss.extram) + SIZEOF(.bss.extram);

    _itcm_block_count = (SIZEOF(.text.itcm) + 0x7FFF) >> 15;
    _flexram_bank_config = 0xAAAAAAAA | ((1 << (_itcm_block_count * 2)) - 1);
    _estack = ORIGIN(m_dtcm) + ((16 - _itcm_block_count) << 15);

    _flashimagelen = __text_csf_end - ORIGIN(m_text);
    _teensy_model_identifier = 0x25;

    .debug_info     0 : { *(.debug_info) }
    .debug_abbrev   0 : { *(.debug_abbrev) }
    .debug_line     0 : { *(.debug_line) }
    .debug_frame    0 : { *(.debug_frame) }
    .debug_str      0 : { *(.debug_str) }
    .debug_loc      0 : { *(.debug_loc) }

}

#if MICROPY_HW_SDRAM_AVAIL
_gc_heap_start = ORIGIN(m_sdram);
/* NOTE THIS HAS TO BE REDUCED FOR THE EXTMEM TO WORK */
_gc_heap_end = ORIGIN(m_sdram) + LENGTH(m_sdram);
/* NOTE THIS HAS TO BE REDUCED FOR THE EXTMEM TO WORK */
#else
/* Use second OCRAM bank for GC heap. */
_gc_heap_start = ORIGIN(m_ocrm);
_gc_heap_end = ORIGIN(m_ocrm) + LENGTH(m_ocrm);
#endif
