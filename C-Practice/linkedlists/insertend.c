#include<stdio.h>
#include<stdlib.h>
struct node{
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
//printing
void print(struct node *head)
{
    struct node* temp = NULL;
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }

    printf("NULL");

}
int main()
{
    struct node *temp = NULL,*head = NULL;
    int n,value;
    printf("enter no of nodes : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter data in node %d : ",i+1);
        scanf("%d",&value);
        struct node *new = newnode(value);
        if(head == NULL)
        {
            head = temp = new;
        }
        else{
            temp -> next = new;
            temp = temp -> next;
        }
    }
    // call print
    printf("linked list: ");
    print(head);

    printf("\nenter value to be inserted at end : ");
    scanf("%d",&value);
    struct node *new = newnode(value);
    while(temp -> next == NULL)
    {
        temp -> next = new;
        new = temp;
    }
    printf("after inserting : ");
    print(head);
    return 0;
}

