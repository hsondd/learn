#include <iostream>
#include <string>
#include <utility>

template<class T>
void mySwap(T& a, T& b)
{
    T tmp {std::move(a)};
    a = std::move(b);
    b = std::move(tmp);
}

int main()
{
    std::string x {"abc"};
    std::string y {"de"};

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    mySwap(x, y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}