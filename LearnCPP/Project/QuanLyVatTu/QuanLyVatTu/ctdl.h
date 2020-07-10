#ifndef CTDL_H
#define CTDL_H

#endif // CTDL_H
#include <iostream>
#include <string>

using namespace std;

struct vat_tu
{
   string ma_vt;
   string ten_vt;
   string don_vi_tinh;
   float so_luong_ton;
};

typedef struct vat_tu VAT_TU;

struct ds_vat_tu
{
    VAT_TU *ds[100];
    int s1 = 0;
};
typedef struct ds_vat_tu DS_VAT_TU;

//ds hoa don
struct hoa_don
{
    string so_hd;
    string ngay_lap_hd;
    char loai;
    hoa_don *pnext;
};
typedef struct hoa_don HOA_DON;
struct ds_hoadon
{
    HOA_DON *phead = NULL;
    int s1 = 0;
};
typedef ds_hoa_don DS_HOA_DON;

//ds nhan vien
struct nhan_vien
{
    string ma_nv;
    string ho;
    string ten;
    string ten;
    string phai;
    DS_HOA_DON danh_sach_hd;
    nhan_vien *pleft;
    nhan_vien *pright;
};
typedef struct nhan_vien *tree;

struct ds_nhan_vien
{
    tree ds = NULL;
    int sl = 0;

};
typedef struct ds_nhan_vien DS_NV;

