#include "docgiatreem.h"

void DocGiaTreEm::Input()
{
    DocGia::Input();

    cin.ignore();
    cout << "\nNhap ten nguoi dai dien: ";
    getline(cin,hotenNDD);
}

void DocGiaTreEm::Output()
{
    DocGia::Output();
    cout << "\nHo ten nguoi dai dien: ";
}

int DocGiaTreEm::Tinh_Tien_Lam_The()
{
    return sothangcohieuluc * 5000;
}

DocGiaTreEm::DocGiaTreEm()
{
}
