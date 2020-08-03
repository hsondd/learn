#include <stdio.h>
#include <stdlib.h>

typedef struct Linked
{
    int data;
    struct Linked *next;
} node;

node *head;

node *createNode(int value)
{
    node *temp = (node *) malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void insertTail(int value)
{
    node *temp = head;
    node *new = createNode(value);
    if (head == NULL)
    {
        head = new;
    }
    while (temp->next != NULL) temp = temp->next;
    temp->next = new;
    free(temp);
}

void del(node *head, int pos)
{
    node *temp = head;
    int count = 1;
    if (pos == 1)
    {
        head = head->next;
        free(temp);
    }
    while (count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->next = temp->next->next;
    free(temp);

    return head;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node *p = createNode(1);
    printf("%d", p->data);
    insertTail(44);
    insertTail(423);
    insertTail(22);
    del(head, 4);
    display();

    return 0;
}