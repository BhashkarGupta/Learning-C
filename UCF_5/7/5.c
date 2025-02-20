// Write a program to check whether a given number is an even number or an odd number using bitwise operator.
#include<stdio.h>
int main(){
    int userInput, temp;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    temp = 2 & userInput;
    printf("%d\n", temp);
    if()
    {
        printf("Even Number\n");
    }else{
        printf("Odd Number\n");
    }
    return 0;
}