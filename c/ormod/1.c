#include <stdio.h>

int main()
{
	int a=10;
	for(int i=1; i<=a; i++)
		printf("mod:%d or:%d -- %d\n", a%i, a&i, i);
}
