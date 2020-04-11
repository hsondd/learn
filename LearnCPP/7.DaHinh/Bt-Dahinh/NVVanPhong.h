#include "NhanVien.h"

using namespace std;

class NVVanPhong : public NhanVien
{
private:
	int SoNgayLamViec;
	float TroCap;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVVanPhong(string, string, int, float);
	NVVanPhong();
	~NVVanPhong();
};
