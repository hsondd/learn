#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class B;
class A
{
    int a;
    public:
        A() : a(45) {};
        friend int add(A objA, B objB);
};

class B
{
    int b;
    public:
        B() : b(55) {};
        friend int add (A objA, B objB);
};

int add (A objA, B objB)
{
    return objA.a + objB.b;
}

int main()
{
    A objA;
    B objB;
    cout << "Sum: "  << add(objA, objB);

    return 0;
}