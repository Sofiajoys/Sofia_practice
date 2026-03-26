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
    struct node *temp=NULL,*head=NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter val for node %d: ",i+1);
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
    //insert beg
    int m;
    printf("enter value to insert: ");
    scanf("%d",&m);
    struct node *new_node=newnode(m);
    if(head!=NULL)
    {
        new_node->next=head;
        head=new_node;
    }
    else
    {
        new_node=head;
    }
    //print
    printf("Linked list: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;
}