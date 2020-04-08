//
// Created by sondh on 18/03/2020.
//

#include "HocSinh.h"

void HocSinh::Nhap() {
    fflush(stdin);
    cout << "NHap ten hojc sinh: ";
    getline(cin, HoTen);
    fflush(stdin);
    cout << "Nhap dia chi: ";
    getline(cin, DiaChi);
    cout << "Nhap diem toan: ";
    cin >> DiemToan;
    cout << "Nhap diem van: ";
    cin >> DiemVan;
}

void HocSinh::Xuat() {
    cout << "Ho ten: " << HoTen;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nDiem toan: " << DiemToan;
    cout << "\nDiem van: " << DiemVan;
}

HocSinh::HocSinh() {

}

HocSinh::~HocSinh() {

}
