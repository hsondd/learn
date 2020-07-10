// 17. chuyen doi thoi gian
#include <iostream>

using namespace std;

void fun(int &gio, int &phut, int &giay, int x)
{
    giay += x;
    while (giay >= 60)
    {
        ++phut;
        giay -= 60;
    }
    while (phut >= 60)
    {
        ++gio;
        phut -= 60;
    }
    while (gio >= 12)
    {
        gio -= 12;
    }
    cout << gio << ":" << phut << ":" << giay << endl;
}

int main()
{
    int gio, phut, giay, x;
    cout << "Nhap gio: ";
    cin >> gio;
    cout << "NHap phut: ";
    cin >> phut;
    cout << "Nhap giay: ";
    cin >> giay;
    cout << "NHap thoit gian: ";
    cin >> x;

    fun(gio, phut, giay, x);
    return 0;
}