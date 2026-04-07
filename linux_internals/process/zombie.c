#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("child exiting\n");
		_exit(0);
	}
	else
	{
		getchar();
		printf("parent process\n");
		sleep(30);
	}
}

