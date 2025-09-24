#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	pid_t p = fork();
	
	if(p==0)
	{
	printf(" child process id: %d\n",getpid());
	}
	else if(p > 0)
	{
		printf(" parent pid: %d\n",getpid());
	}
	else{
		printf("error");
	}
	sleep(1);



}

