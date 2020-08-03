#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct Queue
{
    int front;
    int rear;
    int size;

    unsigned capacity;
    int *array;
} node;

node *createQueue(unsigned capacity)
{
    node *queue = (node*) malloc(sizeof(node));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;

    return queue;
}

int isEmpty(node *queue)
{
    return (queue->size == 0);
}

int isFull (node *queue)
{
    return (queue->size == queue->capacity);
}

void enQueue(node *queue, int item)
{
    if (isFull(queue))
    {
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d is enqueued to queue\n", item);
}

int deQueue(node *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(node *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->front];

}

int rear(node *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main()
{
    node *queue = createQueue(100);

    enQueue(queue, 10);
    enQueue(queue, 20);
    enQueue(queue, 30);

    printf("\n%d dequed from queue \n\n", deQueue(queue));

    printf("Front item: %d", front(queue));
    printf("Rear item: %d", rear(queue));

    return 0;
}