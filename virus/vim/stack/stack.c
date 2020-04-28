#include <stdio.h>
#include <stdbool.h>

int top = -1;

bool isFull(int capacity)
{
    if(top >= capacity -1)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if(top = -1)
        return true;
    else
        return false;
}

void Push(int stack[], int value, int capacity)
{
    if(isFull(capacity) == true)
        printf("\nStack is full");
    else
    {
        top++;
        stack[top] = value;
    }
}

void Pop()
{
    if(isEmpty() == true)
    {
        printf("\nStack is empty");
    }
    else
    {
        --top;
    }
    
}

int Top(int stack[])
{
    return stack[top];
}

int Size()
{
    return top + 1;
}

int main()
{
    int capacity = 3;
    int top = -1;
    int stack[capacity];

    Push(stack, 5, capacity);
    printf("Size of stack is: %d", Size());


    Push(stack, 5, capacity);
    Push(stack, 5, capacity);
    printf("\nSize of stack is: %d", Size());


    Push(stack, 5, capacity);

    printf("\nThe top of stack: %d , %d", Top(stack), top);

    for(int i = 0; i< 3; i++)
    {
        Pop();
    }
    printf("\nSize of stack is: %d", Size());

    Pop();
}