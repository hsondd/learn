#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int,int> gquiz1;

    gquiz1.insert(pair<int,int> (1,40));
    gquiz1.insert(pair<int,int>(2,30));
    gquiz1.insert(pair<int, int>(3, 60)); 
    gquiz1.insert(pair<int, int>(4, 20)); 
    gquiz1.insert(pair<int, int>(5, 50)); 
    gquiz1.insert(pair<int, int>(6, 50)); 
    gquiz1.insert(pair<int, int>(7, 10));

    map<int,int>::iterator itr;
    cout << endl << "The map gquiz1 is: " <<endl;
    cout << "\tKEY\tELEMENT" << endl;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); itr++)
    {
        cout << '\t' << itr->first << "\t" << itr->second << endl;
    }
    cout << endl;

    map<int,int> gquiz2(gquiz1.begin(), gquiz1.end());
    cout << endl << "gquiz2 afterassingn from gquiz1: " << endl;
    cout << "\tKEY\tELEMENT";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); itr++)
    {
        cout << "\t" << itr->first << '\t' << itr->second <<endl;
    }
    cout << endl;

    cout << "\ngquiz2 after removal of elements less than key=3" << endl;
    cout << "\tKEY\tELEMENT" << endl;
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); itr++)
    {
        cout << '\t' << itr->first << '\t' << itr->second << endl;
    }

    
}