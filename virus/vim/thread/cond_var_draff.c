#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define THRESHOLD 5

pthread_t tid;

int counter;
pthread_mutex_t mutex;

void threadFunc(void)
{
	pthread_mutex_lock(&mutex);
	printf("pthread has started\n");

	while(counter < THRESHOLD)
	{
		counter++;
		sleep(5);
	}
	printf("\npthread has finished, counter = %d\n", counter);
	pthread_mutex_unlock(&mutex);

	pthread_exit(NULL);
}

int main(void)
{
	int ret = 0;
	
	ret = pthread_create(&tid, NULL, &(threadFunc), NULL);
	if(ret != 0)
	{
		printf("pthread create failed\n");
	}

	while(1)
	{
		if(counter == THRESHOLD)
		{
			printf("\nGlobal var counter = %d\n", counter);
			break;
		}
	}
	
	pthread_join(tid, NULL);

	return 0;

}
