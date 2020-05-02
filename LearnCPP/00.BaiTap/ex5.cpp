#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n);

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
    bubbleSort(arr, n);
    printArray(arr, n);
}

void bubleSort(int arr[], int n)
{
    int i;
    int j;
    bool haveSwap = false;

    for (i = 0; i < n - 1; i++)
    {
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if (haveSwap = false)
        {
            break;
        }
    }
}