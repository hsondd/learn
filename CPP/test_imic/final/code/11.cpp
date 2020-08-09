#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int global_var = 100;

void func (int **ptr)
{
    *ptr = &global_var;
}
int main()
{
    int var = 50;
    int *ptr = &var;
    cout << "var: " << &var;
    cout << "\npointer_to_var: " << ptr;
    cout << "\nPassing a pointer to a pointer to function";
    cout << "Value 01 = " << var;
    cout << "Before: " << &var;
    cout << "ptr_ptr before: " << &var;
    cout << "ptr_ptr after: " << &global_var;

    return 0;
}