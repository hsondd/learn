#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

int product_val = 2;//san pham trong kho
sem_t semaphore;

void *do_thread (void *data);

int main (void)
{
	int res, i;
	pthread_t a_thread;
	void* thread_result;

	res = sem_init (&semaphore, 0, 2);
	if (0 != res)
	{
		perror("Semaphore init error");
		exit(EXIT_FAILURE);
	}

	res = pthread_create (&a_thread, NULL, do_thread, NULL);
	
	if(0 != res)
	{
		perror("thread create error");	
	}

	for (i = 0; i < 5; i++)
	{
		product_val++;
		printf("Producer product_val = %d \n\n", product_val);
		sem_post (&semaphore);
		sleep(2);
	}
	printf("All done\n");
	exit(EXIT_SUCCESS);
}

void* do_thread (void* data)
{
	printf("Consumer thread func is running. .. ..\n");
	while (1)
	{
		sem_wait(&semaphore);
		product_val--;
		printf("Consumer product_val = %d \n", product_val);
		sleep(1);
	}
	pthread_exit(NULL);

}
