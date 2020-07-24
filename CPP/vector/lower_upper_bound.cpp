#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int gfg[] = {5, 6, 7, 7, 6, 5, 5, 6};;

    vector<int> v(gfg, gfg + 8);
    sort(v.begin(), v.end());

    vector<int>:: iterator lower, upper;

    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);

    cout << "lower_bound for 6 at position " << (lower - v.begin()) << endl;
    cout << "upper_bound for 6 at position " << (upper - v.begin()) << endl;

    return 0;
}