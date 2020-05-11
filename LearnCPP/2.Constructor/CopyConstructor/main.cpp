#include <iostream>
#include <string>

using namespace std;

class HocSinh{
private:
    int MSSV;
    string HoTen;
public:

    HocSinh(){}
    HocSinh(int ms, string ten)
    {
        MSSV = ms;
        HoTen = ten;
    }
    //phai truyen tham chieu
    //neu truyen tham tri => tao ra 1 vung copy
    HocSinh(const HocSinh &hs)
    {
        HoTen = hs.HoTen;
//        hs.HoTen = "changed";
    }
};
int main() {

    HocSinh hs1(2, "Son"), hs2;
    hs2 = HocSinh(hs1);
    return 0;
}
