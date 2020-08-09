#include<iostream>

using namespace std;

class B;
class A{
	private:
		int num1;
	public:
		A() : num1(45){ }
		
		friend int add(A, B);
};

class B{
	private:
		int num2;
	public:
		B() : num2(55){ }
		
		friend int add(A, B);
};

int add(A obj1, B obj2){
	return obj1.num1 + obj2.num2;
}

int main07(){
	A a;
	B b;
	cout << "Sum: " << add(a,b);
	return 0;
}
