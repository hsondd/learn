#include <iostream>

using namespace std;

class A
{
    public:
        explicit A(int n = 0) : m_n(n) {}
        A& operator=(const A &a)
        {
            this->m_n = a.m_n;
            ++m_assignment_calls;
            return *this;
        }
        static int m_assignment_calls;
    private:
        int m_n;
};

int A::m_assignment_calls = 0;

A f(const A &a) { return a;}
A g(const A a) {return a;}

int main()
{
    A a(3);
    A b = a;
    cout << A::m_assignment_calls;
    b = g(a);
    g(b);
    cout << A::m_assignment_calls;

    const A &c = f(b);
    cout << A::m_assignment_calls << endl;
}