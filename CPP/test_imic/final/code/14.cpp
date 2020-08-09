#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void show(vector<int> v)
{
    vector<int> :: iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.insert(v.begin(), 5 ,10);
    show(v);
    v.push_back(15);
    v.emplace(v.begin(),5);
    cout << "last: " << v.back();
    cout << "\nfirst: " << v.front();

    

    return 0;
}