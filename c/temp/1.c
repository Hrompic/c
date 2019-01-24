#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * pfile = fopen("123.sh","w");
	fprintf(pfile,"exit");
	fclose(pfile);
	puts("File clossed");
	system("sh 123.sh");
	exit(0);
}
