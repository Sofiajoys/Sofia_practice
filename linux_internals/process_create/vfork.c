#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=vfork();
	if(pid==0)
	{
		printf("I am a child\n");
		printf("child pid: %d\n",getpid());
		printf("parent pid: %d\n",getppid());
		_exit(0);
	}
	else
	{
		printf("I am a parent\n");
		printf("parent pid: %d\n",getppid());
	}
}
