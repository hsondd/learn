#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

int main (void)
{
    int *addr;

    addr = mmap(NULL, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (addr == MAP_FAILED)
    {
        printf("mmap faile\n");
    }
    *addr = 1;

    switch (fork())
    {
    case -1:
        perror("fork faile");
        break;
    case 0:
        printf("Child started, value = %d\n", *addr);
        (*addr)++;
        if(munmap(addr, sizeof(int)) == -1)
        {
            perror("mummap fail\n");
        }
        exit(EXIT_SUCCESS);
    default:
        if (wait(NULL) == -1)
        {
            perror("wait failed");
        }
        printf("In parrent, value = %d\n", *addr);

        if(munmap(addr, sizeof(int)) == -1)
        {
            printf("munmap fail\n");
        }
        exit(EXIT_SUCCESS);
    }
}