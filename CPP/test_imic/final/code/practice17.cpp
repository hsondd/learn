#include <bits/stdc++.h>

using namespace std;

void showdeque(deque <int> dq) 
{ 
    deque <int> :: iterator it;
    for (it = dq.begin(); it != dq.end(); ++it)
    	cout << "\t" << *it;
    cout << '\n'; 
}

int main17(int argc, char** argv) {
	deque <int> gquiz;
	
	gquiz.push_back(15);
	gquiz.push_back(20);
	gquiz.push_back(10);
	gquiz.push_back(30);
	
	cout << "The deque gquiz is: ";
	showdeque(gquiz);
	
	cout << "gquiz.size(): " << gquiz.size();
	cout << "\ngquiz.max_size(): " << gquiz.max_size();
	cout << "\ngquiz.at(2): " << gquiz.at(2);
	cout << "\ngquiz.front(): " << gquiz.front();
	cout << "\ngquiz.back(): " << gquiz.back();
	gquiz.pop_front();
	cout << "\ngquiz.pop_front(): ";
	showdeque(gquiz);
	gquiz.pop_back();
	cout << "gquiz.pop_back(): ";
	showdeque(gquiz);
	
	return 0;
}
