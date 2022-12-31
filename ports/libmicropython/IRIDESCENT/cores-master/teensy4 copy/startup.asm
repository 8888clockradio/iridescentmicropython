	.cpu cortex-m7
	.arch armv7e-m
	.fpu fpv5-d16
	.eabi_attribute 28, 1	@ Tag_ABI_VFP_args
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 1	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
	.file	"startup.c"
@ GNU C99 (Arm GNU Toolchain 11.3.Rel1) version 11.3.1 20220712 (arm-none-eabi)
@	compiled by GNU C version Apple LLVM 12.0.0 (clang-1200.0.32.29), GMP version 6.2.1, MPFR version 3.1.6, MPC version 1.0.3, isl version isl-0.15-1-g835ea3a-GMP

@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed: -mfloat-abi=hard -mfpu=fpv5-d16 -mcpu=cortex-m7 -mthumb -mtune=cortex-m7 -mlong-calls -march=armv7e-m+fp.dp -O2 -std=c99 -fdata-sections -ffunction-sections -fno-exceptions -fasynchronous-unwind-tables
	.text
	.section	.startup,"ax",%progbits
	.align	1
	.p2align 2,,3
	.syntax unified
	.thumb
	.thumb_func
	.type	memory_copy, %function
memory_copy:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:620:     if (dest == src) return;
	cmp	r0, r1	@ dest, src
	beq	.L1		@,
@ startup.c:621:     while (dest < dest_end) {
	cmp	r0, r2	@ dest, dest_end
	bcs	.L1		@,
.L3:
@ startup.c:622:         *dest++ = *src++;
	ldr	r3, [r1], #4	@ _1, MEM[(const uint32_t *)src_10 + 4294967292B]
@ startup.c:622:         *dest++ = *src++;
	str	r3, [r0], #4	@ _1, MEM[(uint32_t *)_2]
@ startup.c:621:     while (dest < dest_end) {
	cmp	r2, r0	@ dest_end, ivtmp.66
	bhi	.L3		@,
.L1:
@ startup.c:624: }
	bx	lr	@
	.fnend
	.size	memory_copy, .-memory_copy
	.align	1
	.p2align 2,,3
	.syntax unified
	.thumb
	.thumb_func
	.type	memory_clear, %function
memory_clear:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:629:     while (dest < dest_end) {
	cmp	r0, r1	@ dest, dest_end
	bcs	.L6		@,
@ startup.c:630:         *dest++ = 0;
	movs	r3, #0	@ tmp115,
.L8:
	str	r3, [r0], #4	@ tmp115, MEM[(uint32_t *)dest_6 + 4294967292B]
@ startup.c:629:     while (dest < dest_end) {
	cmp	r1, r0	@ dest_end, dest
	bhi	.L8		@,
.L6:
@ startup.c:632: }
	bx	lr	@
	.fnend
	.size	memory_clear, .-memory_clear
	.section	.text.unused_interrupt_vector,"ax",%progbits
	.align	1
	.p2align 2,,3
	.global	unused_interrupt_vector
	.syntax unified
	.thumb
	.thumb_func
	.type	unused_interrupt_vector, %function
unused_interrupt_vector:
	.fnstart
	@ Naked Function: prologue and epilogue provided by programmer.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
@ startup.c:544:     __disable_irq();
	.syntax unified
@ 544 "startup.c" 1
	CPSID i	
@ 0 "" 2
@ startup.c:546:     asm volatile("mrs %0, ipsr\n" : "=r" (ipsr) :: "memory");
@ 546 "startup.c" 1
	mrs r3, ipsr	@ ipsr

@ 0 "" 2
@ startup.c:548:     info->ipsr = ipsr;
	.thumb
	.syntax unified
	ldr	r4, .L29	@ tmp141,
	str	r3, [r4, #132]	@ ipsr, MEM[(struct arm_fault_info_struct *)539492224B].ipsr
@ startup.c:549:     asm volatile("mrs %0, msp\n" : "=r" (stack) :: "memory");
	.syntax unified
@ 549 "startup.c" 1
	mrs r2, msp	@ stack

@ 0 "" 2
@ startup.c:550:     info->cfsr = SCB_CFSR;
	.thumb
	.syntax unified
	mov	r3, #-536813568	@ tmp143,
@ startup.c:556:     info->temp = tempmonGetTemp();
	ldr	r1, .L29+4	@ tmp153,
@ startup.c:561:     p = (uint32_t *)info;
	ldr	r6, .L29+8	@ p,
@ startup.c:550:     info->cfsr = SCB_CFSR;
	ldr	r0, [r3, #3368]	@ _1, MEM[(volatile uint32_t *)3758157096B]
@ startup.c:563:     while (p < end) {
	ldr	r5, .L29+12	@ tmp161,
@ startup.c:550:     info->cfsr = SCB_CFSR;
	str	r0, [r4, #136]	@ _1, MEM[(struct arm_fault_info_struct *)539492224B].cfsr
@ startup.c:551:     info->hfsr = SCB_HFSR;
	ldr	r0, [r3, #3372]	@ _2, MEM[(volatile uint32_t *)3758157100B]
@ startup.c:551:     info->hfsr = SCB_HFSR;
	str	r0, [r4, #140]	@ _2, MEM[(struct arm_fault_info_struct *)539492224B].hfsr
@ startup.c:552:     info->mmfar = SCB_MMFAR;
	ldr	r0, [r3, #3380]	@ _3, MEM[(volatile uint32_t *)3758157108B]
@ startup.c:553:     info->bfar = SCB_BFAR;
	ldr	r3, [r3, #3384]	@ _4, MEM[(volatile uint32_t *)3758157112B]
@ startup.c:553:     info->bfar = SCB_BFAR;
	strd	r0, r3, [r4, #144]	@ _3, _4, tmp141,
@ startup.c:554:     info->ret = stack[6];
	ldr	r3, [r2, #24]	@ _5, MEM[(const uint32_t *)stack_37 + 24B]
@ startup.c:554:     info->ret = stack[6];
	str	r3, [r4, #152]	@ _5, MEM[(struct arm_fault_info_struct *)539492224B].ret
@ startup.c:555:     info->xpsr = stack[7];
	ldr	r3, [r2, #28]	@ _7, MEM[(const uint32_t *)stack_37 + 28B]
@ startup.c:555:     info->xpsr = stack[7];
	str	r3, [r4, #156]	@ _7, MEM[(struct arm_fault_info_struct *)539492224B].xpsr
@ startup.c:556:     info->temp = tempmonGetTemp();
	blx	r1		@ tmp153
@ startup.c:557:     info->time = rtc_get();
	ldr	r3, .L29+16	@ tmp155,
@ startup.c:556:     info->temp = tempmonGetTemp();
	vstr.32	s0, [r4, #160]	@ tmp214, MEM[(struct arm_fault_info_struct *)539492224B].temp
@ startup.c:557:     info->time = rtc_get();
	blx	r3		@ tmp155
@ startup.c:558:     info->len = sizeof(*info) / 4;
	movs	r1, #11	@ tmp158,
@ startup.c:560:     crc = 0xFFFFFFFF;
	mov	r2, #-1	@ crc,
@ startup.c:557:     info->time = rtc_get();
	str	r0, [r4, #164]	@ tmp215, MEM[(struct arm_fault_info_struct *)539492224B].time
@ startup.c:558:     info->len = sizeof(*info) / 4;
	mov	r3, r1	@ pretmp_76, tmp158
	str	r1, [r4, #128]	@ tmp158, MEM[(struct arm_fault_info_struct *)539492224B].len
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	ldr	r1, .L29+20	@ tmp160,
.L13:
@ startup.c:564:         crc ^= *p++;
	adds	r0, r6, #4	@ p, p,
@ startup.c:564:         crc ^= *p++;
	eors	r2, r2, r3	@, crc, crc, pretmp_76
	movs	r4, #32	@ count,
.L11:
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	and	r3, r2, #1	@ tmp159, crc,
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	subs	r4, r4, #1	@ count, count,
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	mul	r3, r1, r3	@ _12, tmp160, tmp159
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	eor	r2, r3, r2, lsr #1	@ crc, _12, crc,
@ startup.c:565:         for (i=0; i < 32; i++) crc = (crc >> 1) ^ (crc & 1)*0xEDB88320;
	bne	.L11		@,
@ startup.c:563:     while (p < end) {
	cmp	r0, r5	@ p, tmp161
	beq	.L12		@,
@ startup.c:564:         crc ^= *p++;
	ldr	r3, [r6, #4]	@ pretmp_76, MEM[(const uint32_t *)p_94 + 4B]
	mov	r6, r0	@ p, p
	b	.L13		@
.L12:
@ startup.c:567:     info->crc = crc;
	ldr	r3, .L29	@ tmp162,
	str	r2, [r3, #168]	@ crc, MEM[(struct arm_fault_info_struct *)539492224B].crc
@ imxrt.h:10118: 	asm volatile("": : :"memory");
@ imxrt.h:10119: 	asm("dsb");
	.syntax unified
@ 10119 "imxrt.h" 1
	dsb
@ 0 "" 2
@ imxrt.h:10121: 		SCB_CACHE_DCCIMVAC = location;
	.thumb
	.syntax unified
	mov	r3, #-536813568	@ tmp163,
	ldr	r1, .L29+8	@ tmp164,
	ldr	r2, .L29+24	@ tmp166,
	str	r1, [r3, #3952]	@ tmp164, MEM[(volatile uint32_t *)3758157680B]
	str	r2, [r3, #3952]	@ tmp166, MEM[(volatile uint32_t *)3758157680B]
@ imxrt.h:10124: 	asm("dsb");
	.syntax unified
@ 10124 "imxrt.h" 1
	dsb
@ 0 "" 2
@ imxrt.h:10125: 	asm("isb");
@ 10125 "imxrt.h" 1
	isb
@ 0 "" 2
@ startup.c:576:     CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	.thumb
	.syntax unified
	ldr	r2, .L29+28	@ tmp167,
@ startup.c:577:     PIT_MCR = PIT_MCR_MDIS;
	movs	r5, #2	@ tmp170,
	ldr	r0, .L29+32	@ tmp169,
@ startup.c:576:     CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	ldr	r3, [r2, #108]	@ _13, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset06C
@ startup.c:579:       if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	ldr	r1, .L29+36	@ tmp174,
@ startup.c:576:     CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	orr	r3, r3, #12288	@ _14, _13,
	str	r3, [r2, #108]	@ _14, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset06C
@ startup.c:577:     PIT_MCR = PIT_MCR_MDIS;
	str	r5, [r0]	@ tmp170, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset000
@ startup.c:578:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	ldr	r3, [r2, #28]	@ _15, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset01C
@ startup.c:579:       if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	ldr	r0, .L29+40	@ tmp175,
@ startup.c:578:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	bic	r3, r3, #127	@ tmp172, _15,
	orr	r3, r3, #64	@ _17, tmp172,
@ startup.c:578:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	str	r3, [r2, #28]	@ _17, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset01C
@ startup.c:579:       if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	ldr	r3, [r1]	@ F_CPU_ACTUAL.23_18, F_CPU_ACTUAL
@ startup.c:579:       if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	cmp	r3, r0	@ F_CPU_ACTUAL.23_18, tmp175
	bhi	.L28		@,
.L14:
@ startup.c:580:     PIT_MCR = 0;
	ldr	r5, .L29+32	@ tmp178,
	movs	r1, #0	@ tmp179,
@ startup.c:585:     NVIC_ICER0 = 0xFFFFFFFF;
	mov	r3, #-536813568	@ tmp186,
	mov	r2, #-1	@ tmp187,
@ startup.c:580:     PIT_MCR = 0;
	str	r1, [r5]	@ tmp179, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset000
@ startup.c:583:     PIT_TCTRL0 = PIT_TCTRL_TEN;
	movs	r7, #1	@ tmp185,
@ startup.c:581:     PIT_TCTRL0 = 0;
	str	r1, [r5, #264]	@ tmp179, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset108
@ startup.c:582:     PIT_LDVAL0 = 2400000; // 2400000 = 100ms
	ldr	r1, .L29+44	@ tmp183,
	ldr	r6, .L29+48	@ tmp210,
	str	r1, [r5, #256]	@ tmp183, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset100
@ startup.c:583:     PIT_TCTRL0 = PIT_TCTRL_TEN;
	str	r7, [r5, #264]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset108
@ startup.c:585:     NVIC_ICER0 = 0xFFFFFFFF;
	str	r2, [r3, #384]	@ tmp187, MEM[(volatile uint32_t *)3758154112B]
@ startup.c:586:     NVIC_ICER1 = 0xFFFFFFFF;
	str	r2, [r3, #388]	@ tmp187, MEM[(volatile uint32_t *)3758154116B]
@ startup.c:587:     NVIC_ICER2 = 0xFFFFFFFF;
	str	r2, [r3, #392]	@ tmp187, MEM[(volatile uint32_t *)3758154120B]
@ startup.c:588:     NVIC_ICER3 = 0xFFFFFFFF;
	str	r2, [r3, #396]	@ tmp187, MEM[(volatile uint32_t *)3758154124B]
@ startup.c:589:     NVIC_ICER4 = 0xFFFFFFFF;
	str	r2, [r3, #400]	@ tmp187, MEM[(volatile uint32_t *)3758154128B]
	b	.L17		@
.L15:
@ startup.c:601:         usb_isr();
	blx	r6		@ tmp210
.L17:
@ startup.c:596:         if (PIT_TFLG0) {
	ldr	r3, [r5, #268]	@ _19, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset10C
@ startup.c:596:         if (PIT_TFLG0) {
	cmp	r3, #0	@ _19
	beq	.L15	@
@ startup.c:599:             if (++count >= 80) break;  // reboot after 8 seconds
	adds	r4, r4, #1	@ count, count,
@ startup.c:598:             PIT_TFLG0 = 1;
	str	r7, [r5, #268]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset10C
@ startup.c:599:             if (++count >= 80) break;  // reboot after 8 seconds
	cmp	r4, #79	@ count,
	bls	.L15		@,
@ startup.c:609:     USBPHY1_CTRL_SET = USBPHY_CTRL_SFTRST;
	ldr	r3, .L29+52	@ tmp202,
@ startup.c:608:     USB1_USBCMD = USB_USBCMD_RST;
	movs	r0, #2	@ tmp201,
	ldr	r1, .L29+56	@ tmp200,
@ startup.c:609:     USBPHY1_CTRL_SET = USBPHY_CTRL_SFTRST;
	mov	r2, #-2147483648	@ tmp203,
@ startup.c:608:     USB1_USBCMD = USB_USBCMD_RST;
	str	r0, [r1, #320]	@ tmp201, MEM[(struct IMXRT_REGISTER32_t *)1076756480B].offset140
@ startup.c:609:     USBPHY1_CTRL_SET = USBPHY_CTRL_SFTRST;
	str	r2, [r3, #52]	@ tmp203, MEM[(struct IMXRT_REGISTER32_t *)1074630656B].offset034
@ startup.c:610:     while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	ldr	r3, [r5, #268]	@ _77, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset10C
@ startup.c:610:     while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	cbnz	r3, .L20	@ _77,
@ startup.c:612:     SRC_GPR5 = 0x0BAD00F1;
	ldr	r0, .L29+60	@ tmp207,
	ldr	r1, .L29+64	@ tmp208,
@ startup.c:610:     while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	ldr	r2, .L29+32	@ tmp209,
.L18:
@ startup.c:612:     SRC_GPR5 = 0x0BAD00F1;
	str	r1, [r0, #48]	@ tmp208, MEM[(struct IMXRT_REGISTER32_t *)1074757632B].offset030
@ startup.c:610:     while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	ldr	r3, [r2, #268]	@ _20, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset10C
@ startup.c:610:     while (PIT_TFLG0 == 0) /* wait 0.1 second for PC to know USB unplugged */
	cmp	r3, #0	@ _20
	beq	.L18	@
.L20:
@ startup.c:613:     SCB_AIRCR = 0x05FA0004;
	mov	r3, #-536813568	@ tmp205,
	ldr	r2, .L29+68	@ tmp206,
	str	r2, [r3, #3340]	@ tmp206, MEM[(volatile uint32_t *)3758157068B]
.L19:
	b	.L19		@
.L28:
@ startup.c:579:       if (F_CPU_ACTUAL > 198000000) set_arm_clock(198000000);
	ldr	r3, .L29+72	@ tmp177,
	blx	r3		@ tmp177
	b	.L14		@
.L30:
	.align	2
.L29:
	.word	539492096
	.word	tempmonGetTemp
	.word	539492224
	.word	539492264
	.word	rtc_get
	.word	-306674912
	.word	539492256
	.word	1074774016
	.word	1074282496
	.word	F_CPU_ACTUAL
	.word	198000000
	.word	2400000
	.word	usb_isr
	.word	1074630656
	.word	1076756480
	.word	1074757632
	.word	195887345
	.word	100270084
	.word	set_arm_clock
	.fnend
	.size	unused_interrupt_vector, .-unused_interrupt_vector
	.section	.flashmem,"ax",%progbits
	.align	1
	.p2align 2,,3
	.global	startup_default_early_hook
	.syntax unified
	.thumb
	.thumb_func
	.type	startup_default_early_hook, %function
startup_default_early_hook:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:52: FLASHMEM void startup_default_early_hook(void) {}
	bx	lr	@
	.fnend
	.size	startup_default_early_hook, .-startup_default_early_hook
	.weak	startup_early_hook
	.thumb_set startup_early_hook,startup_default_early_hook
	.align	1
	.p2align 2,,3
	.global	startup_default_middle_hook
	.syntax unified
	.thumb
	.thumb_func
	.type	startup_default_middle_hook, %function
startup_default_middle_hook:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	bx	lr	@
	.fnend
	.size	startup_default_middle_hook, .-startup_default_middle_hook
	.weak	startup_middle_hook
	.thumb_set startup_middle_hook,startup_default_middle_hook
	.align	1
	.p2align 2,,3
	.global	startup_default_late_hook
	.syntax unified
	.thumb
	.thumb_func
	.type	startup_default_late_hook, %function
startup_default_late_hook:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	bx	lr	@
	.fnend
	.size	startup_default_late_hook, .-startup_default_late_hook
	.weak	startup_late_hook
	.thumb_set startup_late_hook,startup_default_late_hook
	.align	1
	.p2align 2,,3
	.global	configure_cache
	.syntax unified
	.thumb
	.thumb_func
	.type	configure_cache, %function
configure_cache:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	push	{r4}	@
	.save {r4}
@ startup.c:247:     SCB_MPU_CTRL = 0; // turn off MPU
	mov	r3, #-536813568	@ tmp117,
	movs	r1, #0	@ tmp118,
@ startup.c:250:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); //https://developer.arm.com/docs/146793866/10/why-does-the-cortex-m7-initiate-axim-read-accesses-to-memory-addresses-that-do-not-fall-under-a-defined-mpu-region
	movs	r4, #16	@ tmp120,
@ startup.c:251:     SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_4G;
	ldr	r0, .L36	@ tmp122,
@ startup.c:247:     SCB_MPU_CTRL = 0; // turn off MPU
	str	r1, [r3, #3476]	@ tmp118, MEM[(volatile uint32_t *)3758157204B]
@ startup.c:250:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); //https://developer.arm.com/docs/146793866/10/why-does-the-cortex-m7-initiate-axim-read-accesses-to-memory-addresses-that-do-not-fall-under-a-defined-mpu-region
	str	r4, [r3, #3484]	@ tmp120, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:253:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); // ITCM
	movs	r4, #17	@ tmp124,
@ startup.c:251:     SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_4G;
	str	r0, [r3, #3488]	@ tmp122, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:254:     SCB_MPU_RASR = MEM_NOCACHE | READWRITE | SIZE_512K;
	ldr	r0, .L36+4	@ tmp126,
@ startup.c:253:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); // ITCM
	str	r4, [r3, #3484]	@ tmp124, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:258:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); // trap NULL pointer deref
	movs	r4, #18	@ tmp128,
@ startup.c:254:     SCB_MPU_RASR = MEM_NOCACHE | READWRITE | SIZE_512K;
	str	r0, [r3, #3488]	@ tmp126, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:259:     SCB_MPU_RASR =  DEV_NOCACHE | NOACCESS | SIZE_32B;
	ldr	r0, .L36+8	@ tmp130,
@ startup.c:258:     SCB_MPU_RBAR = 0x00000000 | REGION(i++); // trap NULL pointer deref
	str	r4, [r3, #3484]	@ tmp128, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:267:     SCB_MPU_RBAR = ((uint32_t)&_ebss) | REGION(i++); // trap stack overflow
	ldr	r2, .L36+12	@ tmp139,
@ startup.c:259:     SCB_MPU_RASR =  DEV_NOCACHE | NOACCESS | SIZE_32B;
	str	r0, [r3, #3488]	@ tmp130, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:261:     SCB_MPU_RBAR = 0x00200000 | REGION(i++); // Boot ROM
	ldr	r4, .L36+16	@ tmp132,
@ startup.c:267:     SCB_MPU_RBAR = ((uint32_t)&_ebss) | REGION(i++); // trap stack overflow
	orr	r2, r2, #21	@ _2, tmp139,
@ startup.c:262:     SCB_MPU_RASR = MEM_CACHE_WT | READONLY | SIZE_128K;
	ldr	r0, .L36+20	@ tmp134,
@ startup.c:261:     SCB_MPU_RBAR = 0x00200000 | REGION(i++); // Boot ROM
	str	r4, [r3, #3484]	@ tmp132, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:262:     SCB_MPU_RASR = MEM_CACHE_WT | READONLY | SIZE_128K;
	str	r0, [r3, #3488]	@ tmp134, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:264:     SCB_MPU_RBAR = 0x20000000 | REGION(i++); // DTCM
	ldr	r4, .L36+24	@ tmp136,
@ startup.c:265:     SCB_MPU_RASR = MEM_NOCACHE | READWRITE | NOEXEC | SIZE_512K;
	ldr	r0, .L36+28	@ tmp138,
@ startup.c:264:     SCB_MPU_RBAR = 0x20000000 | REGION(i++); // DTCM
	str	r4, [r3, #3484]	@ tmp136, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:265:     SCB_MPU_RASR = MEM_NOCACHE | READWRITE | NOEXEC | SIZE_512K;
	str	r0, [r3, #3488]	@ tmp138, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:268:     SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_32B;
	ldr	r4, .L36+32	@ tmp142,
@ startup.c:267:     SCB_MPU_RBAR = ((uint32_t)&_ebss) | REGION(i++); // trap stack overflow
	str	r2, [r3, #3484]	@ _2, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:270:     SCB_MPU_RBAR = 0x20200000 | REGION(i++); // RAM (AXI bus)
	ldr	r0, .L36+36	@ tmp144,
@ startup.c:271:     SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_1M;
	ldr	r2, .L36+40	@ tmp146,
@ startup.c:268:     SCB_MPU_RASR = SCB_MPU_RASR_TEX(0) | NOACCESS | NOEXEC | SIZE_32B;
	str	r4, [r3, #3488]	@ tmp142, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:270:     SCB_MPU_RBAR = 0x20200000 | REGION(i++); // RAM (AXI bus)
	str	r0, [r3, #3484]	@ tmp144, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:271:     SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_1M;
	str	r2, [r3, #3488]	@ tmp146, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:274:     SCB_MPU_RASR = DEV_NOCACHE | READWRITE | NOEXEC | SIZE_64M;
	add	r2, r2, #327680	@ tmp150, tmp150,
@ startup.c:273:     SCB_MPU_RBAR = 0x40000000 | REGION(i++); // Peripherals
	ldr	r4, .L36+44	@ tmp148,
@ startup.c:274:     SCB_MPU_RASR = DEV_NOCACHE | READWRITE | NOEXEC | SIZE_64M;
	adds	r2, r2, #12	@ tmp150, tmp150,
@ startup.c:276:     SCB_MPU_RBAR = 0x60000000 | REGION(i++); // QSPI Flash
	ldr	r0, .L36+48	@ tmp152,
@ startup.c:273:     SCB_MPU_RBAR = 0x40000000 | REGION(i++); // Peripherals
	str	r4, [r3, #3484]	@ tmp148, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:274:     SCB_MPU_RASR = DEV_NOCACHE | READWRITE | NOEXEC | SIZE_64M;
	str	r2, [r3, #3488]	@ tmp150, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:277:     SCB_MPU_RASR = MEM_CACHE_WBWA | READONLY | SIZE_16M;
	ldr	r2, .L36+52	@ tmp154,
@ startup.c:276:     SCB_MPU_RBAR = 0x60000000 | REGION(i++); // QSPI Flash
	str	r0, [r3, #3484]	@ tmp152, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:279:     SCB_MPU_RBAR = 0x70000000 | REGION(i++); // FlexSPI2
	ldr	r4, .L36+56	@ tmp156,
@ startup.c:277:     SCB_MPU_RASR = MEM_CACHE_WBWA | READONLY | SIZE_16M;
	str	r2, [r3, #3488]	@ tmp154, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:284:     SCB_MPU_CTRL = SCB_MPU_CTRL_ENABLE;
	movs	r2, #1	@ tmp160,
@ startup.c:280:     SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_16M;
	ldr	r0, .L36+60	@ tmp158,
@ startup.c:279:     SCB_MPU_RBAR = 0x70000000 | REGION(i++); // FlexSPI2
	str	r4, [r3, #3484]	@ tmp156, MEM[(volatile uint32_t *)3758157212B]
@ startup.c:280:     SCB_MPU_RASR = MEM_CACHE_WBWA | READWRITE | NOEXEC | SIZE_16M;
	str	r0, [r3, #3488]	@ tmp158, MEM[(volatile uint32_t *)3758157216B]
@ startup.c:284:     SCB_MPU_CTRL = SCB_MPU_CTRL_ENABLE;
	str	r2, [r3, #3476]	@ tmp160, MEM[(volatile uint32_t *)3758157204B]
@ startup.c:287:     asm("dsb");
	.syntax unified
@ 287 "startup.c" 1
	dsb
@ 0 "" 2
@ startup.c:288:     asm("isb");
@ 288 "startup.c" 1
	isb
@ 0 "" 2
@ startup.c:289:     SCB_CACHE_ICIALLU = 0;
	.thumb
	.syntax unified
	str	r1, [r3, #3920]	@ tmp118, MEM[(volatile uint32_t *)3758157648B]
@ startup.c:291:     asm("dsb");
	.syntax unified
@ 291 "startup.c" 1
	dsb
@ 0 "" 2
@ startup.c:292:     asm("isb");
@ 292 "startup.c" 1
	isb
@ 0 "" 2
@ startup.c:293:     SCB_CCR |= (SCB_CCR_IC | SCB_CCR_DC);
	.thumb
	.syntax unified
	ldr	r2, [r3, #3348]	@ _3, MEM[(volatile uint32_t *)3758157076B]
@ startup.c:294: }
	ldr	r4, [sp], #4	@,
@ startup.c:293:     SCB_CCR |= (SCB_CCR_IC | SCB_CCR_DC);
	orr	r2, r2, #196608	@ _4, _3,
	str	r2, [r3, #3348]	@ _4, MEM[(volatile uint32_t *)3758157076B]
@ startup.c:294: }
	bx	lr	@
.L37:
	.align	2
.L36:
	.word	268435519
	.word	50855973
	.word	1048585
	.word	_ebss
	.word	2097171
	.word	117571617
	.word	536870932
	.word	319291429
	.word	268435465
	.word	538968086
	.word	319488039
	.word	1073741847
	.word	1610612760
	.word	118161455
	.word	1879048217
	.word	319488047
	.fnend
	.size	configure_cache, .-configure_cache
	.align	1
	.p2align 2,,3
	.global	configure_external_ram
	.syntax unified
	.thumb
	.thumb_func
	.type	configure_external_ram, %function
configure_external_ram:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}	@
	.save {r4, r5, r6, r7, lr}
@ startup.c:331:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_22 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	ldr	r3, .L79	@ tmp178,
@ startup.c:340:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_22 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SS1_B (Flash)
	movs	r2, #24	@ tmp195,
@ startup.c:331:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_22 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	ldr	r6, .L79+4	@ tmp179,
@ startup.c:349:     IOMUXC_FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT = 1; // GPIO_EMC_23 for Mode: ALT8, pg 986
	movs	r0, #1	@ tmp211,
@ startup.c:332:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_23 = 0x110F9; // keeper, strong drive, max speed, hyst
	ldr	r7, .L79+8	@ tmp181,
@ startup.c:329: {
	.pad #12
	sub	sp, sp, #12	@,,
@ startup.c:331:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_22 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	str	r6, [r3, #604]	@ tmp179, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset25C
@ startup.c:349:     IOMUXC_FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT = 1; // GPIO_EMC_23 for Mode: ALT8, pg 986
	ldr	r1, .L79+12	@ tmp210,
@ startup.c:332:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_23 = 0x110F9; // keeper, strong drive, max speed, hyst
	str	r7, [r3, #608]	@ tmp181, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset260
@ startup.c:335:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_26 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	ldr	r5, .L79+16	@ tmp187,
@ startup.c:333:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_24 = 0x1B0F9; // 100K pullup, strong drive, max speed, hyst
	str	r6, [r3, #612]	@ tmp179, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset264
@ startup.c:334:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_25 = 0x100F9; // strong drive, max speed, hyst
	sub	r6, r6, #45056	@ tmp185, tmp185,
@ startup.c:357:     CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
	ldr	r4, .L79+20	@ tmp222,
@ startup.c:334:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_25 = 0x100F9; // strong drive, max speed, hyst
	str	r6, [r3, #616]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset268
@ startup.c:335:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_26 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	str	r5, [r3, #620]	@ tmp187, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset26C
@ startup.c:336:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_27 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	str	r5, [r3, #624]	@ tmp187, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset270
@ startup.c:337:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_28 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	str	r5, [r3, #628]	@ tmp187, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset274
@ startup.c:338:     IOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_29 = 0x170F9; // 47K pullup, strong drive, max speed, hyst
	str	r5, [r3, #632]	@ tmp187, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset278
@ startup.c:368:         | FLEXSPI_MCR0_RXCLKSRC(1) | FLEXSPI_MCR0_MDIS;
	movw	r5, #34572	@ tmp232,
@ startup.c:340:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_22 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SS1_B (Flash)
	str	r2, [r3, #108]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset06C
@ startup.c:341:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_23 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DQS
	str	r2, [r3, #112]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset070
@ startup.c:342:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_24 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SS0_B (RAM)
	str	r2, [r3, #116]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset074
@ startup.c:343:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_25 = 8 | 0x10; // ALT1 = FLEXSPI2_A_SCLK
	str	r2, [r3, #120]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset078
@ startup.c:344:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_26 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA0
	str	r2, [r3, #124]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset07C
@ startup.c:345:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_27 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA1
	str	r2, [r3, #128]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset080
@ startup.c:346:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_28 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA2
	str	r2, [r3, #132]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset084
@ startup.c:347:     IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_29 = 8 | 0x10; // ALT1 = FLEXSPI2_A_DATA3
	str	r2, [r3, #136]	@ tmp195, MEM[(struct IMXRT_REGISTER32_t *)1075806208B].offset088
@ startup.c:349:     IOMUXC_FLEXSPI2_IPP_IND_DQS_FA_SELECT_INPUT = 1; // GPIO_EMC_23 for Mode: ALT8, pg 986
	str	r0, [r1, #812]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset32C
@ startup.c:357:     CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
	ldr	r2, .L79+24	@ tmp223,
@ startup.c:350:     IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT0_SELECT_INPUT = 1; // GPIO_EMC_26 for Mode: ALT8
	str	r0, [r1, #816]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset330
@ startup.c:351:     IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT1_SELECT_INPUT = 1; // GPIO_EMC_27 for Mode: ALT8
	str	r0, [r1, #820]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset334
@ startup.c:352:     IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT2_SELECT_INPUT = 1; // GPIO_EMC_28 for Mode: ALT8
	str	r0, [r1, #824]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset338
@ startup.c:353:     IOMUXC_FLEXSPI2_IPP_IND_IO_FA_BIT3_SELECT_INPUT = 1; // GPIO_EMC_29 for Mode: ALT8
	str	r0, [r1, #828]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset33C
@ startup.c:354:     IOMUXC_FLEXSPI2_IPP_IND_SCK_FA_SELECT_INPUT = 1; // GPIO_EMC_25 for Mode: ALT8
	str	r0, [r1, #848]	@ tmp211, MEM[(struct IMXRT_REGISTER32_t *)1075807232B].offset350
@ startup.c:357:     CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
	ldr	r1, [r4, #24]	@ _1, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset018
@ startup.c:358:         | CCM_CBCMR_FLEXSPI2_PODF(5) | CCM_CBCMR_FLEXSPI2_CLK_SEL(3); // 88 MHz
	ldr	r3, .L79+28	@ _3,
@ startup.c:357:     CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
	ands	r2, r2, r1	@, tmp223, tmp223, _1
@ startup.c:361:     FLEXSPI2_MCR0 |= FLEXSPI_MCR0_MDIS;
	ldr	r0, .L79+32	@ tmp229,
@ startup.c:370:     FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
	ldr	r1, .L79+36	@ tmp238,
@ startup.c:358:         | CCM_CBCMR_FLEXSPI2_PODF(5) | CCM_CBCMR_FLEXSPI2_CLK_SEL(3); // 88 MHz
	orrs	r3, r3, r2	@, _3, _3, tmp223
@ startup.c:368:         | FLEXSPI_MCR0_RXCLKSRC(1) | FLEXSPI_MCR0_MDIS;
	ldr	r2, .L79+40	@ _10,
@ startup.c:357:     CCM_CBCMR = (CCM_CBCMR & ~(CCM_CBCMR_FLEXSPI2_PODF_MASK | CCM_CBCMR_FLEXSPI2_CLK_SEL_MASK))
	str	r3, [r4, #24]	@ _3, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset018
@ startup.c:359:     CCM_CCGR7 |= CCM_CCGR7_FLEXSPI2(CCM_CCGR_ON);
	ldr	r3, [r4, #132]	@ _4, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset084
	orr	r3, r3, #12	@ _5, _4,
	str	r3, [r4, #132]	@ _5, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset084
@ startup.c:369:     FLEXSPI2_MCR1 = FLEXSPI_MCR1_SEQWAIT(0xFFFF) | FLEXSPI_MCR1_AHBBUSWAIT(0xFFFF);
	mov	r4, #-1	@ tmp237,
@ startup.c:361:     FLEXSPI2_MCR0 |= FLEXSPI_MCR0_MDIS;
	ldr	r3, [r0]	@ _6, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
	orr	r3, r3, #2	@ _7, _6,
	str	r3, [r0]	@ _7, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
@ startup.c:362:     FLEXSPI2_MCR0 = (FLEXSPI2_MCR0 & ~(FLEXSPI_MCR0_AHBGRANTWAIT_MASK
	ldr	r3, [r0]	@ _8, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
@ startup.c:368:         | FLEXSPI_MCR0_RXCLKSRC(1) | FLEXSPI_MCR0_MDIS;
	ands	r3, r3, r5	@, tmp233, _8, tmp232
@ startup.c:392:     FLEXSPI2_FLSHA1CR0 = 0x2000; // 8 MByte
	mov	r5, #8192	@ tmp267,
@ startup.c:368:         | FLEXSPI_MCR0_RXCLKSRC(1) | FLEXSPI_MCR0_MDIS;
	orrs	r2, r2, r3	@, _10, _10, tmp233
@ startup.c:370:     FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
	ldr	r3, .L79+44	@ tmp239,
@ startup.c:362:     FLEXSPI2_MCR0 = (FLEXSPI2_MCR0 & ~(FLEXSPI_MCR0_AHBGRANTWAIT_MASK
	str	r2, [r0]	@ _10, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
@ startup.c:369:     FLEXSPI2_MCR1 = FLEXSPI_MCR1_SEQWAIT(0xFFFF) | FLEXSPI_MCR1_AHBBUSWAIT(0xFFFF);
	str	r4, [r0, #4]	@ tmp237, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset004
@ startup.c:370:     FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
	ldr	r2, [r1, #8]	@ _11, MEM[(struct IMXRT_REGISTER32_t *)1076527104B].offset008
@ startup.c:380:         | FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_BUFSZ(64);
	ldr	r4, .L79+48	@ tmp247,
@ startup.c:370:     FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
	ands	r3, r3, r2	@, tmp239, tmp239, _11
@ startup.c:379:     FLEXSPI2_AHBRXBUF0CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	ldr	r2, .L79+52	@ tmp246,
@ startup.c:373:         | FLEXSPI_MCR2_RESUMEWAIT(0x20) /*| FLEXSPI_MCR2_SAMEDEVICEEN*/;
	orr	r3, r3, #536870912	@ _13, tmp239,
@ startup.c:370:     FLEXSPI2_MCR2 = (FLEXSPI_MCR2 & ~(FLEXSPI_MCR2_RESUMEWAIT_MASK
	str	r3, [r0, #8]	@ _13, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset008
@ startup.c:375:     FLEXSPI2_AHBCR = FLEXSPI2_AHBCR & ~(FLEXSPI_AHBCR_READADDROPT | FLEXSPI_AHBCR_PREFETCHEN
	ldr	r3, [r0, #12]	@ _14, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset00C
@ startup.c:375:     FLEXSPI2_AHBCR = FLEXSPI2_AHBCR & ~(FLEXSPI_AHBCR_READADDROPT | FLEXSPI_AHBCR_PREFETCHEN
	bic	r3, r3, #120	@ _15, _14,
@ startup.c:375:     FLEXSPI2_AHBCR = FLEXSPI2_AHBCR & ~(FLEXSPI_AHBCR_READADDROPT | FLEXSPI_AHBCR_PREFETCHEN
	str	r3, [r0, #12]	@ _15, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset00C
@ startup.c:379:     FLEXSPI2_AHBRXBUF0CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	ldr	r3, [r0, #32]	@ _16, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset020
@ startup.c:379:     FLEXSPI2_AHBRXBUF0CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	ands	r3, r3, r2	@, tmp245, _16, tmp246
@ startup.c:380:         | FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_BUFSZ(64);
	orrs	r3, r3, r4	@, _18, tmp245, tmp247
@ startup.c:379:     FLEXSPI2_AHBRXBUF0CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	str	r3, [r0, #32]	@ _18, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset020
@ startup.c:381:     FLEXSPI2_AHBRXBUF1CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	ldr	r3, [r0, #32]	@ _19, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset020
@ startup.c:381:     FLEXSPI2_AHBRXBUF1CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	ands	r3, r3, r2	@, tmp250, _19, tmp246
@ startup.c:383:     FLEXSPI2_AHBRXBUF2CR0 = mask;
	ldr	r2, .L79+56	@ tmp255,
@ startup.c:382:         | FLEXSPI_AHBRXBUFCR0_PREFETCHEN | FLEXSPI_AHBRXBUFCR0_BUFSZ(64);
	orrs	r3, r3, r4	@, _21, tmp250, tmp247
@ startup.c:393:     FLEXSPI2_FLSHA1CR1 = FLEXSPI_FLSHCR1_CSINTERVAL(2)
	ldr	r4, .L79+60	@ tmp269,
@ startup.c:381:     FLEXSPI2_AHBRXBUF1CR0 = (FLEXSPI2_AHBRXBUF0CR0 & ~mask)
	str	r3, [r0, #36]	@ _21, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset024
@ startup.c:383:     FLEXSPI2_AHBRXBUF2CR0 = mask;
	str	r2, [r0, #40]	@ tmp255, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset028
@ startup.c:384:     FLEXSPI2_AHBRXBUF3CR0 = mask;
	str	r2, [r0, #44]	@ tmp255, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset02C
@ startup.c:391:     FLEXSPI2_INTEN = 0;
	movs	r2, #0	@ tmp265,
@ startup.c:387:     FLEXSPI2_IPRXFCR = (FLEXSPI_IPRXFCR & 0xFFFFFFC0) | FLEXSPI_IPRXFCR_CLRIPRXF;
	ldr	r3, [r1, #184]	@ _22, MEM[(struct IMXRT_REGISTER32_t *)1076527104B].offset0B8
@ startup.c:387:     FLEXSPI2_IPRXFCR = (FLEXSPI_IPRXFCR & 0xFFFFFFC0) | FLEXSPI_IPRXFCR_CLRIPRXF;
	bic	r3, r3, #63	@ tmp259, _22,
@ startup.c:387:     FLEXSPI2_IPRXFCR = (FLEXSPI_IPRXFCR & 0xFFFFFFC0) | FLEXSPI_IPRXFCR_CLRIPRXF;
	orr	r3, r3, #1	@ _24, tmp259,
@ startup.c:387:     FLEXSPI2_IPRXFCR = (FLEXSPI_IPRXFCR & 0xFFFFFFC0) | FLEXSPI_IPRXFCR_CLRIPRXF;
	str	r3, [r0, #184]	@ _24, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B8
@ startup.c:389:     FLEXSPI2_IPTXFCR = (FLEXSPI_IPTXFCR & 0xFFFFFFC0) | FLEXSPI_IPTXFCR_CLRIPTXF;
	ldr	r3, [r1, #188]	@ _25, MEM[(struct IMXRT_REGISTER32_t *)1076527104B].offset0BC
@ startup.c:406:     FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	ldr	r1, .L79+64	@ tmp281,
@ startup.c:389:     FLEXSPI2_IPTXFCR = (FLEXSPI_IPTXFCR & 0xFFFFFFC0) | FLEXSPI_IPTXFCR_CLRIPTXF;
	bic	r3, r3, #63	@ tmp262, _25,
@ startup.c:389:     FLEXSPI2_IPTXFCR = (FLEXSPI_IPTXFCR & 0xFFFFFFC0) | FLEXSPI_IPTXFCR_CLRIPTXF;
	orr	r3, r3, #1	@ _27, tmp262,
@ startup.c:389:     FLEXSPI2_IPTXFCR = (FLEXSPI_IPTXFCR & 0xFFFFFFC0) | FLEXSPI_IPTXFCR_CLRIPTXF;
	str	r3, [r0, #188]	@ _27, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0BC
@ startup.c:395:     FLEXSPI2_FLSHA1CR2 = FLEXSPI_FLSHCR2_AWRSEQID(6) | FLEXSPI_FLSHCR2_AWRSEQNUM(0)
	movw	r3, #1541	@ tmp271,
@ startup.c:391:     FLEXSPI2_INTEN = 0;
	str	r2, [r0, #16]	@ tmp265, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset010
@ startup.c:392:     FLEXSPI2_FLSHA1CR0 = 0x2000; // 8 MByte
	str	r5, [r0, #96]	@ tmp267, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset060
@ startup.c:393:     FLEXSPI2_FLSHA1CR1 = FLEXSPI_FLSHCR1_CSINTERVAL(2)
	str	r4, [r0, #112]	@ tmp269, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset070
@ startup.c:395:     FLEXSPI2_FLSHA1CR2 = FLEXSPI_FLSHCR2_AWRSEQID(6) | FLEXSPI_FLSHCR2_AWRSEQNUM(0)
	str	r3, [r0, #128]	@ tmp271, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset080
@ startup.c:398:     FLEXSPI2_FLSHA2CR0 = 0x2000; // 8 MByte
	str	r5, [r0, #100]	@ tmp267, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset064
@ startup.c:399:     FLEXSPI2_FLSHA2CR1 = FLEXSPI_FLSHCR1_CSINTERVAL(2)
	str	r4, [r0, #116]	@ tmp269, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset074
@ startup.c:407:     FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	movs	r4, #2	@ tmp283,
@ startup.c:401:     FLEXSPI2_FLSHA2CR2 = FLEXSPI_FLSHCR2_AWRSEQID(6) | FLEXSPI_FLSHCR2_AWRSEQNUM(0)
	str	r3, [r0, #132]	@ tmp271, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset084
@ startup.c:404:     FLEXSPI2_MCR0 &= ~FLEXSPI_MCR0_MDIS;
	ldr	r3, [r0]	@ _28, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
	bic	r3, r3, #2	@ _29, _28,
	str	r3, [r0]	@ _29, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
@ startup.c:406:     FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	str	r1, [r0, #24]	@ tmp281, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset018
@ startup.c:407:     FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	ldr	r3, .L79+68	@ ivtmp.118,
@ startup.c:409:     for (int i=0; i < 64; i++) luttable[i] = 0;
	ldr	r1, .L79+72	@ tmp285,
@ startup.c:407:     FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	str	r4, [r0, #28]	@ tmp283, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset01C
.L39:
@ startup.c:409:     for (int i=0; i < 64; i++) luttable[i] = 0;
	str	r2, [r3], #4	@ tmp265, *_32
@ startup.c:409:     for (int i=0; i < 64; i++) luttable[i] = 0;
	cmp	r3, r1	@ ivtmp.118, tmp285
	bne	.L39		@,
@ startup.c:410:     FLEXSPI2_MCR0 |= FLEXSPI_MCR0_SWRESET;
	ldr	r2, .L79+32	@ tmp286,
	ldr	r3, [r2]	@ _33, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
	orr	r3, r3, #1	@ _34, _33,
	str	r3, [r2]	@ _34, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
.L40:
@ startup.c:411:     while (FLEXSPI2_MCR0 & FLEXSPI_MCR0_SWRESET) ; // wait
	ldr	r3, [r2]	@ _35, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset000
	ands	r3, r3, #1	@ tmp289, _35,
	bne	.L40		@,
@ startup.c:413:     FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	ldr	r0, .L79+64	@ tmp291,
@ startup.c:414:     FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	movs	r1, #2	@ tmp293,
@ startup.c:417:     FLEXSPI2_LUT0 = LUT0(CMD_SDR, PINS4, 0xF5);
	movw	r4, #1781	@ tmp295,
@ startup.c:413:     FLEXSPI2_LUTKEY = FLEXSPI_LUTKEY_VALUE;
	str	r0, [r2, #24]	@ tmp291, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset018
@ startup.c:421:     FLEXSPI2_LUT8 = LUT0(CMD_SDR, PINS1, 0x99);
	movw	r0, #1177	@ tmp299,
@ startup.c:414:     FLEXSPI2_LUTCR = FLEXSPI_LUTCR_UNLOCK;
	str	r1, [r2, #28]	@ tmp293, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset01C
@ startup.c:419:     FLEXSPI2_LUT4 = LUT0(CMD_SDR, PINS1, 0x66);
	movw	r1, #1126	@ tmp297,
@ startup.c:417:     FLEXSPI2_LUT0 = LUT0(CMD_SDR, PINS4, 0xF5);
	str	r4, [r2, #512]	@ tmp295, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset200
@ startup.c:424:     FLEXSPI2_LUT13 = LUT0(READ_SDR, PINS1, 1);
	movw	r4, #9217	@ tmp303,
@ startup.c:419:     FLEXSPI2_LUT4 = LUT0(CMD_SDR, PINS1, 0x66);
	str	r1, [r2, #528]	@ tmp297, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset210
@ startup.c:423:     FLEXSPI2_LUT12 = LUT0(CMD_SDR, PINS1, 0x9F) | LUT1(DUMMY_SDR, PINS1, 24);
	ldr	r1, .L79+76	@ tmp301,
@ startup.c:421:     FLEXSPI2_LUT8 = LUT0(CMD_SDR, PINS1, 0x99);
	str	r0, [r2, #544]	@ tmp299, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset220
@ startup.c:423:     FLEXSPI2_LUT12 = LUT0(CMD_SDR, PINS1, 0x9F) | LUT1(DUMMY_SDR, PINS1, 24);
	str	r1, [r2, #560]	@ tmp301, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset230
@ startup.c:426:     FLEXSPI2_LUT16 = LUT0(CMD_SDR, PINS1, 0x35);
	movw	r1, #1077	@ tmp305,
@ startup.c:428:     FLEXSPI2_LUT20 = LUT0(CMD_SDR, PINS4, 0xEB) | LUT1(ADDR_SDR, PINS4, 24);
	ldr	r0, .L79+80	@ tmp307,
@ startup.c:424:     FLEXSPI2_LUT13 = LUT0(READ_SDR, PINS1, 1);
	str	r4, [r2, #564]	@ tmp303, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset234
@ startup.c:426:     FLEXSPI2_LUT16 = LUT0(CMD_SDR, PINS1, 0x35);
	str	r1, [r2, #576]	@ tmp305, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset240
@ startup.c:431:     FLEXSPI2_LUT24 = LUT0(CMD_SDR, PINS4, 0x38) | LUT1(ADDR_SDR, PINS4, 24);
	ldr	r4, .L79+84	@ tmp311,
@ startup.c:428:     FLEXSPI2_LUT20 = LUT0(CMD_SDR, PINS4, 0xEB) | LUT1(ADDR_SDR, PINS4, 24);
	str	r0, [r2, #592]	@ tmp307, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset250
@ startup.c:432:     FLEXSPI2_LUT25 = LUT0(WRITE_SDR, PINS4, 1);
	movw	r0, #8705	@ tmp313,
@ startup.c:429:     FLEXSPI2_LUT21 = LUT0(DUMMY_SDR, PINS4, 6) | LUT1(READ_SDR, PINS4, 1);
	ldr	r1, .L79+88	@ tmp309,
	str	r1, [r2, #596]	@ tmp309, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset254
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	movs	r1, #1	@ tmp319,
@ startup.c:431:     FLEXSPI2_LUT24 = LUT0(CMD_SDR, PINS4, 0x38) | LUT1(ADDR_SDR, PINS4, 24);
	str	r4, [r2, #608]	@ tmp311, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset260
@ startup.c:432:     FLEXSPI2_LUT25 = LUT0(WRITE_SDR, PINS4, 1);
	str	r0, [r2, #612]	@ tmp313, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset264
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r0, .L79+32	@ tmp320,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r3, [r2, #160]	@ tmp289, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r3, [r2, #164]	@ tmp289, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r1, [r2, #176]	@ tmp319, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L41:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r0, #20]	@ _122, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r2, r3, #31	@, _122,
	bpl	.L41		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp323,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	movs	r4, #0	@ tmp325,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r2, #65536	@ tmp327,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r1, .L79+32	@ tmp330,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r0, #20]	@ tmp323, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r0, #160]	@ tmp325, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r2, [r0, #164]	@ tmp327, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r0, #176]	@ tmp323, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L42:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r1, #20]	@ _120, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r3, r3, #31	@, _120,
	bpl	.L42		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp333,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	movs	r4, #0	@ tmp335,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r0, #131072	@ tmp337,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r2, .L79+32	@ tmp340,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r1, #20]	@ tmp333, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r1, #160]	@ tmp335, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r0, [r1, #164]	@ tmp337, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r1, #176]	@ tmp333, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L43:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r2, #20]	@ _118, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r7, r3, #31	@, _118,
	bpl	.L43		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp343,
@ startup.c:319:     FLEXSPI2_IPCR0 = addr;
	movs	r4, #0	@ tmp345,
@ startup.c:320:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(3) | FLEXSPI_IPCR1_IDATSZ(4);
	ldr	r0, .L79+92	@ tmp347,
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r1, .L79+32	@ tmp350,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r2, #20]	@ tmp343, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:319:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r2, #160]	@ tmp345, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:320:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(3) | FLEXSPI_IPCR1_IDATSZ(4);
	str	r0, [r2, #164]	@ tmp347, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:321:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r2, #176]	@ tmp343, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L44:
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r1, #20]	@ _166, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r6, r3, #31	@, _166,
	bpl	.L44		@,
@ startup.c:323:     uint32_t id = FLEXSPI2_RFDR0;
	ldr	r3, [r1, #256]	@ id, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset100
@ startup.c:438:     if (flexspi2_psram_id(0) == 0x5D0D) {
	movw	r2, #23821	@ tmp357,
@ startup.c:324:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE | FLEXSPI_INTR_IPRXWA;
	movs	r0, #33	@ tmp354,
@ startup.c:325:     return id & 0xFFFF;
	uxth	r3, r3	@ tmp355, id
@ startup.c:324:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE | FLEXSPI_INTR_IPRXWA;
	str	r0, [r1, #20]	@ tmp354, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:438:     if (flexspi2_psram_id(0) == 0x5D0D) {
	cmp	r3, r2	@ tmp355, tmp357
	bne	.L45		@,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	movs	r4, #0	@ tmp359,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r2, #262144	@ tmp361,
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	movs	r3, #1	@ tmp363,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r0, .L79+32	@ tmp364,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r1, #160]	@ tmp359, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r2, [r1, #164]	@ tmp361, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r1, #176]	@ tmp363, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L46:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r0, #20]	@ _130, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r5, r3, #31	@, _130,
	bpl	.L46		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp367,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	mov	r4, #8388608	@ tmp369,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	movs	r1, #0	@ tmp371,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r2, .L79+32	@ tmp374,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r0, #20]	@ tmp367, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r0, #160]	@ tmp369, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r1, [r0, #164]	@ tmp371, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r0, #176]	@ tmp367, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L47:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r2, #20]	@ _128, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r4, r3, #31	@, _128,
	bpl	.L47		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp377,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	mov	r4, #8388608	@ tmp379,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r0, #65536	@ tmp381,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r1, .L79+32	@ tmp384,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r2, #20]	@ tmp377, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r2, #160]	@ tmp379, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r0, [r2, #164]	@ tmp381, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r2, #176]	@ tmp377, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L48:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r1, #20]	@ _126, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r0, r3, #31	@, _126,
	bpl	.L48		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp387,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	mov	r4, #8388608	@ tmp389,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r0, #131072	@ tmp391,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r2, .L79+32	@ tmp394,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r1, #20]	@ tmp387, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r1, #160]	@ tmp389, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r0, [r1, #164]	@ tmp391, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r1, #176]	@ tmp387, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L49:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r2, #20]	@ _124, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r1, r3, #31	@, _124,
	bpl	.L49		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp397,
@ startup.c:319:     FLEXSPI2_IPCR0 = addr;
	mov	r4, #8388608	@ tmp399,
@ startup.c:320:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(3) | FLEXSPI_IPCR1_IDATSZ(4);
	ldr	r0, .L79+92	@ tmp401,
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r1, .L79+32	@ tmp404,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	str	r3, [r2, #20]	@ tmp397, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:319:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r2, #160]	@ tmp399, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:320:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(3) | FLEXSPI_IPCR1_IDATSZ(4);
	str	r0, [r2, #164]	@ tmp401, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:321:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r2, #176]	@ tmp397, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L50:
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r1, #20]	@ _170, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:322:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r2, r3, #31	@, _170,
	bpl	.L50		@,
@ startup.c:323:     uint32_t id = FLEXSPI2_RFDR0;
	ldr	r3, [r1, #256]	@ id, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset100
@ startup.c:444:         if (flexspi2_psram_id(0x800000) == 0x5D0D) {
	movw	r2, #23821	@ tmp411,
@ startup.c:324:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE | FLEXSPI_INTR_IPRXWA;
	movs	r0, #33	@ tmp408,
@ startup.c:325:     return id & 0xFFFF;
	uxth	r3, r3	@ tmp409, id
@ startup.c:324:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE | FLEXSPI_INTR_IPRXWA;
	str	r0, [r1, #20]	@ tmp408, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:444:         if (flexspi2_psram_id(0x800000) == 0x5D0D) {
	cmp	r3, r2	@ tmp409, tmp411
	beq	.L78		@,
	movs	r5, #8	@ _48,
	mov	r4, #8388608	@ prephitmp_110,
.L51:
@ startup.c:455:             external_psram_size * 0x100000 -
	ldr	r1, .L79+96	@ tmp426,
@ startup.c:454:         sm_set_pool(&extmem_smalloc_pool, &_extram_end,
	movs	r0, #0	@ tmp430,
@ startup.c:455:             external_psram_size * 0x100000 -
	ldr	r3, .L79+100	@ tmp425,
@ startup.c:447:             external_psram_size = 16;
	ldr	r2, .L79+104	@ tmp422,
@ startup.c:454:         sm_set_pool(&extmem_smalloc_pool, &_extram_end,
	str	r0, [sp]	@ tmp430,
@ startup.c:447:             external_psram_size = 16;
	strb	r5, [r2]	@ _48, external_psram_size
@ startup.c:455:             external_psram_size * 0x100000 -
	subs	r2, r3, r1	@ tmp424, tmp425, tmp426
@ startup.c:454:         sm_set_pool(&extmem_smalloc_pool, &_extram_end,
	movs	r3, #1	@,
	ldr	r0, .L79+108	@,
	add	r2, r2, r4	@, prephitmp_110
	ldr	r4, .L79+112	@ tmp431,
	blx	r4		@ tmp431
@ startup.c:462: }
	add	sp, sp, #12	@,,
	@ sp needed	@
	pop	{r4, r5, r6, r7, pc}	@
.L45:
@ startup.c:460:         memset(&extmem_smalloc_pool, 0, sizeof(extmem_smalloc_pool));
	ldr	r3, .L79+108	@ tmp432,
	movs	r2, #0	@ tmp434,
	strd	r2, r2, [r3]	@ tmp434, tmp434, tmp432
	strd	r2, r2, [r3, #8]	@ tmp434, tmp434, tmp432,
@ startup.c:462: }
	add	sp, sp, #12	@,,
	@ sp needed	@
	pop	{r4, r5, r6, r7, pc}	@
.L80:
	.align	2
.L79:
	.word	1075806208
	.word	110841
	.word	69881
	.word	1075807232
	.word	94457
	.word	1074774016
	.word	536870143
	.word	-1610611968
	.word	1076510720
	.word	1076527104
	.word	-65518
	.word	16201727
	.word	-2147483584
	.word	2096168704
	.word	-2096168705
	.word	131171
	.word	1525701360
	.word	1076511232
	.word	1076511488
	.word	806880415
	.word	169346795
	.word	169346616
	.word	637612550
	.word	196612
	.word	_extram_end
	.word	_extram_start
	.word	.LANCHOR0
	.word	.LANCHOR1
	.word	sm_set_pool
.L78:
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	mov	r4, #8388608	@ tmp413,
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	mov	r2, #262144	@ tmp415,
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	movs	r3, #1	@ tmp417,
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r0, .L81	@ tmp418,
@ startup.c:310:     FLEXSPI2_IPCR0 = addr;
	str	r4, [r1, #160]	@ tmp413, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A0
@ startup.c:311:     FLEXSPI2_IPCR1 = FLEXSPI_IPCR1_ISEQID(index);
	str	r2, [r1, #164]	@ tmp415, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0A4
@ startup.c:312:     FLEXSPI2_IPCMD = FLEXSPI_IPCMD_TRG;
	str	r3, [r1, #176]	@ tmp417, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset0B0
.L52:
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	ldr	r3, [r0, #20]	@ _132, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
@ startup.c:313:     while (!(FLEXSPI2_INTR & FLEXSPI_INTR_IPCMDDONE)); // wait
	lsls	r3, r3, #31	@, _132,
	bpl	.L52		@,
@ startup.c:314:     FLEXSPI2_INTR = FLEXSPI_INTR_IPCMDDONE;
	movs	r3, #1	@ tmp421,
	movs	r5, #16	@ _48,
	mov	r4, #16777216	@ prephitmp_110,
	str	r3, [r0, #20]	@ tmp421, MEM[(struct IMXRT_REGISTER32_t *)1076510720B].offset014
	b	.L51		@
.L82:
	.align	2
.L81:
	.word	1076510720
	.fnend
	.size	configure_external_ram, .-configure_external_ram
	.align	1
	.p2align 2,,3
	.global	usb_pll_start
	.syntax unified
	.thumb
	.thumb_func
	.type	usb_pll_start, %function
usb_pll_start:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	push	{r4, r5, r6, r7}	@
	.save {r4, r5, r6, r7}
@ startup.c:470:         uint32_t n = CCM_ANALOG_PLL_USB1; // pg 759
	ldr	r2, .L97	@ tmp120,
@ startup.c:504:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_EN_USB_CLKS;
	movs	r7, #64	@ tmp140,
@ startup.c:499:             CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_BYPASS;
	mov	r1, #65536	@ tmp141,
@ startup.c:490:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_POWER;
	mov	r6, #4096	@ tmp142,
@ startup.c:485:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_ENABLE;
	mov	r5, #8192	@ tmp143,
@ startup.c:474:             CCM_ANALOG_PLL_USB1_CLR = 0xC000;            // bypass 24 MHz
	mov	r4, #49152	@ tmp144,
@ startup.c:476:             CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_POWER |    // power down
	movw	r0, #12354	@ tmp145,
.L84:
@ startup.c:470:         uint32_t n = CCM_ANALOG_PLL_USB1; // pg 759
	ldr	r3, [r2, #16]	@ n, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset010
@ startup.c:472:         if (n & CCM_ANALOG_PLL_USB1_DIV_SELECT) {
	tst	r3, #2	@ n,
	bne	.L92		@,
@ startup.c:482:         if (!(n & CCM_ANALOG_PLL_USB1_ENABLE)) {
	tst	r3, #8192	@ n,
	beq	.L93		@,
@ startup.c:488:         if (!(n & CCM_ANALOG_PLL_USB1_POWER)) {
	tst	r3, #4096	@ n,
	beq	.L94		@,
@ startup.c:493:         if (!(n & CCM_ANALOG_PLL_USB1_LOCK)) {
	cmp	r3, #0	@ n,
	bge	.L84		@,
@ startup.c:497:         if (n & CCM_ANALOG_PLL_USB1_BYPASS) {
	tst	r3, #65536	@ n,
	bne	.L95		@,
@ startup.c:502:         if (!(n & CCM_ANALOG_PLL_USB1_EN_USB_CLKS)) {
	lsls	r3, r3, #25	@, n,
	bpl	.L96		@,
@ startup.c:509: }
	pop	{r4, r5, r6, r7}	@
	bx	lr	@
.L92:
@ startup.c:474:             CCM_ANALOG_PLL_USB1_CLR = 0xC000;            // bypass 24 MHz
	str	r4, [r2, #24]	@ tmp144, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset018
@ startup.c:475:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_BYPASS;    // bypass
	str	r1, [r2, #20]	@ tmp141, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset014
@ startup.c:476:             CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_POWER |    // power down
	str	r0, [r2, #24]	@ tmp145, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset018
@ startup.c:480:             continue;
	b	.L84		@
.L93:
@ startup.c:485:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_ENABLE;
	str	r5, [r2, #20]	@ tmp143, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset014
@ startup.c:486:             continue;
	b	.L84		@
.L94:
@ startup.c:490:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_POWER;
	str	r6, [r2, #20]	@ tmp142, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset014
@ startup.c:491:             continue;
	b	.L84		@
.L95:
@ startup.c:499:             CCM_ANALOG_PLL_USB1_CLR = CCM_ANALOG_PLL_USB1_BYPASS;
	str	r1, [r2, #24]	@ tmp141, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset018
@ startup.c:500:             continue;
	b	.L84		@
.L96:
@ startup.c:504:             CCM_ANALOG_PLL_USB1_SET = CCM_ANALOG_PLL_USB1_EN_USB_CLKS;
	str	r7, [r2, #20]	@ tmp140, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset014
@ startup.c:505:             continue;
	b	.L84		@
.L98:
	.align	2
.L97:
	.word	1074626560
	.fnend
	.size	usb_pll_start, .-usb_pll_start
	.section	.startup
	.align	1
	.p2align 2,,3
	.global	ResetHandler
	.syntax unified
	.thumb
	.thumb_func
	.type	ResetHandler, %function
ResetHandler:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}	@
	.save {r3, r4, r5, r6, r7, r8, r9, r10, fp, lr}
@ startup.c:64:     IOMUXC_GPR_GPR17 = (uint32_t)&_flexram_bank_config;
	ldr	r2, .L111	@ _flexram_bank_config.0_1,
@ startup.c:66:     IOMUXC_GPR_GPR14 = 0x00AA0000;
	mov	r1, #11141120	@ tmp146,
@ startup.c:64:     IOMUXC_GPR_GPR17 = (uint32_t)&_flexram_bank_config;
	ldr	r3, .L111+4	@ tmp142,
@ startup.c:65:     IOMUXC_GPR_GPR16 = 0x00200007;
	ldr	r0, .L111+8	@ tmp144,
@ startup.c:64:     IOMUXC_GPR_GPR17 = (uint32_t)&_flexram_bank_config;
	str	r2, [r3, #68]	@ _flexram_bank_config.0_1, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset044
@ startup.c:65:     IOMUXC_GPR_GPR16 = 0x00200007;
	str	r0, [r3, #64]	@ tmp144, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset040
@ startup.c:67:     __asm__ volatile("mov sp, %0" : : "r" ((uint32_t)&_estack) : );
	ldr	r2, .L111+12	@ tmp147,
@ startup.c:66:     IOMUXC_GPR_GPR14 = 0x00AA0000;
	str	r1, [r3, #56]	@ tmp146, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset038
@ startup.c:67:     __asm__ volatile("mov sp, %0" : : "r" ((uint32_t)&_estack) : );
	.syntax unified
@ 67 "startup.c" 1
	mov sp, r2	@ tmp147
@ 0 "" 2
@ startup.c:68:     __asm__ volatile("dsb":::"memory");
@ 68 "startup.c" 1
	dsb	
@ 0 "" 2
@ startup.c:69:     __asm__ volatile("isb":::"memory");
@ 69 "startup.c" 1
	isb	
@ 0 "" 2
@ startup.c:71:     startup_early_hook(); // must be in FLASHMEM, as ITCM is not yet initialized!
	.thumb
	.syntax unified
	ldr	r3, .L111+16	@ tmp148,
	blx	r3		@ tmp148
@ startup.c:72:     PMU_MISC0_SET = 1<<3; //Use bandgap-based bias currents for best performance (Page 1175)
	ldr	r3, .L111+20	@ tmp149,
	movs	r0, #8	@ tmp150,
@ startup.c:81:     memory_copy(&_stext, &_stextload, &_etext);
	ldr	r2, .L111+24	@,
	ldr	r1, .L111+28	@,
@ startup.c:72:     PMU_MISC0_SET = 1<<3; //Use bandgap-based bias currents for best performance (Page 1175)
	str	r0, [r3, #340]	@ tmp150, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset154
@ startup.c:81:     memory_copy(&_stext, &_stextload, &_etext);
	ldr	r0, .L111+32	@,
	bl	memory_copy		@
@ startup.c:82:     memory_copy(&_sdata, &_sdataload, &_edata);
	ldr	r2, .L111+36	@,
	ldr	r1, .L111+40	@,
	ldr	r0, .L111+44	@,
	bl	memory_copy		@
@ startup.c:83:     memory_clear(&_sbss, &_ebss);
	ldr	r1, .L111+48	@,
	ldr	r0, .L111+52	@,
	bl	memory_clear		@
	ldr	r4, .L111+56	@ tmp257,
@ startup.c:86:     SCB_CPACR = 0x00F00000;
	mov	r1, #-536813568	@ tmp159,
	mov	r0, #15728640	@ tmp160,
@ startup.c:89:     for (i=0; i < NVIC_NUM_INTERRUPTS + 16; i++) _VectorsRam[i] = &unused_interrupt_vector;
	movs	r3, #0	@ i,
	ldr	r2, .L111+60	@ tmp256,
@ startup.c:86:     SCB_CPACR = 0x00F00000;
	str	r0, [r1, #3464]	@ tmp160, MEM[(volatile uint32_t *)3758157192B]
.L100:
@ startup.c:89:     for (i=0; i < NVIC_NUM_INTERRUPTS + 16; i++) _VectorsRam[i] = &unused_interrupt_vector;
	str	r2, [r4, r3, lsl #2]	@ tmp256, _VectorsRam[i_106]
@ startup.c:89:     for (i=0; i < NVIC_NUM_INTERRUPTS + 16; i++) _VectorsRam[i] = &unused_interrupt_vector;
	adds	r3, r3, #1	@ i, i,
@ startup.c:89:     for (i=0; i < NVIC_NUM_INTERRUPTS + 16; i++) _VectorsRam[i] = &unused_interrupt_vector;
	cmp	r3, #176	@ i,
	bne	.L100		@,
	ldr	r3, .L111+64	@ ivtmp.131,
@ startup.c:90:     for (i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
	movs	r1, #128	@ tmp163,
@ startup.c:90:     for (i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
	ldr	r2, .L111+68	@ tmp165,
.L101:
@ startup.c:90:     for (i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
	strb	r1, [r3], #1	@ tmp163, *_3
@ startup.c:90:     for (i=0; i < NVIC_NUM_INTERRUPTS; i++) NVIC_SET_PRIORITY(i, 128);
	cmp	r3, r2	@ ivtmp.131, tmp165
	bne	.L101		@,
@ startup.c:91:     SCB_VTOR = (uint32_t)_VectorsRam;
	mov	r5, #-536813568	@ tmp167,
@ startup.c:514:     CCM_ANALOG_PFD_528_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	ldr	r6, .L111+20	@ tmp168,
	mov	r9, #-2139062144	@ tmp169,
@ startup.c:515:     CCM_ANALOG_PFD_528 = 0x2018101B; // PFD0:352, PFD1:594, PFD2:396, PFD3:297 MHz
	ldr	fp, .L111+160	@ tmp171,
@ startup.c:518:     CCM_ANALOG_PFD_480 = 0x13110D0C; // PFD0:720, PFD1:664, PFD2:508, PFD3:454 MHz
	ldr	r10, .L111+164	@ tmp175,
@ startup.c:107:     IOMUXC_GPR_GPR26 = 0xFFFFFFFF;
	mov	r1, #-1	@ tmp185,
@ startup.c:91:     SCB_VTOR = (uint32_t)_VectorsRam;
	str	r4, [r5, #3336]	@ tmp257, MEM[(volatile uint32_t *)3758157064B]
@ startup.c:191:     SYST_CVR = 0;
	movs	r7, #0	@ tmp200,
@ startup.c:514:     CCM_ANALOG_PFD_528_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	str	r9, [r6, #260]	@ tmp169, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset104
@ startup.c:515:     CCM_ANALOG_PFD_528 = 0x2018101B; // PFD0:352, PFD1:594, PFD2:396, PFD3:297 MHz
	str	fp, [r6, #256]	@ tmp171, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset100
@ startup.c:517:     CCM_ANALOG_PFD_480_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	str	r9, [r6, #244]	@ tmp169, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset0F4
@ startup.c:518:     CCM_ANALOG_PFD_480 = 0x13110D0C; // PFD0:720, PFD1:664, PFD2:508, PFD3:454 MHz
	str	r10, [r6, #240]	@ tmp175, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset0F0
@ startup.c:96:     SCB_SHCSR |= SCB_SHCSR_MEMFAULTENA | SCB_SHCSR_BUSFAULTENA | SCB_SHCSR_USGFAULTENA;
	ldr	r3, [r5, #3364]	@ _5, MEM[(volatile uint32_t *)3758157092B]
@ startup.c:101:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	ldr	r8, .L111+168	@ tmp178,
@ startup.c:96:     SCB_SHCSR |= SCB_SHCSR_MEMFAULTENA | SCB_SHCSR_BUSFAULTENA | SCB_SHCSR_USGFAULTENA;
	orr	r3, r3, #458752	@ _6, _5,
@ startup.c:107:     IOMUXC_GPR_GPR26 = 0xFFFFFFFF;
	ldr	r2, .L111+4	@ tmp184,
@ startup.c:96:     SCB_SHCSR |= SCB_SHCSR_MEMFAULTENA | SCB_SHCSR_BUSFAULTENA | SCB_SHCSR_USGFAULTENA;
	str	r3, [r5, #3364]	@ _6, MEM[(volatile uint32_t *)3758157092B]
@ startup.c:101:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	ldr	r3, [r8, #28]	@ _7, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset01C
@ startup.c:101:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	bic	r3, r3, #127	@ tmp179, _7,
	orr	r3, r3, #64	@ _9, tmp179,
@ startup.c:101:     CCM_CSCMR1 = (CCM_CSCMR1 & ~CCM_CSCMR1_PERCLK_PODF(0x3F)) | CCM_CSCMR1_PERCLK_CLK_SEL;
	str	r3, [r8, #28]	@ _9, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset01C
@ startup.c:103:     CCM_CSCDR1 = (CCM_CSCDR1 & ~CCM_CSCDR1_UART_CLK_PODF(0x3F)) | CCM_CSCDR1_UART_CLK_SEL;
	ldr	r3, [r8, #36]	@ _10, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset024
@ startup.c:103:     CCM_CSCDR1 = (CCM_CSCDR1 & ~CCM_CSCDR1_UART_CLK_PODF(0x3F)) | CCM_CSCDR1_UART_CLK_SEL;
	bic	r3, r3, #127	@ tmp182, _10,
	orr	r3, r3, #64	@ _12, tmp182,
@ startup.c:103:     CCM_CSCDR1 = (CCM_CSCDR1 & ~CCM_CSCDR1_UART_CLK_PODF(0x3F)) | CCM_CSCDR1_UART_CLK_SEL;
	str	r3, [r8, #36]	@ _12, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset024
@ startup.c:107:     IOMUXC_GPR_GPR26 = 0xFFFFFFFF;
	str	r1, [r2, #104]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset068
@ startup.c:118:     configure_cache();
	ldr	r3, .L111+72	@ tmp192,
@ startup.c:108:     IOMUXC_GPR_GPR27 = 0xFFFFFFFF;
	str	r1, [r2, #108]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset06C
@ startup.c:109:     IOMUXC_GPR_GPR28 = 0xFFFFFFFF;
	str	r1, [r2, #112]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset070
@ startup.c:110:     IOMUXC_GPR_GPR29 = 0xFFFFFFFF;
	str	r1, [r2, #116]	@ tmp185, MEM[(struct IMXRT_REGISTER32_t *)1074446336B].offset074
@ startup.c:118:     configure_cache();
	blx	r3		@ tmp192
@ startup.c:188:     _VectorsRam[14] = pendablesrvreq_isr;
	ldr	r3, .L111+76	@ tmp194,
@ startup.c:196:     systick_cycle_count = ARM_DWT_CYCCNT; // compiled 0, corrected w/1st systick
	ldr	r0, .L111+80	@ tmp210,
@ startup.c:188:     _VectorsRam[14] = pendablesrvreq_isr;
	str	r3, [r4, #56]	@ tmp194, _VectorsRam[14]
@ startup.c:189:     _VectorsRam[15] = systick_isr;
	ldr	r3, .L111+84	@ tmp196,
@ startup.c:120:     usb_pll_start();
	ldr	r1, .L111+88	@ tmp211,
@ startup.c:189:     _VectorsRam[15] = systick_isr;
	str	r3, [r4, #60]	@ tmp196, _VectorsRam[15]
@ startup.c:190:     SYST_RVR = (SYSTICK_EXT_FREQ / 1000) - 1;
	movs	r3, #99	@ tmp198,
	str	r3, [r5, #20]	@ tmp198, MEM[(volatile uint32_t *)3758153748B]
@ startup.c:192:     SYST_CSR = SYST_CSR_TICKINT | SYST_CSR_ENABLE;
	movs	r3, #3	@ tmp202,
@ startup.c:191:     SYST_CVR = 0;
	str	r7, [r5, #24]	@ tmp200, MEM[(volatile uint32_t *)3758153752B]
@ startup.c:192:     SYST_CSR = SYST_CSR_TICKINT | SYST_CSR_ENABLE;
	str	r3, [r5, #16]	@ tmp202, MEM[(volatile uint32_t *)3758153744B]
@ startup.c:193:     SCB_SHPR3 = 0x20200000;  // Systick, pendablesrvreq_isr = priority 32;
	ldr	r3, .L111+92	@ tmp204,
	str	r3, [r5, #3360]	@ tmp204, MEM[(volatile uint32_t *)3758157088B]
@ startup.c:194:     ARM_DEMCR |= ARM_DEMCR_TRCENA;
	ldr	r3, [r5, #3580]	@ _87, MEM[(volatile uint32_t *)3758157308B]
	orr	r3, r3, #16777216	@ _88, _87,
	str	r3, [r5, #3580]	@ _88, MEM[(volatile uint32_t *)3758157308B]
@ startup.c:195:     ARM_DWT_CTRL |= ARM_DWT_CTRL_CYCCNTENA; // turn on cycle counter
	ldr	r3, .L111+96	@ tmp207,
	ldr	r2, [r3]	@ _89, MEM[(volatile uint32_t *)3758100480B]
	orr	r2, r2, #1	@ _90, _89,
	str	r2, [r3]	@ _90, MEM[(volatile uint32_t *)3758100480B]
@ startup.c:196:     systick_cycle_count = ARM_DWT_CYCCNT; // compiled 0, corrected w/1st systick
	ldr	r3, [r3, #4]	@ _91, MEM[(volatile uint32_t *)3758100484B]
@ startup.c:196:     systick_cycle_count = ARM_DWT_CYCCNT; // compiled 0, corrected w/1st systick
	str	r3, [r0]	@ _91, systick_cycle_count
@ startup.c:120:     usb_pll_start();
	blx	r1		@ tmp211
@ startup.c:514:     CCM_ANALOG_PFD_528_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	str	r9, [r6, #260]	@ tmp169, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset104
@ startup.c:123:     set_arm_clock(F_CPU);
	ldr	r3, .L111+100	@ tmp221,
@ startup.c:515:     CCM_ANALOG_PFD_528 = 0x2018101B; // PFD0:352, PFD1:594, PFD2:396, PFD3:297 MHz
	str	fp, [r6, #256]	@ tmp171, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset100
@ startup.c:123:     set_arm_clock(F_CPU);
	ldr	r0, .L111+104	@,
@ startup.c:517:     CCM_ANALOG_PFD_480_SET = (1 << 31) | (1 << 23) | (1 << 15) | (1 << 7);
	str	r9, [r6, #244]	@ tmp169, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset0F4
@ startup.c:518:     CCM_ANALOG_PFD_480 = 0x13110D0C; // PFD0:720, PFD1:664, PFD2:508, PFD3:454 MHz
	str	r10, [r6, #240]	@ tmp175, MEM[(struct IMXRT_REGISTER32_t *)1074626560B].offset0F0
@ startup.c:123:     set_arm_clock(F_CPU);
	blx	r3		@ tmp221
@ startup.c:127:     CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	ldr	r1, [r8, #108]	@ _13, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset06C
@ startup.c:128:     PIT_MCR = 0;
	ldr	r3, .L111+108	@ tmp224,
@ startup.c:135:     if (!(SNVS_LPCR & SNVS_LPCR_SRTC_ENV)) {
	ldr	r2, .L111+112	@ tmp234,
@ startup.c:127:     CCM_CCGR1 |= CCM_CCGR1_PIT(CCM_CCGR_ON);
	orr	r1, r1, #12288	@ _14, _13,
	str	r1, [r8, #108]	@ _14, MEM[(struct IMXRT_REGISTER32_t *)1074774016B].offset06C
@ startup.c:128:     PIT_MCR = 0;
	str	r7, [r3]	@ tmp200, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset000
@ startup.c:129:     PIT_TCTRL0 = 0;
	str	r7, [r3, #264]	@ tmp200, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset108
@ startup.c:130:     PIT_TCTRL1 = 0;
	str	r7, [r3, #280]	@ tmp200, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset118
@ startup.c:131:     PIT_TCTRL2 = 0;
	str	r7, [r3, #296]	@ tmp200, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset128
@ startup.c:132:     PIT_TCTRL3 = 0;
	str	r7, [r3, #312]	@ tmp200, MEM[(struct IMXRT_REGISTER32_t *)1074282496B].offset138
@ startup.c:135:     if (!(SNVS_LPCR & SNVS_LPCR_SRTC_ENV)) {
	ldr	r3, [r2, #56]	@ _15, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset038
@ startup.c:135:     if (!(SNVS_LPCR & SNVS_LPCR_SRTC_ENV)) {
	lsls	r3, r3, #31	@, _15,
	bmi	.L102		@,
@ startup.c:138:         SNVS_LPSRTCMR = 1546300800u >> 17;
	movw	r3, #11797	@ tmp239,
@ startup.c:137:         SNVS_LPSRTCLR = 1546300800u << 15;
	ldr	r1, .L111+116	@ tmp237,
	str	r1, [r2, #84]	@ tmp237, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset054
@ startup.c:138:         SNVS_LPSRTCMR = 1546300800u >> 17;
	str	r3, [r2, #80]	@ tmp239, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset050
@ startup.c:139:         SNVS_LPCR |= SNVS_LPCR_SRTC_ENV;
	ldr	r3, [r2, #56]	@ _17, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset038
	orr	r3, r3, #1	@ _18, _17,
	str	r3, [r2, #56]	@ _18, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset038
.L102:
@ startup.c:141:     SNVS_HPCR |= SNVS_HPCR_RTC_EN | SNVS_HPCR_HP_TS;
	ldr	r2, .L111+112	@ tmp242,
@ startup.c:144:     configure_external_ram();
	ldr	r1, .L111+120	@ tmp244,
@ startup.c:141:     SNVS_HPCR |= SNVS_HPCR_RTC_EN | SNVS_HPCR_HP_TS;
	ldr	r3, [r2, #8]	@ _19, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset008
	ldr	r4, .L111+124	@ tmp255,
	orr	r3, r3, #65537	@ _20, _19,
	str	r3, [r2, #8]	@ _20, MEM[(struct IMXRT_REGISTER32_t *)1074610176B].offset008
@ startup.c:144:     configure_external_ram();
	blx	r1		@ tmp244
@ startup.c:146:     analog_init();
	ldr	r3, .L111+128	@ tmp245,
	blx	r3		@ tmp245
@ startup.c:147:     pwm_init();
	ldr	r3, .L111+132	@ tmp246,
	blx	r3		@ tmp246
@ startup.c:148:     tempmon_init();
	ldr	r3, .L111+136	@ tmp247,
	blx	r3		@ tmp247
@ startup.c:149:     startup_middle_hook();
	ldr	r3, .L111+140	@ tmp248,
	blx	r3		@ tmp248
.L103:
@ core_pins.h:2443: 	return systick_millis_count;
	ldr	r3, [r4]	@ _77, systick_millis_count
@ startup.c:160:     while (millis() < TEENSY_INIT_USB_DELAY_BEFORE) ; // wait
	cmp	r3, #19	@ _77,
	bls	.L103		@,
@ startup.c:161:     usb_init();
	ldr	r3, .L111+144	@ tmp250,
	blx	r3		@ tmp250
.L104:
@ core_pins.h:2443: 	return systick_millis_count;
	ldr	r3, [r4]	@ _78, systick_millis_count
@ startup.c:162:     while (millis() < TEENSY_INIT_USB_DELAY_AFTER + TEENSY_INIT_USB_DELAY_BEFORE) ; // wait
	cmp	r3, #300	@ _78,
	bcc	.L104		@,
@ startup.c:164:     startup_late_hook();
	ldr	r3, .L111+148	@ tmp252,
	blx	r3		@ tmp252
@ startup.c:165:     __libc_init_array();
	ldr	r3, .L111+152	@ tmp253,
	blx	r3		@ tmp253
@ startup.c:168:     main();
	ldr	r3, .L111+156	@ tmp254,
	blx	r3		@ tmp254
.L105:
@ startup.c:169:     while (1) asm("WFI");
	.syntax unified
@ 169 "startup.c" 1
	WFI
@ 0 "" 2
	.thumb
	.syntax unified
	b	.L105		@
.L112:
	.align	2
.L111:
	.word	_flexram_bank_config
	.word	1074446336
	.word	2097159
	.word	_estack
	.word	startup_early_hook
	.word	1074626560
	.word	_etext
	.word	_stextload
	.word	_stext
	.word	_edata
	.word	_sdataload
	.word	_sdata
	.word	_ebss
	.word	_sbss
	.word	.LANCHOR2
	.word	unused_interrupt_vector
	.word	-536812544
	.word	-536812384
	.word	configure_cache
	.word	pendablesrvreq_isr
	.word	systick_cycle_count
	.word	systick_isr
	.word	usb_pll_start
	.word	538968064
	.word	-536866816
	.word	set_arm_clock
	.word	600000000
	.word	1074282496
	.word	1074610176
	.word	1455423488
	.word	configure_external_ram
	.word	systick_millis_count
	.word	analog_init
	.word	pwm_init
	.word	tempmon_init
	.word	startup_middle_hook
	.word	usb_init
	.word	startup_late_hook
	.word	__libc_init_array
	.word	main
	.word	538447899
	.word	319884556
	.word	1074774016
	.fnend
	.size	ResetHandler, .-ResetHandler
	.section	.text._sbrk,"ax",%progbits
	.align	1
	.p2align 2,,3
	.global	_sbrk
	.syntax unified
	.thumb
	.thumb_func
	.type	_sbrk, %function
_sbrk:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
@ startup.c:649:         char *prev = __brkval;
	ldr	r1, .L124	@ tmp118,
	ldr	r2, [r1]	@ <retval>, __brkval
@ startup.c:650:         if (incr != 0) {
	cbz	r0, .L120	@ incr,
@ startup.c:648: {
	push	{r3, lr}	@
	.save {r3, lr}
@ startup.c:651:                 if (prev + incr > (char *)&_heap_end) {
	adds	r3, r2, r0	@ _2, <retval>, incr
@ startup.c:651:                 if (prev + incr > (char *)&_heap_end) {
	ldr	r0, .L124+4	@ tmp119,
	cmp	r3, r0	@ _2, tmp119
	bhi	.L123		@,
@ startup.c:658: }
	mov	r0, r2	@, <retval>
@ startup.c:655:                 __brkval = prev + incr;
	str	r3, [r1]	@ _2, __brkval
@ startup.c:658: }
	pop	{r3, pc}	@
.L120:
	mov	r0, r2	@, <retval>
	bx	lr	@
.L123:
@ startup.c:652:                         errno = ENOMEM;
	ldr	r3, .L124+8	@ tmp120,
	blx	r3		@ tmp120
@ startup.c:652:                         errno = ENOMEM;
	movs	r3, #12	@ tmp121,
@ startup.c:653:                         return (void *)-1;
	mov	r2, #-1	@ <retval>,
@ startup.c:652:                         errno = ENOMEM;
	str	r3, [r0]	@ tmp121, *_3
@ startup.c:658: }
	mov	r0, r2	@, <retval>
	pop	{r3, pc}	@
.L125:
	.align	2
.L124:
	.word	.LANCHOR3
	.word	_heap_end
	.word	__errno
	.fnend
	.size	_sbrk, .-_sbrk
	.section	.text._read,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_read
	.syntax unified
	.thumb
	.thumb_func
	.type	_read, %function
_read:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:664: }
	movs	r0, #0	@,
	bx	lr	@
	.fnend
	.size	_read, .-_read
	.section	.text._close,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_close
	.syntax unified
	.thumb
	.thumb_func
	.type	_close, %function
_close:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:670: }
	mov	r0, #-1	@,
	bx	lr	@
	.fnend
	.size	_close, .-_close
	.section	.text._fstat,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_fstat
	.syntax unified
	.thumb
	.thumb_func
	.type	_fstat, %function
_fstat:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:677:     st->st_mode = S_IFCHR;
	mov	r3, #8192	@ tmp116,
@ startup.c:679: }
	movs	r0, #0	@,
@ startup.c:677:     st->st_mode = S_IFCHR;
	str	r3, [r1, #4]	@ tmp116, st_2(D)->st_mode
@ startup.c:679: }
	bx	lr	@
	.fnend
	.size	_fstat, .-_fstat
	.section	.text._isatty,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_isatty
	.syntax unified
	.thumb
	.thumb_func
	.type	_isatty, %function
_isatty:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:685: }
	movs	r0, #1	@,
	bx	lr	@
	.fnend
	.size	_isatty, .-_isatty
	.section	.text._lseek,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_lseek
	.syntax unified
	.thumb
	.thumb_func
	.type	_lseek, %function
_lseek:
	.fnstart
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:691: }
	mov	r0, #-1	@,
	bx	lr	@
	.fnend
	.size	_lseek, .-_lseek
	.section	.text._exit,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	_exit
	.syntax unified
	.thumb
	.thumb_func
	.type	_exit, %function
_exit:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
.L132:
@ startup.c:696:     while (1) asm ("WFI");
	.syntax unified
@ 696 "startup.c" 1
	WFI
@ 0 "" 2
	.thumb
	.syntax unified
	b	.L132		@
	.fnend
	.size	_exit, .-_exit
	.section	.text.__cxa_pure_virtual,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	__cxa_pure_virtual
	.syntax unified
	.thumb
	.thumb_func
	.type	__cxa_pure_virtual, %function
__cxa_pure_virtual:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
.L134:
@ startup.c:702:     while (1) asm ("WFI");
	.syntax unified
@ 702 "startup.c" 1
	WFI
@ 0 "" 2
	.thumb
	.syntax unified
	b	.L134		@
	.fnend
	.size	__cxa_pure_virtual, .-__cxa_pure_virtual
	.section	.text.__cxa_guard_acquire,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	__cxa_guard_acquire
	.syntax unified
	.thumb
	.thumb_func
	.type	__cxa_guard_acquire, %function
__cxa_guard_acquire:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:708:     return !(*g);
	ldrb	r0, [r0]	@ zero_extendqisi2	@ *g_4(D), *g_4(D)
@ startup.c:709: }
	clz	r0, r0	@, *g_4(D)
	lsrs	r0, r0, #5	@,,
	bx	lr	@
	.fnend
	.size	__cxa_guard_acquire, .-__cxa_guard_acquire
	.section	.text.__cxa_guard_release,"ax",%progbits
	.align	1
	.p2align 2,,3
	.weak	__cxa_guard_release
	.syntax unified
	.thumb
	.thumb_func
	.type	__cxa_guard_release, %function
__cxa_guard_release:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ startup.c:714:     *g = 1;
	movs	r3, #1	@ tmp114,
	strb	r3, [r0]	@ tmp114, *g_2(D)
@ startup.c:715: }
	bx	lr	@
	.fnend
	.size	__cxa_guard_release, .-__cxa_guard_release
	.section	.text.unlikely.abort,"ax",%progbits
	.align	1
	.weak	abort
	.syntax unified
	.thumb
	.thumb_func
	.type	abort, %function
abort:
	.fnstart
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
.L138:
@ startup.c:720:     while (1) asm ("WFI");
	.syntax unified
@ 720 "startup.c" 1
	WFI
@ 0 "" 2
	.thumb
	.syntax unified
	b	.L138		@
	.fnend
	.size	abort, .-abort
	.global	__brkval
	.global	extmem_smalloc_pool
	.global	external_psram_size
	.global	_VectorsRam
	.section	.bss.external_psram_size,"aw",%nobits
	.set	.LANCHOR0,. + 0
	.type	external_psram_size, %object
	.size	external_psram_size, 1
external_psram_size:
	.space	1
	.section	.bss.extmem_smalloc_pool,"aw",%nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	extmem_smalloc_pool, %object
	.size	extmem_smalloc_pool, 16
extmem_smalloc_pool:
	.space	16
	.section	.data.__brkval,"aw"
	.align	2
	.set	.LANCHOR3,. + 0
	.type	__brkval, %object
	.size	__brkval, 4
__brkval:
	.word	_heap_start
	.section	.vectorsram,"aw"
	.align	10
	.set	.LANCHOR2,. + 0
	.type	_VectorsRam, %object
	.size	_VectorsRam, 704
_VectorsRam:
	.space	704
	.ident	"GCC: (Arm GNU Toolchain 11.3.Rel1) 11.3.1 20220712"
