#include <stdio.h>
#include <unistd.h>

int main() {
    int pipe1[2];
    int pipe2[2];
    pipe(pipe1);
    if(fork())
    {
        close(0);
        dup(pipe2[0]);
        close(pipe1[0]);
        close(pipe1[1]);
        close(pipe2[0]);
        close(pipe2[1]);
        execl("/bin/grep", "grep", NULL);
    }
    else
    {
        close(0);//close stdin
        dup(pipe1[0]);//stdin->read pipe 1
        close(1);//close stdout
        dup(pipe2[1]);//stdin->read pipe 2
        close(pipe1[0]);
        close(pipe1[1]);
        close(pipe2[0]);
        close(pipe2[1]);
        execl("/bin/sort", "sort", NULL);
    }
    else//child 1
    {
        close(1);
        dup(pipe1[1]);
        close(pipe1[0]);
        close(pipe1[1]);
        execl("/bin/ps", "ps", "-ef", NULL);
    }
    exit(0);
}