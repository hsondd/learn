#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(void)
{
	int ret = 0;
	
	ret = open("hello.txt", O_RDONLY);
	if(-1 == ret)
	{
		printf("Open failed , err: %s\n", strerror(errno));
		return -1;
	}
	return 0;
}
