#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

typedef struct Stack
{
    uint32_t capacity;
    int32_t top;
    int* array;

} node;

node* createStack(uint32_t capacity)
{
    node* stack = (node*) malloc(sizeof(node));
    stack->capacity = capacity;
    stack->top =  -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(node* stack)
{
    return stack->top = stack->capacity-1;
}

int isEmpty(node* stack)
{
    return stack->top == -1;
}

void push(node* stack, int item)
{
    if(isFull(stack))
    {
       printf("Error! Stack is full.\n");
       return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(node* stack)
{
    if(isEmpty(stack))
    {   
        printf("Error! Stack is empty.\n");
        return INT_MIN;
    }
    printf("%d poped from stack\n", stack->top);
    return stack->array[stack->top--];
    

}

int TOP(struct  Stack* stack)
{
    if(isEmpty)
        return INT_MIN;
    return stack->array[stack->top];
}

int main(void)
{
    node* stack = createStack(100);
    push(stack, 69);
    push(stack, 96);

    push(stack, 0);

    pop(stack);
    pop(stack);

    pop(stack);
}



