#include "NhanVien.h"
#include <cstdio>

NhanVien::NhanVien(string ten, string ngaysinh)
{
    HoTen = ten;
    NgaySinh = ngaysinh;
    LuongCoBan = 200000;
}

void NhanVien::Nhap()
{
    cout << "\nNhap ho ten: ";
	getline(cin,HoTen);
//	fflush(stdin);
    cout << "\nNhap vao ngay sinh: ";
	getline(cin, NgaySinh);
}

void NhanVien::Xuat()
{
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	cout << "\nLuong co ban: " << LuongCoBan << endl;
}


NhanVien::NhanVien()
{
//	LuongCoBan = 200000;
}

NhanVien::~NhanVien()
{
}
