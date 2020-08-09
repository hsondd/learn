#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int *findMax(int arr[], int n)
{
    int *max = arr;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter number of data values: ";
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value [" << i + 1 << "]: ";
        cin >> array[i];
    }
    cout << "The max value is: " << *findMax(array, n);
    delete[] array;
    return 0;
}