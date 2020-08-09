#include <bits/stdc++.h>

using namespace std;

void showqueue(queue <int> gq) 
{ 
    queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.front(); 
        g.pop(); 
    } 
    cout << '\n'; 
}

int main18(int argc, char** argv) {
	queue<int> gquiz;
	
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);
	
	cout << "The queue gquiz is: ";
	showqueue(gquiz);
	
	cout << "gquiz.size(): " << gquiz.size();
	cout << "\ngquiz.front(): " << gquiz.front();
	cout << "\ngquiz.back(): " << gquiz.back();
	gquiz.pop();
	cout << "\ngquiz.pop(): ";
	showqueue(gquiz);
	
	return 0;
}
