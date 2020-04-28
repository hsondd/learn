#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct Stack
{
    int data[max];
    int top;
} node;

int isEmpty(node *s)
{
    if(s->top == -1)
        return 1;
    return 0;
}

int isFull(node *s)
{
    if (s->top == MAX -1)
    {
        return 1;
    }
    return 0;
}

void push (node *s, int value)
{
    s->top = s->top + 1;
    s->data[s->top] = value;
}

int pop (node *s)
{
    int temp;
    temp = s->data[s->top];
    s->top = s->top-1;
}

void main ()
{
    node s;
    int num;

    s.top = -1
}
