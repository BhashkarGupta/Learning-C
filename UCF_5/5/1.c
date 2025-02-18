// Write a program to input a three digit number and display the sum of the digits. 
#include<stdio.h>
int main(){
    int userInput, firstDigit, secondDigit, thirdDigit;
    printf("Please enter a 3 digit number: ");
    scanf("%d", &userInput);
    firstDigit = userInput / 100;
    secondDigit = (userInput / 10) % 10;
    thirdDigit = userInput % 10;
    printf("Sum of all the 3 digits is: %d\n", firstDigit + secondDigit + thirdDigit);
    return 0;
}