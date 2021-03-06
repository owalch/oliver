//***************************************************************************
// ProcA6.cc
// Author:      M. Thaler
// Date:        29.9.99 (Rev. 8/2004, 3/2008)
//***************************************************************************

//***************************************************************************
// system includes
//***************************************************************************

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

//***************************************************************************
// Function: main(), parameter: none
//***************************************************************************

int main(void) {

    pid_t  pid;
    int    i;

    pid = fork();
    switch (pid) {
      case -1:
        perror("Could not fork");
        break;
      case 0:
        printf("\n... ich bin das Kind %d\n", getpid());
        for (i = 0; i < 10; i++) {
            usleep(500000);                         // slow down a bit
            printf("Mein Elternprozess ist %d\n", getppid());
        }
        printf("... so das wars\n");
        break;
      default:
        sleep(2);
        exit(0);                                    // terminate
        break;
    }
}

//***************************************************************************
