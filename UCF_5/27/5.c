// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>

int DigitSum(int num){
    if(num/10==0)
    return num;
    return num%10 + DigitSum(num/10);
}

int main(){
    printf("%d\n", DigitSum(35221));
    return 0;
}
