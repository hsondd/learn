// Input: S1 = “pPKf”, S2 = “KKKttsdppfP”
// Output: 7
// Explanation:
// The character ‘p’ occurs twice in the string S2.
// The character ‘P’ occurs once in the string S2.
// The character ‘K’ occurs thrice in the string S2.
// The character ‘f’ occurs once in the string S2.
// Therefore, in total, characters of the string S1 occurs 7 times in the string S2.

// Input: S1 = “geEksFOR”, S2 = “GeEksforgeEKS”
// Output: 7

#include <bits/stdc++.h>

using namespace std;

void countTotalFreq(string s1, string s2)
{
    set<char> bset;
    for (auto x: s1)
    {
        bset.insert(x);
    }
    int count = 0;
    for (auto x : s2)
    {
        if (bset.find(x) != bset.end())
        {
            count += 1;
        }
    }
    cout << count << endl;

}

int main()
{
    string s1 = "geEksFOR";
    string s2 = "GeEksforgeEKS";

    countTotalFreq(s1, s2);
}