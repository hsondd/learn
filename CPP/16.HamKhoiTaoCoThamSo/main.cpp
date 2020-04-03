#include <iostream>

using namespace std;

class PhanSo
{
private:
    int tuSo, mauSo;
public:
//    PhanSo(){
//        tuSo = 0;
//        mauSo = 1;
//    }
  PhanSo(int tu, int mau)
  {
        tuSo = tu;
        mauSo = mau;
  }
  PhanSo(int tu)
  {
    tuSo = tu;
    mauSo = 1;
  }
};

int main() {

    PhanSo ps(1,2);
    PhanSo ps2 = PhanSo(2,5);
    PhanSo ps3(10);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
