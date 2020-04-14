#include "docgianguoilon.h"

void DocGiaNguoiLon::Input()
{
    DocGia::Input();

    cin.ignore();
    cout << "\nNhap so CMND: ";
    getline(cin,CMND);
}

void DocGiaNguoiLon::Output()
{
    DocGia::Output();

    cout << "\nCMND: ";

}

int DocGiaNguoiLon::Tinh_Tien_Lam_The()
{
    return sothangcohieuluc *10000;
}

DocGiaNguoiLon::DocGiaNguoiLon()
{
}
