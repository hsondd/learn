// Input: arr[] = { 2, 1, 5, 8, 3 }
// Output: -1 2 2 5 2
// Explanation:
// [2], it is the only number in this prefix. Hence, answer is -1. 
// [2, 1], the closest number to 1 is 2
// [2, 1, 5], the closest number to 5 is 2
// [2, 1, 5, 8], the closest number to 8 is 5 
// [2, 1, 5, 8, 3], the closest number to 3 is 2

#include <bits/stdc++.h>

using namespace std;

void printClosest(set<int> &streamNumbers, int x)
{
    auto it = streamNumbers.insert(x).first;
    if (it == streamNumbers.begin())
    {
        if (next(it) == streamNumbers.end())
        {
            cout << "-1";
            return;
        }
        int rightVal = *next(it);
        cout << rightVal << " ";
        return;
    }
}