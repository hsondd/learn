#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    vector<int> numbers;

    for (int i = 0; i < 10; i++)
    {
        numbers.push_back(i);
    }
    int sum = 0;
    // for (int i = 0; i < numbers.size(); i++)
    // {
    //     sum += numbers[i];
    // }
    sum = accumulate(numbers.begin(), numbers.end(), 0);
    vector<string> str;
    str.push_back("doan");
    str.push_back(" hong");
    str.push_back(" son");
    string strOutput;
    strOutput = accumulate(str.begin(), str.end(), (string)"");
    // cout << sum << endl;
    cout << strOutput << endl;
    return 0;
}