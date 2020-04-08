#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int count(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

bool isAmstrong(int n){
    int numDigit = count(n);
    int tmp = n, sum = 0, last;
    while(tmp>0){
        last = tmp%10;
        tmp /= 10;
        sum += pow(last, numDigit);
    }
    if(sum == n) return true;
    else return false;
}

int main(){
    int n = 0;
    scanf("%d",&n);
    if(isAmstrong(n)==true) printf("is amstrong");
    else printf("not amstrong");
    return 0;
}
