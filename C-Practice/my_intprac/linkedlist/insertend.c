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
    int n,val;
    struct node *head=NULL,*temp=NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter value of node %d: ",i+1);
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
    //insert end
    int value;
    printf("enter value to insert at end: ");
    scanf("%d",&value);
    struct node *insert=newnode(value);
    if(head!=NULL)
    {
        temp->next=insert;
        temp=insert;
    }
    //print
    printf("linked list: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}