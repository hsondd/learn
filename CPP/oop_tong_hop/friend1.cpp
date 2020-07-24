#include <bits/stdc++.h>

using namespace std;

class B;
class A
{
    public:
        void showB(B& x);
};

class B
{
    private:
        int b;
    public:
        B():b(10){}
        friend void A::showB(B &x);
};

void A::showB(B &x)
{
    cout << "B::b = " << x.b;
}

int main()
{
    A a;
    B x;
    a.showB(x);

    return 0;
}