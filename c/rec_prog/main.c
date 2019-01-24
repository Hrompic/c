#include <stdio.h>
#include <stdlib.h>

int cycles;

int main(int argc, char** argv)
{
	
	char filename[32];
	if(argc >= 2) cycles = atoi(argv[2]);
	sprintf(filename,(cycles) ? "./rec_prog.exe\n":"./rec_prog%d.exe\n", cycles);
	FILE* fr = fopen(filename,"r");
	fseek(fr,0,SEEK_END);
	printf("%d\n",ftell(fr));
	char* buf = malloc((size_t)ftell(fr));
	printf("%l",ftell(fr));
	cycles++;
	sprintf(filename,(cycles) ? "./rec_prog.exe\n":"./rec_prog%d.exe\n", cycles);
	FILE* fw = fopen(filename,"w");
}
