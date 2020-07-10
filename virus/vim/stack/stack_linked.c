#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stackNode{
    int data;
    struct stackNode *next;
} node;

node *newNode(int value)
{
    node *stack = (node*)malloc(sizeof(node));
    stack->data = value;
    stack->next = NULL;
    return stack;
}

int isEmpty(node *root)
{
    return !(root);
}

void push(node **root, int value)
{
    node *stack = newNode(value);
    stack->next = *root;
    *root = stack;
    printf("%d pushed to stack\n", value);
}

int pop(node **root)
{
    if(isEmpty(*root))
    {
        return INT_MIN;
    }
    node *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(node *root)
{
    if(isEmpty(root))
    {
        return INT_MIN;
    }
    return root->data;
}

int main()
{
    node *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);
    push(&root, 50);
    push(&root, 60);

    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    printf("%d popped from stack\n", pop(&root));
    
    printf("Top element is %d\n", peek(root));
    return 0;
    
}