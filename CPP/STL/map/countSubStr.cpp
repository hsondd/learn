#include <bits/stdc++.h>

using namespace std;

int countSubStr(string s, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = i + 1; j < n; j++)
        {
            if (s[j] != s[i])
            {
                cnt++;
            }
        }
        ans += cnt;
    }
    cout << ans;
}

int main()
{
    string s = "abcab";

    int N = 5;

    countSubStr(s, N);

    return 0;
}