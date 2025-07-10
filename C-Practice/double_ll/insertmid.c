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
    int n,value,pos;
    struct node *temp = NULL,*head = NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new = newnode(value);
        if(head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp -> next = new;
            new -> prev = temp;
            temp = temp -> next;
        }
    }
    //insert at specific pos
    printf("enter specific position to insert: ");
    scanf("%d",&pos);
    printf("enter data to be inserted: ");
    scanf("%d",&value);
    struct node *newMid = newnode(value);

    struct node *prev = head;
    for(int i=1; i<pos && prev != NULL; i++)
    {
        prev = prev -> next;
    }
    newMid -> next = prev -> next;
    newMid -> prev = prev;
    if (prev->next != NULL)
    {
        prev->next->prev = newMid;
    }
    prev -> next = newMid;
    //print
    printf("linked list after inserting:");
    temp = head;
    while(temp != NULL)
    {
        printf("%d <-> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");

}

