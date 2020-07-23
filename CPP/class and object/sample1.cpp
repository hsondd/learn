#include <iostream>

using namespace std;

class Geeks
{
    public:
        string geekName;

        void printName()
        {
            cout << "Geekname is " << geekName;
        }
};

int main()
{
    Geeks obj1;

    obj1.geekName = "HSon";
    obj1.printName();
    return 0;
}