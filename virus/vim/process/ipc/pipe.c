#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main () {
    int fp[2];
    char s1[BUFSIZ];
    char s2[BUFSIZ];
    pipe (fp);
    
    if(fork() == 0) {
        printf("\nInput:");
        fgets(s1,BUFSIZ, stdin);
        s1[strlen(s1)] = 0;
        close(fp[0]);
        write(fp[1], s1, strlen(s1) + 1);
    }
    else {
        close(fp[1]);
        read(fp[0], s2, BUFSIZ);
        printf("\n%s\n", s2);

    }
    return 0;
}