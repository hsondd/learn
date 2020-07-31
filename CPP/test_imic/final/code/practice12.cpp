#include <bits/stdc++.h>

using namespace std;

int findMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else
			break;
	}
	return max;
}

int main12()
{
	int n;
	int *arr;
	cout << "Enter number of data values: ";
	cin >> n;
	arr = (int*) malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		cout << "Enter value[" << i + 1 << "]: ";
		cin >> arr[i]; 
	}
	cout << "The maximum element is " << findMax(arr, n);
	return 0; 
}
