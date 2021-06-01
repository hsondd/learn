// Input: str = “GeeksforGeeks”
// Output: G e e k s f o r G e e k s

#include <bits/stdc++.h>

using namespace std;

void traverseString(string &str, int N)
{
    for (auto &ch : str)
    {
        cout << ch << " ";
    }
}

void traverString2(string &str, int N)
{
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    string str = "doan hong son";

    int N = str.length();
    traverseString(str, N);

}