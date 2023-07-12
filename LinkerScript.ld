MEMORY
{
	FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K
	RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

/* Stack pointer Address*/
_estack = ORIGIN(RAM) + LENGTH(RAM);

__Min_Heap_Size  = 0x200;
__Min_Stack_Size = 0x400;

SECTIONS 
{
    /*Isr vector table section*/
    .isr_vector : {
        . = ALIGN(4);
        *(.isr_vector)
        *(.isr_vector*)
        . = ALIGN(4);
    }  >FLASH
    /*text Section in flash memory*/
    .text : {
        __stext = .;
        . = ALIGN(4);
        *(.text)
        *(.text*)
        . = ALIGN(4);
        __etext = .;
    } >FLASH
    /*Rodata section in flash Memory*/
    .rodata : {
        __srodata = .;
        . = ALIGN(4);
        *(.rodata)
        *(.rodata*)
        . = ALIGN(4); 
    } >FLASH

    _sidata = LOADADDR(.data);
    /*Data Section in Ram*/
    .data : {
        sdata = .;
        . = ALIGN(4);
        *(.data)
        *(.data*)
        . = ALIGN(4);
        edata = .;
    } >RAM AT> FLASH
    /*.bss Section in RAM */
    .bss : {
        sbss = .;
        . = ALIGN(4);
        *(.bss)
        *(.bss*)
        . = ALIGN(4);
        ebss = .;
    } >RAM
}