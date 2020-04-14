#include "thuvien.h"


void ThuVien::Input()
{
    while(true)
    {
        int luachon;
        cout << "\n\n\t\t====Thu vien X====";
        cout << "\n\t1. Doc gia tre em: ";
        cout << "\n\t2. Doc gia nguoi lon: ";
        cout << "\n\t0. Thoat";

        cout << "\nNhap lua chon: ";
        cin >> luachon;
        if (luachon == 1)
        {
            DocGiaTreEm x;
            cout << "\n\n\t\t Nhap thong tin doc gia\n";
            x.Input();
            ds_docgiatreem.push_back(x);

        }
        else if (luachon == 2)
        {
            DocGiaNguoiLon x;
            cout << "\n\n\t\t Nhap thong tin doc gia\n";
            x.Input();
            ds_docgianguoilon.push_back(x);
        }
        else if (luachon == 0)
        {
            break;
        }
        else
        {
            cout << "\n Nhap ko hop le\n";
        }
        cout << "\n\n\t\t========END========\n";
    }
}

void ThuVien::Output()
{
    for (int i = 0; i < ds_docgiatreem.size(); i++)
    {
        cout << "\n\n\t\tTHONG TIN DOC GIA TRE EM THU " << i + 1;
        ds_docgiatreem[i].Output();
    }

    for (int i = 0; i < ds_docgianguoilon.size(); i++)
    {
        cout << "\n\n\t\tTHONG TIN DOC GIA TRE EM THU " << i + 1;
        ds_docgianguoilon[i].Output();
    }
}

int ThuVien::Tinh_Tong_Tien_Lam_The()
{
    int sum = 0;
    for (int i = 0; i < ds_docgiatreem.size(); i++)
    {
//        cout << "\n\n\t\tTHONG TIN DOC GIA TRE EM THU " << i + 1;
        sum = sum + ds_docgiatreem[i].Tinh_Tien_Lam_The();
    }

    for (int i = 0; i < ds_docgianguoilon.size(); i++)
    {

        sum = sum + ds_docgianguoilon[i].Tinh_Tien_Lam_The();
    }
    return sum;
}

ThuVien::ThuVien()
{
}
