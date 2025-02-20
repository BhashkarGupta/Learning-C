// Write a program to check wheather a given number is divisible by 5 or not
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    printf((userInput % 5) == 0 ? "Divisible by 5\n" : "Not divisible by 5\n");
    return 0;
}