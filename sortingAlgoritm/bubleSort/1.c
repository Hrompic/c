#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define sz 100
#define swap(a, b) do{a^=b; b^=a; a^=b;} while(0)
#define optim 1
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
#ifdef optim
    int swap;
#endif
    for(int i=0; i<sz; i++)
    {
#ifdef optim
    swap = 0;
#endif
        for(int j=0; j<sz -i -1; j++)
        {
            if(mass[j] > mass[j+1])
            {
                swap(mass[j], mass[j+1]);
#ifdef optim
                swap = 1;
#endif
            }
        }        
#ifdef optim
        if(!swap)
            break;
#endif  
    }
    dump(mass);
}
