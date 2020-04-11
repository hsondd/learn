#include "NVVanPhong.h"

NVVanPhong::NVVanPhong(string hoten, string ngaysinh, int songaylam, float trocap) : NhanVien(hoten, ngaysinh)
{
    SoNgayLamViec = songaylam;
    TroCap = trocap;

}

void NVVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "Tro cap: ";
	cin >> TroCap;
}

void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << SoNgayLamViec;
	cout << "\nTro cap: " << (size_t)TroCap << endl;
}

float NVVanPhong::TinhLuong() {
    Luong = LuongCoBan + TroCap + SoNgayLamViec * 100000;
    return Luong;
}

NVVanPhong::NVVanPhong(){}

NVVanPhong::~NVVanPhong(){}
