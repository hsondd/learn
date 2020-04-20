#include <iostream>
#include <cstdint>
#include <typeinfo>

using namespace std;

#define MAX 100

int main()
{
    int32_t arr[MAX];
    int32_t N = 5;

    for (int32_t index = 0; index < N; index++)
    {
        arr[index] = index + 1;
    }

    int32_t insert_value;
    int32_t insert_position;
    cout << "Enter insert_value: ";
    cin >> insert_value;
    cout << "Enter insert_position: ";
    cin >> insert_position;

    N++;
    for (int32_t i = N - 1; i > insert_position; i--)
    {
        
    }

}