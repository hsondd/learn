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
		void Nhap();
		void Xuat();
		NhanVien();
		~NhanVien();		
};

#endif //N