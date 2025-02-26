// Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
    int userInput, counter = 1, sum = 0;
    printf("Please enter the number N to print the sum of cubes of first N natural number: ");
    scanf("%d", &userInput);
    while(counter <= userInput){
        sum += counter * counter * counter;
        counter++;
    }
    printf("The sum is: %d", sum);
    return 0;
}