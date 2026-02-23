#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
#include<stdlib.h>

#define KEY 1234

struct message
{
	long mtype;
	char mtext[100];
};
int main()
{
	int msqid;
	struct message msg;
	//create
	msqid=msgget(KEY,IPC_CREAT|0666);
	if(msqid==-1)
	{
		perror("msgget");
		exit(1);
	}
	msg.mtype=1;
	printf("enter message: ");
	fgets(msg.mtext,sizeof(msg.mtext),stdin);
	//msg send
	if(msgsnd(msqid,&msg,sizeof(msg.mtext),0)==-1)
	{
		perror("msgsnd");
		exit(1);
	}
	printf("msg send successfully");
	return 0;
}
