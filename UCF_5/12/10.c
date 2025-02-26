// Write a program to print a table of N.
#include<stdio.h>
int main(){
    int userInput, counter = 1;
    printf("Please enter the number to print its table: ");
    scanf("%d", &userInput);
    while(counter <= 10){
        printf("%d\n", userInput * counter);
        counter++;
    }
    return 0;
}