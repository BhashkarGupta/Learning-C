// Write a program to check whether a given number is divisible by 7 or divisible by 3. 
#include<stdio.h>
int main(){
    int userInput;
    printf("Please enter a Number: ");
    scanf("%d", &userInput);
    if(userInput % 7 == 0)
    {
        printf("The given number %d is divisible by 7\n", userInput);
    }
    else if (userInput % 3 == 0)
    {
        printf("The given number %d is divisible by 3\n", userInput);
    }
    else 
    {
        printf("The given number %d is not divisible by 7 or 3\n", userInput);
    }
    return 0;
}