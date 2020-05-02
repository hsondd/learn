#include <iostream>

using namespace std;

void insertionSort(int arr[], int n);

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

int main()
{
    int arr[] = {22, 5, 33, 54, 83, 21, 0, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
}

void insertionSort(int arr[], int n)
{
    int i;
    int j;
    int key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}