#include <stdio.h>

int main()
{	
	double x=0;

	for(long long int j=1; j<=1<<30; j*=2)
	{
		double a=1/(double) j;
		x+=a;
		static int z = 0;
		printf("%.20f + %.20f\t--\t1/%d  ^  %d\n", x, a, j, z);
		z++;
	}
	return 0;
}
double avsumm()
	for(long long int j=1; j<=1<<30; j*=2)
	{
		double a=1/(double) j;
		x+=a;
		static int z = 0;
		printf("%.20f + %.20f\t--\t1/%d  ^  %d\n", x, a, j, z);
		z++;
	}
