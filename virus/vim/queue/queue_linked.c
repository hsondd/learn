#include <stdio.h>
#include <stdlib.h>

typedef struct QueueNode
{
    int key;
    struct QueueNode* next;
} node;

struct Queue{
    node *front, *rear;
};

node *newNode (int k)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

struct Queue *createQueue ()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue (struct Queue *q, int k)
{
    node *temp = newNode(k);

    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
}

void deQueue (struct Queue *q)
{
    if (q->front == NULL)
    {
        return;
    }

    node *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    free (temp);
}

int main ()
{
    struct Queue *q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 50);
    enQueue(q, 60);
    deQueue(q);
    printf("Queue front: %d\n", q->front->key);
    printf("Queue rear: %d", q->rear->key);
    return 0;

}
