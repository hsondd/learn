// Input: arr[] = {-4, -3, 0, 2, 1}
// Output: 1
// Explanation: The only possible pair is (0, 3) which satisfies the condition ( -4 + 2 = -4 / 2 (= -2) ).

// Input: arr[] = {1, 2, 3, 4, 5}
// Output: 0

#include <bits/stdc++.h>

using namespace std;

int countPairs(int a[], int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] != 0 && a[i] % a[j] == 0) {
                if ((a[i] + a[j]) == (a[i] / a[j])) {
                    count++;
                }
            }
        }
    }
}

int main()
{
    int arr[] = { -4, -3, 0, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countPairs(arr, n);

    return 0;
}