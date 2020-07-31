#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> gquiz(3, 10);
    vector<int> :: iterator it;

    it = gquiz.begin();
    it = gquiz.insert(it, 20);

    gquiz.insert(it, 2, 10);

    it = gquiz.begin();

    vector<int> gquiz2(2, 40);
    gquiz.insert(it + 2, gquiz2.begin(), gquiz2.end());

    int gq[] = {50, 60, 70};
    gquiz.insert(gquiz.begin(), gq, gq + 3);

    cout << "gquiz contains: ";
    for (it = gquiz.begin(); it < gquiz.end(); it++)
    {
        cout << *it << '\t';
    }

    return 0;
}