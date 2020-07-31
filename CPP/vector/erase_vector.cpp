#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> gquiz;

    for (int i = 1; i <= 10; i++)
    {
        gquiz.push_back(i * 2);
    }

    gquiz.erase(gquiz.begin() + 4);

    gquiz.erase(gquiz.begin(), gquiz.begin() + 5);

    cout << "gquiz contains: ";
    for (int i = 0; i < gquiz.size(); ++i)
    {
        cout << gquiz[i] << '\t';
    }

    return 0;
}