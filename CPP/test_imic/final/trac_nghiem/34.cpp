#include <iostream>
#include <string>

using namespace std;


void f(const string &)
{
    cout << 1;
}

void f(const void *)
{
    cout << 2;
}

int main()
{
    f("foo");
    const char *bar = "bar";
    f(bar);
}

// 22