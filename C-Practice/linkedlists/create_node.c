#include<stdio.h>
#include<stdlib.h>
//node
struct node
{
    int data;
    struct node* next;
};
//create node
struct node* newnode(int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
//print
void print(struct node* head)
{
    struct node* temp = head;
    while(temp!=NULL)
    {
    printf("%d -> ",temp -> data);
    temp = temp -> next;
    }
    printf("NULL\n");
}
//main(driver)
int main()
{
    struct node *head=newnode(10);
    head->next=newnode(20);
    head->next->next=newnode(30);
    head->next->next->next=newnode(40);
    print(head);
}

