#include <bits/stdc++.h>

using namespace std;

class A
{
	public:
		int id;
		A(int id)
		{
			this->id = id;
			cout << "Parametrized Constructor called" << endl;
			cout << "Person id is: " << id;
		}
		A()
		{
			
		}
};

int main4()
{
	A a;
	a.id = -10;
	cout << "Default Constructor called" << endl;
	cout << "Person id is: " << a.id << endl;
	A a1(21);
	return 0;
}

