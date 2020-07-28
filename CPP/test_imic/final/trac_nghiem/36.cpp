#include <iostream>
#include <exception>

using namespace std;

int x = 0;

class A
{
    public:
        A()
        {
            cout << 'a';
            if (x++ == 0)
            {
                throw exception();
            }
        }
        ~A()
        {
            cout << 'A';
        }
};

class B
{
    public:
        B()
        {
            cout << 'b';
        }
        ~B()
        {
            cout << 'B';
        }
        A a;
};

void foo()
{
    static B b;
}

int main()
{
    try
    {
        foo();
    }
    catch( std::exception& e)
    {
        cout << 'c';
        foo();
    }
    
}
// acabAB