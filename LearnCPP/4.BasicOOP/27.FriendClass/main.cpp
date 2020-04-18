#include <iostream>

using namespace std;

//class HinhChuNhat
//{
//private:
//    float a, b;
//public:
//    HinhChuNhat();
//    HinhChuNhat(float a, float b)
//    {
//        this->a = a;
//        this->b = b;
//    }
//    friend float DienTich(HinhChuNhat);
//};
//
//float DienTich(HinhChuNhat H)
//{
//    return H.a * H.b;
//}
//int main() {
//    HinhChuNhat H(4,5);
//    cout << "Dien tich la:" << DienTich(H);
//    return 0;
//}
//forwarding declare: Khai bao truoc dung sau
class ConHeo;
class ConGa;


class ConGa
{
    int khoiluong;
    friend void LamThit(ConGa, ConHeo);

public:
    ConGa();
    ConGa(int a){
        khoiluong = a;
    }
};

class ConHeo
{
    int khoiluong;
    friend void LamThit(ConGa, ConHeo);

public:
    ConHeo();
    ConHeo(int a)
    {
        khoiluong = a;
    }
};

void LamThit(ConGa ga, ConHeo heo)
{
    if(ga.khoiluong > heo.khoiluong)
    {
        cout << "Thit con ga";
    } else{
        cout  << "Thit con Heo";
    }
}

int main (void)
{
    ConGa ga(2);
    ConHeo heo(90);
    LamThit(ga, heo);
}