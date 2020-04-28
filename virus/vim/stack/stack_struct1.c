#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Stack
{
    int top;
    unsigned int capacity;
    int *array;
} node;

node *createnode(unsigned int capacity)
{
    node *stack = (node*)malloc(sizeof(node));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity *sizeof(int));
}

int isFull(node* stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(node* stack)
{
    return stack->top == -1;
}

void push(node *stack, int item)
{
    if(isFull(stack))
    {
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to node\n", item);


}

int pop(node* stack)
{
    if(isEmpty(stack))
        return;
    return stack->array[stack->top--];
}

int peek(node *stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }
    return stack->array[stack->top];
}

int main()
{
    node *stack = createnode(99);
    printf("peek of stack: %d\n", peek(stack));

    push(stack, 10);
    push(stack, 69);
    push(stack, 96);

    printf("%d poped from node\n", pop(stack));
    printf("%d poped from node\n", pop(stack));
    printf("%d poped from node\n", pop(stack));
    printf("%d poped from node\n", pop(stack));
    printf("%d poped from node\n", pop(stack));
    
    
    return 0;


}