#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        A() {}
        virtual void f(int n)
        {
            cout << n << 1;
        }
        virtual ~A() {}
        void f(int n) const
        {
            cout << n;
        }
};

class B : public A
{
    public:
        void f(int n)
        {
            cout << (n << 1);
        }
        void f(int n) const
        {
            cout << n + 1;
        }
};

int main()
{
    const A a;
    B b;
    A &c = b;
    const A *d = &b;

    a.f(2);
    b.f(2);
    c.f(1);
    d->f(1);
    cout << endl;

    return 0;
}

//2 4 2 1