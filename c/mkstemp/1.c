#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buf[64];
	strcpy(buf, "/data/data/com.termux/files/usr/tmp/ll_XXXXXX");
	int f =	mkstemp(buf);
	printf("%d", f);
	close(f);
}

