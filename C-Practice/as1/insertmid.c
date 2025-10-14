#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL; 
    return temp;
}
int main()
{
    int n,value,pos;
    struct node *head = NULL,*temp = NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new = newnode(value);
        if(head == NULL)
        {
            head = temp =new;
        }
        else
        {
            temp -> next = new;
            temp = new;
        }
    }
    //insert at mid
    printf("enter position: ");
    scanf("%d",&pos);
    printf("enter value to be inserted: ");
    scanf("%d",&value);
    struct node *newend = newnode(value);
    struct node *prev = head;
    for(int i=1;i<pos && prev != NULL;i++)
    {
        prev = prev -> next;
    }
    newend -> next = prev -> next;
    prev -> next = newend;

    //print
    printf("linked list:");
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp -> data);
        temp=temp ->next;
    }
    printf("\n");
}