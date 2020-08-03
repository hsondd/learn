#include <stdlib.h>
#include <stdio.h>

typedef struct Linked
{
    int data;
    struct Linked *next;
    struct Linked *prev;
} node;

node *head;
node *tail;

node *createNode(int value)
{
    node *new = (node *)malloc(sizeof(node));
    new->data = value;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

void insertHead(int value)
{
    node *new = createNode(value);
    if (head == NULL)
    {
        head = new;
        tail = new;
        return;
    }
    head->prev = new;
    new->next = head;
    head = new;
}

void display()
{
    node *temp = head;
    printf("Display: ");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    insertHead(2);
    insertHead(33);
    insertHead(44);
    display();
}