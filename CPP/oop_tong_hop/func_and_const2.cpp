#include <iostream>

using namespace std;

void func(const int &i)
{
    cout << "fun(const int&) called ";
}

void func(int &i)
{
    cout << "fun(int&) caleed ";
}

int main()
{
    const int i = 10;
    func(i);
    return 0;
}