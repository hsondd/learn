//
// Created by sondh on 09/04/2020.
//

#include "NVQuanLy.h"

NVQuanLy::NVQuanLy(string ten, string ngaysinh, float heso, float thuong) : NhanVien(ten, ngaysinh)
{
    HeSo = heso;
    Thuong = thuong;
    check = QL;
}

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
    cout << "Day la class nvquanly";
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