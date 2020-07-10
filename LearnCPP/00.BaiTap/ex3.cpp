#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}


void printArray(int arr[], int n)
{
    cout << "\n\n\t\tXuat mang:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                min_idx = j;
            }
        }
    }
}

int main()
{
    int arr[] = {22, 5, 33, 54, 83, 21, 0, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
}