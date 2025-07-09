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
    int n,value;
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
    //delete at beg
    if (head != NULL) {
        struct node *Delete = head;
        head = head->next;
        free(Delete);
        printf("First node deleted\n");
    }
    //printing
    printf("After deleting linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
