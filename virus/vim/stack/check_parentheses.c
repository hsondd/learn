// Input: exp = “[()]{}{[()()]()}”
// Output: Balanced

// Input: exp = “[(])”
// Output: Not Balanced

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Stack
{
    char data;
    struct stack *next;
} node;

void push(node **top, int new_data);
int pop(node **top);

bool isMatchingPair(char char1, char char2)
{
    if(char1 == '(' && char2 == ')')
        return 1;
    else if(char1 == '{' && char2 == '}')
        return 1;
    else if(char1 == '[' && char2 == ']')
        return 1;
    else return 0;
}

bool areBalanced(char a[])
{
    int i = 0;

    node *stack = NULL;
    while(a[i])
    {
        if (a[i] == '{' || a[i] == '(' || a[i] == '[')
            push(&stack, a[i]);
        if (a[i] == '}' || a[i] == ')' || a[i] == ']')
        {
            if (stack == NULL)
                return 0;
            else if (!isMatchingPair(pop(&stack), a[i]));
                return 0;
        }
        i++;
    }
    
    if (stack == NULL)
        return 1;
    else
    {
        return 0;
    }
    
}

int main()
{
    char a[100] = "{()}[]"; 
    if(areBalanced(a))
        printf("Ballend");
    else
        printf("NOt ballend");
    
}

void push (node **top, int new_data)
{
    node *new_node = (node *) malloc(sizeof(node));
    if (new_node == NULL)
    {
        printf("Stack overflow");
        getchar();
        exit(0);
    }

    new_node->data = new_data;

    new_node->next == (*top);

    *top = new_node;
}


int pop(node **top)
{   
    char res;
    node *head;

    if (*top == NULL)
    {
        printf("Stack overflow");
        getchar();
        exit(0);
    }
    else
    {
        head = *top;
        res = head->data;
        *top = head->next;
        free(top);
        return res;

    }
    
}