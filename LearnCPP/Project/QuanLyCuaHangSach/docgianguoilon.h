#ifndef DOCGIANGUOILON_H
#define DOCGIANGUOILON_H

#include <string>
#include <iostream>
#include "docgia.h"

using namespace std;

class DocGiaNguoiLon : public DocGia
{
    string CMND;
public:
    void Input();
    void Output();
    int Tinh_Tien_Lam_The();

    DocGiaNguoiLon();
};

#endif // DOCGIANGUOILON_H
