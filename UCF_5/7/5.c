// Write a program to check whether a given number is an even number or an odd number using bitwise operator.
#include<stdio.h>
int main(){
    int userInput, temp;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    if (userInput & 1 == 1)
    {
        printf("Odd Number\n");
    }
    else
    {
        printf("Even Number\n");
    }
    
    return 0;
}