#include "QuanLy.h"

int main() {

    QuanLy quanLy;
    quanLy.Nhap();
    quanLy.Xuat();
    cout << "Tong luong la:" << quanLy.TinhTongLuong() << endl;

    quanLy.TimKiemNV("doan hong son");
	return 0;
}
