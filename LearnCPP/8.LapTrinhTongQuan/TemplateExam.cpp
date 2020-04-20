#include <iostream>
using namespace std;

template<class T> T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

template<class T> void showInfor(T *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // cout << findMax<char> ('s', 'i') << endl;
    // cout << findMax<int>(20, 60) << endl;
    // cout << findMax<float>(3.245f, 2.333f) << endl;

    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    int b[] = {1, 3, 4 ,5 ,5 ,6, 6, 9};
    double c[] = {1.33,33.44, 1, 3, 3.55, 44};
    showInfor<char>(arr, sizeof(arr)/sizeof(char));
    showInfor<int>(b, sizeof(b)/sizeof(int));
    showInfor<double>(c, sizeof(c)/ sizeof(double));
