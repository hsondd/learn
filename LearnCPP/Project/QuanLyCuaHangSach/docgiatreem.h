#ifndef DOCGIATREEM_H
#define DOCGIATREEM_H

#include <string>
#include <iostream>
#include "docgia.h"

using namespace std;

class DocGiaTreEm : public DocGia
{
    string hotenNDD;
public:
    void Input();
    void Output();
    int Tinh_Tien_Lam_The();
    DocGiaTreEm();
};

#endif // DOCGIATREEM_H
