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
    for(int i=0; i<sz; i++)
    {
        for(int j=i; j>0; j--)
            if(mass[j] < mass[j-1])
                swap(mass[j], mass[j-1]);
            else
                break;
    }
    dump(mass);
}
