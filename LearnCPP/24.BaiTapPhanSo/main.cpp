#include <iostream>
#include "PhanSo.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    PhanSo ps1;
    PhanSo ps2;
    PhanSo psSum;

    ps1.Nhap();
    ps2.Nhap();
    psSum = ps1.Tru(ps2);
    psSum.Xuat();
//    system("pause");
    return 0;
}
