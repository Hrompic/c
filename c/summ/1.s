	.file	"1.c"
	.intel_syntax noprefix
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC2:
	.ascii "%.20f + %.20f\11--\11"
	.ascii "1/%d  ^  %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 80
	.seh_stackalloc	80
	.seh_endprologue
	call	__main
	pxor	xmm0, xmm0
	movsd	QWORD PTR -8[rbp], xmm0
	mov	QWORD PTR -16[rbp], 1
	jmp	.L2
.L3:
	pxor	xmm0, xmm0
	cvtsi2sdq	xmm0, QWORD PTR -16[rbp]
	movsd	xmm1, QWORD PTR .LC1[rip]
	divsd	xmm1, xmm0
	movapd	xmm0, xmm1
	movsd	QWORD PTR -24[rbp], xmm0
	movsd	xmm0, QWORD PTR -8[rbp]
	addsd	xmm0, QWORD PTR -24[rbp]
	movsd	QWORD PTR -8[rbp], xmm0
	mov	eax, DWORD PTR z.2938[rip]
	mov	rdx, QWORD PTR -16[rbp]
	movsd	xmm2, QWORD PTR -24[rbp]
	movsd	xmm1, QWORD PTR -24[rbp]
	movsd	xmm3, QWORD PTR -8[rbp]
	movsd	xmm0, QWORD PTR -8[rbp]
	mov	DWORD PTR 32[rsp], eax
	mov	r9, rdx
	movq	r8, xmm1
	movapd	xmm1, xmm3
	movq	rdx, xmm0
	lea	rcx, .LC2[rip]
	call	printf
	mov	eax, DWORD PTR z.2938[rip]
	add	eax, 1
	mov	DWORD PTR z.2938[rip], eax
	sal	QWORD PTR -16[rbp]
.L2:
	cmp	QWORD PTR -16[rbp], 1073741824
	jle	.L3
	mov	eax, 0
	add	rsp, 80
	pop	rbp
	ret
	.seh_endproc
.lcomm z.2938,4,4
	.section .rdata,"dr"
	.align 8
.LC1:
	.long	0
	.long	1072693248
	.ident	"GCC: (GNU) 6.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
