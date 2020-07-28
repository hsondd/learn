#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        A(int n) : m_n(n)
        {
            cout << m_n;
        }
        ~A()
        {
            cout << m_n;
        }
    private:
        int m_n;
};


int f(int n)
{
    if (1 == n)
    {
        throw logic_error("0");
    }
    A l(n);
    return f(n -1) * n / (n - 1);
}

int main()
{
    try
    {
        int r = f(3);
        A a(r);
    }    
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}

// 3 2 2 3 0