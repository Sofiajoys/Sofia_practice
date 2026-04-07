#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
struct message
{
	long int mtype;
	char mdata[100];
};
int main()
{
	int msgid;
	struct message msg;
	msgget(1234,IPC_CREAT|0666);
	msgrcv(msgid,&msg,sizeof(msg),1,0);
	printf("msg rcvd: %s\n",msg.mdata);
	return 0;
}
