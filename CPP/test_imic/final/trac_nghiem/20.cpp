#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class B
{
    public:
        virtual int shift(int n = 2) const { return n * 2; }
};

class D : public B
{
    public:
        D() {}
        int shift (int n = 3) const { return n * 3; }
};

int main()
{
    const D d;
    const B *b = &d;
    cout << b->shift() << endl;  

    return 0;
}

// 6