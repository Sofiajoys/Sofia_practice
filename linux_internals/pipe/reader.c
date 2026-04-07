#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	int fd;
	char buffer[50];
	fd=open("my_fifo",O_RDONLY);
	read(fd,buffer,sizeof(buffer));
	printf("received: %s",buffer);
	close(fd);
	return 0;
}
