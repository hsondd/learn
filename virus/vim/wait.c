#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	int status;
	pid_t pid, childPid;

	childPid = fork();
	switch(childPid)
	{
		case -1:
			printf("Error: fork\n");
			return -1;
		case 0:
			//return 1;
			abort();
		default:
			pid = wait(&status);

			if(-1 == pid)
			{
				printf("Error, wait");
			}
			printf("pid=%d\n", pid);
			
			if(WIFEXITED(status)) printf("Normal termination with exit status = %d\n", WEXITSTATUS(status));
			if(WIFSTOPPED(status)) printf("Stopped by signal=%d", WSTOPSIG(status));
			if(WIFSIGNALED(status)) printf("Killed byy signal = %d%s\n", WTERMSIG(status), WCOREDUMP(status)?"(dumped core)" : "");
			if(WIFCONTINUED(status)) printf("Continued\n");
	}
	return 0;
}
