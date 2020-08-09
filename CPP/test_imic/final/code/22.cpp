#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isOdd(int n)
{
    return ((n % 2) == 1);
}

int main()
{
    vector<int> v;
    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int> :: iterator itr;
    itr = stable_partition(v.begin(), v.end(), isOdd);
    cout << "odd nums: ";
    for (auto it = v.begin(); it != itr; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "even nums: ";
    for (auto it = itr; it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}