#include <bits/stdc++.h>

using namespace std;

bool odd(int n)
{
    return (n % 2) == 1;
}

int main()
{
    vector<int> vct;

    for (int i = 1; i < 10; i++)
    {
        vct.push_back(i);
    }

    vector<int>::iterator bound;
    bound = stable_partition(vct.begin(), vct.end(), odd);

    cout << "Odd number: ";
    vector<int>::iterator it;
    for (it = vct.begin(); it != bound; it++)
    {
        cout << " " << *it;
    }
    cout << endl;

    cout << "Even number: ";
    for (it = bound; it != vct.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;

    return 0;
}