//***************************************************************************
// ProcA4.c
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

    fork();
    fork();
    fork();
    fork();
    printf("PID: %d\t PPID: %d\n", getpid(), getppid());
    sleep(10);  // keep processes in system to display their "stammbaum"
    exit(0);
}

//***************************************************************************