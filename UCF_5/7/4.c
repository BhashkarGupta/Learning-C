// Write a program to check whether a given number is an even number or an odd number without using % operator
#include<stdio.h>
int main(){
    int userInput, temp;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    temp = userInput / 2;
    if((2 * temp) == userInput)
    {
        printf("Even Number\n");
    }else{
        printf("Odd Number\n");
    }
    return 0;
}