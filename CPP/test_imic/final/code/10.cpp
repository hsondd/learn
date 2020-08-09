#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{
    public: 
        A() { cout << "Constructing base\n"; }
        virtual ~A() {cout << "Destructing base\n"; }
        void print()
        {
            cout << "This is Print Info function!\n";
        }
};

class B : public A
{
    public:
        B() { cout << "Constructing derived\n"; }
        ~B() {cout << "Destructing derived\n"; }


};

int main()
{
    A *ptr = new B;
    ptr->print();
    delete ptr;

    return 0;
}