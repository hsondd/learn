// Input: N = 5, S = {1, 2, 3, 4, 6} K = 6
// Output: 5
// Explanation: 6 is the 5th element in S.

#include <bits/stdc++.h>

using namespace std;

int GetIndex(set<int> S, int K)
{
    int Index = 1;

    for (auto u : S)
    {
        if (u == K)
        {
            return Index;
        }
        Index++;
    }

    return -1;
}

int main()
{
    set<int> S;
    S.insert(1);
    S.insert(6);
    S.insert(2);
    S.insert(3);
    S.insert(4);

    int K = 6;

    cout << GetIndex(S, K) << endl;
    return 0;
}