// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter the number to print the natural number: ");
    scanf("%d", &userInput);
    while(userInput >= 1){
        printf("%d\n", userInput);
        userInput--;
    }
    return 0;
}