#include <stdio.h>

#define MAX 100

int nhapMang(int a[], int n){

    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("a[%d]=", i);
        scanf("%d",&a[i]);
    }
}

int xuatMang(int a[],int n){
    for(int i=0;i<n;i++){
      printf("a[%d] = %d\t",i,a[i]);
    }
}

void doiCho(int a, int b){
    int tg = a;
    a = b;
    b = tg;
}

int sapXep(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                doiCho(a[i],a[j]);
            }              
        }
    }
}

int binarySearch(int a[], int l, int r, int x){
    int mid = (r+l)/2;
    if(mid==x) return mid;
    if(mid<x) return binarySearch(a,mid+1,r,x);
    if(mid>x) return binarySearch(a,l,mid-1,x);
    return -1;
}

int main(){
    int a[MAX];
    int x;
    int n;
    // int n = sizeof(a)/sizeof(a[0]);
    nhapMang(a,n);
    // xuatMang(a,n);
    sapXep(a,n);
    xuatMang(a,n);
    printf("Mang da sap xep la:");
    xuatMang(a,n);
    printf("nhap phan tu tim kiem: ");
    scanf("%d",&x);
    int result = binarySearch(a,0,n-1,x);
    if(result==-1) printf("Ko tim thay!");
    else printf("%d xuat hien tai chi so %d",x,result);
}