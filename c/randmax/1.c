#include <stdio.h>
//#include <stdlib.h>
static int rd;
#define RAND_MAX (1<<31)/2
void srand(int _rd)
{
	rd = _rd;
}

int rand()
{
	rd = (rd*12456745+1234);
	return (rd>>31)&RAND_MAX;	
}
int main()
{
	int a, b, c;
	long long i=0;
	srand(1);
	a = rand();
	c = rand();
loop:
	while(1)
	{
		b=rand();
		if((b==a) && (b=rand()==c)) break;
		i++;
	}
	printf("%ld\n%d\n --- %d\n", i, RAND_MAX, a);
	printf("\n");
	goto loop;
}
