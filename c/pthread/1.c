#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#define N 20
	int n=0;
void* func(void *att)
{
	//static int n=0;
	n++;
	printf("Thread: %d\n",n);
//	n++;
	double t=.0;
	for(int i=0; i<(1<<31); i++)
		t = sqrt(pow(i*i, (double)1/2));
	return (void *)(double)t;
}
int main()
{
	pthread_t th[N];
	for(int i=0; i<N; i++)
		pthread_create(&th[i], NULL, func, NULL);
}
