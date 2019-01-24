	.file	"1.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "1234\0"
.LC1:
	.ascii "5678\0"
.LC2:
	.ascii "%s\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	leaq	-32(%rbp), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rcx
	call	printf
	addl	$1, -4(%rbp)
.L2:
	cmpl	$999, -4(%rbp)
	jle	.L3
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 6.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
