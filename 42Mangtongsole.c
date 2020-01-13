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

int sumOdd(int a[], int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        if(a[i]%2!=0){
            sum += a[i];
        }
    }
    return sum;
}

int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\nTong so le la: %d",sumOdd(a,n));
}