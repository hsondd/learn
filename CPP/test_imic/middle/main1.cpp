//find maximum between two numbers

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main1(int argc, char** argv) {
	int num1, num2;
	
	cout << "Enter one number: ";
	cin >> num1;
	
	cout << "Enter two number: ";
	cin >> num2;
	
	if (num1 > num2)
	{
		cout << num1 << " is maximum";
	} else
	{
		cout << num2 << " is maximum";
	}
	
	return 0;
}
