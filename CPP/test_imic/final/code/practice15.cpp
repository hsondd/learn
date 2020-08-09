#include <bits/stdc++.h>

using namespace std;

void showlist(list <int> l) 
{ 
    list <int> :: iterator it;
    for (it = l.begin(); it != l.end(); ++it)
    	cout << "\t" << *it;
    cout << '\n'; 
}

int main15(int argc, char** argv) {
	list <int> list1, list2;
	
	for (int i = 1; i <= 10; i++){
		list1.push_back(i);
		list2.push_front(i);
	}
	
	cout << "Content of List 1: ";
	showlist(list1);
	
	cout << "Content of List 2: ";
	showlist(list2);
	
	list2.sort();
	cout << "Sorted List 2:  ";
	showlist(list2);
	
	list <int> :: iterator itr1, itr2;
	itr1 = list1.begin();
//	itr2 = list1.begin();
	advance(itr1, 5);
	
	list1.erase(list1.begin(), itr1);
	cout << "Content of List 1: ";
	showlist(list1);
	
	itr2 = list2.begin();
	advance(itr2, 5);
	list2.erase(itr2, list2.end());
	cout << "Content of List 2: ";
	showlist(list2);
	
	cout << list1.front() << " is now at the front in list 1\n";
	cout << list2.back() << " is now the last element in list 2\n";
	
	list1.insert(list1.begin(),5,10);
	cout << "After Insertion list 1: ";
	showlist(list1);
	
	list1.remove(10);
	cout << "After Removal list 1: ";
	showlist(list1);
	
	cout << "No. of elements in list 1: " << list1.size();
	
	cout << "\nReversed list 2: ";
	list2.reverse();
	showlist(list2);
	
	cout << "After erasing from list 2: ";
	list2.erase(list2.begin());
	showlist(list2);
	
	list1.clear();
	if(list1.empty())
		cout << "List 1 is now empty";
		
	list1.insert(list1.begin(),5,2);
	cout << "\nList 1: ";
	showlist(list1);
	return 0;
}
