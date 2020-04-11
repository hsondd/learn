#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>

using namespace std;

class NhanVien
{
	protected:
		string HoTen, NgaySinh;
		float LuongCoBan, Luong;
	public:
//        enum LOAI
//        {
//            QL,
//            SX,
//            VP
//        };
//        LOAI check;
        string GetName()
        {
            return  HoTen;
        }
        virtual void Nhap();
        virtual void Xuat();
        virtual float TinhLuong() = 0;

		NhanVien(string, string);
		NhanVien();
		~NhanVien();		
};

#endif //N
