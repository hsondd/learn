#include <iostream>

using namespace std;

class Base{
public:
    virtual void Show() = 0;
};

void Base::Show()
{
        cout << "This is base\n";
}

class Dereived : public Base
{
    void Show()
    {
        cout << "This is dereived class\n";
    }
};

int main(int argc, char *argv[])
{
    Base *b;
    Dereived d;
    b = &d;
    b->Show();
    return 0;
}
