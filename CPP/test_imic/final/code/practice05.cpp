#include<iostream> 

using namespace std; 

class ClassA 
	{ 
		public: 
			int a; 
	}; 

class ClassB : public ClassA 
	{ 
		public: 
			int b; 
	}; 
class ClassC : public ClassA 
	{ 
		public: 
			int c; 
	}; 

class ClassD : public ClassB, public ClassC 
	{ 
		public: 
			int d; 
	}; 

int main05() 
{ 
	ClassD obj; 

	obj.ClassB::a = 10;	 
	obj.ClassC::a = 100;	 

	obj.b = 20; 
	obj.c = 30; 
	obj.d = 40; 

	cout<< "A from ClassB: "<< obj.ClassB::a; 
	cout<< "\nA from ClassC: "<< obj.ClassC::a; 

	cout<< "\nB: "<< obj.b; 
	cout<< "\nC: "<< obj.c; 
	cout<< "\nD: "<< obj.d; 

} 

