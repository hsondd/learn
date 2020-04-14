#ifndef THUVIEN_H
#define THUVIEN_H

#include "docgianguoilon.h"
#include "docgiatreem.h"
#include <vector>


class ThuVien
{
    vector<DocGiaTreEm> ds_docgiatreem;
    vector<DocGiaNguoiLon> ds_docgianguoilon;

public:
    void Input();
    void Output();
    int Tinh_Tong_Tien_Lam_The();
    ThuVien();
};

#endif // THUVIEN_H
