#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        A(int i) : m_i(i){}
    public:
        int operator() (int i = 0) const
        {
            return m_i + i;
        }
        operator int () const
        {
            return m_i;
        }
    private:
        int m_i;
        friend int g(const A&);
};

// int f(char c)
// {
//     return c;
// }

// int g(const A &a)
// {
//     return a.m_i;
// }

int main()
{
    A f(2), g(3);
    cout << f(1) << g(f) << endl;

    return 0;
}

// 35