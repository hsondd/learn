#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showList(list<int> l)
{
    for (auto &x : l)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1, list2;
    for (int i = 1; i <= 10; i++)
    {
        list1.push_back(i);
        list2.push_front(i);
    }

    cout << "Content list1: ";
    showList(list1);
    cout << "Content list2: ";
    showList(list2);

    list2.sort();
    cout << "Sorted list 2: ";
    showList(list2);

    list<int> :: iterator itr1, itr2;
    advance(itr1, 5);
    list1(itr1)


    return 0;
}