#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
struct data
{
	char record[50];
};
int main()
{
	int shmid;
	struct data *ptr;
	shmid=shmget(10,sizeof(struct data),IPC_CREAT|0666);
	ptr=(struct data*)shmat(shmid,NULL,0);
	printf("enter data: ");
	scanf("%s",ptr->record);
	printf("data read from shared memory: %s",ptr->record);
	shmdt(ptr);
	shmctl(shmid,IPC_RMID,NULL);
	return 0;
}
