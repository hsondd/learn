#include "NhanVien.h"

using namespace std;

class NVSanXuat : public NhanVien
{
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	NVSanXuat();
	~NVSanXuat();
};
