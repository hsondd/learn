/**
 * C++ program to check positive negative or zero using simple if statement
 */

#include <bits/stdc++.h>

using namespace std;

int main3()
{
    int num;

    cout << "Enter num: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is POSITIVE";
    }
    else if (num < 0)
    {
        cout << num << "is NEGATIVE";
    }
    else
    {
        cout << num << " is ZERO";
    }
    
}