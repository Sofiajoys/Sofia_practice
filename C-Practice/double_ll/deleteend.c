#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> prev =NULL;
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
int main()
{
    struct node *head = NULL, *temp = NULL;
    int n, value;
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
    //delete at end
    if (head == NULL) {
        printf("List is already empty.\n");
    }
    else{
    struct node *prev = NULL;
        temp = head;
        while(temp -> next != NULL)
        {
        prev = temp;
        temp = temp -> next;
        }
        prev -> next = NULL;
        free(temp);
        printf("Last node deleted\n");
    }
    //printing
    printf("After deleting linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d <-> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
