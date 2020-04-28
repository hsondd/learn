#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(void)
{  
    long position = 0;
    int fd = 0;
    char buf[] = "Hello, this is thevngeeks";
    char buf_read[18];
    char buf_read1[32];
    int length = 0;

    fd = open("hello.txt", O_RDWR);
    if(fd == -1)
    {
        return -1;
    }
    length = write(fd, buf, sizeof buf);

    position = lseek(fd, 0, SEEK_CUR);
    printf("Current position:%ld\n", position);

    position = lseek(fd, 0, SEEK_SET);

    memset(buf_read, 0x0, sizeof buf_read);
    length = read(fd, buf_read, sizeof buf_read);
    buf_read[length] = '\0';
    printf("buf_read:%s\n", buf_read);

    position = lseek(fd, 0, SEEK_CUR);
    printf("Current position:%ld\n", position);

    write(fd, "HELLO", 5);
    position = lseek(fd, 0, SEEK_SET);

    memset(buf_read1, 0x0, sizeof buf_read1);
    length = read(fd, buf_read1, sizeof buf_read1);
    buf_read1[length] = '\0';
    printf("buf_read:%s\n", buf_read1);

    close(fd);
    return 0;
}