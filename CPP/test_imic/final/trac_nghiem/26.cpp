#include <bits/stdc++.h>

class A
{
    public:
        const int m_n;
        A(int n) : m_n(n)
        {
            if (0 == n)
            {
                throw std::logic_error("0");
            }
        }
        ~A()
        {
            std::cout << m_n;
        }
};


int main()
{
    try
    {
        A a(1);
        A b(0);
        A c(2);
    }
    catch(const std::exception& e)
    {
        std::cout << 3;
    }
    std::cout << std::endl;
    return 0;
    
}

// 13