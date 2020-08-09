#include <bits/stdc++.h>

using namespace std;

int main24(int argc, char** argv) {
	vector<int> v = {20, 30, 40, 25, 15};
	
	cout << "Initializing a vector: ";
	for (int i = 0; i < v.size(); i ++){
		cout << v.at(i) << " ";
	}
	make_heap(v.begin(), v.end());
	
	cout << "\nThe maximum element of heap is : " << v.front() << "\n";
	
	v.push_back(50);
	push_heap(v.begin(), v.end());
	
	cout << "The maximum element of heap after push is : " << v.front() << "\n";
	
	pop_heap(v.begin(), v.end());
	v.pop_back();
	
	cout << "The maximum element of heap after pop is : " << v.front() << "\n";
	
	return 0;
}
