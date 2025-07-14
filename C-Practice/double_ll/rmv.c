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
    temp -> data = data;
    temp -> prev = NULL;
    temp -> next = NULL;
    return temp;
}
int main()
{
    struct node *head = NULL, *tail = NULL;
    int n,value;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new = newnode(value);
        if(head == NULL)
        {
            head = tail = new;
        }
        else
        {
            tail -> next = new;
            new -> prev = tail;
            tail = new;
        }
    }
    //duplicates remove
    struct node *temp = head;
    int i=1;
    while(i < n)
    {
        if(i == temp -> data)
        {
            printf("%d are duplicates",temp -> data);
        }
        temp = temp -> next;
        i++;
    }
}