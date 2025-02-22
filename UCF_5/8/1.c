// Write a program to check whether a given number is a three e digit number or not 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a number:");
    scanf("%d", &userInput);
    if ((userInput - 99) > 0) {
        if ((userInput - 999) <= 0) {
            printf("Its 3 digit number.\n");
        }
        else{
            printf("Its not 3 digit number.\n");
        }
    }
    else{
        printf("Its not 3 digit number.\n");
    }
    return 0;
}