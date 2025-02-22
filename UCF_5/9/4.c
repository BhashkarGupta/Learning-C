// Write a program to check Whether a given number is divisible by 3 and divisible by 2. 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a Number: ");
    scanf("%d", &userInput);
    if(userInput % 2 == 0 && userInput % 3 == 0)
    {
        printf("The given number %d is divisible by both 2 and 3\n", userInput);
    } 
    else 
    {
        printf("The given number %d is not divisible by both 2 and 3\n", userInput);
    }
    return 0;
}