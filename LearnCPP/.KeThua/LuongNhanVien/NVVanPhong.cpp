#include <NVVanPhong.h>

void NVVanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "\nSo ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "\nTro cap: ";
	cin << TroCap;
}

void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "\nSo ngay lam viec: " << SoNgayLamViec;
	cout << "\nTro cap: " << TroCap;
}

NVVanPhong::NVVanPhong(){}

NVVanPhong::~NVVanPhong(){}