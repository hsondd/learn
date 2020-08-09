#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class A
{

    public:
        int id;
        A() : id(-10) { cout << "Default constructor called" << endl; }
        A(int _id)
        {
            this->id = _id;
            cout << "Parametrized Constructor called" << endl;
        }
        virtual int getId()
        {
            cout << "Person id is: " << this->id << endl;
            return id;
        }
};


int main()
{
    A a;
    a.getId();

    A b(21);
    b.getId();

    return 0;
}