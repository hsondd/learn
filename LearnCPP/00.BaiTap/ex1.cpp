//Dem so phan tu phan biet trong mang 1 chieu

#include<iostream>

using namespace std;

#define MAX 100

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
    cout << "\n\n\t\tNhap mang:";
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap gia tri a[" << i << "] = ";
		cin >> a[i];
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
    cout << "\n\n\t\tXuat mang:";
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

void Tim_phan_tu_dac_biet(int a[], int b[], int n, int &m)
{
    m = 0;
    b[m] = a[0];
    m++;
    for (int i = 1; i < n; i++)
    {
        bool kiemtra = true; //gia su a[i] la phan tu phan biet
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] = a[i])
            {
                kiemtra = false;
                break;
            }
        }
        if (kiemtra = true)
        {
            b[m] = a[i];
            m++;
        }
    }
}

void demPhanTu(int a[], int b[], int n, int &m)
{
    Tim_phan_tu_dac_biet(a,b,n,m);
    for (int i = 0; i < m; i++)
    {
        int dem = 0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                dem++;
            }
        }
        cout << "\nPhan tu " << b[i] << " xuat hien " << dem << " lan.";
    }
}

int main()
{
    int n;
    int m;
    int a[MAX];
    int b[MAX];

    cout << "Nhap so luong phan tu mang: ";
    cin >> n;
    Nhap_Mang(a, n);
    Xuat_Mang(a, n);

    demPhanTu(a, b, n, m);
    return 0;
}