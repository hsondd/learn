#include <bits/stdc++.h>

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

int main5()
{
	ClassD obj;
	
	obj.ClassB::a = 10;
	obj.ClassC::a = 100;
	
	obj.b = 20;
	obj.c = 30;
	obj.d = 40;
	
	cout << "A from ClassB: " << obj.ClassB::a << endl;
	cout << "A from ClassC: " << obj.ClassC::a << endl;
	
	cout << "B: " << obj.b << endl;
	cout << "C: " << obj.c << endl;
	cout << "D: " << obj.d;
}
