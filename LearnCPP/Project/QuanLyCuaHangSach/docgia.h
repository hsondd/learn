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
    int sothangcohieuluc;
public:
    void Input();
    void Output();
    DocGia();
    ~DocGia();
};

#endif // DOCGIA_H
