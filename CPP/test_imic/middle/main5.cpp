/**
 * C++ program to check even or odd number
 */

#include <bits/stdc++.h>

using namespace std;

int main5()
{
    int num;
    cout << "Enter any number to check even or odd: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }

    return 0;
    
}