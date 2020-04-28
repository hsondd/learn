#include<stdio.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<string.h>
#include<stdlib.h>
#include <arpa/inet.h>
#include <unistd.h>

#define MAX 80
#define PORT 1997

void func (int sockfd)
{
    char buff[MAX];
    int n;
    struct sockaddr_in client_addr;

    while (1)
    {
        bzero(buff, MAX);
        recvfrom(sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&client_addr, &sizeof(client_addr));
        printf("From client: %s\nTo client: ", buff);

        bzero(buff, MAX);
        n=0;
        while ((buff[n++] = getchar()) != '\n');
        sendto(sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&client_addr, sizeof(client_addr));

        if(strncmp("exit", buff, 4)==0)
        {
            printf("Server Exit...\n");
            break;
        }
        }
}

int main()
{
    int sockfd;
    struct sockaddr_in server_addr;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    if(sockfd==-1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
        
    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(PORT);
    if((bind(sockfd,(struct sockaddr *)&server_addr,sizeof(server_addr)))!=0)
    {
        printf("socket bind failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully binded..\n");

    func(sockfd);
    close(sockfd);
}
