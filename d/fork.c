#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
 int main()
 {
    int status;
    pid_t pid;
    pid=fork();
    if(pid==0)
    {
        printf("this is child process its pid is %d and its parent id is %d \n",getpid(),getppid());
        exit(0);
    }
     else
     {wait(&status);
     printf("parent id is %d and child id is %d",getpid(),pid);
     exit(0);
     }
    
     return 0;
 }