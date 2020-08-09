#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> v = {7, 10, 2, 15, 8, 22};
    cout << "\nBefore sorting: ";
    for (auto &x : v)
        cout << x << " ";
    sort(v.begin(), v.end());
    cout << "\nAfter sorting: ";
    for (auto &x : v)
        cout << x << " ";
    sort(v.begin(), v.end(), greater<int>());
    cout << "\nResorted vector: ";
    for (auto &x : v)
        cout << x << " ";
    return 0;
}