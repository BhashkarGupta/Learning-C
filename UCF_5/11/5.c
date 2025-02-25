// Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int userInput, counter;
    printf("Please enter the number of odd numbers to print(in reverse order): ");
    scanf("%d", &userInput);
    counter = (userInput * 2) - 1;
    while(userInput > 0){
        if(counter % 2 != 0){
            printf("%d\n", counter);
            userInput--;
        }
        counter--;
    }
    return 0;
}