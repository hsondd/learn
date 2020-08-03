#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int counter = 2;

void *thread1()
{
    sleep(1);
    counter++;
    printf("This is thread1: counter = %d\n", counter);
    pthread_mutex_unlock(&lock);
    while (1)
    {
        /* code */
    }
}

void *thread2()
{
    sleep(3);
    pthread_mutex_unlock(&lock);
    counter++;
    printf("This is thread2, counter = %d", counter);
    pthread_mutex_unlock(&lock);
    while(1);
}

int main()
{
    pthread_t th1, th2;

    pthread_create(&th1, NULL, thread1, NULL);
    pthread_create(&th2, NULL, thread2, NULL);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return 0;
}