#include <stdio.h>

int nhapMang(int a[], int n){
    for(int i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}

int xuatMang(int a[], int n){
    for(int i =0;i<n;i++){
        printf("a[%d] = %d\t",i,a[i]);
    }
}

int search(int a[], int n, int s){
    for (int i =0;i<n;i++){
        if(a[i]==s) return i;
    }
    return 0;
}

int main(){
    int n, s = 0;
    int a[10];
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\nNhap phan tu tim kiem: ");
    scanf("%d",&s);
    if(search(a,n,s)) printf("Phan tu %d o vi tri %d cua mang\n",s,search(a,n,s));
    else printf("ko tim thay");
}