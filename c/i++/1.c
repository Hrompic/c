#include <stdio.h>

int main()
{
	int i=0, z=0;
	while(i<20)
	{
		int p = i++;
		int q = ++z;
		printf("%d - %d\n", p, q);
	}
}
