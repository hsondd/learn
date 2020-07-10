#include <iostream>

using namespace std;


class base
{
    public:
        base()
        {
            cout << "Constructing base \n";
        }

        virtual ~base()
        {
            cout << "Destructing base \n";
        }

        void printInfo()
        {
            cout << "This is Print Info function! \n";
        }
};

class derived : public base
{
    public:
        derived()
        {
            cout << "Constructing derived\n";
        }
        ~derived()
        {
            cout << "Destructing derived \n";
        }
};

int main()
{
    // derived *d = new derived();
    base *b = new derived();
    b->printInfo();
    delete b;
    return 0;
}
