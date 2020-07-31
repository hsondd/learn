/**
 * C++ program to print day name of week
 */

#include <iostream>

using namespace std;

int main9()
{
    int week;

    cout << "Enter week number(1-7): ";
    cin >> week;

    switch (week)
    {
    case 1: cout << "Monday" << endl;
        break;
    
    case 2: cout << "Tuesday" << endl;
        break;
    
    case 3: cout << "Wedesday" << endl;
        break;
    case 4: cout << "Wedesday" << endl;
        break;
    case 5: cout << "Thursday" << endl;
        break;
    case 6: cout << "Friday" << endl;
        break;
    case 7: cout << "Saturday" << endl;
        break;  
    case 8: cout << "Sunday" << endl;
        break;

    default: cout << "Invalid Input!";
        break;
    }
    return 0;
}
