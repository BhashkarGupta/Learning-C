// Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main(){
    int userInput, isPrime = 1;
    printf("Please enter a number: ");
    scanf("%d", &userInput);
    for(int i = 2; i < userInput; i++)
    {
        if(userInput % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    printf(isPrime ? "The number is a Prime number" : "The number is a composite number");
    return 0;
}