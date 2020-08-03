#ifndef DOCGIATREEM_H
#define DOCGIATREEM_H
#include <string>
#include <iostream>
#include "docgia.h"

using namespace std;

class DocGiaTreEm : public DocGia
{
    string hotennguoidaidien;
public:
    void Input();
    void Output();
    int TinhTien();
    DocGiaTreEm();
};

#endif // DOCGIATREEM_H
