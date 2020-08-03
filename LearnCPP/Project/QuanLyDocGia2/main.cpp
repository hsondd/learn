#include <thuvien.h>

using namespace std;

int main()
{
    ThuVien *x = new ThuVien;
    x->Input();
    x->Output();
    cout << "Tong tien lam the: " << x->Tinh_Tong();

    delete x;
    return 0;
}
