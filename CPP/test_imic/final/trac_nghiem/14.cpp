#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct P
{
    bool operator() (const int &n) const
    {
        return n % 3 == 0;
    }
};

int main()
{
    list<int> l({5, 2, 6, 1, 13, 9, 19});
    cout << l.size();
    remove_if(l.begin(), l.end(), P());
    // cout << (auto it = l.begin(); it != l.end(), it++)
    // {
    //     cout << " " << *it;
    // }
    cout << l.size() << endl;

    return 0;
}

//  7 7 