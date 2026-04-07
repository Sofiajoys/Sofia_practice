#include<stdio.h>
#include<string.h>
#include<sys/msg.h>
#include<sys/ipc.h>
struct message
{
	long int mtype;
	char mdata[100];
};
int main()
{
	int msgid;
	struct message msg;
	msgid=msgget(1234,IPC_CREAT|0666);
	msg.mtype=1;
	printf("enter msg: ");
	scanf("%s",msg.mdata);
	msgsnd(msgid,&msg,sizeof(msg),0);
	printf("msg sent");
	return 0;
}



