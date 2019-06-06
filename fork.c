#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int main()
{
	int status;
	int pid;
	pid = fork();
	if(pid == 0)
	{
		printf("i am child pid %d my parent id is %d",getpid(),getppid());
	//	sleep(1000);
		exit(0);
	}
	}




