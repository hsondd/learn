#include <iostream>

using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;

    cout << "Enter full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplay infor: " << endl;
    cout << "Name: " << p1.name << endl;
    cout << "AGe : " << p1.age << endl;
    cout << "SAlary: " << p1.salary;;

    return 0;
}