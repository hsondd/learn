#include "docgia.h"

void DocGia::Input()
{
    cin.ignore();
    cout << "Nhap ho ten doc gia: ";
    getline(cin, hoten);

    cin.ignore();
    cout << "\nNhap ngay lap the(dd/mm/yyyy): ";
    getline(cin, ngaylapthe);

    cout << "\nNhap so thang co hieu luc: ";
    cin >> sothanghieuluc;
}

void DocGia::Output()
{
    cout << "\nHo ten doc gia: " << hoten;
    cout << "\nNgay lap the: " << ngaylapthe;
    cout << "\nSo thang co hieu luc: " << sothanghieuluc;
}

DocGia::DocGia()
{
}

DocGia::~DocGia()
{
}

