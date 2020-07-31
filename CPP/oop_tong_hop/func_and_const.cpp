#include <iostream>

using namespace std;

class Test
{
    protected:
        int x;
    public:
        Test (int i): x(i)
        {}
        void func() const
        {
            cout << "func() const called " << endl;
        }
        void func()
        {
            cout << "func() called" << endl;
        }
};

int main()
{
    Test t1(40);
    const Test t2(20);
    t1.func();
    t2.func();

    return 0;
}