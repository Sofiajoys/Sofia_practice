#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/msg.h>

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
	//access msg
	msqid=msgget(KEY,0666);
	if(msqid==-1)
	{
		perror("msgget");
		exit(1);
	}
	//msg recv
	if(msgrcv(msqid,&msg,sizeof(msg.mtext),1,0)==-1)
	{
		perror("msgrv");
		exit(1);
	}
	printf("msg recieved successfully: %s\n",msg.mtext);
	//delete
	msgctl(msqid,IPC_RMID,NULL);
}
	




