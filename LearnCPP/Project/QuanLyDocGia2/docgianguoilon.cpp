#include "docgianguoilon.h"


void DocGiaNguoiLon::Input()
{
    DocGia::Input();
    cin.ignore();
    cout << "\nNhap CMND: ";
    getline(cin, CMND);
}

void DocGiaNguoiLon::Output()
{
    DocGia::Output();
    cout << "\nCMND" << CMND;
}

int DocGiaNguoiLon::TinhTien()
{
    return sothanghieuluc * 10000;
}

DocGiaNguoiLon::DocGiaNguoiLon()
{
}

