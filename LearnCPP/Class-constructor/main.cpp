#include <iostream>
#include <string>

using namespace std;

class HocSinh{
    //Khai bao (cai dat) thuoc tinh
    //Khai bao (cai dat) phuong thuc
    //Khai bao thuoc tinh, giong khai bao bien
    //Khai bao phuong thuc giong khai bao ham
    //private:  chi su dung trong class do thoi
    //public: the gioi ben ngoai co the su dung
    //protected:
private:
    string HoTen;
    void xuat();
public:
    string DiaChi;
    void nhap();
    float tinhDiem();

};

int main()
{
    HocSinh HS;//cach khoi tao doi tuong tu class
    HS.DiaChi = "Ha Noi";
    HS.nhap();//Cach truy cap den thanh phan cua class

    return 0;
}