// Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main(){
    int userInput, sum = 0, counter = 1;
    printf("Please enter the number to print the sum of natural numbers: ");
    scanf("%d", &userInput);
    while(counter <= userInput)
    {
        sum += counter;
        counter ++;
    }
    printf("The sum of %d natural number is: %d", userInput, sum);
    return 0;
}