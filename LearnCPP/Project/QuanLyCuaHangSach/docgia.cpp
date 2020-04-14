#include "docgia.h"


void DocGia::Input()
{
//    fflush(stdin);
    cin.ignore();
    cout << "\nNhap ho ten doc gia: ";
    getline(cin,hoten);

//    flush(stdin);
    cin.ignore();
    cout << "\nNhap ngay lap the(dd/mm/yyyy): ";
    getline(cin, ngaylapthe);

    cout << "\nNhap so thang co hieu luc: ";
    cin >> sothangcohieuluc;
}

void DocGia::Output()
{
    cout << "\nHo ten doc gia: " << hoten;
    cout << "\nNgay lap the: " << ngaylapthe;
    cout << "\nSo thang co hieu luc: " << sothangcohieuluc;
}

DocGia::DocGia()
{
}

DocGia::~DocGia()
{
}

