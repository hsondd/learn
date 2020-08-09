#include <bits/stdc++.h>

using namespace std;

int main20(int argc, char** argv) {
	set<int, greater <int> > gquiz1;
	int num; 
	
	gquiz1.insert(60);
	gquiz1.insert(10);
	gquiz1.insert(40);
	gquiz1.insert(30);
	gquiz1.insert(20);
	gquiz1.insert(50);
	
	set<int, greater <int> > :: iterator itr;
	cout << "The set gquiz1 is : ";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
  
    set <int> gquiz2(gquiz1.begin(), gquiz1.end()); 
   
    cout << "The set gquiz2 after assign from gquiz1 is : "; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 
   
    cout << "gquiz2 after removal of elements less than 30 : "; 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30)); 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    num = gquiz2.erase(50); 
    cout << "\ngquiz2.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
  
    cout << endl; 
  
    cout << "gquiz1.lower_bound(40) : " << *gquiz1.lower_bound(40) << endl; 
    cout << "gquiz1.upper_bound(40) : " << *gquiz1.upper_bound(40) << endl; 
  
    cout << "gquiz2.lower_bound(40) : " << *gquiz2.lower_bound(40) << endl; 
    cout << "gquiz2.upper_bound(40) : " << *gquiz2.upper_bound(40) << endl; 
           
    return 0; 
  
} 
