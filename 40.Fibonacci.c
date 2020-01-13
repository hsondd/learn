#include <stdio.h>

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
} //de quy

int fibokodequy(int n){
    if(n==1 || n == 2){
        return 1;
    }
    int i = 3, a;
    while(i <= n){
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}

int main(){
    int n;
    printf("Nhap vao n: ");
    scanf("%d",&n);
    printf("so fibonacci thu %d la: %d",n,fibonacci(n));
}