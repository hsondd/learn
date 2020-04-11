#include "NhanVien.h"


NhanVien::NhanVien(string ten, string ngaysinh)
{
    HoTen = ten;
    NgaySinh = ngaysinh;
    LuongCoBan = 200000;
}

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
    cout << "\nDay la class cha";
	cout << "\nHo ten: " << HoTen;
	cout << "\nNgay sinh: " << NgaySinh;
	cout << "\nLuong co ban: " << LuongCoBan << endl;
}

void NhanVien::Show()
{
    switch (check)
    {
        case NhanVien::QL:
            ((NVQuanLy *)this)->Xuat();
            break;
        case NhanVien::SX:

        case NhanVien::VP:
    }
}

NhanVien::NhanVien()
{
	LuongCoBan = 200000;
}

NhanVien::~NhanVien()
{
}
