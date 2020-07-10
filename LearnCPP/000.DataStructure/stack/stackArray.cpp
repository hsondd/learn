#include <iostream>

using namespace std;

int top = -1;

bool isFull(int capacity)
{
    if (top >= capacity - 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool isEmpty()
{
    if (top = -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int stack[], int value, int capacity)
{
    if (isFull(capacity) == true)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        ++top;
        stack[top] = value;
    }
}

void pop()
{
    if (isEmpty() == true)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        top--;
    }
    
}

int Top(int stack[])
{
    return stack[top];
}

int size()
{
    return ++top;
}

int main()
{
    int capacity = 3;
    int top = -1;
    int stack[capacity];

    push(stack, 4, capacity);
    cout << "Current size: " << size() << endl;

    push(stack, 3, capacity);
    push(stack, 2, capacity);
    cout << "Current size: " << size() << endl;

    push(stack, 1, capacity);

    cout << "Current top: " << Top(stack) << endl;

    for (int i = 0; i < 3; i++)
    {
        pop();
    }
    cout << "Current size: " << size() << endl;
    pop();

}