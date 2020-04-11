#include "xe.h"

void XE::NhapThongTin()
{
    while (getchar() != '\n');
    cout << "\nNhap ho ten nguoi thue: ";
    getline(cin, HoTenNguoiThue);
    cout << "\nNhap so gio thue: ";
    cin >> SoGioThue;
}

void XE::XuatThongTin()
{
    cout << "\nHo ten nguoi thue: " << HoTenNguoiThue;
    cout << "\nSo gio thue: " << SoGioThue;
}

