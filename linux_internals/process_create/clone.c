#define _GNU_SOURCE
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<sched.h>
int child_fun(void *arg)
{
	printf("i am child");
	return 0;
}
int main()
{
	char *stack=malloc(2000);
	pid_t pid;
	pid=clone(child_fun,stack+2000,SIGCHLD,NULL);
	if(pid==-1)
	{
		printf("invalid clone");
	}
	else
	{
		printf("parent process");
	}
}
