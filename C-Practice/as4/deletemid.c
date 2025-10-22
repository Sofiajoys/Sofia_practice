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
    int n,value;
    struct node *temp = NULL,*head = NULL;
    printf("enter no of values: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter value for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new = newnode(value);
        if(head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp -> next=new;
            temp = new;
        }
    }
    int pos;
    printf("enter position: ");
    scanf("%d",&pos);
    if(head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *prev=head;
        for(int i=1;i<pos-1 && prev != NULL;i++)
        {
            prev = prev -> next;
        }
    
    struct node *Delete = prev->next;
    prev -> next = Delete -> next;
    free(Delete);
    }
    printf("Linked list:");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
}