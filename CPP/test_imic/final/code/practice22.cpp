#include <iostream> 
#include <algorithm>
#include <vector> 

using namespace std;

bool odd(int i) { 
	return (i % 2) == 1;
} 

int main() 
{ 
	vector<int> v; 

	for (int i = 1; i < 10; ++i) 
		v.push_back(i);

	vector<int>::iterator itr; 
	itr = stable_partition(v.begin(), v.end(), odd); 

	cout << "Odd numbers:"; 
	for (vector<int>::iterator it = v.begin(); it != itr; ++it) 
		cout << ' ' << *it; 
	cout << '\n'; 

	cout << "Even numbers:"; 
	for (vector<int>::iterator it = itr; it != v.end(); ++it) 
		cout << ' ' << *it; 
	cout << '\n'; 

	return 0; 
} 
