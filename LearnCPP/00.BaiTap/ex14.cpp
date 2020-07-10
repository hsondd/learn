// 14.Kiem tra so nguyen duong co toan chu so chan hoac le

#include <iostream>

using namespace std;

bool checkOdd(long long n)
{
    long long temp;

    while (n > 0)
    {
        temp = n % 10;
        if ((temp % 2) == 0)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool checkEven(long long n)
{
    long long temp;

    while (n > 0)
    {
        temp = n % 10;
        if ((temp % 2) != 0)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    long long n;

    cout << "Nhap n: ";
    cin >> n;

    if (checkOdd(n) == true)
    {
        cout << n << " co toan chu so le.";
    }
    if (checkEven(n) == true)
    {
        cout << n << " co toan chu so chan.";
    }
}
