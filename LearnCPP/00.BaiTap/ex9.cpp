#include <iostream>
#include <string>

using namespace std;

//cach 1
// int main()
// {
//     int num;
//     int r;
//     int sum = 0;
//     int temp;

//     cout << " Enter num: ";
//     cin >> num;

//     temp = num;
//     while (num != 0)
//     {

//         num = num / 10;
//         r = num % 10;
//         sum = sum * 10 + r;
//     }
//     cout << temp << " " << sum << endl;
//     if (temp == sum)
//     {
//         cout << "La so doi xung" << endl;
//     }
//     else 
//     {
//         cout << "ko phai so doi xung " << endl;
//     }
// }

//cach 2
bool isNum(string s, int n)
{
    if (n == 0)
    {
        return false;
    }
    if (s.at(0) == '0')
    {
        return false;
    }
    for (int i = 0; i < n; i++)
    {
        if(s.at(i) < '0' || s.at(i) > '9')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();

    if (isNum(s, n) == false)
    {
        return 0;
    }

    bool isPar = true;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if(s[i] != s[j])
        {
            isPar = false;
            break;
        }
        else
        {
            ++i;
            ++j;
        }
        
    }
    if (isPar == true)
        cout << " la so doi xung" << endl;
    else
    {
        cout << "ko phai doi xung " << endl;
    }
    
}