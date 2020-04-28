#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_THREAD      3

pthread_t tid[MAX_THREAD];
/*Counter la bien toan cuc duoc 2 thread su dung*/
int counter;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;   //khai bao mutex

void *threadIncrease(void *argv)
{
	pthread_mutex_lock(&mutex);
	counter += 1;
	printf("Thread %d has started\n", counter);

	sleep(1);
	printf("Thread %d has finished\n", counter);
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}

void *threadReduce(void *argv)
{
	pthread_mutex_lock(&mutex);
	counter -= 1;
	printf("Thread %d has started\n", counter);

	sleep(1);
	printf("Thread %d has finished\n", counter);
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}

int main(void)
{
	int i = 0;
	int ret = 0;
    int ret1 = 0;

	for (i = 0; i < MAX_THREAD; i++)
	{
		ret = pthread_create(&(tid[i]), NULL, threadIncrease, NULL);
        ret1 = pthread_create(&(tid[i]), NULL, threadReduce, NULL);

		if (ret != 0 || ret1 != 0)
		{
			printf("Thread [%d] created error\n", i);
		}
	}

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);

	return 0;
}