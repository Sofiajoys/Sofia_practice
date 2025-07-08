#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
int main()
{
    int data,n;
    struct node *temp = NULL,*head = NULL;
    printf("enter no of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
        scanf("%d",&data);
        struct node *new = newnode(data);
        if(head == NULL)
        {
            head =temp = new;
        }
        else
        {
            temp -> next = new;
            new -> prev = temp;
            temp = new;
        }
    }
    printf("double linked list: ");
     temp = head;
    while(temp != NULL)
    {
        printf("%d <-> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
