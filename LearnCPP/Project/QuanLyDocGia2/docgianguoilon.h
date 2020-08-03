#ifndef DOCGIANGUOILON_H
#define DOCGIANGUOILON_H
#include "docgia.h"

class DocGiaNguoiLon : public DocGia
{
    string CMND;
public:
    void Input();
    void Output();
    int TinhTien();
    DocGiaNguoiLon();
};

#endif // DOCGIANGUOILON_H
