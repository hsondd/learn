#include <iostream>

int main()
{
    auto x = [](int a) -> int{ return a + 5; }(10);
    std::cout << x;
    return 0;
}