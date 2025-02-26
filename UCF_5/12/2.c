// Write a program to print the first N natural numbers.
#include<stdio.h>
int main(){
    int userInput, counter = 1;
    printf("Please enter the number to print the natural number: ");
    scanf("%d", &userInput);
    while(counter <= userInput)
    {
        printf("%d\n", counter);
        counter ++;
    }
    return 0;
}