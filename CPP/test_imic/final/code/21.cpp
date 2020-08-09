#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string check_key(map<int,int> m, int key)
{
    if (m.find(key) == m.end())
        return "Not present";
    return "Present";
}

int main()
{
    map<int, int> m;
    int check1 = 5, check2 = 4;
    m[1] = 4;
    m[2] = 6;
    m[4] = 6;

    cout << check1 << ": " << check_key(m, check1) << ", " << check2 << ": " << check_key(m, check2);

    return 0;
}