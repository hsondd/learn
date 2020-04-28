#include <pthread.h>
#include <stdio.h>

typedef struct char_print_parms {
    char character;
    int count;
} data;

void *char_print (void *args)
{
    data *p = (data*)args;
    int i;
    for (i = 0; i < p->count; i++)
    {
        printf("%c\n", p->character);
    }
    return NULL;
}

int main ()
{
    pthread_t tid;
    data th_args;
    th_args.character = 'X';
    th_args.count = 5;
    pthread_create(&tid, NULL, &char_print, &th_args);
    pthread_join(tid,NULL);
    return 0;
}