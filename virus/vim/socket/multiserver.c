#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <unistd.h>

int main ()
{
    int server_sockfd;
    int client_sockfd;
    int server_len;
    int client_len;
    struct sockaddr_in server_addr;
    struct sockaddr_in client_addr;

    server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(1997);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_len = sizeof (server_addr);

    bind(server_sockfd, (struct sockaddr*) &server_addr, server_len);

    listen(server_sockfd, 5);
    signal(SIGCHLD, SIG_IGN);
    while(1)
    {
        char ch;
        printf("Server waiting...\n");
/*
Chờ kết nói và chấp nhận kết nối từ trình khách.
*/
        client_len = sizeof (client_addr);
        client_sockfd = accept (server_sockfd, (struct sockaddr*) &client_addr, &client_len);
/*
Gọi hàm fork () tạo tiến trình con để xử lý kết nối, kiểm tra xem hiện ta đang là tiến trình cha hay tiến
trình con.
*/
        if (fork() == 0)
        {
/*
Nếu hiện là tiến trình con, ta hoàn toàn có thể đọc và ghi vào socket client_sockfd. Chúng ta gọi hàm sleep()
dể dừng lại 3 giây để mô phỏng quá trình xử lý thực tế của tiến trình con như kết nối cơ sở dữ liệu, xử lý
nhập xuất…
*/
            read (client_sockfd, &ch, 1);
            sleep (3);
            ch++;
            write (client_sockfd, &ch, 1);
            close (client_sockfd);
            exit (0);
        }
        else
        {
/*
Nếu không, hiện chúng ta đã ở tiến tình cha, quá trình xử lý kết nối đã hoàn tất. socket dành cho client có
thể đóng lại.
*/
            close (client_sockfd);
        }
    }
}