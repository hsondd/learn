#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        int a;
};

class B : public A
{
    public:
        int b;
};

class C : public A
{
    public:
        int c;
};

class D : public B, public C
{
    public:
        int d;
};

int main()
{
    D obj;
    obj.B::a = 10;
    obj.C::a = 100;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "A from classB: " << obj.B::a;
    cout << "\nA from C: " << obj.C::a;
    cout << "\nb: " << obj.b;
    cout << "\nc: " << obj.c;
    cout << "\nd: " << obj.d;

    return 0;
}