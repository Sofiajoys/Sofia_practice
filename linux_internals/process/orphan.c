#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid>0)
	{
		
		printf("parent exiting\n");
		sleep(10);
		exit(0);
	}

	else
        {
                sleep(10);
                printf("I am a child\n");
                printf("child pid: %d\n",getpid());
                printf("parent pid: %d\n",getppid());
		sleep(60);
        }
	return 0;

}
