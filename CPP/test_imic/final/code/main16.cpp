#include <bits/stdc++.h>
#include <list>

using namespace std;

int main16()
{
    forward_list<int> flist = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 4, 4};

    cout << "List of elements before unique operation is: ";
    for (int &x:flist)
    {
        cout << x << " ";
    }
    cout << "\n";

    flist.sort();
    flist.unique();
    cout << "List of elements after unique operation is: ";
    for (int &x: flist)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
