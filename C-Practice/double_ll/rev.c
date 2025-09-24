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
void *reverse(struct node *head,int n)
{
    struct node *left = head;
    struct node *right = head;
    //swap
    while(right)
    

}
int main()
{
    struct node *head = NULL, *tail = NULL;
    int n,value,pos = 1;
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
    //printing
    printf("After reversing linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d <-> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
