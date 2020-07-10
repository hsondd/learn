// Viết chương trình C tạo 2 thread, 
// cả 2 thread lần lượt tăng biến đó lên 1 đơn vị,
// sử dụng mutex để đồng bộ việc ghi vào biến đó.<

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *thread1 (void *data);
void *thread2 (void *data);

int main ()
{
    pthread_t p_thread1;
    pthread_t p_thread2;

    pthread_create(&p_thread1, NULL, thread1, NULL);
    pthread_create(&p_thread2, NULL, thread2, NULL);

    pthread_join(p_thread1, NULL);
    pthread_join(p_thread2, NULL);

}

void *thread1 (void *data)
{
    pthread_mutex_lock( &mutex);
    for(int i = 1; i <= 5; i++)
	{
		printf("%d\t", count++);
		sleep(1);
	}
    pthread_mutex_unlock( &mutex);
    printf("\nThread 1 completed.\n");
}

void *thread2 (void *data)
{
    pthread_mutex_lock( &mutex);
    for(int i = 1; i <= 5; i++)
	{
		printf("%d\t", count--);
		sleep(1);
	}
    pthread_mutex_unlock( &mutex);
    printf("\nThread 2 completed.");
}