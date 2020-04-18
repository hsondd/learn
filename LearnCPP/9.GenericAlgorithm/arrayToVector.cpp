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
    //copy data tu array sang vector
    int size = 10;
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> num(numbers, numbers + size);
    display(num);
}