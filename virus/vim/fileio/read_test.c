#include <stdio.h>
#include <unistd.h>

#define MAX_READ	16

int main (void)
{
	char buf[MAX_READ] = "";
	int numRead;
	int i;

	numRead = read(STDIN_FILENO, buf, MAX_READ);
	if (numRead == -1)
		perror("read error");
	printf("Input data is: %s", buf);

	return 0;
}
