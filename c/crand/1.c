#include <stdio.h>
#include <stdlib.h>
#define MSIZE 6
int main()
{
	srand(1);
	int mass[MSIZE];
	for( int i=0; i<MSIZE; i++)
		mass[i] = rand();
	//	printf("%d %d\n", sizeof(long long), sizeof(long));
	for( long i=0; i<((long) 1<<32); i++)
	{
		if(mass[0]!=rand()) continue;
		if(mass[1]!=rand()) continue;
	printf("%ld\n", i);
	}
	//	printf("%d\t%d\t%d\t%d\n", rand(), rand(), rand(), rand());
}
