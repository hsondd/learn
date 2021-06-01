#include <bits/stdc++.h>

using namespace std;

void pairWithEqualSum(int a[], int n)
{
    map<int,vector<pair<int,int>>> mp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pair<int,int> p = make_pair(a[i], a[j]);
            mp[a[i] + a[j]].push_back(p);
        }
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (itr->second.size() > 1)
        {
            cout << "Pairs: ";

            for (int i = 0; i < itr->second.size(); i++)
            {
                cout << "( " << itr->second[i].first << ", " << itr->second[i].second << ") ";
            }
            cout << " have sum: " << itr->first << endl;
        }
    }
}

int main() 
{
    int a[] = { 6, 4, 12, 10, 22, 54, 32, 42, 21, 11, 8, 2 };
  
    int n = sizeof(a) / sizeof(a[0]);

    pairWithEqualSum(a, n);

    return 0;
}