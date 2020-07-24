#include <bits/stdc++.h>

using namespace std;

class A
{
    int a;
    public:
        A():a(5)
        {
        }
        friend void showA(A &x);
};

void showA(A &x)
{
    cout << "A::a = " << x.a;
}

int main()
{

    A a;
    showA(a);
    
    return 0;
}