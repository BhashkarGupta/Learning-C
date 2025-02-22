// Write a program to check whether a given number is positive, negative or zero. 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a Number: ");
    scanf("%d", &userInput);
    if(userInput > 0)
    {
        printf("The given number %d is positive number\n", userInput);
    }
    else if (userInput < 0)
    {
        printf("The given number %d is negetive number\n", userInput);
    }
    else 
    {
        printf("The given number %d is zero\n", userInput);
    }
    return 0;
}