#include <iostream> 

using namespace std; 

class Base { 
public: 
	// Virtual function
	virtual void show() 
	{ 
		cout << "print base class\n"; 
	} 
	
	// Non-virtual function
	void show_non(){
		cout << "show base class\n";
	}
}; 

class Derived : public Base { 
public: 
	void show() 
	{ 
		cout << "print derived class\n"; 
	} 
}; 

int main06(void) 
{ 
	Base* bp = new Derived; 

	bp->show();
	bp->show_non(); 

	return 0; 
} 

