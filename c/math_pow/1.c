#include <stdio.h>
#include <math.h>

int main()
{
	double a = M_E;
	int b;
	for(b=0; b<1000; b++){
	printf("E^%d = %e\n", b, pow(a,b));
	printf("E=%e\n",exp(1));
	}
	return 0;
}
