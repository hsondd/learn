// Program to check divisibility of a number

#include <bits/stdc++.h>

using namespace std;

int main4()
{
    int num;

    cout << "Enter num: ";
    cin >> num;

    if ((num % 5 == 0) && (num % 11 == 0))
    {
        cout << ("Number is divisible by 5 and 11");
    }
    else
    {
        cout << "Number is not divisible by 5 and 11";
    }
    return 0;
}