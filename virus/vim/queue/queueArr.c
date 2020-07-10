#include <stdio.h>

void Enqueue(char queue[], char element, int& rear, int arraySize)
{
    if(rear == arraySize)
    {
        printf("Overflow\n");

    } else
    {
        queue[rear] = element;
        rear++;
    }
    
}

void Dequeue(char queue[], int& front, int rear)
{
    if(front == rear)
        printf("Underflow\n");
    else
    {
        queue[front] = 0;
        front++;
    }
    
}

char Front(char queue[], int front)
{
    return queue[front];
}

int main()
{
    char queue[20] = {'a', 'b', 'c', 'd'};
    int front = 0, rear = 4;
    int arraySize = 20;
    int N = 3;
    char ch;
    for(int i = 0; i < N; i++)
    {
        ch = Front(queue, front);
        Enqueue(queue, ch, rear, arraySize);
        Dequeue(queue, front, rear);
    }
    for(int i = front; i < rear; i++)
    {
        printf("%c", queue[i]);
    }
    printf("\n");
    return 0;
}