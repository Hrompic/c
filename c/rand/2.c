#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(1);
	for(int i=0; i<1000; i++)
	{
		printf("%d\n",rand()%(1<<8));
	}
}
