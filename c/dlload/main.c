#include <stdio.h>
#include <dlfcn.h>
int main()
{
	void * hnd;
	int (* add)(int, int);
	hnd = dlopen("./lib.so", RTLD_LAZY);
	add = dlsym(hnd, "add");
	printf ("%d\n", (* add)(20, 30));
	dlclose(hnd);
	return 0;
}
