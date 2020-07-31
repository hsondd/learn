#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main13()
{
    int arr[] = {7, 10, 2, 15, 8, 33};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    sort(arr, arr + n);
    cout << "\nAfter sorting: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    sort(arr, arr + n, greater<int>());
    cout << "\nRe-sorted (greater) vector: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    sort(arr, arr + n, compare);
    cout << "\nRe-sorted (user-defined) vector: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
