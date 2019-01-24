#include <stdio.h>

int main()
{
	int x, y=2, a=12, b;
	__asm("mov ebx, eax"
		"mov ecx, edx"
		:"=ebx"(x),
		"=ecx"(b)
		:"eax"(y),
		"edx"(a));
	printf("%d %d", x, b);
}
