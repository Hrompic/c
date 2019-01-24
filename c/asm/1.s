	.file	"1.c"
	.intel_syntax noprefix
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 48
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	mov	DWORD PTR -4[rbp], 2
	mov	DWORD PTR -8[rbp], 12
	mov	eax, DWORD PTR -4[rbp]
	mov	edx, DWORD PTR -8[rbp]
/APP
 # 6 "1.c" 1
	mov ebx, eaxmov ecx, edx
 # 0 "" 2
/NO_APP
	movd	eax, xmm1
	movd	edx, xmm0
	mov	DWORD PTR -12[rbp], edx
	mov	DWORD PTR -16[rbp], eax
	mov	edx, DWORD PTR -16[rbp]
	mov	eax, DWORD PTR -12[rbp]
	mov	r8d, edx
	mov	edx, eax
	lea	rcx, .LC0[rip]
	call	printf
	mov	eax, 0
	add	rsp, 48
	pop	rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 7.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
