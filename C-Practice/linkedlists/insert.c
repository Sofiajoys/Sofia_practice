//node
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
//create new node
struct node* newnode(int data)
{
    struct node* temp =malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
//insert node
struct node* insertfront(struct node* head,int data)
{
    struct node* temp = newnode(data);
    temp -> next = head;
    return temp;
}
void print(struct node* head)
{
    while(head)
    {
        printf("%d -> ",head -> data);
        head = head -> next;
    }
printf("NULL \n");
}
int main()
{
    struct node *head=newnode(10);
    head -> next = newnode(25);
    head -> next -> next = newnode(35);
    head -> next -> next -> next = newnode(55);
    printf("original list: ");
    print(head);
    head=insertfront(head,5);
    printf("after insertion: ");
    print(head);
    return 0;

}

