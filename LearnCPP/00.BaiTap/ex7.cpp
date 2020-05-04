#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    cout << "\n\n\t\tXuat mang:\t";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

void them_phan_tu(int a[], int &n, int idx, int val)
{
    // int tmp_arr[n];
    if (idx < 0)
    {
        idx = 0;
    }
    else if (idx >= n)
    {
        idx = n - 1;
    }
    for (int i = n; i > idx; i--)
    {
        a[i] = a[i-1];
    }
    a[idx] = val;
    ++n;
}

void xoa_phan_tu(int a, int &n, int idx)
{
    if (idx < 0)
    {
        idx = 0;
    }
    else if (idx >= n)
    {
        idx = n - 1;
    }
    for (int i = idx; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    --n;
}

int main()
{
    int n;

    cout << "Nhap so phan tu mang: ";
    cin >> n;

    int *a = new int[n];

    nhap(a, n);
    xuat(a, n);

    them_phan_tu(a, n, 3, 69);
    xuat(a, n);

    xoa_phan_tu(a, n, 0);
    xoa_phan_tu(a, n, 1);
    xuat(a, n);

    delete[] a;
    return 0;
}