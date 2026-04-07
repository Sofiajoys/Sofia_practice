#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	int fd[2];
	char buffer[20];
	pipe(fd);
	if(fork()==0)
	{
		close(fd[1]);
		read(fd[0],buffer,20);
		printf("child received: %s",buffer);
	}
	else
	{
		close(fd[0]);
		write(fd[1],"hello",5);
	}
}



