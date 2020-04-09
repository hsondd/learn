#include "NhanVien.h"

void NhanVien::Nhap()
{
	fflush(stdin);
	cout << "Nhap ho ten: ";
	getline(cin,HoTen);
	fflush(stdin);
	cout << "Nhap vao ngay sinh: ";
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
	LuongCoBan = 200000;
}

NhanVien::~NhanVien()
{
}
