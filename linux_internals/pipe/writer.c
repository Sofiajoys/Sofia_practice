#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int fd;
	char buffer[50];
	mkfifo("my_fifo",0666);
	fd=open("my_fifo",O_WRONLY);
	printf("enter msg to send: ");
	scanf("%s",buffer);
	write(fd,buffer,50);
	close(fd);
}
