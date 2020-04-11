//
// Created by sondh on 09/04/2020.
//

#ifndef LUONGNHANVIEN_QUANLY_H
#define LUONGNHANVIEN_QUANLY_H

#include "NhanVien.h"
#include "NVQuanLy.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
#include <vector>

class QuanLy {
    vector<NVQuanLy> NhanVienQuanLy;
    vector<NVSanXuat> NhanVienSanXuat;
    vector<NVVanPhong> NhanVienVanPhong;
    vector<NhanVien *> DSNhanVien;
public:
    void Nhap();
    void Xuat();
    float TinhTongLuong();
    void TimKiemNV(string);
    QuanLy();
    ~QuanLy();
};


#endif //LUONGNHANVIEN_QUANLY_H
