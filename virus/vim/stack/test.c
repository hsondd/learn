#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    unsigned int capacity;
    int *array;
} node;

node *createNode(unsigned int capacity)
{
    node *stack = (node *)malloc(sizeof(node));
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
}

int isFull(node *stack)
{
    if(stack->top == stack->capacity - 1)
    {
        return 1;
    }
    else return 0;
}

int isEmpty(node *stack)
{
    if(stack->top == -1)
    {
        return 1;
    }
    else return 0;
}

void push(node *stack, int item)
{
    if(isFull(stack)){
        return;
    }
    else{
        stack->top++;
        stack->array[stack->top] = item;
        printf("%d pushed to stack", item);
    }
}

int pop(node *stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }
    else
    {
        return stack->array[stack->top--];

    }
}

int peek(node *stack)
{
    return stack->array[stack->top];
}

int main()
{
    node *rootNode = createNode(10);

    push(rootNode, 1);
    push(rootNode, 2);
    push(rootNode, 3);
    push(rootNode, 13);

    printf("Dinh stack la: %d\n", peek(rootNode));
    return 0;
    
}