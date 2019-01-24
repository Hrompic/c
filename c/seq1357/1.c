#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	register long long int x,y=1;
	register long double z;
	if(argc<2) return -1;
	register long long int t = atol(argv[1]);
	for(x=0; x<=t; x+=2)
	{
		
		z += (double)(1/(1+(double)x));
	}
	printf("%f  --  1/%lli\n", z, x+1);
}
