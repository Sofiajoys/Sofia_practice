#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *newnode(int data) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    struct node *head = NULL, *temp = NULL;
    int n, value, pos;

    printf("enter no of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("enter data for node %d: ", i + 1);
        scanf("%d", &value);
        struct node *new = newnode(value);
        if (head == NULL) {
            head = temp = new;
        } else {
            temp->next = new;
            new->prev = temp;
            temp = temp->next;
        }
    }

    // Delete at specific position
    printf("enter position to be delete: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("List is empty\n");
    } else if (pos == 1) {
        // Delete head
        struct node *toDelete = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        free(toDelete);
    } else {
        struct node *prev = head;
        for (int i = 1; i < pos - 1 && prev != NULL; i++) {
            prev = prev->next;
        }

        // Validate
        if (prev == NULL || prev->next == NULL) {
            printf("Invalid position\n");
        } else {
            struct node *Delete = prev->next;
            prev->next = Delete->next;
            if (Delete->next != NULL)
                Delete->next->prev = prev;
            free(Delete);
        }
    }

    // Printing
    printf("After deleting linked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
