#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>


int main (void)
{
    char *addr;
    int fd;
    struct stat sb;

    fd = open("hello.txt", O_RDONLY);
    if (-1 == fd)
    {
        printf("Open error");
    }

    if(-1 == fstat(fd, &sb))
    {
        perror("Error");
    }

    addr = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (MAP_FAILED == addr)
    {
        perror("Error");
    }

    if(write(STDOUT_FILENO, addr, sb.st_size) != sb.st_size)
    {
        perror("Error");
    }
    exit(EXIT_SUCCESS);
}