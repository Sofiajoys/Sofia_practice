#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void signal_handler(int sig)
{
	if(sig==SIGINT)
	{
		printf("SIGINT received");
	}
	else if(sig==SIGTERM)
	{
		printf("SIGTERM received");
	}
	else if(sig==SIGUSR1)
	{
		printf("SIGUSR1 received");
	}
}
int main()
{
	printf("pid: %d",getpid());
	signal(SIGINT,signal_handler);
	signal(SIGTERM,signal_handler);
	while(1)
	{
		printf("program running");
		sleep(3);
	}
	return 0;
}
