//
// Created by sondh on 03/04/2020.
//

#ifndef INC_24_BAITAPPHANSO_PHANSO_H
#define INC_24_BAITAPPHANSO_PHANSO_H
#include <iostream>

using namespace std;

class PhanSo {
private:
    int TuSo;
    int MauSo;
public:
    PhanSo Cong(PhanSo);
    PhanSo Tru(PhanSo);
    PhanSo Nhan(PhanSo);

    void Nhap();
    void Xuat();
    PhanSo(void);
    ~PhanSo(void);
};


#endif //INC_24_BAITAPPHANSO_PHANSO_H
