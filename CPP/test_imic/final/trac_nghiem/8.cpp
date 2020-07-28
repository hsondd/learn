#include <bits/stdc++.h>

using namespace std;

template<typename T>

T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << myMax<int>(3, 7) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;
    cout << myMax<char>('i', 'e') << endl;
}

// 7 7.0 i