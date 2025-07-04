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
    int value,n;
    printf("enter data to be inserted: ");
    scanf("%d",&value);
    struct node *new_node = newnode(value);
    if(head == NULL)
    {
        head = temp = new_node;
    }
    else
    {
        new_node -> next = head;
        head = new_node;
    }
    //printing
    printf("linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }

    
    printf("NULL");
    return 0;

}