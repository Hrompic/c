#include <stdio.h>

int main()
{
	FILE * fd = fopen("123","a");
	fprintf(fd,"bla-bla\n");
	fclose(fd);
	return 0;
}
