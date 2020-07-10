#include <stdio.h>

int binary_search(int a[], int l, int r, int value)
{
    if(l < r){
        int mid = (l + r) / 2;
    
    if (a[mid] == value) return mid;
    if(a[mid] < value) return binary_search(a, mid+1, r, value);
    if(a[mid] > value) return binary_search(a, l, mid-1, value);
    }
    return -1;
}

int main(void)
{
    int a[10] = {1, 22, 30, 99, 102, 200, 301 };
    printf("200 = a[%d]",binary_search(a,0,6,200));
}