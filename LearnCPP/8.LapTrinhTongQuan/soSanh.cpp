#include <iostream>

using namespace std;

// template <typename T>

// T Max(T a, T b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

template <typename T, typename U>//T: int, U: float
T max(T a, U b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    // int a = 10;
    // int b = 30;
    // string x = "ngu";
    // string y = "ngoc";
    // cout << Max(a, b) << endl;
    // cout << Max(x, y) << endl;

    int a = 10;
    float b = 20.5;
    cout << max(b,a);
}

