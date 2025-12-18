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
    struct node *head=NULL,*temp=NULL;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
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
    //print
    printf("linked list: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
