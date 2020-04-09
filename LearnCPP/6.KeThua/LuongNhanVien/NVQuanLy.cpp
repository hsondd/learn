//
// Created by sondh on 09/04/2020.
//

#include "NVQuanLy.h"

void NVQuanLy::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap he so: ";
    cin >> HeSo;
    cout << "Tien thuong: ";
    cin >> Thuong;
}

void NVQuanLy::Xuat()
{
    NhanVien::Xuat();
    cout << "\nHe so luong: " << HeSo;
    cout << "\nTien thuong: " << Thuong << endl;
}

float NVQuanLy::TinhLuong()
{
    Luong = LuongCoBan * HeSo + Thuong;
    return Luong;
}

NVQuanLy::NVQuanLy()
{

}

NVQuanLy::~NVQuanLy() {}