/**
 * C++ program to print number of days in a month using logical operator
 */

#include <iostream>

using namespace std;

int main10()
{
    int month;
    int year;

    cout << "Enter month number (1-12): ";
    cin >> month;

    if (month < 1 || month > 12)
    {
        cout << "Invalid input! (1-12)" << endl;
    }
    else
    {
        switch (month)
        {
        case 4:
        case 6:
        case 9:
        case 11: cout << "30 days" << endl;
            break;
        case 2:
        {
            cout << "Enter year number: ";
            cin >> year;

            if (((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
            {
                cout << "29 days" << endl;
            }
            else
            {
                cout << "28 days" << endl;
            }
            
        }
            break;
        
        default: cout << "31 days" << endl;
            break;
        }
    }
    return 0;
}
