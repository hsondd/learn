#include <iostream>

using namespace std;

class A
{
    public:
        A()
        {
            cout  << "a";
        }
        ~A()
        {
            cout << "A";
        }
};

class B
{
    public:
        B()
        {
            cout  << "b";
        }
        ~B()
        {
            cout << "B";
        }
};

class C
{
    public:
        C()
        {
            cout  << "c";
        }
        ~C()
        {
            cout << "C";
        }
};

A a;

int main()
{
    C c;
    B b;
    return 0;
}

// acbBCA