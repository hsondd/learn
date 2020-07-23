#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

int main3()
{
	int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
	int n = sizeof(nums)/sizeof(nums[0]);
	selectionSort(nums, n);
	cout << "Three largest elements are: " << nums[0] << ", " << nums[1] << ", " << nums[2] << endl;
}
