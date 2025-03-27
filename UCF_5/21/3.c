// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.
#include<stdio.h>

int EvenOrOdd(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("Please enter a number to find if the number is even or odd:");
    scanf("%d", &num);
    printf(EvenOrOdd(num) ? "The given number is even number\n" : "The given number is odd number.\n");
    return 0;
}