//10. chuyen thap phan sang nhi phaan
#include <iostream>

using namespace std;

void dectobin(int n)
{
    int binNum[100];

    int i = 0;
    while (n > 0)
    {
        binNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binNum[j];
    }
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;
    dectobin(n);
    return 0;
}