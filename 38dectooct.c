#include <stdio.h>
#include <math.h>

int dectooct(int decNum){
    int count;
    int octNum;
    // printf("Nhap dec Num: ");
    // scanf("%d",&decNum);
    while(decNum>0){
        octNum += (decNum%8) * pow(10,count);
        count++;
        decNum /= 8;
    }
    return octNum;
}

int main(){
    int decNum;
    printf("Nhap dec Num: ");
    scanf("%d",&decNum);
    printf("%d dec-> oct: %d\n",decNum,dectooct(decNum));
}