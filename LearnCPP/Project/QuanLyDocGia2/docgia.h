#ifndef DOCGIA_H
#define DOCGIA_H
#include <string>
#include <iostream>

using namespace std;

class DocGia
{
protected:
    string hoten;
    string ngaylapthe;
    int sothanghieuluc;
public:
    virtual void Input();
    virtual void Output();
    virtual int TinhTien() = 0;
    DocGia();
    ~DocGia();
};

#endif // DOCGIA_H
