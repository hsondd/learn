#include <iostream>

using namespace std;


class PhanSo {
private:
    int tuSo, mauSo;
    static int dem;
public:
    PhanSo(){
        tuSo = 0;
        mauSo = 1;
    }
    PhanSo(int tu, int mau) {
        tuSo = tu;
        mauSo = mau;
        dem++;
    }
    void xemGiaTri(){
        cout << dem << endl;
    }

    ~PhanSo(){}
};

int PhanSo::dem;

int main() {

   PhanSo ps2(3,3), ps1(1,3);
   ps1.xemGiaTri();
   ps2.xemGiaTri();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}