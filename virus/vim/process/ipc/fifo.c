#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/errno.h>

extern int errno;

#define FIFO1 "/tmp/fifo.1"
#define FIFO2 "/tmp/fifo.2"
#define PERMS 0666

int main()
{
    char s1[BUFSIZ];
    char s2[BUFSIZ];
    int childpid;
    int readfd;
    int writefd;

    if(mknod(FIFO1, __S_IFIFO | PERMS,0) < 0) && (errno != EEXIST))
    {
        printf("cant create fifo1: %s", FIFO1);
        exit(1);
    }
    if((mknod(FIFO2, __S_IFIFO | PERMS,0) < 0) && (errno != EEXIST))
    {
        unlink(FIFO1);
        printf("cant create fifo2: %s", FIFO2);
        exit(1);
    }
    if((childpid == fork()) < 0)
    {
        printf("cant fork");
        exit(1);
    }
    else if (childpid > 0)
    {
        if((writefd = open(FIFO1,1)) < 0)
            perror("parrent cant open writefifo");
        if((readfd = open(FIFO2, 0)) < 0)
            perror("parrent: cant open readfifo");
        printf("\nParents writes to fifo1: ");
        fgets(s1, BUFSIZ, stdio);
        s1(strlen(s1)) = 0;
    }
}