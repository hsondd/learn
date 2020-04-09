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
        if (LuaChon == 1)
        {
            NVVanPhong VP;
            VP.Nhap();
            NhanVienVanPhong.push_back(VP);
        }
        else if (LuaChon == 2)
        {
            NVSanXuat SX;
            SX.Nhap();
            NhanVienSanXuat.push_back(SX);
        }
        else if (LuaChon == 3)
        {
            NVQuanLy QL;
            QL.Nhap();
            NhanVienQuanLy.push_back(QL);
        }
    } while (LuaChon != 4);
}

void QuanLy::Xuat() {
    cout << "\n---Danh sach nhan vien quan ly:" << endl;
    for (int i = 0; i < NhanVienQuanLy.size(); i++)
    {
        NhanVienQuanLy[i].Xuat();
    }

    cout << "\n---Danh sach nhan vien san xuat:" << endl;
    for (int i = 0; i < NhanVienSanXuat.size(); i++)
    {
        NhanVienSanXuat[i].Xuat();
    }

    cout << "\n---Danh sach nhan vien van phong:" << endl;
    for (int i = 0; i < NhanVienVanPhong.size(); i++)
    {
        NhanVienVanPhong[i].Xuat();
    }
}

float QuanLy::TinhTongLuong() {
    float Tong = 0;
    for (int i = 0; i < NhanVienQuanLy.size(); i++)
    {
        Tong += NhanVienQuanLy[i].TinhLuong();
    }
    for (int i = 0; i < NhanVienSanXuat.size(); i++)
    {
        Tong += NhanVienSanXuat[i].TinhLuong();
    }

    for (int i = 0; i < NhanVienVanPhong.size(); i++)
    {
        Tong += NhanVienVanPhong[i].TinhLuong();
    }

}

QuanLy::QuanLy() {}

QuanLy::~QuanLy() {}

