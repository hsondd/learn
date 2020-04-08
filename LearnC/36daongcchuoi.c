/*
In chuỗi đảo ngược của chuỗi nhập từ bàn phím sử dụng hàm đệ quy.
*/
#include <stdio.h>

void reverse(){
    char c;
    scanf("%c",&c);
    if(c != '\n'){
        reverse();
        printf("%c",c);
    }
}

int main(){
    printf("Enter your sentence: ");
    reverse();
}