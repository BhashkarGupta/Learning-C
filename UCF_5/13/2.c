// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){
    int userInput, counter = 1, sum = 0;
    printf("Please enter the number to print the sum of N even natural number: ");
    scanf("%d", &userInput);
    while(userInput > 0){
        if(counter % 2 == 0){
            sum += counter;
            userInput--;
        }
        counter++;
    }
    printf("The sum is: %d", sum);
    return 0;
}