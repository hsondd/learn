#include <bits/stdc++.h>

using namespace std;

int calSum(int n)
{
	int sum = 0;
	int sumall = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
		sumall += sum;
	}
	return sumall;
}

int main2()
{
	int n;
	cout << "Input the value for nth term: ";
	cin >> n;
	cout << "The sum of the above series is: " << calSum(n);
}
