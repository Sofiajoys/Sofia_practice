#include<stdio.h>
int size=5;
int queue[5];
int front=-1,rear=-1;
void enqueue(int x)
{
    if(rear==size-1)
    {
        printf("queue overflow\n");
    }
    else 
    {
        if(front==-1)
        {
            front=0;
        }
        queue[++rear]=x;
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow\n");
    }
    else 
    {
        printf("dequeued: %d\n",queue[front++]);
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    printf("queue elements: \n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
    printf("\n");
    return 0;
}