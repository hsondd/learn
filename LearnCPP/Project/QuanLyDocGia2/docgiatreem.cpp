#include "docgiatreem.h"

void DocGiaTreEm::Input()
{
    DocGia::Input();
    cin.ignore();

    cout << "\nNhap ten nguoi dai dien: ";
    getline(cin, hotennguoidaidien);
}

void DocGiaTreEm::Output()
{
    DocGia::Output();
    cout << "\nHo ten nguoi dai dien: " << hotennguoidaidien;
}

int DocGiaTreEm::TinhTien()
{
    return sothanghieuluc * 5000;
}

DocGiaTreEm::DocGiaTreEm()
{
}

