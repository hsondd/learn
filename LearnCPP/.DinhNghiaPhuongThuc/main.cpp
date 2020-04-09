#include <iostream>
#include <string>

using namespace std;

class HocSinh{
private:
    string HoTen, DiaChi;
    float DiemToan, DiemVan;
    //Co 2 cach dinh nghia phuong thuc class
public:
    //Cach 1: Khai bao va dinh nghia trong class
    void Nhap(){
        fflush(stdin);
        cout << "NHap ten hojc sinh: ";
        getline(cin, HoTen);
        fflush(stdin);
        cout << "Nhap dia chi: ";
        getline(cin, DiaChi);
        cout << "Nhap diem toan: ";
        cin >> DiemToan;
        cout << "Nhap diem van: ";
        cin >> DiemVan;
    }
    void Xuat();
};

//Cach 2: Khai bao trong class va dinh nghia ben ngoai. Cu phap: KieuTraVe TenClass::TenPhuongThuc
void HocSinh::Xuat() {
    cout << "Ho ten: " << HoTen;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nDiem toan: " << DiemToan;
}

int main(){
    HocSinh HS;
    HS.Nhap();//Tinh dong goi
    HS.Xuat();

//    system("pause");
    return 0;

}