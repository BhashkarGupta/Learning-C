// Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main(){
    int userInput, counter = 1;
    printf("Please enter the number of odd numbers to print: ");
    scanf("%d", &userInput);
    while(userInput > 0){
        if(counter % 2 != 0){
            printf("%d\n", counter);
            userInput--;
        }
        counter++;
    }
    return 0;
}