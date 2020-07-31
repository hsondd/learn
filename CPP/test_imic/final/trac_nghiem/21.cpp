#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A 
{
    public:
        A(int n = 2) : m_n(n) {}
        int get_n() const { return m_n; }
        void set_n(int n) { m_n = n; }
    private:
        int m_n;
};

class B
{
    public:
        B(char c = 'a') : m_c(c) {}
        char get_c() const { return m_c; }
        void set_c(char c) { m_c = c; }
    private:
        char m_c;
};

class C : virtual public A, public B {};

class D : virtual public A, public B { };

class E : virtual public A, public B {};

int main()
{
    E e;
    C &c = e;
    D &d = e;
    cout << c.get_c() << d.get_n();
    c.set_n(3);
    d.set_c('b');
    cout << c.get_c() << d.get_n() << endl;

    return 0;    
}
