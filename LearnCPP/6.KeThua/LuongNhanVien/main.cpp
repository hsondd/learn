#include "QuanLy.h"

int main() {
	QuanLy quanly;

	cout << "Tong Luong = " << (size_t)quanly.TinhTongLuong();
	quanly.Nhap();
	quanly.Xuat();
	
	return 0;
}
