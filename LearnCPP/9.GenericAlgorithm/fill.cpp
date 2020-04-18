#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

template <typename T>

void display(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // 4 4 4 4 5 5 6 6 6 6
    vector<int> numbers(10);
    for (int i = 0; i < numbers.size(); i++)
    // {
    //     if (i <= 3)
    //     {
    //         numbers[i] = 4;
    //     }
    //     else if (i <= 5)
    //     {
    //         numbers[i] = 5;
    //     }
    //     else if (i <= 9)
    //     {
    //         number[i] = 6;
    //     }
    // }

    fill(numbers.begin(), numbers.begin() + 4, 4);
    fill(numbers.begin() + 4, numbers.end() - 4, 5);
    fill(numbers.begin() + 6, numbers.end(), 6);
    
    int size = 3;
    string strInput[] = {"doan", " hong", "son"};
    vector<string> str(strInput, strInput + size);
    fill(str.begin(), str.end(), "hello ");
    
    display(numbers);
    display(str);
}