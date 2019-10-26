#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ts 10000000

int main()
{
//	char* tt = malloc(ts);
	char tt[ts];
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
	printf("%d - %d -- %f%%\n", a, b, (double)a/(ts/2)>=1? 1-(double)a/(ts/2)*100: 1-(1/((double)a/(ts/2)*100)));
}

