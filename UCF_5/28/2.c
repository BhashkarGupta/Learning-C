// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>

int

int HCF(int num1, int num2){
    if(a>b){
        if(a%b==0){
            return b;
        }else{
            return HCF(a%b, b);
        }
    }else{
        if(b%a==0){
            return a;
        }else{
           return HCF(a, b%a);
        }
    }
}

int main(){
    printf("\n");
    return 0;
}
