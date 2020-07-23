#include <iostream>

int main()
{
    [](const std::string& x)
    {
        std::cout << x << std::endl;
    } ("Hello lambda\n");
    return 0;
}