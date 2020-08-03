#include "thuvien.h"

void ThuVien::Input()
{
    while(true)
    {
        int chon;
        cout << "\n\n\t\t====Thu vien X====";
        cout << "\n\t1. Doc gia tre em: ";
        cout << "\n\t2. Doc gia nguoi lon: ";
        cout << "\n\t0. Thoat";

        cout << "\nNhap lua chon: ";
        cin >> chon;

        DocGia *x;

        if (chon == 1)
        {
            x = new DocGiaTreEm;\
            cout << "\n\n\t\t NHap thong tin doc gia\n";
            x->Input();
            ds_docgia.push_back(x);
        }
        else if (chon == 2)
        {
            x = new DocGiaNguoiLon;\
            cout << "\n\n\t\t NHap thong tin doc gia\n";
            x->Input();
            ds_docgia.push_back(x);
        }
        else if (chon == 0)
        {
            break;
        }
        else
        {
            cout << "\nChon khong hop le\n";
        }
        cout << "\n\n\t\t=======END=======\b";
    }
}

void ThuVien::Output()
{
    for (int i = 0; i < ds_docgia.size(); i++)
    {
        cout << "\n\n\t\tThong tin doc gia thu: " << i + 1;
        ds_docgia[i]->Output();
    }
}

int ThuVien::Tinh_Tong()
{
    int sum = 0;
    for (int i = 0; i < ds_docgia.size(); i++)
    {
        sum = sum + ds_docgia[i]->TinhTien();
    }
    return sum;
}

ThuVien::ThuVien()
{
}
