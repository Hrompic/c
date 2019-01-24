#include <stdio.h>

int main()
{
	unsigned long long int i, z=1, x=1;
	long double r,p;
	for(i=0; i<100; i++)
	{
	z += x;
	r = (long double)z/(long double)x;
	x += z;
	p = (double)x/(double)z;
	printf("%lld \t %.050Lf \n%lld \t %.050Lf\n", z, r, x, p);
	}
}
