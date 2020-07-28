#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{   
    public:
        A() : m_x(0) {}
        static ptrdiff_t member_offset(const A &a)
        {
            const char *p = reinterpret_cast<const char*>(&a);
            const char *q = reinterpret_cast<const char*>(&a.m_x);
            return q - p;
        }
    private:
        int m_x;
};

class B : public A
{
    public:
        B() : m_x('a') {}
        static int m_n;
        static ptrdiff_t member_offset(const B &b)
        {
            const char *p = reinterpret_cast<const char*>(&b);
            const char *q = reinterpret_cast<const char*>(&b.m_x);
            return q - p;
        }
    private:
        char m_x;
};

int B::m_n = 1;

class C
{
    public:
        C() : m_x(0) {}
        virtual ~C() {}
    public:
        static ptrdiff_t member_offset(const C &c)
        {
            const char *p = reinterpret_cast<const char*>(&c);
            const char *q = reinterpret_cast<const char*>(&c.m_x);
            return q - p;
        }
    private:
        int m_x;
};

int main()
{
    A a;
    B b;
    C c;
    
    cout << ((A::member_offset(a) == 0) ? 0 : 1);
    cout << ((B::member_offset(b) == 0) ? 0 : 2);
    cout << ((A::member_offset(b) == 0) ? 0 : 3);
    cout << ((C::member_offset(c) == 0) ? 0 : 4);
    cout << endl;

    return 0;
}

// 0204