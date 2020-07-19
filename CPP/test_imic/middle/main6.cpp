/**
 * C++ program to check Leap Year
 */

#include <iostream>

using namespace std;

int main6()
{
    int year;

    cout << "Enter year: " ;
    cin >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        cout << "LEAP YEAR";
    }
    else
    {
        cout << "COMMON YEAR";
    }
    return 0;
}
