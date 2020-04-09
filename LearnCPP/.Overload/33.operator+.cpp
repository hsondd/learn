#include <iostream>
using namespace std;

//Cach 1: Member-func
class PhanSo
{
private:
    int Tu, Mau;
public:
    //getter
    int LayTu()
    {
        return Tu;
    }

    int LayMau()
    {
        return Mau;
    }
    //setter
    void SetTu(int a)
    {
        Tu = a;
    }
    void SetMau(int b)
    {
        Mau = b;
    }
    void Xuat() {
        cout << Tu << "/" << Mau;
    }
    PhanSo(){};
    PhanSo(int a, int b)
    {
        Tu = a;
        Mau = b;
    }
    PhanSo operator+(PhanSo);//-Phan so
    PhanSo operator+(int); //A + int
    friend PhanSo operator+(int, PhanSo);
};

// //non-mem func
// PhanSo operator+(int a, PhanSo ps)
// {
//     PhanSo temp;
//     temp.SetTu(a * ps.LayMau() + ps.LayTu());
//     temp.SetMau(ps.LayMau());
//     return temp;
// }

//ham ban
PhanSo operator+(int a, PhanSo ps)
{
    PhanSo temp;
    temp.Tu = a * ps.Mau + ps.Tu;
    temp.Mau = ps.Mau;
    return temp;
}

PhanSo PhanSo::operator+(PhanSo ps)
{
    PhanSo temp;
    temp.Tu = Tu * ps.Mau + ps.Tu * Mau;
    temp.Mau = Mau * ps.Mau;
    return temp;
}

PhanSo PhanSo::operator+(int a)
{
    PhanSo temp;
    temp.Tu = a*Mau + Tu;
    temp.Mau = Mau;
    
    return temp;
}


int main() {
    PhanSo A(1,2), B(3,5), C;
    C = 2 + A;
    C.Xuat();
 
    return 0;
}
