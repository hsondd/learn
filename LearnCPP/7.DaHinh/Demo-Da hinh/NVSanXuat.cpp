#include "NVSanXuat.h"

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