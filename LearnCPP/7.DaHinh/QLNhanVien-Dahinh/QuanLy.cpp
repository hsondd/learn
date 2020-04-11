//
// Created by sondh on 09/04/2020.
//

#include "QuanLy.h"

void QuanLy::Nhap()
{
    int LuaChon;
    do{
        cout << "\n------Menu-------";
        cout << "\n 1.Nhap nhan vien van phong";
        cout << "\n 2.Nhap nhan vien san xuat";
        cout << "\n 3.Nhap nhan vien quan ly";
        cout << "\n 4.Thoat";
        do {
            cout << "\nNhap lua chon cua ban: ";
            cin >> LuaChon;
            if (LuaChon < 1 || LuaChon > 4)
                cout << "\n Nhap sai";
        } while (LuaChon < 1 || LuaChon > 4);
        NhanVien *temp;
        if (LuaChon == 1)
        {
            cout << "\nBan dang nhap nhan vien van phong: ";
            temp = new NVVanPhong;

        }
        else if (LuaChon == 2)
        {
            cout << "\nBan dang nhap nhan vien san xuat: ";
            temp = new NVSanXuat;

        }
        else if (LuaChon == 3)
        {
            cout << "Ban dang nhap nhan vien quan ly: ";
            temp = new NVQuanLy;

        }
        if(LuaChon != 4)
        {
            temp->Nhap();
            DSNhanVien.push_back(temp);
        }
    } while (LuaChon != 4);
}

void QuanLy::Xuat() {
   for (int i = 0; i < DSNhanVien.size(); i++)
   {
       DSNhanVien[i]->Xuat();
   }
}

float QuanLy::TinhTongLuong() {
    float Tong = 0;
    for(int i = 0; i < DSNhanVien.size(); i++){
        Tong += DSNhanVien[i]->TinhLuong();
    }

    return Tong;
}

void QuanLy::TimKiemNV(string name)
{
    bool Check = false;
    cout << "\n-----------------Ket qua tim kiem;";
    for(int i = 0; i < DSNhanVien.size(); i++)
    {
        if (DSNhanVien[i]->GetName() == name)
        {
            Check = true;
            DSNhanVien[i]->Xuat();

        }
    }
    if(!Check)
            cout << "\nKo tim thay nhan vien ten la: " << name << endl;
}

QuanLy::QuanLy() {}

QuanLy::~QuanLy() {}

