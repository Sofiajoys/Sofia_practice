#include<stdio.h>
#include<stdlib.h>
struct node{
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
    int n,val;
    struct node *temp=NULL,*head=NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter value for node %d: ",i+1);
        scanf("%d",&val);
        struct node *new=newnode(val);
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
    //insert mid
    int value,pos;
    printf("enter value: ");
    scanf("%d",&value);
    printf("enter pos: ");
    scanf("%d",&pos);
    struct node *mid=newnode(value);
    temp=head;
    for(int i=1;i<pos && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp!=NULL)
    {
        mid->next=temp->next;
        temp->next=mid;
    }
    printf("Linked list: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}