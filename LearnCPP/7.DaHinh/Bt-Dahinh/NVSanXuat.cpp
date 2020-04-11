#include "NVSanXuat.h"

NVSanXuat::NVSanXuat(string hoten, string ngaysinh, int sosp) : NhanVien(hoten, ngaysinh)
{
    SoSanPham = sosp;
    check = SX;
}

void NVSanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "So san pham: ";
	cin >> SoSanPham;
}

void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "\nSo san pham: " << SoSanPham << endl;
}

float NVSanXuat::TinhLuong() {
    Luong = SoSanPham * 2000 + LuongCoBan;
    return Luong;
}
NVSanXuat::NVSanXuat()
{

}

NVSanXuat::~NVSanXuat()
{

}