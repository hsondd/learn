/**
 * C++ program to check whether a character is alphabet or not
 */

#include <iostream>

using namespace std;


int main7()
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "Character is an ALPHABET";
    }
    else
    {
        cout << "Character is NOT ALPHABET";
    }
    return 0;
}