//
// Created by sondh on 03/04/2020.
//

#include "PhanSo.h"
PhanSo PhanSo::Cong(PhanSo ps) {
    PhanSo KQ;
    KQ.TuSo = TuSo*ps.MauSo + ps.TuSo*MauSo;
    KQ.MauSo = MauSo * ps.MauSo;
    return KQ;
}

PhanSo PhanSo::Tru(PhanSo ps) {
    PhanSo KQ;
    KQ.TuSo = this->TuSo*ps.MauSo - ps.TuSo*MauSo;
    KQ.MauSo = this->MauSo * ps.MauSo;
    return  KQ;
}

PhanSo PhanSo::Nhan(PhanSo ps) {
    PhanSo KQ;
    KQ.TuSo = TuSo*ps.TuSo;
    KQ.MauSo = MauSo*ps.MauSo;

    return KQ;


}
void PhanSo::Nhap() {
    cout << "\nNhap tu so:";
    cin >> TuSo;
    cout << "\nNhap mau so:";
    cin >> MauSo;
}

void PhanSo::Xuat() {
    cout << TuSo << "/" << MauSo;
}


PhanSo::PhanSo(){}
PhanSo::~PhanSo(){}