#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    int n,i;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    struct node *newnode = NULL,*head = NULL,*temp = NULL;
    for(i=0;i<n;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode -> data = i;
        newnode -> next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp -> next = newnode;
            temp = temp -> next;
        }
    }
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    struct node *newhead = (malloc(sizeof(struct node)));
    newhead -> data = 8;
    newhead -> next = head;
    head = newhead;
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
}