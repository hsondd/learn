//
// Created by sondh on 09/04/2020.
//
#include <NhanVien.h>

#ifndef LUONGNHANVIEN_NVQUANLY_H
#define LUONGNHANVIEN_NVQUANLY_H


class NVQuanLy : public NhanVien
{
    float HeSo, Thuong;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVQuanLy();
    ~NVQuanLy();
};


#endif //LUONGNHANVIEN_NVQUANLY_H
