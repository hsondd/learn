#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int sum_all = 0;
    int sum = 0;
    int n;

    cout << "Input the value for nth term: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum_all = sum + i;
        for (int j = 1; j <=i; j++)
        {
            sum += j;
            cout << " + " << j;
        }
        cout << " = " << sum << endl;
    }

    cout << "The sum of the above series is: " << sum_all;
    return 0;
}