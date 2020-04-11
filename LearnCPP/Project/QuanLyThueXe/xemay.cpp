#include "xemay.h"

void XEMAY::NhapThongTin()
{
    XE::NhapThongTin();
    cout << "\nNhap loai xe can thue(100-250): ";
    cin >> LoaiXe;
    while (getchar() != '\n');
    cout << "\nNhap bien so: ";
    getline(cin, BienSo);
  }

void XEMAY::XuatThongTin()
{
    XE::XuatThongTin();
    cout << "\nLoai xe: " << LoaiXe;
    cout << "\nBien so: " << BienSo;
}

float XEMAY::TinhTienThueXe()
{
    float s = 0;
    if (LoaiXe == 100)
    {
        s = 150000;
    }
    if (LoaiXe = 250)
    {
        s = 200000;
    }
    return s + ((SoGioThue - 1) * 100000);
}
