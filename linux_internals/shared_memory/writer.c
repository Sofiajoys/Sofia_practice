#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdlib.h>
#include<string.h>

#define KEY 1234

struct data
{
	char msg[100];
};
int main()
{
	int shmid;
	struct data *shm_ptr;
	shmid=shmget(KEY,sizeof(struct data),IPC_CREAT|0666);
	if(shmid<0)
	{
		perror("shmget");
		exit(1);
	}
	shm_ptr=(struct data *)shmat(shmid,NULL,0);
	if(shm_ptr==(void *)-1)
	{
		perror("shmat");
		exit(1);
	}
	printf("enter message: ");
	fgets(shm_ptr->msg,sizeof(shm_ptr->msg),stdin);
	printf("data written to shared memory\n");
	shmdt(shm_ptr);
}


