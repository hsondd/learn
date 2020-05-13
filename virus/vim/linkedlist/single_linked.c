#include <stdio.h>
#include <stdlib.h>

typedef struct linked {
    int data;
    struct linked *next;
} node;

node *head;

node *createNode (int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void insertTail (int value)
{
    node *temp = head;
    node *new = createNode (value);
    if (head == NULL) {
        head = new;
        return;
    }
    while (temp->next != NULL) temp = temp->next;
    temp->next = new;
    free(temp);

}

void del (node *head, int pos)
{
    // node *prevNode = NULL;
    node *temp = head;
    int count = 1;
    if (pos == 1) {
        head = head->next;
        free(temp);
    }
    while (count != pos) {
        temp = temp->next;
        count++;
    }
    temp->next = temp->next->next;
    free(temp);
    return head;
}

void display () {
    node *temp = head;
    while (temp != NULL) {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node *p = createNode(1);
    printf("%d", p->data);
    insertTail(66);
    insertTail(69);
    insertTail(33);
    del(head, 4);
    display();



}