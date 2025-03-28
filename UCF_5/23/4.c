// Write a function to find the next prime number of a given number.
#include<stdio.h>

int NextPrime(int num){
    num++;
    int temp = 2;
    while(1){
        while(num%temp != 0){
            temp++;
        }
        if(temp == num){
            return num;
        }else{
            num++;
        }
    }
}

int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    printf("Next prime number to %d is %d", userInput, NextPrime(userInput));
    return 0;
}