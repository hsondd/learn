// // Liệt kê các hoán vị tổ Liệt kê các hoán vị tổ hợp

// #include <iostream>

// using namespace std;

// const int MAX = 20;

// int n;
// int Bool[MAX] = {0};///danh dau chua phan tu nao su dung
// int A[MAX];

// void xuat()
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
// }

// void Try(int k)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (!Bool[i])
//         {
//             A[k] = i;
//             Bool[i] = 1;
//             if (k == n)
//             {
//                 xuat();
//             }
//             else
//             {
//                 Try(k+1);
//             }
//             Bool[i] = 0;
//         }
//     }
// }


// int main()
// {
//     cout << "Nhap n:";
//     cin >> n;
//     Try(1);
//     return 0;
// }

#include <iostream>
using namespace std;
#define P 1000000007
int sumseq(int a[], int n, int p)
{
	int result = a[0] % p;
	for(int i = 1; i < n; i++)
	{
		result = (a[i] % p + result) % p;
	}
	return result;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<sumseq(a,n,P);
	return 0;
}