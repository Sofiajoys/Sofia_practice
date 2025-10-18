#include<stdio.h>
#include<unistd.h>

int main()
{
	int fd[2];
	char msg[]="hello";
	char buffer[50];

	pipe(fd);
	
	write(fd[1],msg,sizeof(msg));
	read(fd[0],buffer,sizeof(buffer));

	printf("message read from pipe:%s",buffer);
	return 0;

}
