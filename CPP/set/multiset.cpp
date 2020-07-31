#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int, greater<int>> gquiz1;
    multiset<int,greater<int>>::iterator itr;

    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50);
    gquiz1.insert(10);

    multiset<int> gquiz2(gquiz1.begin(), gquiz1.end());

    cout << "The multiset gquiz2 after assign from gquiz1 is: ";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    cout << "\ngquiz2 after removal of elements less than 30: ";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    {
        cout << '\t' << *itr;
    }
    int num;
    num = gquiz2.erase(50);
    cout << "\ngquiz2.erase(50): ";
    cout << num << " removed \t";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); itr++)
    {
        cout << '\t' << *itr;
    }
    cout << endl;

    cout << "gquiz1 lowerbound 40: " << *gquiz1.lower_bound(40) << " gquiz1.upper_bound(40): " << *gquiz1.upper_bound(40);
    cout << "\ngquiz2.lowerbound 40: " << *gquiz2.lower_bound(40) << " gquiz2.upper_bound(40): " << *gquiz2.upper_bound(40);

    return 0;

}