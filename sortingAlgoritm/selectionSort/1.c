#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define sz 100
#define swap(a, b) do{a^=b; b^=a; a^=b;} while(0)
void dump(int *mass)
{
    for(int i=0; i<sz; i++)
        printf("%d\t", mass[i]);
    printf("\n");
}
int main()
{
    srand(time(NULL));
    int mass[sz];
    for(int i=0; i<sz; i++)
    {
        mass[i] = rand()%sz;
    }
    dump(mass);
    int min;
    for(int i=0; i < sz-1; i++)
    {
        min=i;
        for(int j = i+1; j<sz; j++)
		{
            if(mass[min] >= mass[j])
                min = j;
		}
		if(i!=min)
			swap(mass[i], mass[min]);
	}
    dump(mass);
}
