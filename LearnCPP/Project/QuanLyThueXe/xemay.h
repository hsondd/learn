#ifndef XEMAY_H
#define XEMAY_H
#include "xe.h"

class XEMAY : public XE
{
    int LoaiXe;
    string BienSo;
public:
    void NhapThongTin();
    void XuatThongTin();
    float TinhTienThueXe();
    int Getter_LoaiXe();
};

#endif // XEMAY_H
