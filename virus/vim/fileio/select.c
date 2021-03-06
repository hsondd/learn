#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#define TIMEOUT 5
#define BUF_LEN 1024

int main (void)
{
	struct timeval tv;
	fd_set readfds;
	int ret = -1;

	FD_ZERO(&readfds);
	FD_SET(STDIN_FILENO, &readfds);

	tv.tv_sec = TIMEOUT;
	tv.tv_usec = 0;

	ret = select(STDIN_FILENO + 1, &readfds, NULL, NULL, &tv);
	if (-1 == ret)
	{
		perror("select error.\n");
		return 1;
	}

	else if (0 == ret)
	{
		printf("Timeout after %d seconds.\n", TIMEOUT);
		return 0;
	}

	if (FD_ISSET(STDIN_FILENO, &readfds))
	{
		char buf[BUF_LEN + 1];
		int len = -1;

		len = read(STDIN_FILENO, buf, BUF_LEN);
		if (-1 == len)
		{
			perror("read fd error.\n");
			return 1;
		}
		if(len)
		{
			buf[len] = '\0';
			printf("read: %s", buf);
		}
		return 0;
	}
	return 1;
}
