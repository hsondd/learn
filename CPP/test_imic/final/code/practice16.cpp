#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	forward_list <int> flist = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 4, 4};
	
	cout << "List of elements before unique operation is: ";
	// for (int &x : flist)
	for (forward_list<int> :: iterator it = flist.begin(); it != flist.end(); it++)
		cout << *it << " ";
	cout << "\n";
	
	flist.sort();
	flist.unique();
	cout << "List of elements after unique operation is: ";
	for (int &x : flist)
		cout << x << " ";
	cout << "\n";
	
	return 0;
}
