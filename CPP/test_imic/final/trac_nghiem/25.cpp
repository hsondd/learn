#include <iostream>

using namespace std;

class A
{
    public:
        A() { f(); };
        virtual ~A() {}
        virtual void f() const
        {
            std::cout << 1;
        }
};

class B : public A
{
    public:
        B() { f(); }
    private:
        virtual void f() const
        {
            cout << 2;
        }
};

int main()
{
    const A *a = new B;
    delete a;
    cout << endl;

    return 0;
}