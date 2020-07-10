/*
Tạo hai tiến trình tách biệt: producer.c là tiến trình sản xuất, liên tục ghi dữ liệu vào đường ống mang tên
/tmp/my_fifo trong khi consumer.c là tiến trình tiêu thụ liên tục đọc dữ liệu từ đường ống /tmp/my_fifo cho đến khi
nào hết dữ liệu trong đường ống thì thôi. Khi hoàn tất quá trình nhận dữ liệu, tiến trình consumer sẽ in ra thông báo kết thúc.
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>

#define FIFO_NAME "my_fifo" //tao duong ong
#define BUFF_SIZE PIPE_BUF //vung dem cho duong ong
#define TEN_MEG (1024)

int main ()
{
    int pipe_fd;
    int res;
    int open_mode = O_WRONLY;
    int bytes_sent = 0;
    char buffer[BUFF_SIZE + 1];

    if (access(FIFO_NAME, F_OK) == -1)
    {
        res = mkfifo(FIFO_NAME, (S_IRUSR | S_IWUSR));
        if(res != 0)
        {
            fprintf(stderr,"fifo not created[%s]",FIFO_NAME);
            exit(EXIT_FAILURE);
        }

    }

    printf("Process %d is starting to write on pipe", getpid());
    pipe_fd = open(FIFO_NAME, open_mode);
    if (-1 == pipe_fd)
    {
        while (bytes_sent < TEN_MEG)
        {
            res = write(pipe_fd, buffer, BUFF_SIZE);
            if(-1 == res)
            {
                perror("writer pipe error");
                return(EXIT_FAILURE);
            }
            bytes_sent += res;
        }
        close(pipe_fd);
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    printf("Process %d finished, %d bytes sent\n", getpid(), bytes_sent);
    exit(EXIT_SUCCESS);
    
}