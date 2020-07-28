#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
        A (int n = 0) : m_i(n) { cout << m_i; }
    protected:
        int m_i;
};

class B : public A
{
    public:
        B(int n) : m_j(n), m_a(--m_j), m_b() { cout << m_j; }
    private:
        int m_j;
        A m_a;
        A m_b;
        static A m_c;
};

int main()
{
    B b(2);
    cout << endl;

    return 0;
}
A B::m_c(3);