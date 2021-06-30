#include <iostream>
#include <string>
#include <memory>

using namespace std;

class TEST {
private:
    int m_X;
public:
    TEST() { cout << "TEST constructor" << endl; }
    ~TEST() { cout << "TEST destructor" << std::endl; }
    void setX(int x) { m_X = x; }
    int getX() {return m_X; }
};

int main() 
{
    {
        cout << "Scope of first shared -- start" << endl;
        shared_ptr<TEST> firstShared = make_shared<TEST>();
        firstShared->setX(10);
        {
            std::cout << "Scope of Second shared -- start" << endl;
            shared_ptr<TEST> secondShared(firstShared);
            cout << secondShared->getX() << endl;
            std::cout << "Scope of secondShared -- end" << endl;
        }
            std::cout << "Scope of firstShared -- end" << endl;
    }
}