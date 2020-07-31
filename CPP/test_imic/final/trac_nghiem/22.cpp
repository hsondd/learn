#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct C
{
    bool operator() (const int &a, const int &b) const
    {
        return a % 10 < b % 10;
    }
};

int main()
{
    set<int> x({ 4, 2, 7, 11, 12, 14, 17, 2});
    cout << x.size();
    set<int, C> y(x.begin(), x.end());
    cout << y.size() << endl; 

    return 0;
}

// 74