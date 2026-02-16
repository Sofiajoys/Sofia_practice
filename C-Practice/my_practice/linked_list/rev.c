#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
int main()
{
    int n,value;
    struct node *temp=NULL,*head=NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter value for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new=newnode(value);
        if(head==NULL)
        {
            head=new;
            temp=head;
        }
        else 
        {
            temp->next=new;
            temp=temp->next;
        }
    }
    //rev
    struct node *prev=NULL;
    struct node *curr=head;
    struct node *next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head = prev;
    //print
    printf("linked list: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}