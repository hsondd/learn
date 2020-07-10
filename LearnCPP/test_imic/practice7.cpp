#include <bits/stdc++.h>

using namespace std;

class B;
class A
{
    private:
        int numA;
    public:
        A() : numA(45)
        {

        }
        friend int add(A, B);
};

class B
{
    private:
        int numB;
    public:
        B() : numB(55)
        {

        }
        friend int add(A, B);
};

int add(A objA, B objB)
{
    return (objA.numA + objB.numB);
}

int main07()
{
    A a;
    B b;

    cout << "Sum: " << add(a, b);
    return 0;
}
