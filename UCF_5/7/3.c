// Write a program to check whether a given number is an even number or an odd number
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    printf((userInput % 2) == 0 ? "Even Number\n" : "Odd Number\n");
    return 0;
}