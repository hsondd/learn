#include <iostream>

using namespace std;

class A
{
    public:
        A(int n = 2) : m_i(n){}
        ~A() {cout << m_i;}
    protected: 
        int m_i;
};

class B : public A{
    public:
        B(int n) : m_a1(m_i + 1),m_a2(n){}
        ~B()
        {
            cout << m_i;
            --m_i;
        }
    private:
        A m_a1;
        A m_a2;
};

int main()
{
    B b(5);
    cout << endl;
    return 0;
}