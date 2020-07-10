#include <stdio.h>
#include <stdbool.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+ 1; j < n; j++){
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

void bubble_sort(int a[], int n)
{
    bool haveSwap = false;
    int i, j;
    for(i = 0; i < n; i++)
    {
        haveSwap = false;
        for(j = 0; j < n - i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[i], a[j]);
                haveSwap = true;
            }
        }
        if(haveSwap == false)
        {break;}
    }
}

int main(void)
{
    int arr[10] = {2, 69, 96, 100, 5, 10, 20 , 3, 99, 50};
    bubble_sort(arr, 10);
    // selection_sort(arr, 10);
    for(int i = 0; i< 10; i++)
    {
        printf("%d\t",arr[i]);
    }
}