#include<sys/socket.h>
#include<netdb.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define MAX 80
#define PORT 1997

int main()
{
    char buff[MAX];
    int sockfd, len, n;
    struct sockaddr_in servaddr;
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if(sockfd == -1)
    {
        perror("socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");

    bzero(&servaddr, sizeof(len));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    servaddr.sin_port = htons(PORT);
    len = sizeof(servaddr);

    while(1)
    {
        printf("Enter mess to server: ");
        n=0;
        while((buff[n++] = getchar()) != '\n');
        sendto(sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&servaddr, len);

        bzero(buff,sizeof(buff));
        recvfrom(sockfd, buff, sizeof(buff), 0, (struct sockaddr *)&servaddr, &len);
        printf("Mess from Server: %s\n",buff);
        // if(strncmp("exit",buff,4) == 0)
        // {
        // printf("Client Exit...\n");
        // break;
        // }
    }
    close(sockfd);
}