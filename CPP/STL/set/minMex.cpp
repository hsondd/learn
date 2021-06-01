// Input: arr[] = {1, 2, 3}, K = 2
// Output: 1
// Explanation:
// All subarrays of length 2 are {1, 2}, {2, 3}.
// In subarray {1, 2}, the smallest positive integer which is not present is 3.
// In subarray {2, 3}, the smallest positive integer which is not present is 1.
// Therefore, the minimum of all the MEX for all subarrays of length K (= 2) is 1.

// Input: arr[] = {1, 2, 3, 4, 5, 6}, K = 3
// Output: 1

#include <bits/stdc++.h>

using namespace std;

int minimumMEX(int arr[], int N, int k)
{
    set <int> s;

    for (int i = 0; i <= N + 1; i++)
    {
        s.insert(i);
    }
    for(int i = 0; i < k; i++)
    {
        s.erase(arr[i]);
    }
    int mex = *(s.begin());

    for(int i = 0; i < k; i++)
    {
        s.erase(arr[i]);

        s.insert(arr[i - k]);
        int firstElem = *(s.begin());

        mex = min(mex, firstElem);
    }

    return mex;
}

// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int K = 3;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    cout << minimumMEX(arr, N, K);
 
    return 0;
}