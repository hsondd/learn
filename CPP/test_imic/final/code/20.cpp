#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void show(set<int, greater<int>> s)
{
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    set<int,greater<int>> s;
    s.insert(60);
    s.insert(50);
    s.insert(40);
    s.insert(30);
    s.insert(20);
    s.insert(10);

    cout << "The set qquiz1 is: ";
    show(s);
    
    set<int> s2(s.begin(), s.end());
    cout << "Set gquiz2 after assign from gquiz1 is: ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    s2.erase(s2.begin(), s2.find(30));
    cout << "After s2 remove less 30: ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    int num = s2.erase(50);
    cout << "gquiz2.erase(50) : " << num << " removed ";
    for (auto itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    cout << "gquiz1.lower_bound(40):" << *s.lower_bound(40);
    


    return 0;
}