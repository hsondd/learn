#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

void docFile(int a[], int &n, ifstream &filein)
{
    while (filein.eof() == false)
    {
        filein >> a[n];
        n++;
    }
}

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
//ham kiem tra so amstrong
bool kiemTraSoAmstrong(int n)
{
    int k = 0;
    int tam = 0;
    int tong = 0;
    int dem  = 0;

    while (n != 0)
    {
        n = n /10;
        dem++;
    }
    n = tam;
    while (n != 0)
    {
        tong = tong + pow((n%10), k);

    }
    if (tam == tong)
    {
        return true;
    }
    return false;
}

void ghiFile(int a[], int n, ofstream &fileout)
{
    for (int i = 0; i < n; i++)
    {
        if (kiemTraSoAmstrong(a[i]) == true)
        {
            fileout << a[i] << " ";
        }
    }
}

int main()
{
    ifstream filein;
    filein.open("INPUT6.txt", ios_base::in);

    int a[100];
    int n = 0;
    docFile(a, n, filein);
    cout << "Day so nguyen: ";
    // xuatMang(a,n);

    ofstream fileout;
    fileout.open("KETQUA.txt", ios_base::out);
    ghiFile(a, n, fileout);

    filein.close();
    fileout.close();
    return 0;
}