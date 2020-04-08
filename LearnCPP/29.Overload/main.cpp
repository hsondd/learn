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
    PhanSo operator+();//-Phan so
};



int main() {
    PhanSo A(1,2);
    A.SetMau(5);
    A.SetTu(5);
    cout << A.LayTu() << endl;
    cout << A.LayMau() << endl;
//    -A;
//    A.Xuat();

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
