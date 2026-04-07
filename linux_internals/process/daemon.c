#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		return 0;
	}
	else
	{
		sleep(5);
	}
}
