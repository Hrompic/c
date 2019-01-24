#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	char *a[] = {"1234","5678"};
	for(int x=0; x<100; x++)
	printf("%s",a[x]);
}
