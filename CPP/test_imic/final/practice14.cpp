#include <bits/stdc++.h>

using namespace std;

void showVector(vector <int> v)
{
    vector <int> :: iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << "\t" << *it;
    }
    cout << endl;
}

int main14(int argc, char **argv)
{
    vector<int> v, vector1, vector2;

    v.insert(v.begin(), 5, 10);

    cout << "The vector elements are: ";
    showVector(v);

    v.push_back(15);
    cout << "The last element is: " << v.back();
    v.pop_back();
    cout << "\nThe vector element iss are: ";
    showVector(v);

    v.insert(v.begin(), 5);
    cout << "The first element is: " << v.front();

    v.erase(v.begin());
    cout << "\nThe first element is: " << v.front();

    v.push_back(20);
    cout << "\nThe last element is: " << v.back();

    v.erase(v.begin(), v.end());
    cout << "\nVector size after erasae(): " << v.size();

    cout << endl << endl;
   	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(30);
	vector2.push_back(40);
	cout << "Vector 1: ";
	showVector(vector1);
	cout << "Vector 2: ";
	showVector(vector2);
	
	swap(vector1,vector2);
	cout << "After swap: \n";
	cout << "Vector 1: ";
	showVector(vector1);
	cout << "Vector 2: ";
	showVector(vector2);

    return 0;


}
