#include <bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n, int k)
{
    int max_sum = INT_MIN;

    for (int i = 0; i < n - k + 1; i++)
    {
        int current_sum = 0;
        for (int j = 0; j < k; j++)
        {
            current_sum += arr[i+j];
        }
        max_sum = max(current_sum, max_sum);
    }
    return max_sum;
}

int slicingSum(int arr[], int n, int k)
{
    if ( n < k) {
        cout << "Invalid";
        return -1;
    }

    int maxSum = 0;
    for (int i = 0; i  < k; i++)
    {
        maxSum += arr[i];
    }
    int window_sum = maxSum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        maxSum = max(maxSum, window_sum);
    }
    return maxSum;
}

// Driver code
int main()
{
    int arr[] = { 1 , 2 , 3 , 4 , 5, 7 , 10, 3, 100 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << slicingSum(arr, n, k);
    return 0;
}