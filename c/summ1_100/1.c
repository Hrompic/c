#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	long long unsigned int z=0;
	if(argc<2) return 0;
	for(int i=0; i<=atoi(argv[1]); i++)
	{
		z+=i;
		printf("%lld - %d\n", z, i);
	}
	return 0;
}
