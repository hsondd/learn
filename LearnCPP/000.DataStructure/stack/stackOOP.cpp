#include <iostream>

#define MAX 10

using namespace std;

class stacks
{
public:
    int Top = -1;
    int s[10];
    void push(int);
    void pop();
    void print();
};

void stacks::push(int x)
{
    if (Top = MAX)
    {
        cout << "Error: cannot insert";
    }
    else
    {
        Top++;
        s[Top] = x;
    }
    
}

void stacks::pop()
{
    if (Top < 0)
    {
        cout << "Error: cannot delete";
    }
    else
    {
        Top--;
        return;
    }
}

void stacks::print()
{
    int i;
    cout << "Stack: ";
    for (i = Top; i >= 0; i--)
    {
        cout << s[i];
    }
}

int main()
{
    stacks o;
    int e, i;

    for (i = 0; i < 5; i++)
    {
        cin >> e;
        o.push(e);
    }
    o.print();
    o.pop();
    o.print();
}