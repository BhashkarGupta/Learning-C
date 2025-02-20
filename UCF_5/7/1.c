// Write a program to check whether a given number is positive or non positive
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    printf(userInput > 0 ? "Positive\n" : "Non-positive\n");
    return 0;
}