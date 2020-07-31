#include <bits/stdc++.h>

using namespace std;

// C++ program to find maximum between three numbers using nested if//

int main2()
{
	int num1, num2, num3, max;
	
	cout << "Enter three number: ";
	cin >> num1 >> num2 >> num3;

	if ((num1 > num2) && (num1 > num3))
	{
		max = num1;
	}
	else if ((num2 > num1) && (num2 > num3))
	{
		max == num2;
	}
	else
	{
		max = num3;
	}

	cout << "Maximum among all three numbers = "  << max;
	return 0;
	
}
