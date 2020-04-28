#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

void *thread_start(void *args)
{
	if(pthread_detach(pthread_self()))
	{
		printf("pthread_detach error\n");
	}
	pthread_exit(NULL);
}

int main(void)
{
	pthread_t threadID;
	int ret;
	long count = 0;

	while(1)
	{
		if(ret = pthread_create(&threadID, NULL, thread_start, NULL))
		{
			printf("pthread_creat() failed ret %d", ret);
			perror("Fail reason");
			break;
		}
		usleep(10);
		count++;
		if(0 == count % 10000)
		{
			printf("number of threads are created %ld", count);
		}
		printf("number of threads are created %ld", count);
		return 0;
	}

}
