//kiem tra so chih phuong
#include <iostream>
#include <math.h>

using namespace  std;

int main()
{
    int n;
    int i = 0;
    cout << "NHap n: ";
    cin >> n;

    while (i * i <= n)
    {
        for(i; i <= sqrt(n); i++)
        {
            if (i * i == n)
            {
                cout << "La so chinh phuong";
                return 0;
            }
        }
    }
    cout << "ko phai so chinh phuong";
    return 0;
}