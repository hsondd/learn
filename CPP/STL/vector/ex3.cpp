//remove duplicate in string list
/*
Input: arr[] = {“Geeks”, “For”, “Geeks”}
Output: {“Geks”, “For”}
*/

#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

void removeDuplicateCharacters(vector<string> arr)
{
    unordered_set<char> cset;
    int n = arr.size();

    vector<string> out;

    for (auto str : arr)
    {
        string out_curr = "";
        for (auto ch : str)
        {
            if(cset.find(ch) != cset.end())
            {
                continue;
            }
            out_curr += ch;
            cset.insert(ch);
        }
        if (out_curr.size())
        {
            out.push_back(out_curr);
        }
    }

    for (int i  = 0; i < out.size(); i++)
    {
        cout << out[i] << " ";
    }

}

int main()
{
    vector<string> arr = { "Geeks", "For", "Geeks", "Post" };
    removeDuplicateCharacters(arr);
}