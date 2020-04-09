#include <iostream>

using namespace std;

class Hinh
{
public:
	void setChieuRong (int rong)
	{
		chieurong = rong;
	}
	void setChieuCao (int cao)
	{
		chieucao = cao;
	}
protected:
	int chieurong;
	int chieucao;
};

class ChiPhiSonMau
{
public:
	int tinhChiPhi (int dientich)
	{
		return dientich * 300000;
	}
};

class HinhChuNhat : public Hinh, public ChiPhiSonMau
{
public:
	int tinhDienTich()
	{
		return chieucao * chieurong;
	}
};

int main (void)
{
	HinhChuNhat hcn;
	int dientich;

	hcn.setChieuCao(30);
	hcn.setChieuRong(14);

	dientich = hcn.tinhDienTich();

	cout << "Tong dien tich la: " << hcn.tinhDienTich() << "m2" << endl;
	cout << "Tong chi phi son mau la: " << hcn.tinhChiPhi(dientich) << endl;

	return 0;
}