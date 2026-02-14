#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
int data; 
struct Node *next; 
} Node; 
Node* insert_at_head(Node *head, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed");
        return head;
    }

    newNode->data = value;
    newNode->next = head;
    return newNode;  
}
Node* delete_from_head(Node *head)
{
    if (head == NULL) {
        printf("List empty");
        return NULL;
    }

    Node *temp = head;
    head = head->next;
    free(temp);

    return head;   
}
void print_list(Node *head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *head = NULL;

    head = insert_at_head(head, 10);
    head = insert_at_head(head, 20);
    head = insert_at_head(head, 30);

    print_list(head);

    head = delete_from_head(head);
    print_list(head);

    return 0;
}