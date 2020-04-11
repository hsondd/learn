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
        enum LOAI
        {
            QL,
            SX,
            VP
        };
        LOAI check;
        string GetName()
        {
            return  HoTen;
        }
		void Nhap();
		void Xuat();
		void Show();
		NhanVien(string, string);
		NhanVien();
		~NhanVien();		
};

#endif //N