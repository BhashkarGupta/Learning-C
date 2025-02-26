// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main(){
    int userInput, counter = 1;
    printf("Please enter the number to print natural number squares: ");
    scanf("%d", &userInput);
    while(counter <= userInput){
        printf("%d\n", counter * counter);
        counter++;
    }
    return 0;
}