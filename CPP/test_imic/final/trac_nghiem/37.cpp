#include <initializer_list>
#include <iostream>

using namespace std;

struct A
{
    A()
    {
        cout << "1";
    }
    A(int)
    {
        cout << "2";
    }
    A(initializer_list<int>)
    {
        cout << "3";
    }
};

int main()
{
    A a1;
    A a2;
    A a3{ 1 };
    A a4{1, 2};

    return 0;
}

// 1133