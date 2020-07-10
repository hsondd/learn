#include <bits/stdc++.h>

using namespace std;

class Base
{
	public:
		//virtual function
		virtual void show()
		{
			cout << "print base class\n";
		}
		//non-virtual function
		void show_non()
		{
			cout << "show base class\n";
		}
};

class Derived : public Base
{
	public:
		void show()
		{
			cout << "print derived class\n";
		}
};

int main06()
{
	Base *b = new Derived;
	
	b->show();
	b->show_non();
	
	return 0;
}
