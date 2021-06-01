#include <bits/stdc++.h>

using namespace std;

int isSubset(int a[], int b[], int m, int n)
{
    map<int, int> mp1;

    for (int i = 0; i < m; i++)
    {
        mp1[a[i]]++;
    }
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp1.find(b[i]) == mp1.end()) {
            f = 1;
            break;
        }
        else {
            mp1[b[i]]--;
            if (mp1[b[i]] == 0)
            {
                mp1.erase(mp1.find(b[i]));
            }
        }
    }
    return f;
}

int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };

    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (!isSubset(arr1, arr2, m, n))
    {
        cout << "arr[2] is subset of arr1[]";
    }
    else
    {
        cout << "arr2[] is not subset of arr[1]";
    }
    return 0;
}