#include <iostream>

using namespace std;

class data
{
	public:
		int nu1, nu2;
		data (int num1, int num2)
		{
			nu1 = num1;
			nu2 = num2;
			cout << "number initialized";
		}
		int sum_num()
		{
			return nu1 + nu2;
		}
};

int main2()
{
	int num1;
	int num2;
	
	cout << "Enter num1 and num2: ";
	cin >> num1 >> num2;
	
	data set_nu(num1, num2);
	cout << "The addition result: " << set_nu.sum_num() << endl;
	return 0;
	
}
