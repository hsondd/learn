#include <iostream>
#include <string>

using namespace std;

template<typename K>

void display(K arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void displayString(string str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << str[i] << " ";
    }
}

int main()
{
    int const size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    string str[] = {"Son", "Anh", "Hoang", "Nham", "Thai", "Hung", "Thao"};
    display(arr, size);
    cout << endl;
    display(str, 7);
    cout << endl;
    
    return 0;
}