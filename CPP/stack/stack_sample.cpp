#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(50);
    s.push(4);
    s.push(1);

    cout << "The stack is: ";
    showStack(s);

    cout << "\ns.size = "<<s.size();
    cout << "\ns.top = " << s.top();

    cout << "\ns.pop(): ";
    s.pop();
    showStack(s);

    return 0;
}