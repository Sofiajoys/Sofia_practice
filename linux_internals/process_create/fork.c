#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("I am a child\n");
		printf("child pid: %d\n",getpid());
		printf("parent pid: %d\n",getppid());
	}
	else
	{
		printf("I am a parent\n");
		printf("parent pid: %d\n",getppid());
	}
}
