#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>

#define KEY 1234

struct data
{
        char msg[100];
};      
int main()
{       
        int shmid;
        struct data *shm_ptr;
        shmid=shmget(KEY,sizeof(struct data),0666);
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
        printf("data read from shared memory: \n%s\n",shm_ptr->msg);
        shmdt(shm_ptr);
        shmctl(shmid,IPC_RMID,NULL);
        return 0;
}  
