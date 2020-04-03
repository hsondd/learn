//
// Created by sondh on 18/03/2020.
//

#ifndef INC_12_CHIAFILE_HOCSINH_H
#define INC_12_CHIAFILE_HOCSINH_H
#include <iostream>
#include <string>
using namespace std;

#pragma once

class HocSinh{
private:
    string HoTen, DiaChi;
    float DiemToan, DiemVan;
public:
    void Xuat();
    void Nhap();
    HocSinh();
    ~HocSinh();
};

#endif //INC_12_CHIAFILE_HOCSINH_H

