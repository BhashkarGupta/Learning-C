// Write a function to check whether a given number is Prime or not.
#include<stdio.h>

int IfPrime(int num){
    int temp = 2;
    if(num == 1){
        return 1;
    }
    while(num%temp != 0){
        temp++;
    }
    if(temp == num){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int userInput;
    printf("Please enter a : ");
    scanf("%d", &userInput);
    if(IfPrime(userInput)){
        printf("The number %d is Prime number.\n", userInput);
    }else{
        printf("The number %d is not a Prime number.\n", userInput);
    }
    return 0;
}