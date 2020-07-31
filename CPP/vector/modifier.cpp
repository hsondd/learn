#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> v;

	v.assign(5,10);
	cout << "The vector elements are: ";
	for (int i = 0; i < v.size() ; i++)
	{
		cout << v[i] << " ";
	}

	v.push_back(15);
	int n = v.size();
	cout << "\nThe last element is : " << v[n -1];

	//remove last element
	v.pop_back();

	cout << "\nThe vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout < v[i] << " ";

	//insert 5 at begin
	v.insert(v.begin(), 5);
	
}

