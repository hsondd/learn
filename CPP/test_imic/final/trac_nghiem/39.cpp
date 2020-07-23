#include <iostream>

using namespace std;

int foo()
{
    return 10;
}

struct foobar
{
    static int x;
    static int foo()
    {
        return 11;
    }
};

int foobar::x = foo();

int main()
{
    cout << foobar::x;
}