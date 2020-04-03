#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX_NAME 25
#define MAX_ADDR 128

struct sinh_vien{
    char ten[MAX_NAME];
    char diachi[MAX_ADDR];
    float diem;
};
 
typedef sinh_vien SV;

void nhap(SV *pSinhvien, int n);
void xuat(SV sinhvien);
void timKiem(SV *pSinhvien, int n);

 
int main(){
    int n;

    do{
        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);
    } while(n <= 0);
    SV pSinhvien[n];
    // pSinhvien = (SV)malloc(n*sizeof(SV));
    // if(pSinhvien == NULL)
    // {
    //     printf("\nLoi cap phat bo nho");
    //     return 0;
    // }
    // memset(pSinhvien, NULL, n*sizeof(SV));

    nhap(pSinhvien, n);
    printf("Nhap danh sach thanh cong.");
    timKiem(pSinhvien,n);
    
}
void _flush(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
 
void nhap(SV *pSinhvien, int n){
    _flush();
    printf("---------------Nhap thong tin SV");
    for(int i = 0; i< n; i++){
        printf("\n------Sinh vien %d", i+1);
        printf("\nNhap ten: "); 
        fflush(stdin);
        fgets(pSinhvien[i].ten, MAX_NAME, stdin);
        fflush(stdin);
        printf("Nhap dia chi: "); fgets(pSinhvien[i].diachi, MAX_ADDR, stdin);
        printf("Nhap diem: "); scanf("%f", &pSinhvien[i].diem);
        _flush();
    }
} 
void xuat(SV sinhvien){
        printf("\tHo ten SV: %s", sinhvien.ten);
        printf("\tDia chi: %s", sinhvien.diachi);
        printf("\tDiem: %.2f\n", sinhvien.diem);
}

void timKiem(SV *pSinhvien, int n){
    char ten[MAX_NAME];
    int flag = 0;

    printf("\nNhap ten sinh vien tim kiem: ");
    fgets(ten, MAX_NAME, stdin);
    for(int i = 0; i<n; i++){
        if (strcmp(ten, pSinhvien[i].ten) == 0){
            flag = i;
        }
    }
    if(flag == 0){
        printf("Khong tim thay sinh vien.");
    } else{
        printf("Thong tin cua sinh vien: %s",ten);
        xuat(pSinhvien[flag]);
    }
}

 
