#include <stdio.h>

int main()
{
	int x,y=1;
	double z,w;
	for(x=0; x<=1000000; x++)
	{
		y*=-1;
		z = (double)(1/(1+(double)x))*y;
	}

		printf("%f  --  %d/%d \tsumm:%f\n", z, y, x+1,w+=z);
}
