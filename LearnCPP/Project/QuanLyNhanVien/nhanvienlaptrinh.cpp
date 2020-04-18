#include "nhanvienlaptrinh.h"

void NhanVienLapTrinh::Doc_File(ifstream &filein)
{
    NhanVien::Doc_File(filein);
    getline >> tienLamNgoaiGio;
}

NhanVienLapTrinh::NhanVienLapTrinh()
{
}
