#include "NhanVien.h"
#include "NVQuanLy.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include <vector>


int main() {
//	NhanVien *nv;
//	NVQuanLy QL("Doan Hong Son", "10/10/97", 2, 200000);
//	nv = &QL;
//    ((NVQuanLy*)nv)->Xuat();

    vector<NhanVien *> nv;
    NVQuanLy QL("Quan Ly 1", "31/1/2016", 2, 2);
    NVSanXuat SX("San xuat 1", "10/2/2016", 100);
    NVVanPhong VP("Van phon", "12/07/2000", 5 , 4);

    NhanVien *temp;
    temp = new NVQuanLy("Quan Ly 1:", "31/1/2016", 2 , 2);
    temp = new NVSanXuat("San xuat 1", "10/2/2016", 100);
    nv.push_back(temp);
    ((NVSanXuat*)nv[1])->Xuat();



//    ((NVQuanLy*)nv[0])->Xuat();
//    nv.push_back(QL);
	
	return 0;
}
