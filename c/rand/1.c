#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	srand(/*atoi(argv[1])*/ time(NULL));
	for(int a=0; a<100; a++)
		 printf("%d\t",rand());
}
