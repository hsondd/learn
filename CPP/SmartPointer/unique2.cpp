#include <string>
#include <iostream>
#include <memory>

class TEST {
private:
    int mX;
public:
    TEST() { std::cout << "TEST's constructor" << std::endl; }
    ~TEST() { std::cout << "TEST's  destructor" << std::endl; }
    void setX(int x) { mX = x; }
    int getX() { return mX; }
};

int main()
{
    std::unique_ptr<TEST> ptr = std::make_unique<TEST>();
    std::unique_ptr<TEST> ptr1 = std::move(ptr);
    ptr1->setX(10);
    std::cout << ptr1->getX() << std::endl;
    return 0;
}