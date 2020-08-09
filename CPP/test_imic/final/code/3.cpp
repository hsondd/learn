#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Original array: ";
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n, greater<int>());
    cout << "Three largest elements are: ";
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}