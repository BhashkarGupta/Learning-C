// Write a recursive function to print octal of a given decimal number
#include<stdio.h>

void DecimalToOctal(int num){
    if(num > 0){
        DecimalToOctal(num/8);
        printf("%d ", num%8);
    }
}

int main(){
    DecimalToOctal(440);
    printf("\n");
    return 0;
}
