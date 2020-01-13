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

int secondMax(int a[], int n){
    int firstmax, secondmax;
    if(a[0]>a[1]){
        firstmax = a[0];
        secondmax = a[1];
    } else{
        firstmax = a[1];
        secondmax = a[0];
    }
    for(int i =2; i<n; i++){
        if(a[i]>= firstmax){
            secondmax = firstmax;
            firstmax = a[i];
        } else if(a[i]> secondmax){
            a[i] = secondmax;
        }
    }
}

int main(){
    int n, s = 0;
    int a[10];
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\nSo lon thu 2 cua mang la: %d",secondMax(a,n));
}