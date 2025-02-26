// Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main(){
    int userInput, counter = 1, sum = 0;
    printf("Please enter the number N to print the sum of squares of N natural number: ");
    scanf("%d", &userInput);
    while(counter <= userInput){
        sum = sum +  (counter * counter);
        counter++;
    }
    printf("The sum is: %d", sum);
    return 0;
}