#include <stdio.h>
#include <stdlib.h>

typedef struct Linked_list {
    int data;
    struct Linked_list *next;
    struct Linked_list *prev;
} node;

node *head;
node *tail;

node *createNode (int value) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertHead (int value) {
    node *new = createNode(value);
    if (head == NULL) {
        head = new;
        tail = new;
        return;
    }
    head->prev = new;
    new->next = head;
    head = new;
}

void display () {
    node *temp = head;
    printf("Display: ");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main ()
{
    head = NULL;
    insertHead(2);
    display();
}