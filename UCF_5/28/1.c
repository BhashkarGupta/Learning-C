// Write a recursive function to calculate factorial of a given number
#include<stdio.h>

int Factorial(int num){
    if(num==0){
        return 1;
    }
    return num * Factorial(num-1);
}

int main(){
    printf("%d\n", Factorial(5));
    return 0;
}
