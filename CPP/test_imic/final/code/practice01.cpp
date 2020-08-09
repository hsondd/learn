#include <iostream>

using namespace std; 

bool checkPrime(int n) 
{ 
	if (n <= 1) 
		return false; 

	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 
	return true; 
} 

int main01() 
{ 
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	
	if (checkPrime(n))
		cout << "This is a prime number";
	else
		cout << "This is not a prime number";
	return 0; 
} 

