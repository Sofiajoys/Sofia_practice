#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* newnode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
int main()
{
    struct node *temp = NULL,*head = NULL;
    int n,value,pos;
    printf("enter no of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data for node %d: ",i+1);
        scanf("%d",&value);
        struct node *new=newnode(value);
        if(head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp -> next = new;
            temp = new;
        }
    }
    //insert at mid
    printf("enter position to be inserted: ");
    scanf("%d",&pos);
    printf("Enter value to insert at the specific position: ");
    scanf("%d", &value);
    struct node *newEnd = newnode(value);

    struct node *prev = head;
        for (int i = 1; i < pos && prev != NULL; i++) 
        {
            prev = prev->next;
        }
    newEnd -> next = prev -> next;
    prev -> next = newEnd;
    
    //printing
    printf("After inserting linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}