#include <stdio.h>
#include <pthread.h>
#define N 1<<13
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

int counter=0;
void* f(void*);

int main()
{
	pthread_t th1, th2;
	printf("%d\n", N);

	pthread_create(&th1, NULL, &f, NULL);
	pthread_create(&th2, NULL, &f, NULL);

	pthread_join(th1, NULL);
	pthread_join(th2, NULL);

	return 0;
}

void* f(void* ptr)
{
	int val=0;
	for(int i=0; i<N; i++)
	{
		val = counter;

		pthread_mutex_lock(&mtx);
			printf("%d: %d\n", pthread_self(), val + 1);
			counter = val + 1;
		pthread_mutex_unlock(&mtx);
	}

	return NULL;
}
