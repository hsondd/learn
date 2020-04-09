#include "NhanVien.h"

void NhanVien::Nhap()
{
	fflush(stdin);
	cout << "\n Nhap ho ten: ";
	getline(cin,HoTen);
	fflush(stdin);
	cout << "\n Nhap vao ngay sinh: ";
	getline(cin, NgaySinh);
}

void NhanVien::Xuat()
{
	cout << "\n Ho ten: " << HoTen;
	cout << "\n Ngay sinh: " << NgaySinh;
	cout << "\n Luong co ban: " << LuongCoBan; 
}

NhanVien::NhanVien()
{
	LuongCoBan = 200000;
}

NhanVien::~NhanVien()
{
}
