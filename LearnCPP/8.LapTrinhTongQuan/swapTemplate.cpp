#include <iostream>

using namespace std;

template <class T> void swap (T *x, T *y);

int main()
{
    int x = 5;
    int y = 10;
    float a = 3.3f;
    float b = 5.0f;

    swap(&x, &y);
    swap(&a, &b);
    
    cout << "a = " << a << ", " << "b = " << b << endl;
    cout << "x = " << x << ", " << "y = " << y << endl;

    return 0;
}

template <class T> void swap (T *x, T *y)
{
    T Temp = *x;
    *x = *y;
    *y = Temp;
}