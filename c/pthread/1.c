#include <stdio.h>
#include <math.h>
#include <pthread.h>
#include <unistd.h>
#define N 20
	int n=0;
	double *d;
void* func(void *att)
{
	//static int n=0;
	n++;
	printf("Thread: %d\n",n);
//	n++;
	double t=.0;
	d =&t;
	for(unsigned long long i=0; i<(1L<<63L); i++)
		t =+ sqrt(pow(i*i, (double)1/.2));
	//return (void *)&d;
	return &t;
}
int main()
{
	pthread_t th[N];
	for(int i=0; i<N; i++)
		pthread_create(&th[i], NULL, func, NULL);
	for(int i=0; i<N; i++)
		pthread_join(th[i], NULL);

}
