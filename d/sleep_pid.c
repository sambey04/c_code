#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

main()
{
    pid_t pid;
    int status;
    switch(pid = fork())
    {
        case -1:
            printf("fork failed");
            break;
        case 0:  //first child
            printf("\ni'm the first child, my pid is %d", getpid());
            fflush(stdout);
            break;
        default:    //parent
            sleep(5); /** sleep is generating problems **/
            printf("\ni'm the parent process, my pid is %d", getpid());
            printf("\ngenerating a new child");
            fflush(stdout);
            switch(pid = fork())
            {
                case -1:
                    printf("fork failed");
                    break;
                case 0: //second child
                    printf("\nhere i am, the second child, my pid is %d", getpid());
                    break;
                default:  //parent
                    pid = wait(&status);
                    printf("\nParent detects process %d was done", pid);
                    pid = wait(&status);
                    printf("\nParent detects process %d was done", pid);
                    printf("\nback to parent, my pid is %d", getpid());
            }
    }

    return 0;
}
