//remove duplicates
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
//func to remove duplicates
void rem_dup(struct node *head)
{
    struct node *current = head;
    while(current != NULL && current -> next != NULL)
    {
        struct node *runner = current;
        while(runner -> next != NULL)
        {
            if(runner -> next -> data == current -> data)
            {
                struct node *dup = runner -> next;
                runner -> next = runner -> next -> next;
                free(dup);
            }
            else
            {
                runner = runner -> next;
            }
        }
        current = current -> next;
    }

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
    rem_dup(head);
    //printing
    printf("linked list: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
    