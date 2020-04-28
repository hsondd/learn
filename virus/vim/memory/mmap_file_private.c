#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main (void)
{
    char *addr;
    int fd;
    struct stat sb;
    char str[16] = "Overwrite file";

    fd = open("hello.txt", O_RDWR);
    if (-1 == fd)
    {
        perror("Open error");
    }
    if (-1 == fstat(fd, &sb))
    {
        perror("stat error");
    }

    addr = mmap(NULL, sb.st_size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);

    if (MAP_FAILED == addr)
    {
        perror("Error mmap");
    }
    if (write(STDOUT_FILENO, addr, sb.st_size) != sb.st_size)
    {
        printf("write to stdout error");
    }

    memset(addr, 0x0, sizeof(addr));
    sprintf(addr, "%s", str);

    printf("Mapped memory content: %s\n", addr);

    exit(EXIT_SUCCESS);
}