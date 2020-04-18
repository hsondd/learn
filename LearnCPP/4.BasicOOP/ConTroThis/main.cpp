#include <iostream>
using namespace std;

class PhanSo{
private:
    int TuSo, MauSo;
public:
    PhanSo RutGon();
    void Nhap();
    void Xuat();
};

void PhanSo::Nhap() {
    cout << "Nhap tu:"; cin >> this->TuSo;
    cout << "Nhap mau:"; cin >> this->MauSo;
}

void PhanSo::Xuat(){
    cout << this->TuSo << "/" << this->MauSo;
}

PhanSo PhanSo::RutGon(){
    int a, b;
    a = abs(TuSo);
    b = abs(MauSo);
    while(a != b){
        if(a > b){
             a -= b;
        }
        else b -= a;
    }
    this->TuSo /= a;
    this->MauSo /= a;
    return *this;
}

int main()
{
    PhanSo ps;
    ps.Nhap();
    ps.RutGon();
    ps.Xuat();

    return 0;
}