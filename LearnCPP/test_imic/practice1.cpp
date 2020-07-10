#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void checkPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cout << "Not prime";
		}
	}
	cout << "This is a prime number.";
}

int main1(int argc, char** argv) {
	int n;
	cout << "Enter a positive interger: ";
	cin >> n;
	checkPrime(n);
	return 0;
}
