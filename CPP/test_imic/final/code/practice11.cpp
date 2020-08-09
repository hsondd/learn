#include<iostream>

using namespace std;

int global_var = 100;

void func(int **ptr){
	*ptr = &global_var;
}

int main11(){
	int var = 50;
	int	*ptr1 = &var;
	
	cout << "var: " << &var;
	cout << "\npointer_to_var: " << ptr1;
	
	cout << "\nPassing a pointer to a pointer to function\n";
	cout << "Value 01 = " << var;
	cout << "\nBefore: " << &var;
	cout << "\nptr1 before: " << ptr1;
	func(&ptr1);
	cout << "\nptr1 after: " << ptr1;
	cout << "\nglobal_var: " << &global_var;
	cout << "\nAfter: " << ptr1;
	cout << "\nValue 02 = " << *ptr1;
		
	return 0;
}
