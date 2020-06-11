#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ts 10000000.

int main()
{
	char* tt = malloc(ts);
//	char tt[ts];
	int a=0, b=0;
	srand(time(NULL));
	for(int i=0; i<ts; i++)
		tt[i] = rand()%2;

	for(int i=0; i<ts; i++)
	//	printf("%d\n", tt[i]);
	{
		if(tt[i])
			a++;
		else
			b++;

	}
	printf("%d - %d -- %f%%\n", a, b,
			(double)a <= ((double)ts / 2.) 
			?(double)b/(ts)*100
			:((double)a/(ts)*100)
			);
	
}
