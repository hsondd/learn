#include <iostream>
#include <stack>

using namespace std;

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
}

int main19(int argc, char** argv) {
	stack<int> s;
	
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(5);
	s.push(1);
	
	int n = s.size();
	
	cout << "The stack is: ";
	showstack(s);
	
	cout << "s.size(): " << n;
	cout << "\ns.top(): " << s.top();
	s.pop();
	cout << "\ns.pop(): ";
	showstack(s);
	
	return 0;
}
