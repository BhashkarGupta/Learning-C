// Write a recursive function to print binary of a given decimal number
#include<stdio.h>

void DecimalToBinary(int num){
    if(num > 0){
        DecimalToBinary(num/2);
        printf("%d ", num%2);
    }
}

int main(){
    DecimalToBinary(294);
    printf("\n");
    return 0;
}
