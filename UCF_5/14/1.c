// Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
    int userInput, factorial = 1;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    if(userInput != 0)
    {
        for(int i = 1; i <= userInput; i++)
    {
        factorial  *= i;
    }
    }
    printf("Factorial of %d is %d", userInput, factorial);
    return 0;
}