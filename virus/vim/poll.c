#include <stdio.h>
#include <unistd.h>
#include <sys/poll.h>

#define TIMEOUT 5

int main(void)
{
	struct pollfd fds[2];
	int ret = -1;
	
	fds[0].fd = STDIN_FILENO;
	fds[0].events = POLLOUT;

	ret = poll(fds, 2, TIMEOUT * 1000);
	
	if(-1== ret)
	{
		perror("poll() error");
		return -1;
	}
	
	if(fds[0].revents & POLLIN)
	{
		printf("stdin san sang doc\n");
	}
	if(fds[0].revents & POLLOUT)
	{
		printf("stdout san sang ghi");
	}
	return 0;
}

