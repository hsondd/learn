#include<iostream>

using namespace std;

class A{
	public:
		int id;
		
		A(int id){
			this->id = id;
			cout << "Parametrized Constructor called\n";
			cout << "Person id is: " << id;
		}
		
		A(){
			id = -10;
		}
};

int main04(){
	A a1;
	a1.id = -10;
	cout << "Default Constructor called \n";
	cout << "Person id is: " << a1.id;
	cout << "\n";
	A a(21); 
	
	return 1;
}
