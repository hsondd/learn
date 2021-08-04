#include <stdio.h>
#include <unistd.h>

int main()
{
    int pipefds1[2];
    int pipefds2[2];
    int returnStatus1;
    int returnStatus2;
    int pid;
    char pipe1writemessages[20] = "Hi";
    char pipe2writemessages[20] = "Hello";
    char readmessage[20];
   returnStatus1 = pipe(pipefds1);
   
   if (returnStatus1 == -1) {
      printf("Unable to create pipe 1 \n");
      return 1;
   }
   returnStatus2 = pipe(pipefds2);
   
   if (returnStatus2 == -1) {
      printf("Unable to create pipe 2 \n");
      return 1;
   }
   pid = fork();
   
   if (pid != 0) // Parent process {
      close(pipefds1[0]); // Close the unwanted pipe1 read side
      close(pipefds2[1]); // Close the unwanted pipe2 write side
      printf("In Parent: Writing to pipe 1 – Message is %s\n", pipe1writemessages);
      write(pipefds1[1], pipe1writemessages, sizeof(pipe1writemessages));
      read(pipefds2[0], readmessage, sizeof(readmessage));
      printf("In Parent: Reading from pipe 2 – Message is %s\n", readmessage);
   } else { //child process
      close(pipefds1[1]); // Close the unwanted pipe1 write side
      close(pipefds2[0]); // Close the unwanted pipe2 read side
      read(pipefds1[0], readmessage, sizeof(readmessage));
      printf("In Child: Reading from pipe 1 – Message is %s\n", readmessage);
      printf("In Child: Writing to pipe 2 – Message is %s\n", pipe2writemessages);
      write(pipefds2[1], pipe2writemessages, sizeof(pipe2writemessages));
   }
   return 0;    
}